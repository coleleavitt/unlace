/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3150
// Address: 0x00000000000A3150

//----- (00000000000A3150) ----------------------------------------------------
__int64 __fastcall sub_A3150(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  char **v4; // rbp
  const void *v5; // r13
  char *v6; // rdi
  __int64 result; // rax

  *(_QWORD *)a2 = *(_QWORD *)(a1 + 240);
  if ( a1 + 240 != a2 )
  {
    v3 = *(_QWORD *)(a1 + 256);
    if ( v3 < 2 )
    {
      *(_QWORD *)(a2 + 16) = 0;
    }
    else
    {
      v4 = (char **)(a2 + 8);
      v5 = *(const void **)(a1 + 248);
      if ( *(_QWORD *)(a2 + 24) >= v3 )
      {
        v6 = *v4;
      }
      else
      {
        v6 = (char *)qvector_reserve(a2 + 8, *v4, *(_QWORD *)(a1 + 256), 1u);
        *v4 = v6;
      }
      *(_QWORD *)(a2 + 16) = v3;
      memmove(v6, v5, v3 - 1);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v3 - 1) = 0;
    }
  }
  result = *(unsigned int *)(a1 + 272);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
