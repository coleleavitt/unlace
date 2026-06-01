/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_86030
// Address: 0x0000000000086030

//----- (0000000000086030) ----------------------------------------------------
unsigned __int64 __fastcall sub_86030(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  const char *v10; // rbp
  char v11; // bl
  unsigned int v12; // r15d
  char *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r14
  char *v16; // rax

  result = a3;
  v6 = a4;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = 56 * v6;
  if ( *(_QWORD *)(v7 + v8 + 8) > result )
  {
    v9 = *(_QWORD *)(v7 + v8);
    result *= 3LL;
    v10 = *(_QWORD *)(v9 + 8 * result + 8) ? *(const char **)(v9 + 8 * result) : s1;
    v11 = *v10;
    if ( *v10 )
    {
      v12 = a4 - 1;
      v13 = (char *)(v10 + 1);
      do
      {
        if ( v11 < -1 )
        {
          result = sub_86030(a1, a2, (unsigned __int8)v11 ^ 0x80u, v12);
        }
        else
        {
          v14 = *(_QWORD *)(a2 + 8);
          v15 = v14 - 1;
          if ( !v14 )
            v15 = 0;
          v16 = *(char **)a2;
          if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v15 + 2) )
          {
            v16 = (char *)qvector_reserve(a2, *(char **)a2, v15 + 2, 1u);
            *(_QWORD *)a2 = v16;
          }
          *(_QWORD *)(a2 + 8) = v15 + 2;
          v16[v15] = v11;
          result = *(_QWORD *)a2;
          *(_BYTE *)(*(_QWORD *)a2 + v15 + 1) = 0;
        }
        v11 = *v13++;
      }
      while ( v11 );
    }
  }
  return result;
}
