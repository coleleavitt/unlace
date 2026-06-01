__int64 __fastcall sub_8FC450(void *a1, void *a2, void *a3, __int64 a4, __int64 a5, __int64 a6, int a7)
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
  const char *v19; // rsi
  __m128i v20; // [rsp+10h] [rbp-718h] BYREF
  __m128i v21; // [rsp+20h] [rbp-708h]
  void *v22; // [rsp+30h] [rbp-6F8h] BYREF
  __int128 v23; // [rsp+38h] [rbp-6F0h]
  void *v24; // [rsp+48h] [rbp-6E0h]
  __int128 v25; // [rsp+50h] [rbp-6D8h]
  __int64 v26; // [rsp+60h] [rbp-6C8h]
  __int64 v27; // [rsp+68h] [rbp-6C0h]
  __int128 v28; // [rsp+70h] [rbp-6B8h] BYREF
  void (__fastcall *v29)(__int128 *, __int128 *, __int64, double, double); // [rsp+80h] [rbp-6A8h]
  __int64 v30; // [rsp+88h] [rbp-6A0h]
  _DWORD v31[84]; // [rsp+90h] [rbp-698h] BYREF
  __int128 v32; // [rsp+1E0h] [rbp-548h] BYREF
  void *v33; // [rsp+280h] [rbp-4A8h]
  __int128 v34; // [rsp+288h] [rbp-4A0h]
  __m128i si128; // [rsp+298h] [rbp-490h]
  int v36; // [rsp+2A8h] [rbp-480h]
  __int128 v37; // [rsp+2B0h] [rbp-478h]
  void *v38[2]; // [rsp+2C0h] [rbp-468h]
  __int128 v39; // [rsp+2D0h] [rbp-458h]
  __int128 v40; // [rsp+2E0h] [rbp-448h]
  __int64 v41; // [rsp+2F0h] [rbp-438h]
  __int64 v42; // [rsp+2F8h] [rbp-430h]
  __int64 v43; // [rsp+300h] [rbp-428h]
  __int128 v44; // [rsp+308h] [rbp-420h]
  _BYTE v45[88]; // [rsp+318h] [rbp-410h] BYREF
  __int64 v46; // [rsp+370h] [rbp-3B8h]
  char v47; // [rsp+378h] [rbp-3B0h]
  __int16 v48; // [rsp+380h] [rbp-3A8h]
  char v49; // [rsp+382h] [rbp-3A6h]
  void *v50; // [rsp+390h] [rbp-398h] BYREF
  __int128 v51; // [rsp+398h] [rbp-390h]
  void *v52; // [rsp+3A8h] [rbp-380h]
  __int128 v53; // [rsp+3B0h] [rbp-378h]
  __int64 v54; // [rsp+3C0h] [rbp-368h]
  __int64 v55; // [rsp+3C8h] [rbp-360h]
  __int128 v56; // [rsp+3D0h] [rbp-358h] BYREF
  void (__fastcall *v57)(__int128 *, __int128 *, __int64, double, double); // [rsp+3E0h] [rbp-348h]
  __int64 v58; // [rsp+3E8h] [rbp-340h]
  _DWORD v59[84]; // [rsp+3F0h] [rbp-338h] BYREF
  __int128 v60; // [rsp+540h] [rbp-1E8h] BYREF
  void *v61; // [rsp+5E0h] [rbp-148h]
  __int128 v62; // [rsp+5E8h] [rbp-140h]
  __m128i v63; // [rsp+5F8h] [rbp-130h]
  int v64; // [rsp+608h] [rbp-120h]
  __int128 v65; // [rsp+610h] [rbp-118h]
  void *ptr[2]; // [rsp+620h] [rbp-108h]
  __int128 v67; // [rsp+630h] [rbp-F8h]
  __int128 v68; // [rsp+640h] [rbp-E8h]
  __int64 v69; // [rsp+650h] [rbp-D8h]
  __int64 v70; // [rsp+658h] [rbp-D0h]
  __int64 v71; // [rsp+660h] [rbp-C8h]
  __int128 v72; // [rsp+668h] [rbp-C0h]
  _BYTE v73[88]; // [rsp+678h] [rbp-B0h] BYREF
  __int64 v74; // [rsp+6D0h] [rbp-58h]
  char v75; // [rsp+6D8h] [rbp-50h]
  __int16 v76; // [rsp+6E0h] [rbp-48h]
  char v77; // [rsp+6E2h] [rbp-46h]
  unsigned __int64 v78; // [rsp+6E8h] [rbp-40h]

  v7.m128i_i64[0] = 0;
  v78 = __readfsqword(0x28u);
  v23 = 0;
  v29 = nullptr;
  v22 = nullptr;
  v24 = nullptr;
  v26 = 0;
  v27 = 0;
  memset(v31, 0, sizeof(v31));
  v30 = 0;
  v31[10] = 2;
  v31[24] = 2;
  v31[38] = 2;
  v31[52] = 2;
  v25 = 0;
  v28 = 0;
  v31[66] = 2;
  memset(v45, 0, sizeof(v45));
  v57 = nullptr;
  memset(v59, 0, sizeof(v59));
  v31[80] = 2;
  v33 = nullptr;
  v36 = 64;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 256;
  v49 = 0;
  v50 = nullptr;
  v52 = nullptr;
  v54 = 0;
  v55 = 0;
  v58 = 0;
  v59[10] = 2;
  v32 = 0;
  v34 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7C00);
  v37 = 0;
  *(_OWORD *)v38 = 0;
  v39 = 0;
  v40 = 0;
  v44 = 0;
  v51 = 0;
  v53 = 0;
  v56 = 0;
  v59[24] = 2;
  memset(v73, 0, sizeof(v73));
  v59[38] = 2;
  v59[52] = 2;
  v59[66] = 2;
  v59[80] = 2;
  v61 = nullptr;
  v64 = 64;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 256;
  v77 = 0;
  v60 = 0;
  v62 = 0;
  v63 = si128;
  v65 = 0;
  *(_OWORD *)ptr = 0;
  v67 = 0;
  v68 = 0;
  v72 = 0;
  if ( a5 )
  {
    if ( (unsigned __int8)sub_72CDE0((__int64)&v22, a3, a5) )
      goto LABEL_3;
LABEL_38:
    v19 = haystack;
    if ( (_QWORD)v23 )
      v19 = (const char *)v22;
    goto LABEL_40;
  }
  if ( !(unsigned __int8)sub_72CDA0((__int64)&v22, a3, 1u) )
    goto LABEL_38;
