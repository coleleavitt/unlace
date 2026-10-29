unsigned __int64 __fastcall sub_1B79350(
        __int64 *a1,
        int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __m128 a7,
        __m128 a8,
        int a9,
        __int64 a10,
        const __m128i *a11,
        __int64 a12,
        __int64 a13)
{
  unsigned __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 *v19; // r13
  __int64 v20; // r15
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  void *v26; // r13
  __int64 v27; // r14
  __int64 v28; // r15
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int128 v34; // rax
  __int64 v35; // rax
  __int128 v37; // [rsp-60h] [rbp-468h]
  __int128 v38; // [rsp+0h] [rbp-408h]
  __int128 v39; // [rsp+10h] [rbp-3F8h]
  __int128 v40; // [rsp+20h] [rbp-3E8h]
  __int128 v41; // [rsp+30h] [rbp-3D8h]
  __int128 v42; // [rsp+40h] [rbp-3C8h]
  __int128 v43; // [rsp+50h] [rbp-3B8h]
  __int64 v46; // [rsp+68h] [rbp-3A0h]
  __m128i v47; // [rsp+70h] [rbp-398h] BYREF
  __int64 v48; // [rsp+80h] [rbp-388h] BYREF
  void *v49; // [rsp+C0h] [rbp-348h]
  unsigned int v50; // [rsp+C8h] [rbp-340h]
  __int64 v51; // [rsp+D0h] [rbp-338h] BYREF
  void *v52; // [rsp+110h] [rbp-2F8h]
  unsigned int v53; // [rsp+118h] [rbp-2F0h]
  __int64 v54; // [rsp+120h] [rbp-2E8h] BYREF
  void *v55; // [rsp+160h] [rbp-2A8h]
  unsigned int v56; // [rsp+168h] [rbp-2A0h]
  __int64 v57; // [rsp+170h] [rbp-298h] BYREF
  void *v58; // [rsp+1B0h] [rbp-258h]
  unsigned int v59; // [rsp+1B8h] [rbp-250h]
  __int64 v60; // [rsp+1C0h] [rbp-248h] BYREF
  void *v61; // [rsp+200h] [rbp-208h]
  __int64 v62; // [rsp+210h] [rbp-1F8h] BYREF
  void *v63; // [rsp+250h] [rbp-1B8h]
  __int64 v64; // [rsp+260h] [rbp-1A8h] BYREF
  void *v65; // [rsp+2A0h] [rbp-168h]
  __int64 v66; // [rsp+2B0h] [rbp-158h] BYREF
  void *v67; // [rsp+2F0h] [rbp-118h]
  unsigned int v68; // [rsp+2F8h] [rbp-110h]
  __int64 v69; // [rsp+300h] [rbp-108h] BYREF
  void *v70; // [rsp+340h] [rbp-C8h]
  unsigned int v71; // [rsp+348h] [rbp-C0h]
  __int64 v72; // [rsp+350h] [rbp-B8h] BYREF
  void *v73; // [rsp+370h] [rbp-98h]
  unsigned int v74; // [rsp+378h] [rbp-90h]
  __int64 v75; // [rsp+380h] [rbp-88h] BYREF
  void *ptr; // [rsp+3A8h] [rbp-60h]
  __int64 v77; // [rsp+3C0h] [rbp-48h] BYREF

  sub_1AE6E40(&v47, a3, 0, 0);
  v15 = 0;
  if ( !(unsigned __int8)sub_1B74180(*a1, a1[1], 45, a2, a3, a10, (__int64)a11, a12, a13, (__int64)&v47) )
  {
    v18 = sub_1AE7340(*a1, (__int64)v73, v74, v16, v17, a7, a8);
    v19 = (unsigned __int64 *)v70;
    v20 = v71;
    v46 = v18;
    v21 = (_QWORD *)sub_168B6C0((__int64)a1);
    v25 = sub_1AE9A60(v21, v19, v20, v22, v23, v24);
    v26 = v49;
    v27 = v50;
    v28 = v25;
    *(_QWORD *)&v41 = v67;
    *((_QWORD *)&v41 + 1) = v68;
    *(_QWORD *)&v40 = v58;
    *((_QWORD *)&v40 + 1) = v59;
    *(_QWORD *)&v39 = v55;
    *((_QWORD *)&v39 + 1) = v56;
    *(_QWORD *)&v38 = v52;
    *((_QWORD *)&v38 + 1) = v53;
    v29 = (_QWORD *)sub_168B6C0((__int64)a1);
    *(_QWORD *)&v34 = sub_15AB9E0(a10, v29, v30, v31, v32, v33);
    *(_QWORD *)&v43 = v47.m128i_i64[0];
    *((_QWORD *)&v43 + 1) = v47.m128i_u32[2];
    v42 = v34;
    v35 = sub_168B6C0((__int64)a1);
    *((_QWORD *)&v37 + 1) = v27;
    *(_QWORD *)&v37 = v26;
    v15 = sub_EBE560(v35, a4, a5, a6, a9, a11, v43, v42, v37, v38, v39, v40, v41, v28, v46);
  }
  if ( ptr != &v77 )
    free(ptr);
  if ( v73 != &v75 )
    free(v73);
  if ( v70 != &v72 )
    free(v70);
  if ( v67 != &v69 )
    free(v67);
  if ( v65 != &v66 )
    free(v65);
  if ( v63 != &v64 )
    free(v63);
  if ( v61 != &v62 )
    free(v61);
  if ( v58 != &v60 )
    free(v58);
  if ( v55 != &v57 )
    free(v55);
  if ( v52 != &v54 )
    free(v52);
  if ( v49 != &v51 )
    free(v49);
  if ( (__int64 *)v47.m128i_i64[0] != &v48 )
    free((void *)v47.m128i_i64[0]);
  return v15;
}
