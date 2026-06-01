__int64 __fastcall sub_2186500(__int64 a1, __int64 *a2)
{
  size_t v2; // rax
  size_t v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  size_t v12; // rax
  void **v13; // rbp
  void **v14; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // r14
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  size_t v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  size_t v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  size_t v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  size_t v44; // rax
  size_t v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  size_t v51; // rax
  unsigned __int64 v52; // rax
  size_t v53; // rax
  size_t v54; // rax
  void *v55; // rax
  __int64 v56; // rax
  size_t v57; // rax
  size_t v58; // rax
  size_t v59; // rax
  size_t v60; // rax
  size_t v61; // rax
  size_t v62; // rax
  size_t v63; // rax
  size_t v64; // rax
  size_t v65; // rax
  size_t v66; // rax
  char *v67; // rsi
  size_t v68; // rax
  size_t v69; // rax
  size_t v70; // rax
  size_t v71; // rax
  size_t v72; // rax
  size_t v73; // rax
  size_t v74; // rax
  size_t v75; // rax
  _QWORD *v76; // [rsp+0h] [rbp-128h] BYREF
  _QWORD *v77; // [rsp+8h] [rbp-120h] BYREF
  void *v78[2]; // [rsp+10h] [rbp-118h] BYREF
  __int64 v79; // [rsp+20h] [rbp-108h]
  _QWORD v80[7]; // [rsp+30h] [rbp-F8h] BYREF
  int v81; // [rsp+68h] [rbp-C0h]
  __int64 v82; // [rsp+70h] [rbp-B8h]
  _QWORD v83[5]; // [rsp+78h] [rbp-B0h] BYREF
  int v84; // [rsp+A0h] [rbp-88h]
  __int64 v85; // [rsp+A8h] [rbp-80h]
  __int128 v86; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v87; // [rsp+C0h] [rbp-68h]
  __int64 v88; // [rsp+C8h] [rbp-60h]
  __int64 v89; // [rsp+D0h] [rbp-58h]
  __int64 v90; // [rsp+D8h] [rbp-50h]
  __int16 v91; // [rsp+E0h] [rbp-48h]
  __int64 v92; // [rsp+E8h] [rbp-40h]
  __int64 v93; // [rsp+F0h] [rbp-38h]

  v2 = j__strlen(&byte_22F0C30);
  sub_22B0340(v78, &byte_22F0C30, v2);
  v3 = j__strlen("aeabi");
  v4 = (__int64 *)sub_220C6D0();
  v5 = *v4;
  v6 = v4[1];
  v80[2] = v3;
  v80[1] = "aeabi";
  v88 = v6;
  v91 = 1;
  v80[0] = &off_2C75288;
  v7 = *a2;
  v80[3] = v83;
  v81 = 1065353216;
  v84 = 1065353216;
  v87 = v5;
  v80[4] = 1;
  v80[5] = 0;
  v80[6] = 0;
  v82 = 0;
  v83[0] = 0;
  v83[1] = &v86;
  v83[2] = 1;
  v83[3] = 0;
  v83[4] = 0;
  v85 = 0;
  v86 = 0;
  v89 = 0;
  v90 = 0;
  v92 = 0;
  v93 = 0;
  (*(void (__fastcall **)(_QWORD **, __int64 *, _QWORD *))(v7 + 520))(&v76, a2, v80);
  if ( v76 )
  {
    v77 = v76;
    v76 = nullptr;
    sub_A0E8E0(&v77);
    if ( v77 )
      (*(void (__fastcall **)(_QWORD *))(*v77 + 8LL))(v77);
    v12 = j__strlen(&byte_22F0C30);
    sub_22B0340(a1, &byte_22F0C30, v12);
    if ( v76 )
      (*(void (__fastcall **)(_QWORD *))(*v76 + 8LL))(v76);
    goto LABEL_6;
  }
  v16 = sub_21831C0((__int64)v80, 6u, v8, v9, v10, v11);
  v20 = BYTE4(v16);
  if ( BYTE4(v16) )
    v20 = (_DWORD)v16 == 10;
  v21 = sub_21831C0((__int64)v80, 7u, HIDWORD(v16), v17, v18, v19);
  v25 = HIDWORD(v21);
  if ( BYTE4(v21) )
  {
    if ( (_DWORD)v21 == 77 )
    {
      v66 = j__strlen("mclass");
      v67 = "mclass";
    }
    else
    {
      if ( (_DWORD)v21 != 82 )
      {
        if ( (_DWORD)v21 == 65 )
        {
          v26 = j__strlen("aclass");
          sub_22B0360(v78, "aclass", v26, 1);
        }
        goto LABEL_22;
      }
      v66 = j__strlen("rclass");
      v67 = "rclass";
    }
    sub_22B0360(v78, v67, v66, 1);
    if ( v20 )
    {
      v68 = j__strlen("hwdiv");
      sub_22B0360(v78, "hwdiv", v68, 1);
    }
  }
LABEL_22:
  v27 = sub_21831C0((__int64)v80, 9u, v25, v22, v23, v24);
  v31 = HIDWORD(v27);
  if ( BYTE4(v27) )
  {
    if ( (_DWORD)v27 )
    {
      if ( (_DWORD)v27 == 2 )
      {
        v32 = j__strlen("thumb2");
        sub_22B0360(v78, "thumb2", v32, 1);
      }
    }
    else
    {
      v64 = j__strlen("thumb");
      sub_22B0360(v78, "thumb", v64, 0);
      v65 = j__strlen("thumb2");
      sub_22B0360(v78, "thumb2", v65, 0);
    }
  }
  v33 = sub_21831C0((__int64)v80, 0xAu, v31, v28, v29, v30);
  v37 = HIDWORD(v33);
  if ( BYTE4(v33) )
  {
    switch ( v33 )
    {
      case 0uLL:
        v59 = j__strlen("vfp2sp");
        sub_22B0360(v78, "vfp2sp", v59, 0);
        v60 = j__strlen("vfp3d16sp");
        sub_22B0360(v78, "vfp3d16sp", v60, 0);
        v61 = j__strlen("vfp4d16sp");
        sub_22B0360(v78, "vfp4d16sp", v61, 0);
        break;
      case 2uLL:
        v58 = j__strlen("vfp2");
        sub_22B0360(v78, "vfp2", v58, 1);
        break;
      case 3uLL:
      case 4uLL:
        v57 = j__strlen("vfp3");
        sub_22B0360(v78, "vfp3", v57, 1);
        break;
      case 5uLL:
      case 6uLL:
        v38 = j__strlen("vfp4");
        sub_22B0360(v78, "vfp4", v38, 1);
        break;
      default:
        break;
    }
  }
  v39 = sub_21831C0((__int64)v80, 0xCu, v37, v34, v35, v36);
  v43 = HIDWORD(v39);
  if ( BYTE4(v39) )
  {
    if ( (_DWORD)v39 == 1 )
    {
      v71 = j__strlen("neon");
      sub_22B0360(v78, "neon", v71, 1);
    }
    else if ( (_DWORD)v39 )
    {
      if ( (_DWORD)v39 == 2 )
      {
        v44 = j__strlen("neon");
        sub_22B0360(v78, "neon", v44, 1);
        v45 = j__strlen("fp16");
        sub_22B0360(v78, "fp16", v45, 1);
      }
    }
    else
    {
      v69 = j__strlen("neon");
      sub_22B0360(v78, "neon", v69, 0);
      v70 = j__strlen("fp16");
      sub_22B0360(v78, "fp16", v70, 0);
    }
  }
  v46 = sub_21831C0((__int64)v80, 0x30u, v43, v40, v41, v42);
  v50 = HIDWORD(v46);
  if ( BYTE4(v46) )
  {
    if ( (_DWORD)v46 == 1 )
    {
      v74 = j__strlen("mve.fp");
      sub_22B0360(v78, "mve.fp", v74, 0);
      v75 = j__strlen("mve");
      sub_22B0360(v78, "mve", v75, 1);
    }
    else if ( (_DWORD)v46 )
    {
      if ( (_DWORD)v46 == 2 )
      {
        v51 = j__strlen("mve.fp");
        sub_22B0360(v78, "mve.fp", v51, 1);
      }
    }
    else
    {
      v72 = j__strlen("mve");
      sub_22B0360(v78, "mve", v72, 0);
      v73 = j__strlen("mve.fp");
      sub_22B0360(v78, "mve.fp", v73, 0);
    }
  }
  v52 = sub_21831C0((__int64)v80, 0x2Cu, v50, v47, v48, v49);
  if ( BYTE4(v52) )
  {
    if ( (_DWORD)v52 == 1 )
    {
      v62 = j__strlen("hwdiv");
      sub_22B0360(v78, "hwdiv", v62, 0);
      v63 = j__strlen("hwdiv-arm");
      sub_22B0360(v78, "hwdiv-arm", v63, 0);
    }
    else if ( (_DWORD)v52 == 2 )
    {
      v53 = j__strlen("hwdiv");
      sub_22B0360(v78, "hwdiv", v53, 1);
      v54 = j__strlen("hwdiv-arm");
      sub_22B0360(v78, "hwdiv-arm", v54, 1);
    }
  }
  *(void **)a1 = v78[0];
  v55 = v78[1];
  *(_OWORD *)v78 = 0;
  *(_QWORD *)(a1 + 8) = v55;
  v56 = v79;
  v79 = 0;
  *(_QWORD *)(a1 + 16) = v56;
LABEL_6:
  v80[0] = &off_2C75288;
  sub_2182FA0((__int64)v80);
  v13 = (void **)v78[1];
  v14 = (void **)v78[0];
  if ( v78[1] != v78[0] )
  {
    do
    {
      while ( *v14 != v14 + 2 )
      {
        operator delete(*v14);
        v14 += 4;
        if ( v14 == v13 )
          goto LABEL_9;
      }
      v14 += 4;
    }
    while ( v13 != v14 );
LABEL_9:
    v14 = (void **)v78[0];
  }
  if ( v14 )
    operator delete(v14);
  return a1;
}
