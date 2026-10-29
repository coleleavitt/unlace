/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001CA00
// Address: 0x000000014001CA00

//----- (000000014001CA00) ----------------------------------------------------
char __fastcall sub_14001CA00(__int64 a1, _DWORD *a2, unsigned int a3)
{
  bool v4; // zf
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  v4 = a2 == nullptr;
  v6 = a3;
  if ( v4 || *a2 != 3 )
  {
    v7 = *(_QWORD *)(a1 + 16) - 1LL;
    if ( v7 < 0 )
    {
LABEL_8:
      v6 = -1;
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 8) + 32 * v7;
      while ( *(_QWORD *)v8 > (unsigned __int64)a3 || *(_QWORD *)(v8 + 8) <= (unsigned __int64)a3 )
      {
        v8 -= 32;
        if ( --v7 < 0 )
          goto LABEL_8;
      }
      v6 = a3 + *(int *)(v8 + 16) - *(_QWORD *)v8;
    }
  }
  if ( v6 == -1 )
  {
    sub_140063BF0((__int64)a2, a3, 0);
    return 0;
  }
  else
  {
    sub_140063BF0((__int64)a2, v6, 0);
    return 1;
  }
}
