void __fastcall sub_1BF1E70(
        _QWORD *a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        double a7,
        __m128 a8,
        unsigned __int64 *a9,
        unsigned __int64 a10,
        unsigned __int8 a11,
        char a12,
        char a13,
        char a14,
        char a15)
{
  char v17; // bp
  __int64 v18; // rdi
  unsigned __int8 v19; // bl
  char v20; // r13
  int v21; // eax
  unsigned int v22; // edx
  bool v23; // zf
  int v24; // r15d
  __int64 v25; // rsi
  __m128i *v26; // rbx
  __int64 v27; // rdi
  char v28; // al
  unsigned int v29; // edx
  __int8 v30; // r13
  bool v31; // al
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rdx
  char v37; // [rsp+1Ch] [rbp-2DCh]
  __m128i v38; // [rsp+20h] [rbp-2D8h] BYREF
  __m128i v39; // [rsp+30h] [rbp-2C8h] BYREF
  __m128i v40; // [rsp+40h] [rbp-2B8h] BYREF
  char v41; // [rsp+50h] [rbp-2A8h] BYREF
  unsigned __int8 v42; // [rsp+54h] [rbp-2A4h] BYREF
  __int64 v43; // [rsp+58h] [rbp-2A0h] BYREF
  unsigned __int64 v44; // [rsp+68h] [rbp-290h] BYREF
  __int64 v45; // [rsp+70h] [rbp-288h] BYREF
  __int64 v46; // [rsp+78h] [rbp-280h]
  _QWORD v47[8]; // [rsp+80h] [rbp-278h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-238h] BYREF
  unsigned int v49; // [rsp+D0h] [rbp-228h]
  __int16 v50; // [rsp+D4h] [rbp-224h]
  int v51; // [rsp+D8h] [rbp-220h]
  int v52; // [rsp+DCh] [rbp-21Ch]
  _QWORD *v53; // [rsp+E0h] [rbp-218h]
  __int64 v54; // [rsp+E8h] [rbp-210h]
  _QWORD v55[17]; // [rsp+F0h] [rbp-208h] BYREF
  __int64 v56; // [rsp+178h] [rbp-180h]
  __int64 v57; // [rsp+180h] [rbp-178h]
  __int64 v58; // [rsp+190h] [rbp-168h]
  __int64 v59; // [rsp+198h] [rbp-160h]
  int v60; // [rsp+1A8h] [rbp-150h]
  char v61; // [rsp+1ACh] [rbp-14Ch]
  _QWORD *v62; // [rsp+1B0h] [rbp-148h]
  __int64 v63; // [rsp+1B8h] [rbp-140h]
  _QWORD v64[12]; // [rsp+1C0h] [rbp-138h] BYREF
  _WORD v65[52]; // [rsp+220h] [rbp-D8h] BYREF
  __int64 *v66; // [rsp+288h] [rbp-70h]
  __int64 v67; // [rsp+290h] [rbp-68h]
  __int64 v68; // [rsp+298h] [rbp-60h] BYREF

  v17 = a12;
  v18 = a3;
  v43 = a3;
  v19 = a11;
  v37 = a15;
  v20 = a13;
  v42 = a6;
  v41 = a14;
  if ( !a12 )
  {
    if ( (sub_B97670(*(_QWORD *)(a3 + 48)) & 3) == 1 )
    {
      v33 = sub_1BD9C70((__int64)a2, 0, 0, 0);
      v34 = v43;
      *(_QWORD *)(v33 + 8) = a4;
      *(_QWORD *)v33 = *(_QWORD *)(v34 + 48);
      LODWORD(v34) = *(_DWORD *)(v33 + 104) & 0xFFFC03FE;
      BYTE1(v34) |= 0x28u;
      *(_DWORD *)(v33 + 104) = v34;
      return;
    }
    v18 = v43;
  }
  v21 = sub_B8D390(v18);
  v22 = a2[742];
  v51 = v21;
  v65[48] = 0;
  v49 = v22;
  v50 = 0;
  v53 = v55;
  v56 &= 0xFFFFFFFE00000000LL;
  v58 &= 0xFFFFFFFE00000000LL;
  v54 = 0x400000000LL;
  v62 = v64;
  v64[11] = 0x400000000LL;
  v67 = 0x400000000LL;
  v64[10] = v65;
  v47[1] = &v43;
  v66 = &v68;
  v48 = 0;
  v52 = 0;
  v55[16] = 0;
  v57 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v63 = 0x800000000LL;
  v64[8] = 0;
  v64[9] = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47[0] = a1;
  v47[2] = &a9;
  v23 = a2[743] == 4;
  v47[4] = &v45;
  v47[5] = &v42;
  v47[6] = &v41;
  v47[3] = a2;
  v24 = sub_1D78190(
          (_DWORD)a1,
          v43,
          a5,
          (_DWORD)a9,
          a10,
          (unsigned int)&v44,
          (__int64)&v48,
          v19,
          v37,
          0,
          0,
          0,
          v23,
          sub_1BEF900,
          v47);
  if ( v24 )
  {
    v25 = (unsigned int)v46;
    v26 = (__m128i *)sub_1BD9C70((__int64)a2, v46, v45, v46);
    v26->m128i_i64[1] = a4;
    v27 = *(_QWORD *)(v43 + 48);
    v26[6].m128i_i8[8] &= ~1u;
    v28 = 0;
    v26->m128i_i64[0] = v27;
    v29 = a2[744];
    if ( v29 )
    {
      v25 = *(_QWORD *)(v27 + 40);
      v28 = 1;
      if ( (*(_DWORD *)(v27 + 40) & 7) == 6 )
      {
        v25 &= 0xFFFFFFFFFFFFFFF8LL;
        v28 = *(_DWORD *)v25 != v29;
      }
    }
    if ( v41 == 1 )
      v28 |= 2u;
    v26[6].m128i_i8[9] = v26[6].m128i_i8[9] & 0xFC | v28 & 3;
    v30 = ((v20 & 1) << 6) | v26[6].m128i_i8[8] & 0xBB;
    v26[6].m128i_i8[8] = v30;
    v26[6].m128i_i8[8] = (16 * (a2[743] == 4)) | v30 & 0xEF;
    v31 = (*(_BYTE *)(v27 + 28) & 0x7Fu) - 35 <= 3
       && (unsigned __int8)sub_B98200((_QWORD *)v27, v25)
       && (*(_BYTE *)(v26->m128i_i64[0] + 28) & 0x7F) != 38;
    v26[6].m128i_i8[8] = (8 * v31) | v26[6].m128i_i8[8] & 0xF7;
    v26[6].m128i_i32[3] = a10;
    v32 = v26[6].m128i_i32[2] & 0xFFFC03FF;
    if ( v24 == 14 )
    {
      BYTE1(v32) |= 8u;
      v26[6].m128i_i32[2] = v32;
    }
    else
    {
      BYTE1(v32) |= 0xCu;
      v26[6].m128i_i32[2] = v32;
      sub_1BD97A0((__int64)&v38, a1[31], v24, (__int64 *)&v48);
      v26[7] = _mm_loadu_si128(&v38);
      v26[8] = _mm_loadu_si128(&v39);
      v26[9] = _mm_loadu_si128(&v40);
    }
  }
  else
  {
    sub_1BF10B0(a1, v44, a4, a9, a10, a2, (__m128)0LL, a8, v42, v19, v17, 0, v20, v45, v46, v41, v61, SHIBYTE(v50));
  }
  sub_19A2E00((__int64)&v48);
}
