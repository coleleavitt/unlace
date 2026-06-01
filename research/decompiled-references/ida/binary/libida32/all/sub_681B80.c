unsigned __int64 __fastcall sub_681B80(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  void *v5; // r14
  char v6; // r12
  void *v7; // r13
  __int64 v8; // rbx
  void **v9; // r12
  __int64 v10; // rbp
  void *v11; // rdi
  void **v12; // rbp
  __int64 i; // r12
  void *v14; // rdi
  void **v16; // rbx
  __int64 j; // rbp
  void *v18; // rdi
  char v20; // [rsp+10h] [rbp-148h]
  __int64 v21; // [rsp+10h] [rbp-148h]
  void **v22; // [rsp+18h] [rbp-140h]
  void **v23; // [rsp+20h] [rbp-138h]
  void *v25; // [rsp+30h] [rbp-128h]
  __int64 v26; // [rsp+38h] [rbp-120h]
  __int64 v27; // [rsp+40h] [rbp-118h]
  char v28; // [rsp+4Fh] [rbp-109h]
  void *v29; // [rsp+50h] [rbp-108h] BYREF
  __int128 v30; // [rsp+58h] [rbp-100h]
  void **v31; // [rsp+68h] [rbp-F0h]
  __int64 v32; // [rsp+70h] [rbp-E8h]
  void *v33; // [rsp+88h] [rbp-D0h]
  char v34; // [rsp+A9h] [rbp-AFh]
  void *ptr; // [rsp+B0h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+B8h] [rbp-A0h]
  void **v37; // [rsp+C8h] [rbp-90h]
  __int64 v38; // [rsp+D0h] [rbp-88h]
  void *v39; // [rsp+E8h] [rbp-70h]
  char v40; // [rsp+109h] [rbp-4Fh]
  unsigned __int64 v41; // [rsp+118h] [rbp-40h]

  v3 = a2 - a1;
  v41 = __readfsqword(0x28u);
  if ( v3 <= 96 )
    return v41 - __readfsqword(0x28u);
  v26 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 5);
  v4 = (v26 - 2) / 2;
  while ( 1 )
  {
    v30 = 0;
    v29 = nullptr;
    v31 = nullptr;
    v32 = 0;
    v33 = nullptr;
    v34 = 0;
    sub_679080(&v29, (void **)(a1 + 96 * v4));
    v5 = v29;
    v40 = 0;
    v6 = v34;
    v23 = v31;
    ptr = nullptr;
    v27 = v32;
    v37 = nullptr;
    v25 = v33;
    v36 = 0;
    sub_679080(&ptr, &v29);
    v7 = ptr;
    v22 = v37;
    v20 = v40;
    sub_681680(a1, v4, v26, &ptr, *a3);
    if ( v20 == 2 )
    {
      if ( !v22 )
        goto LABEL_5;
      if ( v38 )
      {
        v21 = v4;
        v28 = v6;
        v8 = 0;
        v9 = v22;
        v10 = v38;
        do
        {
          v11 = *v9;
          if ( *v9 )
          {
            v9[1] = nullptr;
            qfree(v11);
          }
          ++v8;
          v9 += 5;
        }
        while ( v10 != v8 );
        v4 = v21;
        v6 = v28;
      }
LABEL_35:
      qfree(v22);
      goto LABEL_5;
    }
    if ( v20 == 1 )
    {
      if ( v39 )
        qfree(v39);
      if ( v22 )
        goto LABEL_35;
    }
LABEL_5:
    if ( v7 )
      qfree(v7);
    if ( !v4 )
      break;
    --v4;
    if ( v6 == 2 )
    {
      v12 = v23;
      if ( v23 )
      {
        if ( v27 )
        {
          for ( i = 0; i != v27; ++i )
          {
            v14 = *v12;
            if ( *v12 )
            {
              v12[1] = nullptr;
              qfree(v14);
            }
            v12 += 5;
          }
        }
LABEL_39:
        qfree(v23);
      }
    }
    else if ( v6 == 1 )
    {
      if ( v25 )
        qfree(v25);
      if ( v23 )
        goto LABEL_39;
    }
    if ( v5 )
      qfree(v5);
  }
  if ( v6 == 2 )
  {
    v16 = v23;
    if ( v23 )
    {
      if ( v27 )
      {
        for ( j = 0; j != v27; ++j )
        {
          v18 = *v16;
          if ( *v16 )
          {
            v16[1] = nullptr;
            qfree(v18);
          }
          v16 += 5;
        }
      }
LABEL_43:
      qfree(v23);
    }
  }
  else if ( v6 == 1 )
  {
    if ( v25 )
      qfree(v25);
    if ( v23 )
      goto LABEL_43;
  }
  if ( v5 )
    qfree(v5);
  return v41 - __readfsqword(0x28u);
}

