__int64 __fastcall sub_6E9230(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r13
  size_t v9; // r12
  __int64 v10; // r15
  char *v11; // r14
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // ecx
  _QWORD *v15; // r8
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // r9
  int v20; // esi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rsi
  __int64 result; // rax
  __int64 v26; // rax
  _QWORD *v27; // rbp
  char *v28; // rdx
  void *v29; // rdi
  __int64 *v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rax
  unsigned __int64 v36; // rdx
  void *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // edx
  int v43; // esi
  __int64 v44; // rax
  __int64 v45; // rsi
  char *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // [rsp+0h] [rbp-A8h]
  unsigned int v49; // [rsp+14h] [rbp-94h]
  unsigned int v50; // [rsp+14h] [rbp-94h]
  _QWORD *v51; // [rsp+18h] [rbp-90h]
  _QWORD *v52; // [rsp+18h] [rbp-90h]
  unsigned __int64 v53; // [rsp+20h] [rbp-88h]
  char *v54; // [rsp+28h] [rbp-80h]
  unsigned __int64 v55; // [rsp+30h] [rbp-78h]
  char *v56; // [rsp+38h] [rbp-70h]
  unsigned __int64 v57; // [rsp+40h] [rbp-68h]
  char *v58; // [rsp+48h] [rbp-60h]
  unsigned __int64 v59; // [rsp+50h] [rbp-58h]
  char *v60; // [rsp+58h] [rbp-50h]
  unsigned __int64 v61; // [rsp+60h] [rbp-48h]
  char *v62; // [rsp+68h] [rbp-40h]

  v2 = sub_6BAA70(a1, "__NSConstantString_tag", 0x16u, 0);
  a1[191] = v2;
  sub_789630(v2);
  v3 = a1[270];
  v53 = 0;
  v55 = 0;
  v57 = 0;
  v4 = *(_DWORD *)(v3 + 380);
  v59 = 0;
  v61 = 0;
  if ( v4 > 2 )
  {
    v39 = sub_6CD020(a1, *(_DWORD *)(a1[2161] + 148LL));
    v53 = sub_6CDEF0(a1, v39);
    v54 = "_cfisa";
    v40 = sub_6CD020(a1, *(_DWORD *)(a1[2161] + 148LL));
    v55 = sub_6CDEF0(a1, v40);
    v41 = a1[2161];
    v56 = "_swift_rc";
    switch ( *(_DWORD *)(v41 + 168) )
    {
      case 0:
      case 2:
      case 4:
      case 6:
      case 8:
      case 9:
        v43 = 10;
        break;
      case 1:
        v43 = 2;
        break;
      case 3:
        v43 = 4;
        break;
      case 5:
        v43 = 6;
        break;
      case 7:
        v43 = 8;
        break;
    }
    v44 = sub_6CD020(a1, v43);
    v45 = a1[2311];
    v58 = v46;
    v57 = v44;
    v60 = "_ptr";
    v59 = sub_6C4160((__int64)a1, v45 | 1);
    if ( v4 - 5 > 1 )
    {
      v47 = sub_6CD020(a1, *(_DWORD *)(a1[2161] + 148LL));
      v61 = sub_6CDEF0(a1, v47);
    }
    else
    {
      v61 = a1[2320];
    }
    v62 = "_ptr";
    v5 = 5;
  }
  else
  {
    v5 = 4;
    v6 = sub_6C4160((__int64)a1, a1[2320] | 1LL);
    v7 = a1[2311];
    v53 = v6;
    v54 = "isa";
    v55 = a1[2320];
    v56 = "flags";
    v57 = sub_6C4160((__int64)a1, v7 | 1);
    v58 = "str";
    v59 = a1[2321];
    v60 = "length";
  }
  v8 = 0;
  v48 = v5;
  do
  {
    v9 = 0;
    v10 = a1[2168];
    v11 = (&v54)[2 * v8];
    if ( v11 )
      v9 = strlen((&v54)[2 * v8]);
    v12 = sub_25E2710(v11, v9);
    v13 = (unsigned int)sub_25E2870(v10, v11, v9, v12);
    v14 = v13;
    v15 = (_QWORD *)(*(_QWORD *)v10 + 8 * v13);
    v16 = *v15;
    if ( *v15 )
    {
      if ( v16 != -8 )
        goto LABEL_8;
      --*(_DWORD *)(v10 + 16);
    }
    v26 = *(_QWORD *)(v10 + 24);
    *(_QWORD *)(v10 + 104) += v9 + 17;
    v27 = (_QWORD *)((v26 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v28 = (char *)v27 + v9 + 17;
    if ( *(_QWORD *)(v10 + 32) >= (unsigned __int64)v28 && v26 )
    {
      *(_QWORD *)(v10 + 24) = v28;
    }
    else
    {
      v52 = v15;
      v50 = v14;
      v38 = sub_6A76A0(v10 + 24, v9 + 17, 3);
      v15 = v52;
      v14 = v50;
      v27 = (_QWORD *)v38;
    }
    v29 = v27 + 2;
    if ( v9 )
    {
      v51 = v15;
      v49 = v14;
      v37 = memcpy(v29, v11, v9);
      v15 = v51;
      v14 = v49;
      v29 = v37;
    }
    *((_BYTE *)v29 + v9) = 0;
    *v27 = v9;
    v27[1] = 0;
    *v15 = v27;
    ++*(_DWORD *)(v10 + 12);
    v30 = (__int64 *)(*(_QWORD *)v10 + 8LL * (unsigned int)sub_25E2C40(v10, v14));
    v16 = *v30;
    if ( !*v30 || v16 == -8 )
    {
      v31 = v30 + 1;
      do
      {
        do
          v16 = *v31++;
        while ( !v16 );
      }
      while ( v16 == -8 );
      v17 = *(_QWORD *)(v16 + 8);
      if ( v17 )
        goto LABEL_9;
      goto LABEL_27;
    }
LABEL_8:
    v17 = *(_QWORD *)(v16 + 8);
    if ( v17 )
      goto LABEL_9;
LABEL_27:
    v32 = *(_QWORD *)(v10 + 120);
    if ( !v32
      || (v33 = (*(__int64 (__fastcall **)(__int64, char *, size_t))(*(_QWORD *)v32 + 16LL))(v32, v11, v9),
          *(_QWORD *)(v16 + 8) = v33,
          LODWORD(v17) = v33,
          !v33) )
    {
      v34 = *(_QWORD *)(v10 + 24);
      *(_QWORD *)(v10 + 104) += 24LL;
      v35 = (_QWORD *)((v34 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( *(_QWORD *)(v10 + 32) >= (unsigned __int64)(v35 + 3) && v34 )
        *(_QWORD *)(v10 + 24) = v35 + 3;
      else
        v35 = (_QWORD *)sub_6A76A0(v10 + 24, 24, 3);
      v36 = *v35 & 0xFFFFFC0000000000LL;
      v35[1] = 0;
      *v35 = v36 | 0x1FFFC05;
      *(_QWORD *)(v16 + 8) = v35;
      v35[2] = v16;
      v17 = *(_QWORD *)(v16 + 8);
    }
LABEL_9:
    v18 = a1[191];
    v19 = *(&v53 + 2 * (unsigned int)v8);
    if ( v18 )
      v20 = v18 + 64;
    else
      v20 = 0;
    ++v8;
    v21 = sub_781470((_DWORD)a1, v20, 0, 0, v17, v19, 0, 0, 0, 0);
    *(_BYTE *)(v21 + 29) &= 0x9Fu;
    sub_7A0AA0(a1[191] + 64LL, v21);
  }
  while ( v48 != v8 );
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[191] + 104LL))(a1[191]);
  v22 = a1[191];
  v23 = *(_QWORD *)(v22 + 48);
  if ( v23 )
  {
    v24 = v23 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v42 = *(_BYTE *)(v22 + 28) & 0x7F;
    if ( (unsigned int)(v42 - 62) > 2 )
    {
      if ( (unsigned int)(v42 - 56) > 3 )
      {
        if ( (*(_BYTE *)(v22 + 28) & 0x7F) == 0x3C )
          v24 = sub_6E8C30((__int64)a1, a1[191]);
        else
          v24 = sub_6C7D80((__int64)a1, a1[191]);
      }
      else
      {
        v24 = sub_6E8B00((__int64)a1, a1[191]);
      }
    }
    else
    {
      v24 = sub_6DE140((__int64)a1, a1[191], 0);
    }
  }
  result = sub_6BAD90(a1, v24, "__NSConstantString", 0x12u);
  a1[192] = result;
  return result;
}

