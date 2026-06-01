/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92050
// Address: 0x0000000000092050

//----- (0000000000092050) ----------------------------------------------------
__int64 __fastcall sub_92050(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r14
  const void *v5; // r12
  char *v6; // rdi
  int v7; // eax

  if ( *(_BYTE *)(a2 + 29) )
  {
    if ( a1 && a2 != a1 )
    {
      v4 = *(_QWORD *)(a2 + 8);
      if ( v4 < 2 )
      {
        *(_QWORD *)(a1 + 8) = 0;
      }
      else
      {
        v5 = *(const void **)a2;
        if ( *(_QWORD *)(a1 + 16) >= v4 )
        {
          v6 = *(char **)a1;
        }
        else
        {
          v6 = (char *)qvector_reserve(a1, *(char **)a1, v4, 1u);
          *(_QWORD *)a1 = v6;
        }
        *(_QWORD *)(a1 + 8) = v4;
        memmove(v6, v5, v4 - 1);
        *(_BYTE *)(*(_QWORD *)a1 + v4 - 1) = 0;
      }
    }
    return 0;
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 24);
    if ( (unsigned int)(v7 - 10) >= 2 && v7 != 18 )
    {
      if ( !(_BYTE)under_debugger )
        interr(30222);
      BUG();
    }
    return sub_908B0(a1, a2, a3);
  }
}
// 158B40: using guessed type __int64 under_debugger;
