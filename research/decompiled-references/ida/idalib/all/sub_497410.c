__int64 __fastcall sub_497410(__int64 a1, _BYTE *a2, int a3, __int64 *a4, int a5)
{
  __int64 v5; // r12
  bool v6; // zf
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r12
  __int64 v18; // rbx
  const char *v19; // rsi
  const char *v20; // rdi
  void *v21; // r15
  void *v22; // rdi
  size_t v23; // r8
  void *v24; // r10
  void *v25; // rdi
  unsigned int v26; // [rsp+8h] [rbp-3B0h]
  void *v27; // [rsp+18h] [rbp-3A0h]
  __int64 v28; // [rsp+20h] [rbp-398h] BYREF
  __int128 v29; // [rsp+28h] [rbp-390h]
  void *v30; // [rsp+38h] [rbp-380h] BYREF
  __int128 v31; // [rsp+40h] [rbp-378h]
  __int64 v32; // [rsp+50h] [rbp-368h]
  __int128 v33; // [rsp+58h] [rbp-360h]
  __int64 v34; // [rsp+68h] [rbp-350h]
  __int128 v35; // [rsp+70h] [rbp-348h]
  __int64 v36; // [rsp+80h] [rbp-338h]
  __int128 v37; // [rsp+88h] [rbp-330h]
  int v38; // [rsp+98h] [rbp-320h]
  void *v39; // [rsp+A0h] [rbp-318h] BYREF
  __int128 v40; // [rsp+A8h] [rbp-310h]
  __int64 v41; // [rsp+B8h] [rbp-300h]
  __int128 v42; // [rsp+C0h] [rbp-2F8h]
  __int64 v43; // [rsp+D0h] [rbp-2E8h]
  char v44; // [rsp+D8h] [rbp-2E0h]
  __int64 v45; // [rsp+E0h] [rbp-2D8h] BYREF
  __int128 v46; // [rsp+E8h] [rbp-2D0h]
  __int64 v47; // [rsp+F8h] [rbp-2C0h]
  __int128 v48; // [rsp+100h] [rbp-2B8h]
  __int64 v49; // [rsp+110h] [rbp-2A8h]
  __int128 v50; // [rsp+118h] [rbp-2A0h]
  __int64 v51; // [rsp+128h] [rbp-290h]
  __int16 v52; // [rsp+130h] [rbp-288h]
  char v53; // [rsp+132h] [rbp-286h]
  __int64 v54; // [rsp+138h] [rbp-280h]
  __int128 v55; // [rsp+140h] [rbp-278h]
  _OWORD *v56; // [rsp+150h] [rbp-268h]
  __int64 v57; // [rsp+158h] [rbp-260h]
  __int64 v58; // [rsp+160h] [rbp-258h]
  __int64 v59; // [rsp+168h] [rbp-250h]
  __int64 v60; // [rsp+170h] [rbp-248h]
  __int64 v61; // [rsp+178h] [rbp-240h]
  _OWORD v62[2]; // [rsp+180h] [rbp-238h] BYREF
  __int64 v63; // [rsp+1A0h] [rbp-218h]
  __int128 v64; // [rsp+1A8h] [rbp-210h]
  __int64 v65; // [rsp+1B8h] [rbp-200h]
  __int16 v66; // [rsp+1C0h] [rbp-1F8h]
  __int64 v67; // [rsp+1D0h] [rbp-1E8h] BYREF
  __int128 v68; // [rsp+1D8h] [rbp-1E0h]
  void *src; // [rsp+1E8h] [rbp-1D0h] BYREF
  __int128 v70; // [rsp+1F0h] [rbp-1C8h]
  __int64 v71; // [rsp+200h] [rbp-1B8h]
  __int128 v72; // [rsp+208h] [rbp-1B0h]
  __int64 v73; // [rsp+218h] [rbp-1A0h]
  __int128 v74; // [rsp+220h] [rbp-198h]
  __int64 v75; // [rsp+230h] [rbp-188h]
  __int128 v76; // [rsp+238h] [rbp-180h]
  int v77; // [rsp+248h] [rbp-170h]
  void *dest; // [rsp+250h] [rbp-168h] BYREF
  __int128 v79; // [rsp+258h] [rbp-160h]
  __int64 v80; // [rsp+268h] [rbp-150h]
  __int128 v81; // [rsp+270h] [rbp-148h]
  __int64 v82; // [rsp+280h] [rbp-138h]
  char v83; // [rsp+288h] [rbp-130h]
  __int64 v84; // [rsp+290h] [rbp-128h] BYREF
  __int128 v85; // [rsp+298h] [rbp-120h]
  __int64 v86; // [rsp+2A8h] [rbp-110h]
  __int128 v87; // [rsp+2B0h] [rbp-108h]
  __int64 v88; // [rsp+2C0h] [rbp-F8h]
  __int128 v89; // [rsp+2C8h] [rbp-F0h]
  __int64 v90; // [rsp+2D8h] [rbp-E0h]
  __int16 v91; // [rsp+2E0h] [rbp-D8h]
  char v92; // [rsp+2E2h] [rbp-D6h]
  __int64 v93; // [rsp+2E8h] [rbp-D0h]
  __int128 v94; // [rsp+2F0h] [rbp-C8h]
  _OWORD *v95; // [rsp+300h] [rbp-B8h]
  __int64 v96; // [rsp+308h] [rbp-B0h]
  __int64 v97; // [rsp+310h] [rbp-A8h]
  __int64 v98; // [rsp+318h] [rbp-A0h]
  __int64 v99; // [rsp+320h] [rbp-98h]
  __int64 v100; // [rsp+328h] [rbp-90h]
  _OWORD v101[2]; // [rsp+330h] [rbp-88h] BYREF
  __int64 v102; // [rsp+350h] [rbp-68h]
  __int128 v103; // [rsp+358h] [rbp-60h]
  __int64 v104; // [rsp+368h] [rbp-50h]
  __int16 v105; // [rsp+370h] [rbp-48h]
  unsigned __int64 v106; // [rsp+378h] [rbp-40h]

  v5 = a3;
  v6 = *a2 == 0;
  v106 = __readfsqword(0x28u);
  v7 = *a4;
  if ( v6 )
    return (unsigned int)-((_BYTE)v7 != 0);
  result = 1;
  if ( (_BYTE)v7 )
  {
    v11 = switch_dbctx(*(int *)(a1 + 4LL * a5 + 16));
    v29 = 0;
    v52 = 0;
    v56 = v62;
    v28 = 0;
    v30 = nullptr;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 0;
    v39 = nullptr;
    v41 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v47 = 0;
    v49 = 0;
    v51 = -1;
    v53 = 0;
    v54 = 0;
    v57 = 1;
    v58 = 0;
    v59 = 0;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v40 = 0;
    v42 = 0;
    v46 = 0;
    v48 = 0;
    v50 = 0;
    v55 = 0;
    v60 = 1065353216;
    v12 = *(_QWORD *)(v11 + 1672);
    v66 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    memset(v62, 0, sizeof(v62));
    v64 = 0;
    v13 = *(_QWORD *)(v12 + 8);
    serialize_tinfo(&v30, 0, 0, a4, 272);
    sub_650F30(v12, v13, &v30, &v45, 0);
    v14 = v31;
    if ( !(_QWORD)v31 || (v23 = v31 - 1, (_QWORD)v31 == 1) )
    {
      *(_QWORD *)&v40 = 0;
    }
    else
    {
      v24 = v30;
      v25 = v39;
      if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)v31 )
      {
        v27 = v30;
        v39 = (void *)qvector_reserve(&v39, v39, v31, 1);
        v24 = v27;
        v25 = v39;
        v23 = v14 - 1;
      }
      *(_QWORD *)&v40 = v14;
      memmove(v25, v24, v23);
      *((char *)v39 + v14 - 1) = 0;
    }
    sub_650F30(v12, v13, &v39, 0, "__deleted_type__");
    v15 = switch_dbctx(*(int *)(a1 + 4 * v5 + 16));
    v83 = 0;
    v91 = 0;
    v95 = v101;
    v67 = 0;
    src = nullptr;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    dest = nullptr;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v88 = 0;
    v90 = -1;
    v92 = 0;
    v93 = 0;
    v96 = 1;
    v97 = 0;
    v98 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v79 = 0;
    v81 = 0;
    v85 = 0;
    v87 = 0;
    v89 = 0;
    v94 = 0;
    v99 = 1065353216;
    v16 = *(_QWORD *)(v15 + 1672);
    v105 = 0;
    v100 = 0;
    v102 = 0;
    v104 = 0;
    memset(v101, 0, sizeof(v101));
    v103 = 0;
    v17 = *(_QWORD *)(v16 + 8);
    serialize_tinfo(&src, 0, 0, a2, 272);
    sub_650F30(v16, v17, &src, &v84, 0);
    v18 = v70;
    if ( (unsigned __int64)v70 > 1 )
    {
      v21 = src;
      v22 = dest;
      if ( *((_QWORD *)&v79 + 1) < (unsigned __int64)v70 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v70, 1);
        v22 = dest;
      }
      *(_QWORD *)&v79 = v18;
      memmove(v22, v21, v18 - 1);
      *((char *)dest + v18 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v79 = 0;
    }
    sub_650F30(v16, v17, &dest, 0, "__deleted_type__");
    v19 = byte_23ADD24;
    if ( (_QWORD)v40 )
      v19 = (const char *)v39;
    v20 = byte_23ADD24;
    if ( (_QWORD)v79 )
      v20 = (const char *)dest;
    v26 = strcmp(v20, v19);
    sub_496580((__int64)&v67);
    sub_496580((__int64)&v28);
    return v26;
  }
  return result;
}
