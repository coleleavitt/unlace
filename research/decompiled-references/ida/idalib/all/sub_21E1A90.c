void *__fastcall sub_21E1A90(__int64 a1)
{
  __int64 v1; // r15
  char *v2; // rax
  __int64 v3; // rbx
  char *v4; // rbp
  signed __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rsi
  __int64 v9; // r12
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r11
  __int64 v15; // rcx
  unsigned __int8 v16; // r14
  char v17; // r10
  void *v18; // r8
  __int64 v20; // r15
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 *v26; // rax
  void *v27; // rax
  unsigned __int64 v28; // rax
  char v29; // dl
  char *v30; // rdx
  void *v31; // [rsp+0h] [rbp-108h]
  char v32; // [rsp+8h] [rbp-100h]
  void *v33; // [rsp+8h] [rbp-100h]
  void *v34; // [rsp+8h] [rbp-100h]
  void *v35; // [rsp+8h] [rbp-100h]
  __int64 v36; // [rsp+18h] [rbp-F0h]
  char v37; // [rsp+18h] [rbp-F0h]
  unsigned __int64 *v38; // [rsp+20h] [rbp-E8h]
  __int64 v39; // [rsp+28h] [rbp-E0h]
  char *v40; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+48h] [rbp-C0h]
  _BYTE v43[184]; // [rsp+50h] [rbp-B8h] BYREF

  v1 = a1;
  v2 = sub_21DFD40(a1);
  if ( !v2 )
    return nullptr;
  v3 = (__int64)v2;
  v4 = sub_21D94E0(a1);
  if ( !v4 )
    return nullptr;
  v5 = sub_21CFC00((char **)a1, 1);
  v8 = *(char **)(a1 + 8);
  v9 = v5;
  v10 = *(char **)a1;
  v12 = v11;
  if ( *(char **)a1 == v8 )
    return nullptr;
  v13 = (unsigned __int8)*v10;
  v14 = *(_QWORD *)(a1 + 16);
  v15 = *(_QWORD *)(a1 + 24);
  if ( (_BYTE)v13 == 95 )
  {
    v36 = *(_QWORD *)(a1 + 16);
    v20 = v12;
    v21 = v9;
    v22 = *(_QWORD *)(a1 + 24);
    while ( 1 )
    {
      *(_QWORD *)a1 = v10 + 1;
      ptr = (void *)sub_21CFC00((char **)a1, 0);
      v42 = v23;
      v40 = sub_21D5030(a1 + 808, (__int64 *)&ptr);
      if ( !v40 )
        return nullptr;
      sub_20D8690((char **)(a1 + 16), (__int64 *)&v40);
      v10 = *(char **)a1;
      v8 = *(char **)(a1 + 8);
      if ( *(char **)a1 == v8 )
        return nullptr;
      v13 = (unsigned __int8)*v10;
      if ( (_BYTE)v13 != 95 )
      {
        v15 = v22;
        v14 = v36;
        v9 = v21;
        v12 = v20;
        v1 = a1;
        goto LABEL_5;
      }
    }
  }
  else
  {
LABEL_5:
    if ( (_BYTE)v13 == 112 )
    {
      *(_QWORD *)v1 = v10 + 1;
      if ( v10 + 1 == v8 )
        return nullptr;
      v13 = (unsigned __int8)v10[1];
      v16 = 1;
      ++v10;
      v17 = 1;
    }
    else
    {
      v16 = 0;
      v17 = 0;
    }
    if ( (_BYTE)v13 != 69 )
      return nullptr;
    v32 = v17;
    *(_QWORD *)v1 = v10 + 1;
    v38 = (unsigned __int64 *)sub_21D4550((_QWORD *)v1, (v15 - v14) >> 3, v13, v15 - v14, v6, v7);
    v37 = *(_BYTE *)(v1 + 937);
    v39 = v24;
    ptr = v43;
    v42 = 0x2000000000LL;
    sub_21D2150((__int64)&ptr, v3, (__int64)v4, v9, v12, v16, v38, v24);
    v25 = sub_2223360(v1 + 904, &ptr, &v40, off_2BE9FD0);
    v18 = (void *)v25;
    if ( v25 )
    {
      v18 = (void *)(v25 + 8);
      if ( ptr != v43 )
      {
        v33 = (void *)(v25 + 8);
        free(ptr);
        v18 = v33;
      }
      if ( v18 )
      {
        ptr = v18;
        v34 = v18;
        v26 = sub_21D4F30(v1 + 944, (__int64 *)&ptr);
        v18 = v34;
        if ( v26 )
        {
          v27 = (void *)v26[1];
          if ( v27 )
            v18 = v27;
        }
        if ( *(void **)(v1 + 928) == v18 )
          *(_BYTE *)(v1 + 936) = 1;
      }
    }
    else
    {
      if ( v37 )
      {
        v28 = sub_21D40A0((__int64 *)(v1 + 808), 80, 3u);
        *(_WORD *)(v28 + 16) = 16443;
        v29 = *(_BYTE *)(v28 + 18);
        *(_QWORD *)(v28 + 56) = v38;
        *(_QWORD *)(v28 + 64) = v39;
        *(_QWORD *)v28 = 0;
        *(_BYTE *)(v28 + 18) = v29 & 0xF0 | 5;
        *(_QWORD *)(v28 + 24) = v3;
        *(_QWORD *)(v28 + 32) = v4;
        *(_QWORD *)(v28 + 8) = off_2BE7CE0;
        *(_QWORD *)(v28 + 40) = v9;
        *(_QWORD *)(v28 + 48) = v12;
        v30 = v40;
        *(_BYTE *)(v28 + 72) = v32;
        v35 = (void *)(v28 + 8);
        sub_2223210(v1 + 904, v28, v30, off_2BE9FD0);
        v18 = v35;
      }
      if ( ptr != v43 )
      {
        v31 = v18;
        free(ptr);
        v18 = v31;
      }
      *(_QWORD *)(v1 + 920) = v18;
    }
  }
  return v18;
}
