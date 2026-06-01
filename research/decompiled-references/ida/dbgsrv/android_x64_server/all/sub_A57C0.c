/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A57C0
// Address: 0x00000000000A57C0

//----- (00000000000A57C0) ----------------------------------------------------
char *__fastcall sub_A57C0(__int64 a1, unsigned __int64 *a2)
{
  char *result; // rax
  __int64 i; // rbp
  __int64 v4; // r12
  char *v5; // rbx
  __int64 v6; // r12
  const char *v7; // r13
  size_t v9; // rcx
  unsigned __int64 v10; // rdx
  bool v11; // cf
  char *v12; // rax
  size_t v13; // rbx
  char *v14; // [rsp+8h] [rbp-50h]
  unsigned __int64 v15; // [rsp+10h] [rbp-48h]
  size_t v16; // [rsp+18h] [rbp-40h]
  __int64 v17; // [rsp+20h] [rbp-38h]

  result = (char *)unpack_dd(a2, a2[1]);
  if ( (_DWORD)result )
  {
    v17 = (unsigned int)result;
    for ( i = 0; i != v17; ++i )
    {
      v4 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v4 + 1) )
      {
        v5 = *(char **)a1;
      }
      else
      {
        v5 = (char *)qvector_reserve(a1, *(char **)a1, v4 + 1, 0x20u);
        *(_QWORD *)a1 = v5;
        v4 = *(_QWORD *)(a1 + 8);
      }
      v6 = 32 * v4;
      v14 = &v5[v6 + 8];
      *(_OWORD *)v14 = 0;
      *(_QWORD *)&v5[v6 + 24] = 0;
      ++*(_QWORD *)(a1 + 8);
      *(_DWORD *)&v5[v6] = unpack_dd(a2, a2[1]);
      v7 = (const char *)*a2;
      result = (char *)*a2;
      do
      {
        if ( (unsigned __int64)result >= a2[1] )
          goto LABEL_14;
      }
      while ( *result++ != 0 );
      *a2 = (unsigned __int64)result;
      if ( !v7 || (result = (char *)strlen(v7)) == nullptr )
      {
LABEL_14:
        *(_QWORD *)&v5[v6 + 16] = 0;
        continue;
      }
      v9 = (size_t)result;
      v10 = (unsigned __int64)(result + 1);
      v11 = *(_QWORD *)&v5[v6 + 24] < (unsigned __int64)(result + 1);
      v12 = *(char **)v14;
      if ( v11 )
      {
        v16 = v9;
        v15 = v10;
        v12 = (char *)qvector_reserve((__int64)v14, v12, v10, 1u);
        v10 = v15;
        v9 = v16;
        *(_QWORD *)v14 = v12;
      }
      *(_QWORD *)&v5[v6 + 16] = v10;
      v13 = v9;
      memmove(v12, v7, v9);
      result = *(char **)v14;
      *(_BYTE *)(*(_QWORD *)v14 + v13) = 0;
    }
  }
  return result;
}
