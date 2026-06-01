__int64 __fastcall sub_62D50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, unsigned int a7)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // r13d
  __int128 *v12; // r12
  void *v13; // rdi
  __int128 *v14; // rbp
  void *v15; // rdi
  _QWORD *v17; // rax
  __m128i v18; // xmm0
  char v19; // r15
  const char *v20; // rsi
  __int128 v21; // [rsp+10h] [rbp-718h] BYREF
  __m128i v22; // [rsp+20h] [rbp-708h]
  void *v23; // [rsp+30h] [rbp-6F8h] BYREF
  __int128 v24; // [rsp+38h] [rbp-6F0h]
  void *v25; // [rsp+48h] [rbp-6E0h]
  __int128 v26; // [rsp+50h] [rbp-6D8h]
  __int64 v27; // [rsp+60h] [rbp-6C8h]
  __int64 v28; // [rsp+68h] [rbp-6C0h]
  __int128 v29; // [rsp+70h] [rbp-6B8h] BYREF
  void (__fastcall *v30)(__int128 *, __int128 *, __int64); // [rsp+80h] [rbp-6A8h]
  __int64 v31; // [rsp+88h] [rbp-6A0h]
  _DWORD v32[84]; // [rsp+90h] [rbp-698h] BYREF
  __int128 v33; // [rsp+1E0h] [rbp-548h] BYREF
  void *v34; // [rsp+280h] [rbp-4A8h]
  __int128 v35; // [rsp+288h] [rbp-4A0h]
  __m128i si128; // [rsp+298h] [rbp-490h]
  int v37; // [rsp+2A8h] [rbp-480h]
  __int128 v38; // [rsp+2B0h] [rbp-478h]
  void *v39[2]; // [rsp+2C0h] [rbp-468h]
  __int128 v40; // [rsp+2D0h] [rbp-458h]
  __int128 v41; // [rsp+2E0h] [rbp-448h]
  __int64 v42; // [rsp+2F0h] [rbp-438h]
  __int64 v43; // [rsp+2F8h] [rbp-430h]
  __int64 v44; // [rsp+300h] [rbp-428h]
  __int128 v45; // [rsp+308h] [rbp-420h]
  _BYTE v46[88]; // [rsp+318h] [rbp-410h] BYREF
  __int64 v47; // [rsp+370h] [rbp-3B8h]
  char v48; // [rsp+378h] [rbp-3B0h]
  __int16 v49; // [rsp+380h] [rbp-3A8h]
  char v50; // [rsp+382h] [rbp-3A6h]
  void *v51; // [rsp+390h] [rbp-398h] BYREF
  __int128 v52; // [rsp+398h] [rbp-390h]
  void *v53; // [rsp+3A8h] [rbp-380h]
  __int128 v54; // [rsp+3B0h] [rbp-378h]
  __int64 v55; // [rsp+3C0h] [rbp-368h]
  __int64 v56; // [rsp+3C8h] [rbp-360h]
  __int128 v57; // [rsp+3D0h] [rbp-358h] BYREF
  void (__fastcall *v58)(__int128 *, __int128 *, __int64); // [rsp+3E0h] [rbp-348h]
  __int64 v59; // [rsp+3E8h] [rbp-340h]
  _DWORD v60[84]; // [rsp+3F0h] [rbp-338h] BYREF
  __int128 v61; // [rsp+540h] [rbp-1E8h] BYREF
  void *v62; // [rsp+5E0h] [rbp-148h]
  __int128 v63; // [rsp+5E8h] [rbp-140h]
  __m128i v64; // [rsp+5F8h] [rbp-130h]
  int v65; // [rsp+608h] [rbp-120h]
  __int128 v66; // [rsp+610h] [rbp-118h]
  void *ptr[2]; // [rsp+620h] [rbp-108h]
  __int128 v68; // [rsp+630h] [rbp-F8h]
  __int128 v69; // [rsp+640h] [rbp-E8h]
  __int64 v70; // [rsp+650h] [rbp-D8h]
  __int64 v71; // [rsp+658h] [rbp-D0h]
  __int64 v72; // [rsp+660h] [rbp-C8h]
  __int128 v73; // [rsp+668h] [rbp-C0h]
  _BYTE v74[88]; // [rsp+678h] [rbp-B0h] BYREF
  __int64 v75; // [rsp+6D0h] [rbp-58h]
  char v76; // [rsp+6D8h] [rbp-50h]
  __int16 v77; // [rsp+6E0h] [rbp-48h]
  char v78; // [rsp+6E2h] [rbp-46h]
  unsigned __int64 v79; // [rsp+6E8h] [rbp-40h]

  v79 = __readfsqword(0x28u);
  v24 = 0;
  v30 = nullptr;
  v23 = nullptr;
  v25 = nullptr;
  v27 = 0;
  v28 = 0;
  memset(v32, 0, sizeof(v32));
  v31 = 0;
  v32[10] = 2;
  v32[24] = 2;
  v32[38] = 2;
  v32[52] = 2;
  v26 = 0;
  v29 = 0;
  v32[66] = 2;
  memset(v46, 0, sizeof(v46));
  v58 = nullptr;
  memset(v60, 0, sizeof(v60));
  v32[80] = 2;
  v34 = nullptr;
  v37 = 64;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 256;
  v50 = 0;
  v51 = nullptr;
  v53 = nullptr;
  v55 = 0;
  v56 = 0;
  v59 = 0;
  v60[10] = 2;
  v33 = 0;
  v35 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1302D0);
  v38 = 0;
  *(_OWORD *)v39 = 0;
  v40 = 0;
  v41 = 0;
  v45 = 0;
  v52 = 0;
  v54 = 0;
  v57 = 0;
  v60[24] = 2;
  memset(v74, 0, sizeof(v74));
  v60[38] = 2;
  v60[52] = 2;
  v60[66] = 2;
  v60[80] = 2;
  v62 = nullptr;
  v65 = 64;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 256;
  v78 = 0;
  v61 = 0;
  v63 = 0;
  v64 = si128;
  v66 = 0;
  *(_OWORD *)ptr = 0;
  v68 = 0;
  v69 = 0;
  v73 = 0;
  if ( a5 )
  {
    if ( (unsigned __int8)sub_7A9E0(&v23, a3, a5, 0, 256, 0.0, 0.0) )
      goto LABEL_3;
LABEL_38:
    v20 = haystack;
    if ( (_QWORD)v24 )
      v20 = (const char *)v23;
    goto LABEL_40;
  }
  if ( !(unsigned __int8)sub_7A9A0(&v23, a3, 1, 0, 256, 0.0, 0.0) )
    goto LABEL_38;
