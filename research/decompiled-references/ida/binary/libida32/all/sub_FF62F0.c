__int64 __fastcall sub_FF62F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  size_t v11; // rax
  size_t v12; // rax
  __int64 v13; // rcx
  size_t v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  void ***v18; // rbx
  void **v19; // r13
  void ***v20; // rbx
  size_t v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // esi
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // r15
  char *v28; // rdi
  size_t v29; // rdx
  void *v30; // rax
  void **v31; // rax
  void **v32; // rdx
  void **v33; // rdx
  void **v34; // rax
  void *v35; // rdx
  void *v36; // rax
  void ***v37; // rsi
  void ***v38; // rbx
  void **v39; // r13
  bool v41; // al
  void *v42; // [rsp+8h] [rbp-240h]
  void **v43; // [rsp+8h] [rbp-240h]
  void **v44; // [rsp+8h] [rbp-240h]
  void **v45; // [rsp+8h] [rbp-240h]
  char v47[8]; // [rsp+30h] [rbp-218h] BYREF
  char v48[8]; // [rsp+38h] [rbp-210h] BYREF
  __int64 v49; // [rsp+40h] [rbp-208h] BYREF
  __int64 v50; // [rsp+48h] [rbp-200h] BYREF
  __int64 v51; // [rsp+50h] [rbp-1F8h] BYREF
  __int64 v52; // [rsp+58h] [rbp-1F0h]
  int v53; // [rsp+60h] [rbp-1E8h]
  __int64 v54; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v55; // [rsp+78h] [rbp-1D0h]
  unsigned int v56; // [rsp+80h] [rbp-1C8h]
  void *v57; // [rsp+90h] [rbp-1B8h] BYREF
  void *s2; // [rsp+98h] [rbp-1B0h]
  __int64 v59; // [rsp+A0h] [rbp-1A8h]
  __int16 v60; // [rsp+A8h] [rbp-1A0h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-198h]
  __int64 v62; // [rsp+B8h] [rbp-190h]
  unsigned int v63; // [rsp+C0h] [rbp-188h]
  void **v64[3]; // [rsp+D0h] [rbp-178h] BYREF
  __int16 v65; // [rsp+E8h] [rbp-160h] BYREF
  __int64 v66; // [rsp+F0h] [rbp-158h]
  __int64 v67; // [rsp+F8h] [rbp-150h]
  int v68; // [rsp+100h] [rbp-148h]
  void **v69[3]; // [rsp+110h] [rbp-138h] BYREF
  _BYTE v70[40]; // [rsp+128h] [rbp-120h] BYREF
  void **v71[3]; // [rsp+150h] [rbp-F8h] BYREF
  _BYTE v72[40]; // [rsp+168h] [rbp-E0h] BYREF
  void **v73[3]; // [rsp+190h] [rbp-B8h] BYREF
  _BYTE v74[40]; // [rsp+1A8h] [rbp-A0h] BYREF
  void **v75[3]; // [rsp+1D0h] [rbp-78h] BYREF
  __int64 v76; // [rsp+1E8h] [rbp-60h] BYREF
  char v77; // [rsp+210h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 40) )
    sub_FE8FA0(a1);
  else
    sub_FF3300(a1);
  *(_BYTE *)(a1 + 40) = 0;
  sub_E35E20((void ***)&v57, "driver");
  sub_E35E20(v64, (char *)"name");
  sub_E35AF0((__int64)&v65, a2, a3);
  sub_E35E20(v69, "fullName");
  sub_E35AF0((__int64)v70, a4, a5);
  sub_E35E20(v71, "language");
  v11 = j__strlen("en-US");
  sub_E35AF0((__int64)v72, (__int64)"en-US", v11);
  sub_E35E20(v73, "version");
  sub_E35AF0((__int64)v74, a7, a8);
  sub_E35E20(v75, "informationUri");
  v12 = j__strlen("https://clang.llvm.org/docs/UsersManual.html");
  sub_E35AF0((__int64)&v76, (__int64)"https://clang.llvm.org/docs/UsersManual.html", v12);
  sub_FE9DE0((__int64)&v54, (__int64)v64, 5, v13, v14, v15);
  v60 = 7;
  v61 = v54;
  v62 = v55;
  v54 = 0;
  v63 = v56;
  v55 = 0;
  v56 = 0;
  sub_FE9990((__int64)&v51, (__int64)&v57, 1, 7, v16, v17);
  sub_2207560(&v60);
  if ( v57 )
    sub_FE8D40((void **)v57);
  v18 = (void ***)&v77;
  sub_E395A0(&v54);
  do
  {
    v18 -= 8;
    sub_2207560(v18 + 3);
    v19 = *v18;
    if ( *v18 )
    {
      if ( *v19 != v19 + 2 )
        operator delete(*v19);
      operator delete(v19, 0x20u);
    }
  }
  while ( v18 != v64 );
  v20 = v64;
  sub_E35E20(v64, "tool");
  v65 = 7;
  v66 = v51;
  v51 = 0;
  v67 = v52;
  v52 = 0;
  v68 = v53;
  v53 = 0;
  sub_E35E20(v69, "results");
  sub_2208910(v70, v47, 0);
  sub_E35E20(v71, "artifacts");
  sub_2208910(v72, v48, 0);
  sub_E35E20(v73, "columnKind");
  v21 = j__strlen("unicodeCodePoints");
  sub_E35AF0((__int64)v74, (__int64)"unicodeCodePoints", v21);
  v54 = 0;
  v55 = 0;
  v56 = 0;
  do
  {
    while ( (unsigned __int8)sub_E3A630(&v54, (__int64)v20, &v49) )
    {
      v20 += 8;
      if ( v20 == v75 )
        goto LABEL_32;
    }
    v50 = v49;
    v24 = 2 * v56;
    v25 = 3 * v56;
    v26 = v55 + 1;
    if ( 4 * ((int)v55 + 1) < (unsigned int)v25 )
    {
      v25 = v56 - HIDWORD(v55) - v26;
      if ( (unsigned int)v25 > v56 >> 3 )
        goto LABEL_16;
      v24 = v56;
    }
    sub_E3EDD0((__int64)&v54, v24, v56, v25, v22, v23);
    sub_E3A630(&v54, (__int64)v20, &v50);
    v26 = v55 + 1;
LABEL_16:
    LODWORD(v55) = v26;
    sub_E35C20((void ***)&v57, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
    v27 = v50;
    v28 = *(char **)(v50 + 8);
    if ( s2 == (void *)-1LL )
    {
      v41 = v28 + 1 == nullptr;
      goto LABEL_40;
    }
    if ( s2 == (void *)-2LL )
    {
      v41 = v28 + 2 == nullptr;
LABEL_40:
      if ( v41 )
        goto LABEL_21;
LABEL_41:
      --HIDWORD(v55);
      goto LABEL_21;
    }
    v29 = *(_QWORD *)(v50 + 16);
    if ( v59 != v29 || v29 && memcmp(v28, s2, v29) )
      goto LABEL_41;
LABEL_21:
    v30 = v57;
    if ( v57 )
    {
      if ( *(void **)v57 != (char *)v57 + 16 )
      {
        v42 = v57;
        operator delete(*(void **)v57);
        v30 = v42;
      }
      operator delete(v30, 0x20u);
    }
    v43 = *v20;
    if ( *v20 )
    {
      v31 = (void **)operator new(0x20u);
      v32 = v43;
      v44 = v31;
      *v31 = v31 + 2;
      sub_FE8D80(v31, *v32, (__int64)v32[1] + (_QWORD)*v32);
      v33 = *(void ***)v27;
      v34 = v44;
      *(_QWORD *)v27 = v44;
      if ( v33 )
      {
        if ( *v33 != v33 + 2 )
        {
          v45 = v33;
          operator delete(*v33);
          v33 = v45;
        }
        operator delete(v33, 0x20u);
        v34 = *(void ***)v27;
      }
      v35 = *v34;
      v36 = v34[1];
      *(_QWORD *)(v27 + 8) = v35;
      *(_QWORD *)(v27 + 16) = v36;
    }
    else
    {
      *(__m128i *)(v27 + 8) = _mm_loadu_si128((const __m128i *)(v20 + 1));
    }
    v37 = v20 + 3;
    v20 += 8;
    *(_WORD *)(v27 + 24) = 0;
    sub_2205840(v27 + 24, v37);
  }
  while ( v20 != v75 );
LABEL_32:
  v38 = v75;
  do
  {
    v38 -= 8;
    sub_2207560(v38 + 3);
    v39 = *v38;
    if ( *v38 )
    {
      if ( *v39 != v39 + 2 )
        operator delete(*v39);
      operator delete(v39, 0x20u);
    }
  }
  while ( v38 != v64 );
  sub_FE9150((char **)(a1 + 48), &v54);
  sub_E395A0(&v54);
  return sub_E395A0(&v51);
}

