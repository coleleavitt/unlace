__int64 __fastcall sub_8D8710(void *a1, void *a2, void *a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __m128i v7; // xmm0
  unsigned int v10; // r13d
  __int128 *v11; // r12
  void *v12; // rdi
  __int128 *v13; // rbp
  void *v14; // rdi
  _QWORD *v16; // rax
  __m128i v17; // xmm0
  char v18; // r15
  __m128i v19; // [rsp+10h] [rbp-718h] BYREF
  __m128i v20; // [rsp+20h] [rbp-708h]
  void *v21; // [rsp+30h] [rbp-6F8h] BYREF
  __int128 v22; // [rsp+38h] [rbp-6F0h]
  void *v23; // [rsp+48h] [rbp-6E0h]
  __int128 v24; // [rsp+50h] [rbp-6D8h]
  __int64 v25; // [rsp+60h] [rbp-6C8h]
  __int64 v26; // [rsp+68h] [rbp-6C0h]
  __int128 v27; // [rsp+70h] [rbp-6B8h] BYREF
  void (__fastcall *v28)(__int128 *, __int128 *, __int64, double, double); // [rsp+80h] [rbp-6A8h]
  __int64 v29; // [rsp+88h] [rbp-6A0h]
  _DWORD v30[84]; // [rsp+90h] [rbp-698h] BYREF
  __int128 v31; // [rsp+1E0h] [rbp-548h] BYREF
  void *v32; // [rsp+280h] [rbp-4A8h]
  __int128 v33; // [rsp+288h] [rbp-4A0h]
  __m128i si128; // [rsp+298h] [rbp-490h]
  int v35; // [rsp+2A8h] [rbp-480h]
  __int128 v36; // [rsp+2B0h] [rbp-478h]
  void *v37[2]; // [rsp+2C0h] [rbp-468h]
  __int128 v38; // [rsp+2D0h] [rbp-458h]
  __int128 v39; // [rsp+2E0h] [rbp-448h]
  __int64 v40; // [rsp+2F0h] [rbp-438h]
  __int64 v41; // [rsp+2F8h] [rbp-430h]
  __int64 v42; // [rsp+300h] [rbp-428h]
  __int128 v43; // [rsp+308h] [rbp-420h]
  _BYTE v44[88]; // [rsp+318h] [rbp-410h] BYREF
  __int64 v45; // [rsp+370h] [rbp-3B8h]
  char v46; // [rsp+378h] [rbp-3B0h]
  __int16 v47; // [rsp+380h] [rbp-3A8h]
  char v48; // [rsp+382h] [rbp-3A6h]
  void *v49; // [rsp+390h] [rbp-398h] BYREF
  __int128 v50; // [rsp+398h] [rbp-390h]
  void *v51; // [rsp+3A8h] [rbp-380h]
  __int128 v52; // [rsp+3B0h] [rbp-378h]
  __int64 v53; // [rsp+3C0h] [rbp-368h]
  __int64 v54; // [rsp+3C8h] [rbp-360h]
  __int128 v55; // [rsp+3D0h] [rbp-358h] BYREF
  void (__fastcall *v56)(__int128 *, __int128 *, __int64, double, double); // [rsp+3E0h] [rbp-348h]
  __int64 v57; // [rsp+3E8h] [rbp-340h]
  _DWORD v58[84]; // [rsp+3F0h] [rbp-338h] BYREF
  __int128 v59; // [rsp+540h] [rbp-1E8h] BYREF
  void *v60; // [rsp+5E0h] [rbp-148h]
  __int128 v61; // [rsp+5E8h] [rbp-140h]
  __m128i v62; // [rsp+5F8h] [rbp-130h]
  int v63; // [rsp+608h] [rbp-120h]
  __int128 v64; // [rsp+610h] [rbp-118h]
  void *ptr[2]; // [rsp+620h] [rbp-108h]
  __int128 v66; // [rsp+630h] [rbp-F8h]
  __int128 v67; // [rsp+640h] [rbp-E8h]
  __int64 v68; // [rsp+650h] [rbp-D8h]
  __int64 v69; // [rsp+658h] [rbp-D0h]
  __int64 v70; // [rsp+660h] [rbp-C8h]
  __int128 v71; // [rsp+668h] [rbp-C0h]
  _BYTE v72[88]; // [rsp+678h] [rbp-B0h] BYREF
  __int64 v73; // [rsp+6D0h] [rbp-58h]
  char v74; // [rsp+6D8h] [rbp-50h]
  __int16 v75; // [rsp+6E0h] [rbp-48h]
  char v76; // [rsp+6E2h] [rbp-46h]
  unsigned __int64 v77; // [rsp+6E8h] [rbp-40h]

  v7.m128i_i64[0] = 0;
  v77 = __readfsqword(0x28u);
  v22 = 0;
  v28 = nullptr;
  v21 = nullptr;
  v23 = nullptr;
  v25 = 0;
  v26 = 0;
  memset(v30, 0, sizeof(v30));
  v29 = 0;
  v30[10] = 2;
  v30[24] = 2;
  v30[38] = 2;
  v30[52] = 2;
  v24 = 0;
  v27 = 0;
  v30[66] = 2;
  memset(v44, 0, sizeof(v44));
  v56 = nullptr;
  memset(v58, 0, sizeof(v58));
  v30[80] = 2;
  v32 = nullptr;
  v35 = 64;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 256;
  v48 = 0;
  v49 = nullptr;
  v51 = nullptr;
  v53 = 0;
  v54 = 0;
  v57 = 0;
  v58[10] = 2;
  v31 = 0;
  v33 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2383BD0);
  v36 = 0;
  *(_OWORD *)v37 = 0;
  v38 = 0;
  v39 = 0;
  v43 = 0;
  v50 = 0;
  v52 = 0;
  v55 = 0;
  v58[24] = 2;
  memset(v72, 0, sizeof(v72));
  v58[38] = 2;
  v58[52] = 2;
  v58[66] = 2;
  v58[80] = 2;
  v60 = nullptr;
  v63 = 64;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 256;
  v76 = 0;
  v59 = 0;
  v61 = 0;
  v62 = si128;
  v64 = 0;
  *(_OWORD *)ptr = 0;
  v66 = 0;
  v67 = 0;
  v71 = 0;
  if ( a5 )
  {
    if ( !(unsigned __int8)sub_70C890((__int64)&v21, a3, a5) )
      goto LABEL_37;
  }
  else if ( !(unsigned __int8)sub_70C850((__int64)&v21, a3, 1u) )
  {
    goto LABEL_37;
  }
  if ( si128.m128i_i32[0] <= 6u )
  {
LABEL_4:
    v10 = 0;
    goto LABEL_5;
  }
  if ( a4 )
  {
    if ( !(unsigned __int8)sub_70C890((__int64)&v49, a2, a4) )
      goto LABEL_37;
  }
  else
  {
    if ( !(unsigned __int8)sub_70C850((__int64)&v49, a2, 1u) )
      goto LABEL_37;
    if ( v62.m128i_i32[0] <= 6u )
      goto LABEL_4;
  }
  v19 = 0;
  v16 = (_QWORD *)operator new(0x10u);
  v16[1] = a6;
  v19.m128i_i64[0] = (__int64)v16;
  v17 = _mm_loadl_epi64((const __m128i *)&off_2B15F88);
  *v16 = off_2B15F80;
  v7 = _mm_unpacklo_epi64(v17, (__m128i)(unsigned __int64)sub_8D86C0);
  v20 = v7;
  v18 = sub_70D210((__int64 *)&v21, (__int64)&v49, a1, &v19, a7);
  if ( v20.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64, double, double))v20.m128i_i64[0])(
      &v19,
      &v19,
      3,
      *(double *)v7.m128i_i64,
      0.0);
  if ( v18 )
    goto LABEL_4;
LABEL_37:
  set_error_string();
  v10 = 33;
LABEL_5:
  sub_70A9D0((__int64)&v49);
  if ( ptr[1] )
  {
    *(_QWORD *)&v66 = 0;
    qfree(ptr[1]);
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60);
  }
  v11 = &v59;
  do
  {
    v12 = *((void **)v11 - 3);
    v11 = (__int128 *)((char *)v11 - 56);
    close_linput(v12);
  }
  while ( v11 != (__int128 *)v58 );
  if ( v56 )
    v56(&v55, &v55, 3, *(double *)v7.m128i_i64, 0.0);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
  sub_70A9D0((__int64)&v21);
  if ( v37[1] )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37[1]);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  v13 = &v31;
  do
  {
    v14 = *((void **)v13 - 3);
    v13 = (__int128 *)((char *)v13 - 56);
    close_linput(v14);
  }
  while ( v13 != (__int128 *)v30 );
  if ( v28 )
    v28(&v27, &v27, 3, *(double *)v7.m128i_i64, 0.0);
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  return v10;
}