LABEL_3:
  if ( si128.m128i_i32[0] <= 6u )
  {
LABEL_4:
    v10 = 0;
    goto LABEL_5;
  }
  if ( !a4 )
  {
    if ( (unsigned __int8)sub_72CDA0((__int64)&v50, a2, 1u) )
    {
      if ( v63.m128i_i32[0] <= 6u )
        goto LABEL_4;
      goto LABEL_32;
    }
LABEL_44:
    v19 = haystack;
    if ( (_QWORD)v51 )
      v19 = (const char *)v50;
    goto LABEL_40;
  }
  if ( !(unsigned __int8)sub_72CDE0((__int64)&v50, a2, a4) )
    goto LABEL_44;
LABEL_32:
  v20 = 0;
  v16 = (_QWORD *)operator new(0x10u);
  v16[1] = a6;
  v20.m128i_i64[0] = (__int64)v16;
  v17 = _mm_loadl_epi64((const __m128i *)&off_2B3FF28);
  *v16 = off_2B3FF20;
  v7 = _mm_unpacklo_epi64(v17, (__m128i)(unsigned __int64)sub_8FC400);
  v21 = v7;
  v18 = sub_72D770((__int64 *)&v22, (__int64)&v50, a1, &v20, a7);
  if ( v21.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64, double, double))v21.m128i_i64[0])(
      &v20,
      &v20,
      3,
      *(double *)v7.m128i_i64,
      0.0);
  if ( v18 )
    goto LABEL_4;
  v19 = haystack;
  if ( (_QWORD)v23 )
    v19 = (const char *)v22;
LABEL_40:
  set_error_string(0, v19);
  v10 = 33;
LABEL_5:
  sub_72AFB0((__int64)&v50);
  if ( ptr[1] )
  {
    *(_QWORD *)&v67 = 0;
    qfree(ptr[1]);
  }
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v61);
  }
  v11 = &v60;
  do
  {
    v12 = *((void **)v11 - 3);
    v11 = (__int128 *)((char *)v11 - 56);
    close_linput(v12);
  }
  while ( v11 != (__int128 *)v59 );
  if ( v57 )
    v57(&v56, &v56, 3, *(double *)v7.m128i_i64, 0.0);
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v52);
  }
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v50);
  }
  sub_72AFB0((__int64)&v22);
  if ( v38[1] )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38[1]);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  v13 = &v32;
  do
  {
    v14 = *((void **)v13 - 3);
    v13 = (__int128 *)((char *)v13 - 56);
    close_linput(v14);
  }
  while ( v13 != (__int128 *)v31 );
  if ( v29 )
    v29(&v28, &v28, 3, *(double *)v7.m128i_i64, 0.0);
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  return v10;
}
