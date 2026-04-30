void __fastcall sub_371130(unsigned __int64 **a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r11
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 *v11; // rax
  unsigned __int64 *v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // rax
  __int64 v15; // rbp
  bool v16; // di
  unsigned __int64 *v17; // rdx
  unsigned __int64 *v18; // r12
  unsigned __int64 *i; // rbp
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rdi
  unsigned __int64 *v22; // rdx
  unsigned __int64 *v23; // r12
  unsigned __int64 *j; // rbp
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // [rsp-18h] [rbp-18h]
  __int64 v28; // [rsp-10h] [rbp-10h]
  __int64 v29; // [rsp-8h] [rbp-8h]

  v5 = a2[1];
  if ( !v5 )
    return;
  v29 = v4;
  v7 = 0;
  v8 = 0;
  v28 = v3;
  v9 = 0;
  v27 = v2;
  do
  {
    v11 = a1[3];
    v12 = (unsigned __int64 *)(v7 + *a2);
    v13 = *v12;
    if ( (unsigned __int64)v11 >= *v12 && (unsigned __int64)v11 < v13 + v12[2] )
    {
      a1[3] = (unsigned __int64 *)((char *)v11 + v12[1] - v13);
LABEL_5:
      v9 = 1;
      goto LABEL_6;
    }
    if ( (_BYTE)v9 )
      goto LABEL_5;
    v14 = *a1;
    v15 = (__int64)&(*a1)[5 * (_QWORD)a1[1]];
    if ( (unsigned __int64 *)v15 != *a1 )
    {
      do
      {
        v9 = *v14;
        if ( *v14 >= v13 )
        {
          LOBYTE(v9) = v9 < v13 + v12[2];
          v16 = !(_BYTE)v9;
        }
        else
        {
          v9 = 0;
          v16 = 1;
        }
        v14 += 5;
      }
      while ( v14 != (unsigned __int64 *)v15 && v16 );
    }
LABEL_6:
    ++v8;
    v7 += 24;
  }
  while ( v5 != v8 );
  if ( (_BYTE)v9 )
  {
    v17 = *a1;
    if ( *a1 )
    {
      v18 = a1[1];
      if ( v18 )
      {
        for ( i = nullptr; i != v18; i = (unsigned __int64 *)((char *)i + 1) )
        {
          v20 = &v17[5 * (_QWORD)i];
          v21 = v20[2];
          if ( v21 )
          {
            v20[3] = 0;
            qfree(v21, (const char *)v12, v17, v9, v8, v7);
            v17 = *a1;
          }
        }
      }
      a1[1] = nullptr;
      qfree(v17, (const char *)v12, v17, v9, v8, v7, v27, v28, v29);
      *a1 = nullptr;
      a1[2] = nullptr;
    }
    *((_BYTE *)a1[4] + 336) = 1;
    v22 = a1[5];
    if ( v22 )
    {
      v23 = a1[6];
      if ( v23 )
      {
        for ( j = nullptr; j != v23; j = (unsigned __int64 *)((char *)j + 1) )
        {
          v25 = &v22[5 * (_QWORD)j];
          v26 = v25[2];
          if ( v26 )
          {
            v25[3] = 0;
            qfree(v26, (const char *)v12, v22, v9, v8, v7);
            v22 = a1[5];
          }
        }
      }
      a1[6] = nullptr;
      qfree(v22, (const char *)v12, v22, v9, v8, v7, v27, v28, v29);
      a1[5] = nullptr;
      a1[7] = nullptr;
    }
    sub_370F70((__int64)a1, (const char *)v12);
  }
}
