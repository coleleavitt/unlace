char *__fastcall sub_21DE810(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  char *v11; // r14
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rax
  __int64 v14; // r12
  __int64 v15; // rbp
  int v17; // ebp
  size_t v18; // rax
  char *v19; // rax
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r15
  unsigned __int64 v23; // rcx
  char v24; // al
  __int64 v25; // rax
  void *v26; // rdi
  __int64 *v27; // rax
  char *v28; // rax
  unsigned __int64 *v29; // rax
  unsigned __int64 *v30; // r15
  __int64 v31; // rdx
  __int64 v32; // r13
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  char v35; // dl
  char v36; // dl
  char v37; // [rsp+7h] [rbp-E1h]
  char v38; // [rsp+7h] [rbp-E1h]
  __int64 v39; // [rsp+8h] [rbp-E0h]
  __int64 v40; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+28h] [rbp-C0h]
  _BYTE v43[184]; // [rsp+30h] [rbp-B8h] BYREF

  v7 = *(unsigned __int8 **)a1;
  v8 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v8 )
    return (char *)sub_21DFD40(a1);
  v9 = *v7;
  v10 = v8 - (_QWORD)v7;
  if ( (_BYTE)v9 == 76 )
  {
    if ( v10 == 1 || v7[1] != 90 )
      return sub_21DD9E0(a1);
    *(_QWORD *)a1 = v7 + 2;
    v11 = (char *)sub_21E4F70(a1, 1);
    if ( !v11 )
      return nullptr;
    v12 = *(unsigned __int8 **)a1;
    if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
      return nullptr;
    goto LABEL_8;
  }
  if ( (char)v9 > 76 )
  {
    if ( (_BYTE)v9 != 84 )
    {
      if ( (_BYTE)v9 == 88 )
      {
        *(_QWORD *)a1 = v7 + 1;
        v11 = sub_21D94E0(a1);
        if ( v11 )
        {
          v12 = *(unsigned __int8 **)a1;
          if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)a1 )
          {
LABEL_8:
            if ( *v12 == 69 )
            {
              *(_QWORD *)a1 = v12 + 1;
              return v11;
            }
          }
        }
        return nullptr;
      }
      return (char *)sub_21DFD40(a1);
    }
    v17 = 0;
    if ( v10 != 1 )
      v17 = (char)v7[1];
    v18 = j__strlen("yptnk");
    if ( !v18 )
      return (char *)sub_21DFD40(a1);
    v19 = (char *)memchr("yptnk", v17, v18);
    if ( !v19 || v19 == "" )
      return (char *)sub_21DFD40(a1);
    v20 = sub_21E3AA0(a1, 0);
    if ( !v20 )
      return nullptr;
    v21 = sub_21DE810(a1);
    v22 = v21;
    if ( !v21 )
      return nullptr;
    v23 = v21;
    v24 = *(_BYTE *)(a1 + 937);
    ptr = v43;
    v37 = v24;
    v42 = 0x2000000000LL;
    sub_21D05E0((__int64)&ptr, 0x22u, v20, v23);
    v39 = a1 + 904;
    v25 = sub_2223360(a1 + 904, &ptr, &v40, off_2BE9FD0);
    v11 = (char *)v25;
    if ( v25 )
    {
      v26 = ptr;
      v11 = (char *)(v25 + 8);
      if ( ptr == v43 )
        goto LABEL_28;
      goto LABEL_27;
    }
    if ( !v37 )
      goto LABEL_41;
    v34 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
    *(_WORD *)(v34 + 16) = 16418;
    v35 = *(_BYTE *)(v34 + 18);
    v11 = (char *)(v34 + 8);
    *(_QWORD *)v34 = 0;
    *(_QWORD *)(v34 + 24) = v20;
    *(_QWORD *)(v34 + 32) = v22;
    *(_BYTE *)(v34 + 18) = v35 & 0xF0 | 5;
    *(_QWORD *)(v34 + 8) = off_2BE7380;
LABEL_50:
    sub_2223210(v39, v34, v40, off_2BE9FD0);
LABEL_41:
    if ( ptr != v43 )
      free(ptr);
    *(_QWORD *)(a1 + 920) = v11;
    return v11;
  }
  if ( (_BYTE)v9 != 74 )
    return (char *)sub_21DFD40(a1);
  v13 = v7 + 1;
  v14 = *(_QWORD *)(a1 + 16);
  v15 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 = v13;
  if ( v13 == (unsigned __int8 *)v8 )
    goto LABEL_13;
LABEL_12:
  if ( *v13 == 69 )
  {
    *(_QWORD *)a1 = v13 + 1;
    v29 = (unsigned __int64 *)sub_21D4550((_QWORD *)a1, (v15 - v14) >> 3, v8, v9, a5, a6);
    ptr = v43;
    v30 = v29;
    v32 = v31;
    v38 = *(_BYTE *)(a1 + 937);
    v42 = 0x2000000000LL;
    sub_21D0C90((__int64)&ptr, 0x29u, v29, v31);
    v39 = a1 + 904;
    v33 = sub_2223360(a1 + 904, &ptr, &v40, off_2BE9FD0);
    v11 = (char *)v33;
    if ( v33 )
    {
      v26 = ptr;
      v11 = (char *)(v33 + 8);
      if ( ptr == v43 )
      {
LABEL_28:
        if ( v11 )
        {
          ptr = v11;
          v27 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
          if ( v27 )
          {
            v28 = (char *)v27[1];
            if ( v28 )
              v11 = v28;
          }
          if ( *(char **)(a1 + 928) == v11 )
            *(_BYTE *)(a1 + 936) = 1;
        }
        return v11;
      }
LABEL_27:
      free(v26);
      goto LABEL_28;
    }
    if ( !v38 )
      goto LABEL_41;
    v34 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
    v36 = *(_BYTE *)(v34 + 18);
    *(_QWORD *)v34 = 0;
    v11 = (char *)(v34 + 8);
    *(_WORD *)(v34 + 16) = 16425;
    *(_QWORD *)(v34 + 24) = v30;
    *(_QWORD *)(v34 + 32) = v32;
    *(_BYTE *)(v34 + 18) = v36 & 0xF0 | 5;
    *(_QWORD *)(v34 + 8) = off_2BE7620;
    goto LABEL_50;
  }
LABEL_13:
  while ( 1 )
  {
    v11 = (char *)sub_21DE810(a1);
    ptr = v11;
    if ( !v11 )
      return v11;
    sub_20D8690((char **)(a1 + 16), (__int64 *)&ptr);
    v13 = *(unsigned __int8 **)a1;
    v8 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)a1 != v8 )
      goto LABEL_12;
  }
}