LABEL_3:
  if ( si128.m128i_i32[0] <= 6u )
  {
LABEL_4:
    v11 = 0;
    goto LABEL_5;
  }
  if ( !a4 )
  {
    if ( (unsigned __int8)sub_7A9A0(&v51, a2, 1, v9, v10, 0.0, 0.0) )
    {
      if ( v64.m128i_i32[0] <= 6u )
        goto LABEL_4;
      goto LABEL_32;
    }
LABEL_44:
    v20 = haystack;
    if ( (_QWORD)v52 )
      v20 = (const char *)v51;
    goto LABEL_40;
  }
  if ( !(unsigned __int8)sub_7A9E0(&v51, a2, a4, v9, v10, 0.0, 0.0) )
    goto LABEL_44;
LABEL_32:
  v21 = 0;
  v17 = (_QWORD *)operator new(0x10u);
  v17[1] = a6;
  *(_QWORD *)&v21 = v17;
  v18 = _mm_loadl_epi64((const __m128i *)&off_163248);
  *v17 = off_163240;
  v22 = _mm_unpacklo_epi64(v18, (__m128i)(unsigned __int64)sub_62C50);
  v19 = sub_7B370(&v23, &v51, a1, &v21, a7);
  if ( v22.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v22.m128i_i64[0])(&v21, &v21, 3);
  if ( v19 )
    goto LABEL_4;
  v20 = haystack;
  if ( (_QWORD)v24 )
    v20 = (const char *)v23;
LABEL_40:
  sub_8F890(0, v20);
  v11 = 33;
LABEL_5:
  sub_78ED0(&v51);
  if ( ptr[1] )
  {
    *(_QWORD *)&v68 = 0;
    j__free(ptr[1]);
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    j__free(v62);
  }
  v12 = &v61;
  do
  {
    v13 = *((void **)v12 - 3);
    v12 = (__int128 *)((char *)v12 - 56);
    sub_92380(v13);
  }
  while ( v12 != (__int128 *)v60 );
  if ( v58 )
    v58(&v57, &v57, 3);
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    j__free(v53);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    j__free(v51);
  }
  sub_78ED0(&v23);
  if ( v39[1] )
  {
    *(_QWORD *)&v40 = 0;
    j__free(v39[1]);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    j__free(v34);
  }
  v14 = &v33;
  do
  {
    v15 = *((void **)v14 - 3);
    v14 = (__int128 *)((char *)v14 - 56);
    sub_92380(v15);
  }
  while ( v14 != (__int128 *)v32 );
  if ( v30 )
    v30(&v29, &v29, 3);
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    j__free(v25);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    j__free(v23);
  }
  return v11;
}

