unsigned __int64 __fastcall sub_1B78AF0(
        __int64 *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        const __m128i *a13,
        __int64 a14,
        __int64 a15)
{
  __int32 v15; // r15d
  __int64 v16; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r12
  __int64 v22; // rdx
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  unsigned __int64 *v27; // r14
  __int64 v28; // r12
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r14
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int128 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r13
  __int128 v42; // [rsp+0h] [rbp-488h]
  __int128 v43; // [rsp+10h] [rbp-478h]
  __int128 v44; // [rsp+20h] [rbp-468h]
  __int128 v45; // [rsp+30h] [rbp-458h]
  __int128 v46; // [rsp+40h] [rbp-448h]
  __int128 v47; // [rsp+50h] [rbp-438h]
  void *v48; // [rsp+60h] [rbp-428h]
  size_t n; // [rsp+68h] [rbp-420h]
  __int128 v50; // [rsp+70h] [rbp-418h]
  __int128 v51; // [rsp+80h] [rbp-408h]
  __int128 v52; // [rsp+90h] [rbp-3F8h]
  __int64 v55; // [rsp+A8h] [rbp-3E0h]
  void *v56[2]; // [rsp+B0h] [rbp-3D8h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-3C8h] BYREF
  __m128i v58; // [rsp+D0h] [rbp-3B8h] BYREF
  __int64 v59; // [rsp+E0h] [rbp-3A8h] BYREF
  __m128i v60; // [rsp+F0h] [rbp-398h] BYREF
  __int64 v61; // [rsp+100h] [rbp-388h] BYREF
  void *v62; // [rsp+140h] [rbp-348h]
  unsigned int v63; // [rsp+148h] [rbp-340h]
  __int64 v64; // [rsp+150h] [rbp-338h] BYREF
  void *v65; // [rsp+190h] [rbp-2F8h]
  unsigned int v66; // [rsp+198h] [rbp-2F0h]
  __int64 v67; // [rsp+1A0h] [rbp-2E8h] BYREF
  void *v68; // [rsp+1E0h] [rbp-2A8h]
  unsigned int v69; // [rsp+1E8h] [rbp-2A0h]
  __int64 v70; // [rsp+1F0h] [rbp-298h] BYREF
  void *v71; // [rsp+230h] [rbp-258h]
  unsigned int v72; // [rsp+238h] [rbp-250h]
  __int64 v73; // [rsp+240h] [rbp-248h] BYREF
  void *v74; // [rsp+280h] [rbp-208h]
  unsigned int v75; // [rsp+288h] [rbp-200h]
  __int64 v76; // [rsp+290h] [rbp-1F8h] BYREF
  void *v77; // [rsp+2D0h] [rbp-1B8h]
  unsigned int v78; // [rsp+2D8h] [rbp-1B0h]
  __int64 v79; // [rsp+2E0h] [rbp-1A8h] BYREF
  void *v80; // [rsp+320h] [rbp-168h]
  unsigned int v81; // [rsp+328h] [rbp-160h]
  __int64 v82; // [rsp+330h] [rbp-158h] BYREF
  void *v83; // [rsp+370h] [rbp-118h]
  __int64 v84; // [rsp+380h] [rbp-108h] BYREF
  void *v85; // [rsp+3C0h] [rbp-C8h]
  unsigned int v86; // [rsp+3C8h] [rbp-C0h]
  __int64 v87; // [rsp+3D0h] [rbp-B8h] BYREF
  void *v88; // [rsp+3F0h] [rbp-98h]
  unsigned int v89; // [rsp+3F8h] [rbp-90h]
  __int64 v90; // [rsp+400h] [rbp-88h] BYREF
  void *ptr; // [rsp+428h] [rbp-60h]
  size_t v92; // [rsp+430h] [rbp-58h]
  __int64 v93; // [rsp+440h] [rbp-48h] BYREF

  v15 = a4;
  v16 = a4 >> 32;
  if ( a9 && (_DWORD)a4 == 3 )
  {
    sub_168B9F0((__int64)&v60, a1, a6, 0x1217u, 0);
    sub_1AEE640(v56, 85, 0, 3u, nullptr, 0);
    v41 = sub_1682AF0((__int64)&v60, (__int64)v56);
    sub_1AF81E0(&v58, 0x55u);
    sub_1682AF0(v41, (__int64)&v58);
    if ( (__int64 *)v58.m128i_i64[0] != &v59 )
      operator delete((void *)v58.m128i_i64[0]);
    if ( v56[0] != &v57 )
      operator delete(v56[0]);
    goto LABEL_7;
  }
  if ( (_DWORD)a4 == 1 )
  {
    v18 = sub_1AE5FF0(a1[1]);
    if ( !v18
      || (v19 = (unsigned int)(*(_DWORD *)(v18 + 976) - 37), (unsigned int)v19 > 0x1E)
      || (v22 = 1073790979, !_bittest64(&v22, v19)) )
    {
      sub_168B9F0((__int64)&v60, a1, a9, 0x122Bu, 0);
LABEL_7:
      v20 = 0;
      sub_15F7200(&v60);
      return v20;
    }
  }
  sub_1AE6E40(&v60, a3, v15, v16);
  v23 = a3;
  v20 = 0;
  if ( !(unsigned __int8)sub_1B74180(*a1, a1[1], 85, a2, v23, a12, (__int64)a13, a14, a15, (__int64)&v60) )
  {
    v48 = ptr;
    n = v92;
    v26 = sub_1AE7340(*a1, (__int64)v88, v89, v24, v25, a7, a8);
    v27 = (unsigned __int64 *)v85;
    v28 = v86;
    v55 = v26;
    v29 = (_QWORD *)sub_168B6C0((__int64)a1);
    v33 = sub_1AE9A60(v29, v27, v28, v30, v31, v32);
    *(_QWORD *)&v52 = v62;
    *(_QWORD *)&v47 = v80;
    *((_QWORD *)&v52 + 1) = v63;
    *((_QWORD *)&v47 + 1) = v81;
    *(_QWORD *)&v46 = v77;
    *((_QWORD *)&v46 + 1) = v78;
    *(_QWORD *)&v45 = v74;
    *((_QWORD *)&v45 + 1) = v75;
    *(_QWORD *)&v44 = v71;
    *((_QWORD *)&v44 + 1) = v72;
    *(_QWORD *)&v43 = v68;
    *((_QWORD *)&v43 + 1) = v69;
    *(_QWORD *)&v42 = v65;
    *((_QWORD *)&v42 + 1) = v66;
    v34 = (_QWORD *)sub_168B6C0((__int64)a1);
    *(_QWORD *)&v39 = sub_15AB9E0(a12, v34, v35, v36, v37, v38);
    v50 = v39;
    *(_QWORD *)&v51 = v60.m128i_i64[0];
    *((_QWORD *)&v51 + 1) = v60.m128i_u32[2];
    v40 = sub_168B6C0((__int64)a1);
    v20 = sub_EBE170(
            v40,
            a5,
            a6,
            a9,
            a10,
            a11,
            v15,
            v51,
            v50,
            a13,
            v52,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v33,
            v55,
            v48,
            n,
            v16);
  }
  if ( ptr != &v93 )
    free(ptr);
  if ( v88 != &v90 )
    free(v88);
  if ( v85 != &v87 )
    free(v85);
  if ( v83 != &v84 )
    free(v83);
  if ( v80 != &v82 )
    free(v80);
  if ( v77 != &v79 )
    free(v77);
  if ( v74 != &v76 )
    free(v74);
  if ( v71 != &v73 )
    free(v71);
  if ( v68 != &v70 )
    free(v68);
  if ( v65 != &v67 )
    free(v65);
  if ( v62 != &v64 )
    free(v62);
  if ( (__int64 *)v60.m128i_i64[0] != &v61 )
    free((void *)v60.m128i_i64[0]);
  return v20;
}
