__int64 __fastcall sub_63670(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v9; // rax
  __m128i v10; // xmm0
  char v11; // bl
  unsigned int v12; // r12d
  __int128 *v13; // rbx
  void *v14; // rdi
  const char *v16; // rsi
  __int128 v18; // [rsp+20h] [rbp-3B0h] BYREF
  __m128i v19; // [rsp+30h] [rbp-3A0h]
  void *v20; // [rsp+40h] [rbp-390h] BYREF
  __int128 v21; // [rsp+48h] [rbp-388h]
  void *v22; // [rsp+58h] [rbp-378h]
  __int128 v23; // [rsp+60h] [rbp-370h]
  __int64 v24; // [rsp+70h] [rbp-360h]
  __int64 v25; // [rsp+78h] [rbp-358h]
  __int128 v26; // [rsp+80h] [rbp-350h] BYREF
  void (__fastcall *v27)(__int128 *, __int128 *, __int64); // [rsp+90h] [rbp-340h]
  __int64 v28; // [rsp+98h] [rbp-338h]
  _DWORD v29[84]; // [rsp+A0h] [rbp-330h] BYREF
  __int128 v30; // [rsp+1F0h] [rbp-1E0h] BYREF
  void *v31; // [rsp+290h] [rbp-140h]
  __int128 v32; // [rsp+298h] [rbp-138h]
  __m128i si128; // [rsp+2A8h] [rbp-128h]
  int v34; // [rsp+2B8h] [rbp-118h]
  __int128 v35; // [rsp+2C0h] [rbp-110h]
  void *ptr[2]; // [rsp+2D0h] [rbp-100h]
  __int128 v37; // [rsp+2E0h] [rbp-F0h]
  __int128 v38; // [rsp+2F0h] [rbp-E0h]
  __int64 v39; // [rsp+300h] [rbp-D0h]
  __int64 v40; // [rsp+308h] [rbp-C8h]
  __int64 v41; // [rsp+310h] [rbp-C0h]
  __int128 v42; // [rsp+318h] [rbp-B8h]
  _BYTE v43[88]; // [rsp+328h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+380h] [rbp-50h]
  char v45; // [rsp+388h] [rbp-48h]
  __int16 v46; // [rsp+390h] [rbp-40h]
  char v47; // [rsp+392h] [rbp-3Eh]
  unsigned __int64 v48; // [rsp+398h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a3 + 8) )
  {
    if ( !byte_1671A1 )
      sub_96F80(3342);
    BUG();
  }
  v27 = nullptr;
  memset(v29, 0, sizeof(v29));
  v20 = nullptr;
  v22 = nullptr;
  v24 = 0;
  v25 = 0;
  v28 = 0;
  v29[10] = 2;
  v29[24] = 2;
  v29[38] = 2;
  v29[52] = 2;
  v29[66] = 2;
  v29[80] = 2;
  v31 = nullptr;
  v34 = 64;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v21 = 0;
  v23 = 0;
  v26 = 0;
  v30 = 0;
  v32 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1302D0);
  v35 = 0;
  *(_OWORD *)ptr = 0;
  v37 = 0;
  v38 = 0;
  v42 = 0;
  memset(v43, 0, sizeof(v43));
  v45 = 0;
  v44 = 0;
  v46 = 256;
  v47 = 0;
  v18 = 0;
  v9 = (_QWORD *)operator new(0x10u);
  v9[1] = a6;
  *(_QWORD *)&v18 = v9;
  v10 = _mm_loadl_epi64((const __m128i *)&off_163248);
  *v9 = off_163240;
  v19 = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)sub_62C50);
  v11 = sub_7C2C0(&v20, a2, a3, a1, a4, a5, *(double *)v19.m128i_i64, 0.0, &v18);
  if ( v19.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v19.m128i_i64[0])(&v18, &v18, 3);
  v12 = 0;
  if ( !v11 )
  {
    v16 = haystack;
    if ( (_QWORD)v21 )
      v16 = (const char *)v20;
    sub_8F890(0, v16);
    v12 = 33;
  }
  sub_78ED0(&v20);
  if ( ptr[1] )
  {
    *(_QWORD *)&v37 = 0;
    j__free(ptr[1]);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    j__free(v31);
  }
  v13 = &v30;
  do
  {
    v14 = *((void **)v13 - 3);
    v13 = (__int128 *)((char *)v13 - 56);
    sub_92380(v14);
  }
  while ( v13 != (__int128 *)v29 );
  if ( v27 )
    v27(&v26, &v26, 3);
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    j__free(v22);
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    j__free(v20);
  }
  return v12;
}

