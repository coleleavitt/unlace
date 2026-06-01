unsigned __int64 __fastcall sub_60A4E0(__int64 a1, char *a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbp
  signed int v8; // r15d
  char v9; // bp
  int v10; // eax
  char v11; // r9
  char *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbx
  char *v15; // rax
  void *v16; // rdi
  unsigned int v17; // r14d
  unsigned int v18; // ebx
  unsigned int v19; // eax
  __int64 *v20; // rdi
  char *v21; // rax
  char *v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rbx
  char *v25; // rax
  void *v26; // rdi
  char v28; // bp
  char *v29; // r13
  int v30; // eax
  int v31; // r8d
  int v32; // r9d
  const char *v33; // rcx
  char v34; // r9
  __m128i v35; // xmm0
  int v36; // eax
  int v37; // r9d
  int v38; // eax
  __int64 v39; // rcx
  char v40; // dl
  int v41; // eax
  char v42; // al
  __int64 *v43; // rbx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // [rsp+0h] [rbp-6138h]
  __int64 v48; // [rsp+8h] [rbp-6130h]
  __int64 v49; // [rsp+10h] [rbp-6128h]
  char v51; // [rsp+18h] [rbp-6120h]
  char v52; // [rsp+28h] [rbp-6110h]
  __m128i v53; // [rsp+30h] [rbp-6108h] BYREF
  char *v54; // [rsp+40h] [rbp-60F8h]
  unsigned __int8 v55; // [rsp+4Fh] [rbp-60E9h]
  unsigned int v56; // [rsp+5Ch] [rbp-60DCh] BYREF
  int v57[4]; // [rsp+60h] [rbp-60D8h] BYREF
  char *s1; // [rsp+70h] [rbp-60C8h] BYREF
  __int64 (__fastcall *v59)(unsigned int, void *, unsigned int); // [rsp+78h] [rbp-60C0h]
  unsigned int v60; // [rsp+80h] [rbp-60B8h]
  __int64 v61; // [rsp+88h] [rbp-60B0h]
  void *v62; // [rsp+90h] [rbp-60A8h] BYREF
  __int128 v63; // [rsp+98h] [rbp-60A0h]
  __int64 v64; // [rsp+A8h] [rbp-6090h]
  __int64 v65; // [rsp+B0h] [rbp-6088h]
  signed int v66; // [rsp+B8h] [rbp-6080h]
  __int16 v67; // [rsp+BCh] [rbp-607Ch]
  char v68; // [rsp+BEh] [rbp-607Ah]
  __int128 v69; // [rsp+C0h] [rbp-6078h] BYREF
  char *v70; // [rsp+D0h] [rbp-6068h]
  void **v71; // [rsp+D8h] [rbp-6060h]
  void *v72; // [rsp+E0h] [rbp-6058h]
  _BYTE v73[3]; // [rsp+E8h] [rbp-6050h]
  char s[4096]; // [rsp+F0h] [rbp-6048h] BYREF
  char v75[4096]; // [rsp+10F0h] [rbp-5048h] BYREF
  _BYTE v76[4096]; // [rsp+20F0h] [rbp-4048h] BYREF
  _BYTE dest[4096]; // [rsp+30F0h] [rbp-3048h] BYREF
  _BYTE v78[4096]; // [rsp+40F0h] [rbp-2048h] BYREF
  char v79; // [rsp+50F0h] [rbp-1048h] BYREF
  unsigned __int64 v80; // [rsp+60F8h] [rbp-40h]

  v6 = *(_QWORD **)(a1 + 1480);
  v47 = a1;
  v49 = a5;
  v80 = __readfsqword(0x28u);
  v48 = (__int64)(v6 + 280);
  v56 = a4;
  if ( a5 == 1 )
  {
    if ( a4 == -1 || (unsigned int)sub_79B840(&v56, a1, 0, 65) == -1 )
      return v80 - __readfsqword(0x28u);
    v8 = -2;
    v9 = 1;
    sub_615AB0(a1, 94, v56);
    LODWORD(v69) = v56;
    sub_79B440(v48, a1, 4294967294LL, &v69, 4, 65);
    v49 = 0;
  }
  else if ( a4 == -1 )
  {
    v8 = -1;
    v9 = 0;
  }
  else
  {
    *(_QWORD *)&v69 = 0;
    sub_6141A0(*v6, 26, &v69, 8);
    v17 = v69;
    v18 = DWORD1(v69);
    v19 = sub_3B9110(v6, v56);
    if ( v19 < v17 || v19 >= v18 )
    {
      if ( !under_debugger )
        interr(472);
      BUG();
    }
    if ( (unsigned int)sub_79B840(&v56, a1, 0, 65) == -1 && (unsigned int)sub_79B7E0(&v56, a1, 83) == -1 )
      return v80 - __readfsqword(0x28u);
    v9 = 0;
    v8 = sub_60A410(v48, a1, (__int64)a2, v56);
  }
  s[0] = 0;
  if ( a6 )
  {
    qstrncpy(s, a6, 4096);
    strrpl();
  }
  v67 = 0;
  v65 = a1;
  v62 = nullptr;
  v64 = 0;
  v66 = 0;
  v68 = 0;
  v70 = nullptr;
  v72 = nullptr;
  *(_WORD *)v73 = 256;
  v73[2] = 0;
  v71 = &v62;
  v63 = 0;
  v69 = 0;
  while ( 1 )
  {
    get_idp_name(v75);
    LOBYTE(v67) = 0;
    HIBYTE(v67) = v9;
    v66 = v8;
    v68 = 1;
    *(_QWORD *)&v69 = a2;
    *((_QWORD *)&v69 + 1) = s;
    v70 = v75;
    v10 = idt_open(&v69, sub_6081A0);
    v11 = (v10 == 0) | v9;
    if ( v11 )
      break;
    if ( !s[0] )
    {
      v28 = v73[1];
      goto LABEL_40;
    }
    v12 = strchr(s, 47);
    v13 = v63;
    if ( !v12 )
      v12 = s;
    v14 = 0;
    *v12 = 0;
    if ( v13 )
    {
      do
      {
        v15 = (char *)v62 + 24 * v14;
        v16 = *(void **)v15;
        if ( *(_QWORD *)v15 )
        {
          *((_QWORD *)v15 + 1) = 0;
          qfree(v16);
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v63 = 0;
  }
  if ( v9 )
    goto LABEL_26;
  v28 = v73[1];
  if ( !v10 )
  {
    if ( v73[1] )
      goto LABEL_26;
  }
  v11 = v10 == 0;
LABEL_40:
  v52 = v11;
  v59 = sub_606090;
  s1 = a2;
  v60 = v56;
  v61 = v49;
  if ( !v49 || (unsigned int)netnode_supnext(v56, 0, 65) == -1 )
    goto LABEL_26;
  v29 = s1;
  v30 = strcmp(s1, "KERNEL");
  v33 = "krnl386";
  if ( v30 )
    LODWORD(v33) = (_DWORD)v29;
  qsnprintf((int)v76, 4096, (int)"%s.*", (int)v33, v31, v32, v47);
  v53 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_2B089F0, (__m128i)(unsigned __int64)&s1);
  if ( sub_6141A0(v47, 97, dest, 4096) <= 0 )
  {
    qstrncpy(dest, ".", 4096);
    v35 = _mm_load_si128(&v53);
    v34 = v52;
  }
  else
  {
    qdirname(dest);
    v34 = v52;
    v35 = _mm_load_si128(&v53);
  }
  LOBYTE(v54) = v34;
  v53.m128i_i64[0] = (__int64)v57;
  *(__m128i *)v57 = v35;
  v36 = enumerate_files(v78, 4096, dest, v76);
  LOBYTE(v37) = (_BYTE)v54;
  if ( v36 )
    goto LABEL_47;
  v42 = getinf_flag(45, 16);
  v37 = (unsigned __int8)v54;
  if ( !v42 )
  {
    if ( !a3 )
    {
      v46 = *(_QWORD *)(v47 + 1480);
      if ( *(_QWORD *)(v46 + 2608) > 1u )
        a3 = *(_QWORD *)(v46 + 2600);
    }
    v43 = (__int64 *)&off_2B08C60;
    v54 = &v79;
    while ( 1 )
    {
      v44 = *v43;
      v55 = v37;
      qmakepath((int)v54, 4096, a3, v44, 0, v37, v47);
      v45 = enumerate_files(v78, 4096, v54, v76);
      v37 = v55;
      if ( v45 )
        break;
      if ( ++v43 == (__int64 *)&unk_2B08C80 )
        goto LABEL_61;
    }
LABEL_47:
    v51 = v37;
    v38 = sub_605D10(v53.m128i_i64[0], (__int64)v78);
    LOBYTE(v37) = v51;
    if ( v38 )
      sub_3840D0(1240, (__int64)v78, (__int64)v29, v39);
    if ( v28 )
      sub_384000(1239, (__int64)v78, (__int64)v29, v39);
    goto LABEL_49;
  }
LABEL_61:
  if ( !batch[0] && v28 )
  {
    set_file_ext(v76, 4096, v76, "dll");
    sub_3757B0();
  }
LABEL_49:
  if ( v73[1] != 1 && (_BYTE)v37 )
  {
    v66 = v8;
    v67 = 0;
    v68 = 0;
    *(_WORD *)&v73[1] = 257;
    idt_open(&v69, sub_6081A0);
  }
LABEL_26:
  if ( (_QWORD)v63 )
    sub_365330();
  if ( v8 == -2 )
  {
    v40 = sub_79BBD0(v48, v47, &s1, 4294967294LL, 65);
    v41 = -1;
    if ( v40 )
      v41 = (int)s1;
    v57[0] = v41;
    sub_79BCF0((int)v57);
    sub_79B4D0(v48, v47, 4294967294LL, 83);
    sub_79B4D0(v48, v47, 4294967294LL, 65);
  }
  else if ( v8 >= 0 )
  {
    v20 = *(__int64 **)(v47 + 1480);
    v21 = *(char **)(*v20 + 1480);
    LODWORD(v59) = v8;
    s1 = v21;
    sub_607FB0(v20, v8, (__int64 (__fastcall *)(__int64, const char *, _QWORD, __int64))&sub_60C6B0, (__int64)&s1);
    sub_514A50(3u, 1, (unsigned int)v8);
  }
  qfree(v72);
  v22 = (char *)v62;
  if ( v62 )
  {
    v23 = v63;
    if ( (_QWORD)v63 )
    {
      v24 = 0;
      do
      {
        v25 = &v22[24 * v24];
        v26 = *(void **)v25;
        if ( *(_QWORD *)v25 )
        {
          *((_QWORD *)v25 + 1) = 0;
          qfree(v26);
          v22 = (char *)v62;
        }
        ++v24;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v63 = 0;
    qfree(v22);
  }
  return v80 - __readfsqword(0x28u);
}

