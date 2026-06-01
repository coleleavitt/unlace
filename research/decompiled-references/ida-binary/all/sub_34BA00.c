__int64 __fastcall sub_34BA00(__int64 *a1, unsigned int a2)
{
  char **v3; // rbx
  char *v4; // r15
  size_t v5; // rax
  __int64 v6; // r12
  size_t v7; // r8
  size_t v8; // r9
  __int64 v9; // rsi
  size_t v10; // rdx
  __int64 result; // rax
  unsigned __int64 v12; // r12
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  size_t v17; // [rsp+8h] [rbp-50h]
  size_t v18; // [rsp+10h] [rbp-48h]
  size_t v19; // [rsp+18h] [rbp-40h]

  v3 = (char **)&unk_8673A0;
  do
  {
    result = *(_DWORD *)v3 & a2;
    if ( (*(_DWORD *)v3 & a2) != 0 )
    {
      v12 = a1[1];
      if ( v12 > 1 )
      {
        v13 = *a1;
        v14 = v12 + 2;
        if ( a1[2] < v12 + 2 )
        {
          v16 = qvector_reserve(a1, v13, v14, 1);
          v14 = v12 + 2;
          *a1 = v16;
          v13 = v16;
        }
        a1[1] = v14;
        result = 8236;
        *(_BYTE *)(v13 + v12 + 1) = 0;
        *(_WORD *)(*a1 + v12 - 1) = 8236;
      }
      v4 = v3[1];
      if ( v4 )
      {
        v5 = strlen(v3[1]);
        v6 = a1[1];
        v7 = v5;
        v8 = v5;
        if ( v6 )
        {
          --v6;
          v8 = v5 + v6;
        }
        v9 = *a1;
        v10 = v8 + 1;
        if ( a1[2] < v8 + 1 )
        {
          v19 = v5;
          v18 = v8;
          v17 = v8 + 1;
          v15 = qvector_reserve(a1, v9, v10, 1);
          v7 = v19;
          v8 = v18;
          *a1 = v15;
          v10 = v17;
          v9 = v15;
        }
        a1[1] = v10;
        *(_BYTE *)(v9 + v8) = 0;
        result = (__int64)memmove((void *)(v6 + *a1), v4, v7);
      }
    }
    v3 += 2;
  }
  while ( v3 != off_867400 );
  return result;
}
