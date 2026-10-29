unsigned __int64 __fastcall sub_6268A0(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbp
  int v8; // r15d
  char v9; // bp
  int v10; // eax
  char v11; // r9
  char *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbx
  char *v15; // rax
  void *v16; // rdi
  __int128 v17; // kr00_16
  unsigned __int64 v18; // rax
  __int64 *v19; // rdi
  char *v20; // rax
  char *v21; // rdx
  __int64 v22; // rbp
  __int64 v23; // rbx
  char *v24; // rax
  void *v25; // rdi
  char v27; // bp
  char *v28; // r13
  int v29; // eax
  int v30; // r8d
  int v31; // r9d
  const char *v32; // rcx
  char v33; // r9
  __m128i v34; // xmm0
  int v35; // eax
  int v36; // r9d
  int v37; // eax
  __int64 v38; // rcx
  char v39; // dl
  __int64 v40; // rax
  char v41; // al
  __int64 *v42; // rbx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rax
  __int64 v47; // [rsp+8h] [rbp-6130h]
  __int64 v48; // [rsp+10h] [rbp-6128h]
  char v50; // [rsp+18h] [rbp-6120h]
  char v51; // [rsp+28h] [rbp-6110h]
  __m128i v52; // [rsp+30h] [rbp-6108h] BYREF
  char *v53; // [rsp+40h] [rbp-60F8h]
  unsigned __int8 v54; // [rsp+4Fh] [rbp-60E9h]
  __int64 v55; // [rsp+58h] [rbp-60E0h] BYREF
  int v56[4]; // [rsp+60h] [rbp-60D8h] BYREF
  char *s1; // [rsp+70h] [rbp-60C8h] BYREF
  __int64 (__fastcall *v58)(__int64, void *, __int64); // [rsp+78h] [rbp-60C0h]
  __int64 v59; // [rsp+80h] [rbp-60B8h]
  __int64 v60; // [rsp+88h] [rbp-60B0h]
  void *v61; // [rsp+90h] [rbp-60A8h] BYREF
  __int128 v62; // [rsp+98h] [rbp-60A0h]
  __int64 v63; // [rsp+A8h] [rbp-6090h]
  __int64 v64; // [rsp+B0h] [rbp-6088h]
  int v65; // [rsp+B8h] [rbp-6080h]
  __int16 v66; // [rsp+BCh] [rbp-607Ch]
  char v67; // [rsp+BEh] [rbp-607Ah]
  __int128 v68; // [rsp+C0h] [rbp-6078h] BYREF
  char *v69; // [rsp+D0h] [rbp-6068h]
  void **v70; // [rsp+D8h] [rbp-6060h]
  void *v71; // [rsp+E0h] [rbp-6058h]
  _BYTE v72[3]; // [rsp+E8h] [rbp-6050h]
  char s[4096]; // [rsp+F0h] [rbp-6048h] BYREF
  char v74[4096]; // [rsp+10F0h] [rbp-5048h] BYREF
  _BYTE v75[4096]; // [rsp+20F0h] [rbp-4048h] BYREF
  _BYTE dest[4096]; // [rsp+30F0h] [rbp-3048h] BYREF
  _BYTE v77[4096]; // [rsp+40F0h] [rbp-2048h] BYREF
  char v78; // [rsp+50F0h] [rbp-1048h] BYREF
  unsigned __int64 v79; // [rsp+60F8h] [rbp-40h]

  v6 = *(_QWORD **)(a1 + 1672);
  v48 = a5;
  v79 = __readfsqword(0x28u);
  v47 = (__int64)(v6 + 291);
  v55 = a4;
  if ( a5 == 1 )
  {
    if ( a4 == -1 || sub_7BEBF0(&v55, a1, 0, 65) == -1 )
      return v79 - __readfsqword(0x28u);
    v8 = -2;
    v9 = 1;
    sub_632610(a1, 94, v55);
    *(_QWORD *)&v68 = v55;
    sub_7BE7C0(v47, a1, -2, &v68, 8, 65);
    v48 = 0;
  }
  else if ( a4 == -1 )
  {
    v8 = -1;
    v9 = 0;
  }
  else
  {
    v68 = 0;
    sub_630CA0(*v6, 26, &v68, 16);
    v17 = v68;
    v18 = sub_3BDE50(v6, v55);
    if ( v18 < (unsigned __int64)v17 || v18 >= *((_QWORD *)&v17 + 1) )
    {
      if ( !under_debugger )
        interr(472);
      BUG();
    }
    if ( sub_7BEBF0(&v55, a1, 0, 65) == -1 && sub_7BEB80(&v55, a1, 83) == -1 )
      return v79 - __readfsqword(0x28u);
    v9 = 0;
    v8 = sub_6267D0(v47, a1, (__int64)a2, v55);
  }
  s[0] = 0;
  if ( a6 )
  {
    qstrncpy(s, a6, 4096);
    strrpl(s, 92, 47);
  }
  v66 = 0;
  v64 = a1;
  v61 = nullptr;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v69 = nullptr;
  v71 = nullptr;
  *(_WORD *)v72 = 256;
  v72[2] = 0;
  v70 = &v61;
  v62 = 0;
  v68 = 0;
  while ( 1 )
  {
    get_idp_name(v74);
    LOBYTE(v66) = 0;
    HIBYTE(v66) = v9;
    v65 = v8;
    v67 = 1;
    *(_QWORD *)&v68 = a2;
    *((_QWORD *)&v68 + 1) = s;
    v69 = v74;
    v10 = idt_open(&v68, sub_6244D0);
    v11 = (v10 == 0) | v9;
    if ( v11 )
      break;
    if ( !s[0] )
    {
      v27 = v72[1];
      goto LABEL_40;
    }
    v12 = strchr(s, 47);
    v13 = v62;
    if ( !v12 )
      v12 = s;
    v14 = 0;
    *v12 = 0;
    if ( v13 )
    {
      do
      {
        v15 = (char *)v61 + 24 * v14;
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
    *(_QWORD *)&v62 = 0;
  }
  if ( v9 )
    goto LABEL_26;
  v27 = v72[1];
  if ( !v10 )
  {
    if ( v72[1] )
      goto LABEL_26;
  }
  v11 = v10 == 0;
LABEL_40:
  v51 = v11;
  v58 = sub_622370;
  s1 = a2;
  v59 = v55;
  v60 = v48;
  if ( !v48 || netnode_supnext(v55, 0, 65) == -1 )
    goto LABEL_26;
  v28 = s1;
  v29 = strcmp(s1, "KERNEL");
  v32 = "krnl386";
  if ( v29 )
    LODWORD(v32) = (_DWORD)v28;
  qsnprintf((unsigned int)v75, 4096, (unsigned int)"%s.*", (_DWORD)v32, v30, v31);
  v52 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_2B329B0, (__m128i)(unsigned __int64)&s1);
  if ( sub_630CA0(a1, 97, dest, 4096) <= 0 )
  {
    qstrncpy(dest, ".", 4096);
    v34 = _mm_load_si128(&v52);
    v33 = v51;
  }
  else
  {
    qdirname(dest);
    v33 = v51;
    v34 = _mm_load_si128(&v52);
  }
  LOBYTE(v53) = v33;
  v52.m128i_i64[0] = (__int64)v56;
  *(__m128i *)v56 = v34;
  v35 = enumerate_files(v77, 4096, dest, v75);
  LOBYTE(v36) = (_BYTE)v53;
  if ( v35 )
    goto LABEL_47;
  v41 = getinf_flag(45, 16);
  v36 = (unsigned __int8)v53;
  if ( !v41 )
  {
    if ( !a3 )
    {
      v45 = *(_QWORD *)(a1 + 1672);
      if ( *(_QWORD *)(v45 + 2808) > 1u )
        a3 = *(_QWORD *)(v45 + 2800);
    }
    v42 = (__int64 *)&off_2B32C20;
    v53 = &v78;
    while ( 1 )
    {
      v43 = *v42;
      v54 = v36;
      qmakepath((_DWORD)v53, 4096, a3, v43, 0, v36);
      v44 = enumerate_files(v77, 4096, v53, v75);
      v36 = v54;
      if ( v44 )
        break;
      if ( ++v42 == (__int64 *)&unk_2B32C40 )
        goto LABEL_61;
    }
LABEL_47:
    v50 = v36;
    v37 = sub_621FD0(v52.m128i_i64[0], (__int64)v77);
    LOBYTE(v36) = v50;
    if ( v37 )
      sub_387DF0(1240, (__int64)v77, (__int64)v28, v38);
    if ( v27 )
      sub_387D20(1239, (__int64)v77, (__int64)v28, v38);
    goto LABEL_49;
  }
LABEL_61:
  if ( !batch[0] && v27 )
  {
    set_file_ext(v75, 4096, v75, "dll");
    sub_379110();
  }
LABEL_49:
  if ( v72[1] != 1 && (_BYTE)v36 )
  {
    v65 = v8;
    v66 = 0;
    v67 = 0;
    *(_WORD *)&v72[1] = 257;
    idt_open(&v68, sub_6244D0);
  }
LABEL_26:
  if ( (_QWORD)v62 )
    sub_368890();
  if ( v8 == -2 )
  {
    v39 = sub_7BEFD0(v47, a1, &s1, -2, 65);
    v40 = -1;
    if ( v39 )
      v40 = (__int64)s1;
    *(_QWORD *)v56 = v40;
    sub_7BF0F0((int)v56);
    sub_7BE850(v47, a1, -2, 83);
    sub_7BE850(v47, a1, -2, 65);
  }
  else if ( v8 >= 0 )
  {
    v19 = *(__int64 **)(a1 + 1672);
    v20 = *(char **)(*v19 + 1672);
    LODWORD(v58) = v8;
    s1 = v20;
    sub_6242C0(
      v19,
      v8,
      (__int64 (__fastcall *)(unsigned __int64, const char *, __int64, __int64))&sub_628AE0,
      (__int64)&s1);
    sub_52CCE0(3u, 1, v8);
  }
  qfree(v71);
  v21 = (char *)v61;
  if ( v61 )
  {
    v22 = v62;
    if ( (_QWORD)v62 )
    {
      v23 = 0;
      do
      {
        v24 = &v21[24 * v23];
        v25 = *(void **)v24;
        if ( *(_QWORD *)v24 )
        {
          *((_QWORD *)v24 + 1) = 0;
          qfree(v25);
          v21 = (char *)v61;
        }
        ++v23;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)&v62 = 0;
    qfree(v21);
  }
  return v79 - __readfsqword(0x28u);
}
