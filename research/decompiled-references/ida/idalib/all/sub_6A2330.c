unsigned __int64 __fastcall sub_6A2330(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 i; // r12
  void *v6; // r15
  char v7; // r13
  void *v8; // r14
  __int64 v9; // rbx
  void **v10; // r12
  __int64 v11; // rbp
  void *v12; // rdi
  void **v13; // rbp
  __int64 j; // r13
  void *v15; // rdi
  void **v17; // rbx
  __int64 k; // rbp
  void *v19; // rdi
  char v20; // [rsp+8h] [rbp-160h]
  __int64 v21; // [rsp+8h] [rbp-160h]
  void **v22; // [rsp+10h] [rbp-158h]
  void **v23; // [rsp+18h] [rbp-150h]
  void *v26; // [rsp+30h] [rbp-138h]
  __int64 v27; // [rsp+38h] [rbp-130h]
  __int64 v28; // [rsp+40h] [rbp-128h]
  __int64 v29; // [rsp+48h] [rbp-120h]
  void *v30; // [rsp+50h] [rbp-118h] BYREF
  __int128 v31; // [rsp+58h] [rbp-110h]
  void **v32; // [rsp+68h] [rbp-100h]
  __int64 v33; // [rsp+70h] [rbp-F8h]
  void *v34; // [rsp+90h] [rbp-D8h]
  char v35; // [rsp+B1h] [rbp-B7h]
  void *ptr; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v37; // [rsp+C8h] [rbp-A0h]
  void **v38; // [rsp+D8h] [rbp-90h]
  __int64 v39; // [rsp+E0h] [rbp-88h]
  void *v40; // [rsp+100h] [rbp-68h]
  char v41; // [rsp+121h] [rbp-47h]
  unsigned __int64 v42; // [rsp+128h] [rbp-40h]

  v3 = a2 - a1;
  v42 = __readfsqword(0x28u);
  if ( v3 <= 104 )
    return v42 - __readfsqword(0x28u);
  v27 = 0x4EC4EC4EC4EC4EC5LL * (v3 >> 3);
  v4 = (v27 - 2) / 2;
  for ( i = a1 + 8 * (v4 + 4 * (v4 + ((v27 - 2 + ((unsigned __int64)(v27 - 2) >> 63)) & 0xFFFFFFFFFFFFFFFELL))); ; i -= 104 )
  {
    v30 = nullptr;
    v32 = nullptr;
    v33 = 0;
    v34 = nullptr;
    v35 = 0;
    v31 = 0;
    sub_698F60((__int64)&v30, i);
    v41 = 0;
    v6 = v30;
    v7 = v35;
    v23 = v32;
    v37 = 0;
    ptr = nullptr;
    v28 = v33;
    v38 = nullptr;
    v26 = v34;
    sub_698F60((__int64)&ptr, (__int64)&v30);
    v8 = ptr;
    v22 = v38;
    v20 = v41;
    sub_6A1DF0(a1, v4, v27, (__int64)&ptr, *a3);
    if ( v20 == 2 )
    {
      if ( !v22 )
        goto LABEL_4;
      if ( v39 )
      {
        v21 = v4;
        v29 = i;
        v9 = 0;
        v10 = v22;
        v11 = v39;
        do
        {
          v12 = *v10;
          if ( *v10 )
          {
            v10[1] = nullptr;
            qfree(v12);
          }
          ++v9;
          v10 += 7;
        }
        while ( v11 != v9 );
        v4 = v21;
        i = v29;
      }
LABEL_36:
      qfree(v22);
      goto LABEL_4;
    }
    if ( v20 == 1 )
    {
      if ( v40 )
        qfree(v40);
      if ( v22 )
        goto LABEL_36;
    }
LABEL_4:
    if ( v8 )
      qfree(v8);
    if ( !v4 )
      break;
    --v4;
    if ( v7 == 2 )
    {
      v13 = v23;
      if ( !v23 )
        goto LABEL_9;
      if ( v28 )
      {
        for ( j = 0; j != v28; ++j )
        {
          v15 = *v13;
          if ( *v13 )
          {
            v13[1] = nullptr;
            qfree(v15);
          }
          v13 += 7;
        }
      }
LABEL_40:
      qfree(v23);
      goto LABEL_9;
    }
    if ( v7 == 1 )
    {
      if ( v26 )
        qfree(v26);
      if ( v23 )
        goto LABEL_40;
    }
LABEL_9:
    if ( v6 )
      qfree(v6);
  }
  if ( v7 == 2 )
  {
    v17 = v23;
    if ( v23 )
    {
      if ( v28 )
      {
        for ( k = 0; k != v28; ++k )
        {
          v19 = *v17;
          if ( *v17 )
          {
            v17[1] = nullptr;
            qfree(v19);
          }
          v17 += 7;
        }
      }
LABEL_44:
      qfree(v23);
    }
  }
  else if ( v7 == 1 )
  {
    if ( v26 )
      qfree(v26);
    if ( v23 )
      goto LABEL_44;
  }
  if ( v6 )
    qfree(v6);
  return v42 - __readfsqword(0x28u);
}
