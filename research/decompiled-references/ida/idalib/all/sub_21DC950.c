void *__fastcall sub_21DC950(__int64 a1)
{
  _BYTE *v1; // rax
  _BYTE *v2; // rdx
  char v4; // dl
  void *v5; // r8
  unsigned __int8 v6; // bp
  char v7; // r12
  char v8; // r13
  char *v9; // rax
  char *v10; // r15
  char v11; // al
  __int64 v12; // r14
  size_t v13; // rax
  char *v14; // r14
  char v15; // r13
  __int64 v16; // r15
  size_t v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 *v21; // rax
  void *v22; // rax
  char *v23; // rsi
  char *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  char v27; // dl
  __int64 v28; // rdx
  unsigned __int64 v29; // [rsp+0h] [rbp-F8h]
  void *v30; // [rsp+0h] [rbp-F8h]
  void *v31; // [rsp+0h] [rbp-F8h]
  void *v32; // [rsp+0h] [rbp-F8h]
  __int64 v33; // [rsp+8h] [rbp-F0h]
  void *v34; // [rsp+10h] [rbp-E8h]
  char v35; // [rsp+1Fh] [rbp-D9h]
  __int64 v36; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v38[184]; // [rsp+40h] [rbp-B8h] BYREF

  v1 = *(_BYTE **)a1;
  v2 = *(_BYTE **)(a1 + 8);
  if ( v2 == *(_BYTE **)a1 )
    return nullptr;
  if ( *v1 != 102 )
    return nullptr;
  *(_QWORD *)a1 = v1 + 1;
  if ( v1 + 1 == v2 )
    return nullptr;
  v4 = v1[1];
  if ( v4 == 82 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 1;
    goto LABEL_10;
  }
  if ( v4 <= 82 )
  {
    if ( v4 != 76 )
      return nullptr;
    v6 = 1;
    v7 = 1;
    v8 = 1;
LABEL_10:
    *(_QWORD *)a1 = v1 + 2;
    v9 = sub_21CFC70(a1);
    v10 = v9;
    if ( v9 )
    {
      v11 = v9[2];
      if ( v11 == 2 )
        goto LABEL_16;
      if ( v11 == 4 )
      {
        v12 = *((_QWORD *)v10 + 1);
        v13 = -1;
        if ( v12 )
          v13 = j__strlen(*((const char **)v10 + 1)) - 1;
        if ( *(_BYTE *)(v12 + v13) == 42 )
        {
LABEL_16:
          v14 = sub_21D94E0(a1);
          if ( v14 )
          {
            v29 = 0;
            if ( !v8 )
              goto LABEL_18;
            v23 = sub_21D94E0(a1);
            v29 = (unsigned __int64)v23;
            if ( v23 )
            {
              if ( v7 )
              {
                v24 = v14;
                v14 = v23;
                v29 = (unsigned __int64)v24;
              }
LABEL_18:
              v15 = v10[2];
              v16 = *((_QWORD *)v10 + 1);
              if ( v16 )
              {
                v17 = j__strlen((const char *)v16);
                v33 = v17;
                if ( (unsigned __int8)v15 > 0xAu )
                  goto LABEL_22;
                v18 = v16 + 8;
                v19 = v17 - 8;
                if ( !v19 )
                {
                  v33 = 0;
                  v16 += 8;
                  goto LABEL_22;
                }
                v25 = v33;
                v33 = v19;
              }
              else
              {
                if ( (unsigned __int8)v15 > 0xAu )
                {
                  v33 = 0;
                  goto LABEL_22;
                }
                v33 = -8;
                v25 = 0;
                v18 = 8;
              }
              if ( *(_BYTE *)(v16 + 8) == 32 )
              {
                v16 += 9;
                v33 = v25 - 9;
              }
              else
              {
                v16 = v18;
              }
LABEL_22:
              v35 = *(_BYTE *)(a1 + 937);
              ptr[0] = v38;
              ptr[1] = (void *)0x2000000000LL;
              sub_21D15C0((__int64)ptr, v6, v33, v16, (unsigned __int64)v14, v29);
              v20 = sub_2223360(a1 + 904, ptr, &v36, off_2BE9FD0);
              v5 = (void *)v20;
              if ( v20 )
              {
                v5 = (void *)(v20 + 8);
                if ( ptr[0] != v38 )
                {
                  v30 = (void *)(v20 + 8);
                  free(ptr[0]);
                  v5 = v30;
                }
                if ( v5 )
                {
                  ptr[0] = v5;
                  v31 = v5;
                  v21 = sub_21D4F30(a1 + 944, (__int64 *)ptr);
                  v5 = v31;
                  if ( v21 )
                  {
                    v22 = (void *)v21[1];
                    if ( v22 )
                      v5 = v22;
                  }
                  if ( *(void **)(a1 + 928) == v5 )
                    *(_BYTE *)(a1 + 936) = 1;
                }
              }
              else
              {
                if ( v35 )
                {
                  v26 = sub_21D40A0((__int64 *)(a1 + 808), 64, 3u);
                  *(_WORD *)(v26 + 16) = 16455;
                  v27 = *(_BYTE *)(v26 + 18);
                  *(_QWORD *)(v26 + 32) = v29;
                  *(_QWORD *)v26 = 0;
                  *(_QWORD *)(v26 + 40) = v33;
                  *(_BYTE *)(v26 + 18) = v27 & 0xF0 | 5;
                  *(_QWORD *)(v26 + 24) = v14;
                  *(_QWORD *)(v26 + 48) = v16;
                  *(_QWORD *)(v26 + 8) = off_2BE8220;
                  v28 = v36;
                  *(_BYTE *)(v26 + 56) = v7;
                  v34 = (void *)(v26 + 8);
                  sub_2223210(a1 + 904, v26, v28, off_2BE9FD0);
                  v5 = v34;
                }
                if ( ptr[0] != v38 )
                {
                  v32 = v5;
                  free(ptr[0]);
                  v5 = v32;
                }
                *(_QWORD *)(a1 + 920) = v5;
              }
              return v5;
            }
          }
        }
      }
    }
    return nullptr;
  }
  if ( v4 == 108 )
  {
    v6 = 1;
    v7 = 1;
    v8 = 0;
    goto LABEL_10;
  }
  v5 = nullptr;
  if ( v4 == 114 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    goto LABEL_10;
  }
  return v5;
}
