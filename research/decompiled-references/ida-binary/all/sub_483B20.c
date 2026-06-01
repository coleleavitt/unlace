void __fastcall sub_483B20(__int64 a1, __int64 *a2, const char *a3)
{
  bool v5; // r14
  int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  size_t v10; // r10
  __int64 v11; // r9
  size_t v12; // r11
  __int64 v13; // rsi
  size_t v14; // rax
  __int64 v15; // r8
  size_t v16; // r9
  size_t v17; // r10
  __int64 v18; // rsi
  size_t v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  size_t v22; // [rsp+0h] [rbp-58h]
  __int64 v23; // [rsp+0h] [rbp-58h]
  __int64 v24; // [rsp+8h] [rbp-50h]
  size_t v25; // [rsp+8h] [rbp-50h]
  size_t v26; // [rsp+10h] [rbp-48h]
  __int64 v27; // [rsp+10h] [rbp-48h]
  size_t v28; // [rsp+18h] [rbp-40h]
  size_t v29; // [rsp+18h] [rbp-40h]

  if ( *(_QWORD *)(a1 + 32) )
  {
    v5 = a3 != nullptr;
    v6 = 0;
    v7 = 0;
    do
    {
      if ( v6 && v5 )
      {
        v14 = strlen(a3);
        v15 = a2[1];
        v16 = v14;
        v17 = v14;
        if ( v15 )
        {
          --v15;
          v17 = v14 + v15;
        }
        v18 = *a2;
        v19 = v17 + 1;
        if ( a2[2] < v17 + 1 )
        {
          v28 = v14;
          v26 = v17;
          v24 = v15;
          v22 = v17 + 1;
          v20 = qvector_reserve(a2, v18, v19, 1);
          v16 = v28;
          v17 = v26;
          v15 = v24;
          v19 = v22;
          *a2 = v20;
          v18 = v20;
        }
        a2[1] = v19;
        *(_BYTE *)(v18 + v17) = 0;
        memmove((void *)(v15 + *a2), a3, v16);
      }
      v8 = *(_QWORD *)(a1 + 24) + 24 * v7;
      v9 = *(_QWORD *)(v8 + 8);
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v9 != 1 )
        {
          v11 = a2[1];
          v12 = v9 - 1;
          if ( v11 )
          {
            --v11;
            v12 = v10 + v11;
            v9 += v11;
          }
          v13 = *a2;
          if ( a2[2] < v9 )
          {
            v29 = v12;
            v27 = v11;
            v25 = v10;
            v23 = v8;
            v21 = qvector_reserve(a2, v13, v9, 1);
            v12 = v29;
            v11 = v27;
            v10 = v25;
            v8 = v23;
            *a2 = v21;
            v13 = v21;
          }
          a2[1] = v9;
          *(_BYTE *)(v13 + v12) = 0;
          memcpy((void *)(v11 + *a2), *(const void **)v8, v10);
        }
      }
      v7 = ++v6;
    }
    while ( (unsigned __int64)v6 < *(_QWORD *)(a1 + 32) );
  }
}
