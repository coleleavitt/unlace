__int64 *__fastcall sub_7A30(__int64 *a1, int a2)
{
  char *v2; // rbx
  const void *v4; // r15
  size_t v5; // rax
  __int64 v6; // r12
  size_t v7; // r8
  size_t v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-60h]
  size_t v17; // [rsp+10h] [rbp-58h]
  size_t v18; // [rsp+18h] [rbp-50h]

  v2 = (char *)&unk_27A00;
  sub_78E0(a1, a2);
  do
  {
    if ( (*(_DWORD *)v2 & a2) != 0 )
    {
      v11 = a1[1];
      if ( v11 > 1 )
      {
        v12 = *a1;
        if ( a1[2] < v11 + 1 )
        {
          v15 = qvector_reserve(a1, v12, v11 + 1, 1);
          *a1 = v15;
          v12 = v15;
        }
        a1[1] = v11 + 1;
        *(_BYTE *)(v12 + v11 - 1) = 32;
        *(_BYTE *)(*a1 + v11) = 0;
      }
      v4 = *((const void **)v2 + 1);
      if ( v4 )
      {
        v5 = strlen(*((const char **)v2 + 1));
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
          v18 = v5;
          v17 = v8;
          v16 = v8 + 1;
          v14 = qvector_reserve(a1, v9, v10, 1);
          *a1 = v14;
          v7 = v18;
          v9 = v14;
          v8 = v17;
          v10 = v16;
        }
        a1[1] = v10;
        *(_BYTE *)(v9 + v8) = 0;
        memmove((void *)(v6 + *a1), v4, v7);
      }
    }
    v2 += 16;
  }
  while ( v2 != (char *)&unk_27A40 );
  return a1;
}
