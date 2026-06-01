unsigned __int64 __fastcall sub_1B79040(
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
  __int128 v37; // [rsp-50h] [rbp-448h]
  __int128 v38; // [rsp+0h] [rbp-3F8h]
  __int128 v39; // [rsp+10h] [rbp-3E8h]
  __int128 v40; // [rsp+20h] [rbp-3D8h]
  __int128 v41; // [rsp+30h] [rbp-3C8h]
  __int128 v42; // [rsp+40h] [rbp-3B8h]
  __int64 v45; // [rsp+58h] [rbp-3A0h]
  __m128i v46; // [rsp+60h] [rbp-398h] BYREF
  __int64 v47; // [rsp+70h] [rbp-388h] BYREF
  void *v48; // [rsp+B0h] [rbp-348h]
  unsigned int v49; // [rsp+B8h] [rbp-340h]
  __int64 v50; // [rsp+C0h] [rbp-338h] BYREF
  void *v51; // [rsp+100h] [rbp-2F8h]
  unsigned int v52; // [rsp+108h] [rbp-2F0h]
  __int64 v53; // [rsp+110h] [rbp-2E8h] BYREF
  void *v54; // [rsp+150h] [rbp-2A8h]
  unsigned int v55; // [rsp+158h] [rbp-2A0h]
  __int64 v56; // [rsp+160h] [rbp-298h] BYREF
  void *v57; // [rsp+1A0h] [rbp-258h]
  unsigned int v58; // [rsp+1A8h] [rbp-250h]
  __int64 v59; // [rsp+1B0h] [rbp-248h] BYREF
  void *v60; // [rsp+1F0h] [rbp-208h]
  __int64 v61; // [rsp+200h] [rbp-1F8h] BYREF
  void *v62; // [rsp+240h] [rbp-1B8h]
  __int64 v63; // [rsp+250h] [rbp-1A8h] BYREF
  void *v64; // [rsp+290h] [rbp-168h]
  __int64 v65; // [rsp+2A0h] [rbp-158h] BYREF
  void *v66; // [rsp+2E0h] [rbp-118h]
  __int64 v67; // [rsp+2F0h] [rbp-108h] BYREF
  void *v68; // [rsp+330h] [rbp-C8h]
  unsigned int v69; // [rsp+338h] [rbp-C0h]
  __int64 v70; // [rsp+340h] [rbp-B8h] BYREF
  void *v71; // [rsp+360h] [rbp-98h]
  unsigned int v72; // [rsp+368h] [rbp-90h]
  __int64 v73; // [rsp+370h] [rbp-88h] BYREF
  void *ptr; // [rsp+398h] [rbp-60h]
  __int64 v75; // [rsp+3B0h] [rbp-48h] BYREF

  sub_1AE6E40(&v46, a3, 0, 0);
  v15 = 0;
  if ( !(unsigned __int8)sub_1B74180(*a1, a1[1], 98, a2, a3, a10, (__int64)a11, a12, a13, (__int64)&v46) )
  {
    v18 = sub_1AE7340(*a1, (__int64)v71, v72, v16, v17, a7, a8);
    v19 = (unsigned __int64 *)v68;
    v20 = v69;
    v45 = v18;
    v21 = (_QWORD *)sub_168B6C0((__int64)a1);
    v25 = sub_1AE9A60(v21, v19, v20, v22, v23, v24);
    v26 = v48;
    v27 = v49;
    v28 = v25;
    *(_QWORD *)&v40 = v57;
    *((_QWORD *)&v40 + 1) = v58;
    *(_QWORD *)&v39 = v54;
    *((_QWORD *)&v39 + 1) = v55;
    *(_QWORD *)&v38 = v51;
    *((_QWORD *)&v38 + 1) = v52;
    v29 = (_QWORD *)sub_168B6C0((__int64)a1);
    *(_QWORD *)&v34 = sub_15AB9E0(a10, v29, v30, v31, v32, v33);
    *(_QWORD *)&v42 = v46.m128i_i64[0];
    *((_QWORD *)&v42 + 1) = v46.m128i_u32[2];
    v41 = v34;
    v35 = sub_168B6C0((__int64)a1);
    *((_QWORD *)&v37 + 1) = v27;
    *(_QWORD *)&v37 = v26;
    v15 = sub_EBE3F0(v35, a4, a5, a6, a9, a11, v42, v41, v37, v38, v39, v40, v28, v45);
  }
  if ( ptr != &v75 )
    free(ptr);
  if ( v71 != &v73 )
    free(v71);
  if ( v68 != &v70 )
    free(v68);
  if ( v66 != &v67 )
    free(v66);
  if ( v64 != &v65 )
    free(v64);
  if ( v62 != &v63 )
    free(v62);
  if ( v60 != &v61 )
    free(v60);
  if ( v57 != &v59 )
    free(v57);
  if ( v54 != &v56 )
    free(v54);
  if ( v51 != &v53 )
    free(v51);
  if ( v48 != &v50 )
    free(v48);
  if ( (__int64 *)v46.m128i_i64[0] != &v47 )
    free((void *)v46.m128i_i64[0]);
  return v15;
}
