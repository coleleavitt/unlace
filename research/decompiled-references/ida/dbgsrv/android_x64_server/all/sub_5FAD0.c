/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FAD0
// Address: 0x000000000005FAD0

//----- (000000000005FAD0) ----------------------------------------------------
__int64 __fastcall sub_5FAD0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  size_t v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  const void *v8; // r15
  __int64 v9; // r13
  int (__fastcall *v10)(const void *, const void *, size_t); // rbp
  __int64 v11; // r14

  v2 = a1[2];
  v3 = a1[6];
  v4 = v2 - 1;
  if ( !v2 )
    v4 = 0;
  v5 = v3 - 1;
  if ( !v3 )
    v5 = 0;
  v6 = a1[9];
  *(_QWORD *)(a2 + 8) = -1;
  if ( v5 - 1 < v4 )
  {
    v7 = v4 + 1 - v5;
    if ( v7 )
    {
      v8 = (const void *)a1[5];
      v9 = a1[1];
      if ( v6 )
        v10 = (int (__fastcall *)(const void *, const void *, size_t))memicmp;
      else
        v10 = (int (__fastcall *)(const void *, const void *, size_t))&memcmp;
      v11 = 0;
      while ( v10((const void *)(v11 + v9), v8, v5) )
      {
        if ( ++v11 >= v7 )
          return 0;
      }
      *(_QWORD *)(a2 + 8) = v11;
    }
  }
  return 0;
}
