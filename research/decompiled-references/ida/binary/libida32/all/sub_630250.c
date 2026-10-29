_QWORD *__fastcall sub_630250(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5, __int64 **a6)
{
  int v9; // r13d
  char *v10; // rbx
  void *v11; // rdi
  char *v12; // rdi
  __int64 v13; // r14
  __int64 i; // r15
  char *v15; // r13
  void *v16; // rdi
  void *v17; // rdi
  __int64 *v18; // r14
  char *v19; // rdi
  __int64 v20; // r13
  __int64 j; // rbp
  char *v22; // rbx
  void *v23; // rdi
  void *v24; // rdi
  __int64 v26; // [rsp+0h] [rbp-68h]
  int v27[2]; // [rsp+8h] [rbp-60h] BYREF
  int v28[2]; // [rsp+10h] [rbp-58h] BYREF
  int v29[2]; // [rsp+18h] [rbp-50h] BYREF
  int v30; // [rsp+24h] [rbp-44h] BYREF
  void *v31; // [rsp+28h] [rbp-40h]

  *(_QWORD *)v28 = a3;
  *(_QWORD *)v27 = a4;
  v31 = (void *)__readfsqword(0x28u);
  *(_QWORD *)v29 = a2 + 1;
  v9 = sub_693160(v29, &v30);
  if ( !v9 )
  {
    if ( !(_BYTE)v30 )
    {
      if ( a5 )
        *a5 = 1;
      goto LABEL_40;
    }
    if ( a5 )
      *a5 = 0;
    if ( a6 )
      *a6 = nullptr;
    goto LABEL_7;
  }
  if ( !a5 )
  {
    if ( !a6 )
      goto LABEL_39;
    goto LABEL_38;
  }
  *a5 = 0;
  if ( a6 )
LABEL_38:
    *a6 = nullptr;
LABEL_39:
  if ( v9 < 0 || !*(_QWORD *)v28 )
    goto LABEL_40;
LABEL_7:
  v30 = 0;
  if ( **(_BYTE **)v29 == 0xFE && !(unsigned __int8)sub_51F860((const char **)v29, &v30, a6) )
  {
LABEL_40:
    *a1 = 0;
    return a1;
  }
  v10 = (char *)qalloc_or_throw(56, (const char *)&v30);
  *(_QWORD *)v10 = 0;
  *((_QWORD *)v10 + 3) = 0;
  v10[52] = 0x80;
  *(_OWORD *)(v10 + 8) = 0;
  *((_OWORD *)v10 + 2) = 0;
  *((_DWORD *)v10 + 12) = v30;
  if ( !(unsigned __int8)sub_51CE80((__int64)v10, v9, (_BYTE **)v29, (__int64)v28, (__int64)v27) )
  {
    if ( v10 )
    {
      v11 = *((void **)v10 + 3);
      if ( v11 )
      {
        *((_QWORD *)v10 + 4) = 0;
        qfree(v11);
      }
      v12 = *(char **)v10;
      if ( *(_QWORD *)v10 )
      {
        v26 = *((_QWORD *)v10 + 1);
        if ( v26 )
        {
          v13 = 0;
          for ( i = 0; i != v26; ++i )
          {
            v15 = &v12[v13];
            v16 = *(void **)&v12[v13 + 24];
            if ( v16 )
            {
              *((_QWORD *)v15 + 4) = 0;
              qfree(v16);
            }
            v17 = *(void **)v15;
            if ( *(_QWORD *)v15 )
            {
              *((_QWORD *)v15 + 1) = 0;
              qfree(v17);
            }
            v12 = *(char **)v10;
            v13 += 56;
          }
        }
        *((_QWORD *)v10 + 1) = 0;
        qfree(v12);
      }
      qfree(v10);
    }
    if ( a6 )
    {
      v18 = *a6;
      if ( *a6 )
      {
        v19 = (char *)*v18;
        if ( *v18 )
        {
          v20 = v18[1];
          if ( v20 )
          {
            for ( j = 0; j != v20; ++j )
            {
              v22 = &v19[48 * j];
              v23 = *((void **)v22 + 3);
              if ( v23 )
              {
                *((_QWORD *)v22 + 4) = 0;
                qfree(v23);
              }
              v24 = *(void **)v22;
              if ( *(_QWORD *)v22 )
              {
                *((_QWORD *)v22 + 1) = 0;
                qfree(v24);
              }
              v19 = (char *)*v18;
            }
          }
          v18[1] = 0;
          qfree(v19);
        }
        qfree(v18);
      }
    }
    v10 = nullptr;
  }
  *a1 = v10;
  return a1;
}

