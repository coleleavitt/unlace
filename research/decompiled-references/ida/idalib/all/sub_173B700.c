void __fastcall sub_173B700(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        char a7,
        __int64 a8)
{
  __int64 v8; // r14
  __int64 v11; // r15
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r12
  int v21; // edx
  int v22; // eax
  __int64 *v23; // rdi
  __int64 v24; // rax
  __int64 (*v25)(void); // rdx
  __int64 v26; // rcx
  __int64 (*v27)(void); // rax
  __int64 v28; // rdx
  char v29; // r15
  char *v30; // rsi
  size_t v31; // rax
  __m128i *v32; // rdi
  __m128i *v33; // rdx
  char v34; // al
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int128 v41; // [rsp-10h] [rbp-408h]
  __int64 v44; // [rsp+20h] [rbp-3D8h]
  char v45; // [rsp+44h] [rbp-3B4h] BYREF
  __int64 v46; // [rsp+48h] [rbp-3B0h] BYREF
  __int64 *v47[6]; // [rsp+50h] [rbp-3A8h] BYREF
  void *v48; // [rsp+80h] [rbp-378h]
  int v49; // [rsp+88h] [rbp-370h]
  __int64 v50; // [rsp+8Ch] [rbp-36Ch]
  int v51; // [rsp+94h] [rbp-364h]
  void *v52; // [rsp+98h] [rbp-360h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-358h]
  __m128i v54; // [rsp+A8h] [rbp-350h] BYREF
  char v55; // [rsp+B8h] [rbp-340h]
  void *v56; // [rsp+C0h] [rbp-338h] BYREF
  int v57; // [rsp+C8h] [rbp-330h]
  __int64 v58; // [rsp+CCh] [rbp-32Ch] BYREF
  int v59; // [rsp+D4h] [rbp-324h]
  void *v60; // [rsp+D8h] [rbp-320h]
  __int64 v61; // [rsp+E0h] [rbp-318h]
  __m128i v62; // [rsp+E8h] [rbp-310h] BYREF
  char v63; // [rsp+F8h] [rbp-300h]
  char v64; // [rsp+100h] [rbp-2F8h]
  int v65; // [rsp+110h] [rbp-2E8h] BYREF
  char v66; // [rsp+114h] [rbp-2E4h]
  __int64 v67; // [rsp+118h] [rbp-2E0h]
  unsigned __int64 v68; // [rsp+120h] [rbp-2D8h]
  __int64 v69; // [rsp+128h] [rbp-2D0h]
  __int64 v70; // [rsp+130h] [rbp-2C8h]
  char v71; // [rsp+168h] [rbp-290h]
  char *v72; // [rsp+170h] [rbp-288h]
  __int64 v73; // [rsp+178h] [rbp-280h]
  int v74; // [rsp+180h] [rbp-278h]
  char v75; // [rsp+184h] [rbp-274h]
  char v76; // [rsp+188h] [rbp-270h] BYREF
  __int64 v77; // [rsp+1D0h] [rbp-228h] BYREF
  __int64 v78; // [rsp+1D8h] [rbp-220h]
  __int64 v79[9]; // [rsp+2B8h] [rbp-140h] BYREF
  int v80[62]; // [rsp+300h] [rbp-F8h] BYREF

  v8 = a4;
  v46 = a2;
  v45 = a7;
  if ( !a3 )
    goto LABEL_60;
  v11 = a3;
  if ( (*(_WORD *)a3 & 0x1FF) != 0x13 )
  {
    if ( !a4 || (*(_WORD *)a4 & 0x1FF) != 0x13 )
      goto LABEL_9;
    v13 = *(_DWORD *)(a4 + 4);
    if ( !v13 )
    {
      v8 = 0;
      goto LABEL_9;
    }
    goto LABEL_46;
  }
  v12 = *(_DWORD *)(a3 + 4);
  if ( !v12 )
  {
LABEL_60:
    if ( !a4 )
      return;
    if ( (*(_WORD *)a4 & 0x1FF) != 0x13 )
      return;
    v13 = *(_DWORD *)(a4 + 4);
    if ( !v13 )
      return;
    v11 = 0;
LABEL_46:
    v8 = *(_QWORD *)(a4 + 8LL * (unsigned int)(v13 - 1) + 24);
    goto LABEL_8;
  }
  v11 = *(_QWORD *)(a3 + 8LL * (unsigned int)(v12 - 1) + 24);
  if ( a4 && (*(_WORD *)a4 & 0x1FF) == 0x13 )
  {
    v13 = *(_DWORD *)(a4 + 4);
    if ( !v13 )
    {
      v8 = 0;
      goto LABEL_8;
    }
    goto LABEL_46;
  }
LABEL_8:
  if ( !v11 )
    return;
LABEL_9:
  if ( !a1[1] )
    return;
  v14 = sub_19C4DF0(*a1, v11, a6);
  if ( v14 == 1 )
    return;
  v19 = sub_17031A0(v14 & 0xFFFFFFFFFFFFFFFELL, a1 + 2, v15, v16, v17, v18);
  v20 = v19;
  if ( a6 )
  {
    v37 = sub_15B8100(a1 + 2, v19);
    if ( (v37 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      v20 = v37;
    v22 = 11;
  }
  else
  {
    v21 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL);
    v22 = 12;
    if ( (((_BYTE)v21 - 34) & 0xFD) != 0 )
      v22 = (unsigned int)(v21 - 35) < 2 ? 12 : 10;
  }
  v65 = v22;
  v23 = (__int64 *)a1[1];
  v72 = &v76;
  v66 = 0;
  v69 = 0;
  v70 = 0;
  v68 = v20;
  v67 = a8;
  v24 = *v23;
  v71 = 0;
  v25 = *(__int64 (**)(void))(v24 + 48);
  v75 = 1;
  v73 = 8;
  v74 = 0;
  if ( (char *)v25 == (char *)sub_15A1860 )
  {
    v26 = (__int64)(v23 + 3);
  }
  else
  {
    v38 = v25();
    v23 = (__int64 *)a1[1];
    v26 = v38;
    v24 = *v23;
  }
  v27 = *(__int64 (**)(void))(v24 + 40);
  if ( (char *)v27 == (char *)sub_15A1850 )
  {
    v28 = v23[6];
  }
  else
  {
    v44 = v26;
    v28 = v27();
    v26 = v44;
  }
  *((_QWORD *)&v41 + 1) = 0;
  *(_QWORD *)&v41 = sub_16FFA20;
  sub_16FF270((__int64)&v77, *a1, v28, v26, (unsigned int *)&v65, (__int64)sub_16FFA20, v41);
  v47[3] = (__int64 *)&v65;
  v47[2] = &v46;
  v47[4] = (__int64 *)&v45;
  v47[0] = a1;
  v47[1] = &v77;
  sub_16FF160((__int64)v79, (std::__detail::_List_node_base *)v79);
  v64 = 0;
  v29 = sub_173AA90(v47, v11, a6, (__int64)&v56);
  if ( v64 && v60 != &v62 )
    operator delete(v60);
  if ( (*(_BYTE *)(a1[1] + 8) & 0x40) == 0 )
    goto LABEL_31;
  v30 = ".";
  if ( !a6 )
    v30 = (char *)"->";
  v31 = j__strlen(v30);
  v52 = &v54;
  LODWORD(v48) = a5;
  HIDWORD(v48) = a5;
  v56 = (char *)&v58 + 4;
  v50 = 0;
  LOBYTE(v51) = 0;
  v53 = 0;
  v54.m128i_i8[0] = 0;
  v55 = 0;
  LOBYTE(v49) = 1;
  sub_1700210(&v56, v30, (__int64)&v30[v31]);
  sub_A0AAD0((__int64)&v52, &v56);
  if ( v56 != (char *)&v58 + 4 )
    operator delete(v56);
  v32 = (__m128i *)v52;
  v56 = v48;
  v33 = (__m128i *)v52;
  v57 = v49;
  v58 = v50;
  v59 = v51;
  v60 = &v62;
  if ( v52 != &v54 )
  {
    v52 = &v54;
    v60 = v32;
    v62.m128i_i64[0] = v54.m128i_i64[0];
    v54.m128i_i8[0] = 0;
    v61 = v53;
    v53 = 0;
    v63 = v55;
    v64 = 1;
    if ( !v8 )
      goto LABEL_51;
    goto LABEL_28;
  }
  v39 = v53;
  v64 = 1;
  v40 = _mm_loadu_si128(&v54);
  v53 = 0;
  v61 = v39;
  v62 = v40;
  v54.m128i_i8[0] = 0;
  v63 = v55;
  if ( v8 )
  {
LABEL_28:
    v34 = sub_173AA90(v47, v8, a6 ^ 1u, (__int64)&v56);
    v32 = (__m128i *)v52;
    v29 |= v34;
    if ( !v64 )
      goto LABEL_29;
    v33 = (__m128i *)v60;
LABEL_51:
    if ( v33 != &v62 )
      operator delete(v33);
    v32 = (__m128i *)v52;
  }
LABEL_29:
  if ( v32 != &v54 )
    operator delete(v32);
LABEL_31:
  sub_16FF8C0((__int64)v79, v79[1]);
  if ( v29 )
  {
    v35 = a1[1];
    v36 = 0;
    if ( v77 != v78 )
      v36 = v77;
    if ( v35 )
      sub_1700D50(*a1, v35, v80, v36, -1431655765 * ((v78 - v77) >> 5));
  }
  sub_1700A70((__int64)&v77);
  sub_17038E0((__int64)&v65);
}
