__int64 __fastcall sub_870E70(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  char **exception; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v12; // rbp
  char *v13; // rdx
  unsigned int v14; // esi
  void *v15; // rax
  __m128i v16; // xmm0
  bool v17; // zf
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __int64 v27; // rbp
  __int64 (__fastcall *v28)(_DWORD *, _DWORD *, _QWORD *, int, int, int, int, int, int, __int64, __int64); // rax
  __m128i v29; // xmm0
  __int64 v30[2]; // [rsp+20h] [rbp-F8h] BYREF
  char v31[16]; // [rsp+30h] [rbp-E8h] BYREF
  int v32[4]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v33[2]; // [rsp+50h] [rbp-C8h]
  __m128i si128; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v35; // [rsp+70h] [rbp-A8h]
  __m128i v36; // [rsp+80h] [rbp-98h] BYREF
  __m128i v37; // [rsp+90h] [rbp-88h]
  int v38[4]; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v39; // [rsp+B0h] [rbp-68h]
  int v40[4]; // [rsp+C0h] [rbp-58h] BYREF
  __m128i v41; // [rsp+D0h] [rbp-48h]
  __m128i v42[3]; // [rsp+E0h] [rbp-38h] BYREF

  v8 = *(_QWORD *)(a2 + 16);
  memset(v31, 0, sizeof(v31));
  v33[0] = 0;
  v35 = 0u;
  v37 = 0u;
  v39 = 0u;
  v41 = 0u;
  v9 = *(_QWORD *)(v8 + 24);
  v33[1] = 0;
  *(_OWORD *)v30 = 0;
  *(_OWORD *)v32 = 0;
  si128 = 0;
  v36 = 0;
  *(_OWORD *)v38 = 0;
  *(_OWORD *)v40 = 0;
  if ( !v9 )
  {
LABEL_3:
    sub_180B130(a1);
    if ( (unsigned __int8)sub_186A530(0.0) )
    {
      sub_186A4C0(0.0);
      v10 = sub_180B150(a1, a2);
      sub_1648CA0(v10, *(_QWORD *)(a1 + 72), a2, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v10, "\n");
    }
    else
    {
      v27 = sub_180B150(a1, a2);
      sub_1648CA0(v27, *(_QWORD *)(a1 + 72), a2, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    sub_1872CE0("");
    sub_1873130(114, 236);
  }
  switch ( *(_DWORD *)(v9 + 4) )
  {
    case 0:
      sub_86F5A0(a1, (unsigned int *)a2);
      goto LABEL_6;
    case 3:
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      si128 = _mm_load_si128(v42);
      v35 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55758), (__m128i)(unsigned __int64)sub_86A430);
      sub_86FFC0(a1, a2, (__int64)&si128);
      goto LABEL_6;
    case 4:
      v42[0].m128i_i64[0] = a1;
      v15 = sub_86A5F0;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v30 = _mm_load_si128(v42);
      v16 = _mm_loadl_epi64((const __m128i *)&off_1C557C0);
      goto LABEL_79;
    case 5:
      sub_870860(a1, a2);
      goto LABEL_6;
    case 6:
      v42[0].m128i_i64[0] = a1;
      v15 = sub_86A610;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v30 = _mm_load_si128(v42);
      v16 = _mm_loadl_epi64((const __m128i *)&off_1C557C8);
      goto LABEL_79;
    case 7:
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      v24 = _mm_load_si128(v42);
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)v38 = v24;
      v39 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55868), (__m128i)(unsigned __int64)sub_86A810);
      *(__m128i *)v40 = _mm_load_si128(v42);
      v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55870), (__m128i)(unsigned __int64)sub_86A8B0);
      goto LABEL_72;
    case 8:
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      v23 = _mm_load_si128(v42);
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)v38 = v23;
      v39 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55858), (__m128i)(unsigned __int64)sub_86A7F0);
      *(__m128i *)v40 = _mm_load_si128(v42);
      v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55860), (__m128i)(unsigned __int64)sub_86A890);
      goto LABEL_72;
    case 9:
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      v21 = _mm_load_si128(v42);
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)v38 = v21;
      v39 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55878), (__m128i)(unsigned __int64)sub_86A830);
      *(__m128i *)v40 = _mm_load_si128(v42);
      v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55880), (__m128i)(unsigned __int64)sub_86A8D0);
      goto LABEL_72;
    case 0xA:
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      v26 = _mm_load_si128(v42);
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)v38 = v26;
      v39 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55888), (__m128i)(unsigned __int64)sub_86A850);
      *(__m128i *)v40 = _mm_load_si128(v42);
      v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55890), (__m128i)(unsigned __int64)sub_86A8F0);
      goto LABEL_72;
    case 0xB:
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      v25 = _mm_load_si128(v42);
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)v38 = v25;
      v39 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55898), (__m128i)(unsigned __int64)sub_86A870);
      *(__m128i *)v40 = _mm_load_si128(v42);
      v22 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C558A0), (__m128i)(unsigned __int64)sub_86A910);
LABEL_72:
      v41 = v22;
      sub_86C8E0((_QWORD *)a1, a2, (__int64)v38, (__int64)v40);
      goto LABEL_6;
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
      goto LABEL_8;
    case 0x11:
      v42[0].m128i_i64[0] = a1;
      v15 = sub_86A490;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v30 = _mm_load_si128(v42);
      v16 = _mm_loadl_epi64((const __m128i *)&off_1C55770);
      goto LABEL_79;
    case 0x12:
      v42[0].m128i_i64[0] = a1;
      v15 = sub_86A4B0;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v30 = _mm_load_si128(v42);
      v16 = _mm_loadl_epi64((const __m128i *)&off_1C55778);
      goto LABEL_79;
    case 0x13:
      v42[0].m128i_i64[0] = a1;
      v15 = sub_86A510;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v30 = _mm_load_si128(v42);
      v16 = _mm_loadl_epi64((const __m128i *)&off_1C55788);
      goto LABEL_79;
    case 0x14:
      v42[0].m128i_i64[0] = a1;
      v15 = sub_86A4F0;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v30 = _mm_load_si128(v42);
      v16 = _mm_loadl_epi64((const __m128i *)&off_1C55780);
      goto LABEL_79;
    case 0x15:
      v42[0].m128i_i64[0] = a1;
      v15 = sub_86A530;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v30 = _mm_load_si128(v42);
      v16 = _mm_loadl_epi64((const __m128i *)&off_1C55790);
      goto LABEL_79;
    case 0x16:
      sub_872860(a1, a2, a3, a4, a5, a6);
      goto LABEL_6;
    case 0x17:
      sub_872B60(a1, a2, a3, a4, a5, a6);
      goto LABEL_6;
    case 0x18:
      sub_872E60(a1, a2, a3, a4, a5, a6);
      goto LABEL_6;
    case 0x19:
      sub_873160(a1, a2, a3, a4, a5, a6);
      goto LABEL_6;
    case 0x1A:
      sub_873460(a1, a2, a3, a4, a5, a6);
      goto LABEL_6;
    case 0x1B:
      sub_873760(a1, a2, a3, a4, a5, a6);
      goto LABEL_6;
    case 0x1C:
      sub_873A60(a1, a2, a3, a4, a5, a6);
      goto LABEL_6;
    case 0x1D:
      sub_873D60(a1, a2, a3, a4, a5, a6);
      goto LABEL_6;
    case 0x1E:
      v42[0].m128i_i64[0] = a1;
      v15 = sub_86A630;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v30 = _mm_load_si128(v42);
      v16 = _mm_loadl_epi64((const __m128i *)&off_1C557D0);
      goto LABEL_79;
    case 0x1F:
      v42[0].m128i_i64[0] = a1;
      v15 = sub_86A650;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v30 = _mm_load_si128(v42);
      v16 = _mm_loadl_epi64((const __m128i *)&off_1C557D8);
      goto LABEL_79;
    case 0x20:
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      si128 = _mm_load_si128(v42);
      v35 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55750), (__m128i)(unsigned __int64)sub_86A3B0);
      sub_86FFC0(a1, a2, (__int64)&si128);
      goto LABEL_6;
    case 0x21:
      v42[0].m128i_i64[0] = a1;
      v15 = sub_86A670;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v30 = _mm_load_si128(v42);
      v16 = _mm_loadl_epi64((const __m128i *)&off_1C557E0);
      goto LABEL_79;
    case 0x22:
      v17 = *(_DWORD *)(a2 + 24) == 1;
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      v20 = _mm_load_si128(v42);
      if ( !v17 )
      {
        *(__m128i *)v30 = v20;
        v15 = sub_86A690;
        v16 = _mm_loadl_epi64((const __m128i *)&off_1C557F0);
        goto LABEL_79;
      }
      si128 = v20;
      v28 = sub_86A3D0;
      v29 = _mm_loadl_epi64((const __m128i *)&off_1C557E8);
      goto LABEL_93;
    case 0x23:
      v17 = *(_DWORD *)(a2 + 24) == 1;
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      v19 = _mm_load_si128(v42);
      if ( !v17 )
      {
        *(__m128i *)v30 = v19;
        v15 = sub_86A6B0;
        v16 = _mm_loadl_epi64((const __m128i *)&off_1C55800);
        goto LABEL_79;
      }
      si128 = v19;
      v35 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C557F8), (__m128i)(unsigned __int64)sub_86A3F0);
      sub_86FFC0(a1, a2, (__int64)&si128);
      goto LABEL_6;
    case 0x24:
      v17 = *(_DWORD *)(a2 + 24) == 1;
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      v18 = _mm_load_si128(v42);
      if ( v17 )
      {
        si128 = v18;
        v28 = sub_86A410;
        v29 = _mm_loadl_epi64((const __m128i *)&off_1C55808);
LABEL_93:
        v35 = _mm_unpacklo_epi64(v29, (__m128i)(unsigned __int64)v28);
        sub_86FFC0(a1, a2, (__int64)&si128);
      }
      else
      {
        *(__m128i *)v30 = v18;
        v15 = sub_86A6D0;
        v16 = _mm_loadl_epi64((const __m128i *)&off_1C55810);
LABEL_79:
        *(__m128i *)v31 = _mm_unpacklo_epi64(v16, (__m128i)(unsigned __int64)v15);
        sub_870370(a1, a2, (__int64)v30);
      }
      goto LABEL_6;
    case 0x25:
      sub_870B20((_QWORD *)a1, (unsigned int *)a2);
      goto LABEL_6;
    case 0x26:
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      v36 = _mm_load_si128(v42);
      v37 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55820), (__m128i)(unsigned __int64)sub_86A710);
      sub_870190(a1, a2, (__int64)&v36);
      goto LABEL_6;
    case 0x27:
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      v36 = _mm_load_si128(v42);
      v37 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55828), (__m128i)(unsigned __int64)sub_86A730);
      sub_870190(a1, a2, (__int64)&v36);
      goto LABEL_6;
    case 0x28:
      sub_870CF0(a1, (unsigned int *)a2);
      goto LABEL_6;
    case 0x29:
      sub_86CC60((_QWORD *)a1, (unsigned int *)a2);
      goto LABEL_6;
    case 0x2A:
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      si128 = _mm_load_si128(v42);
      v35 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55768), (__m128i)(unsigned __int64)sub_86A470);
      sub_86FFC0(a1, a2, (__int64)&si128);
      goto LABEL_6;
    case 0x2B:
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      si128 = _mm_load_si128(v42);
      v35 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55760), (__m128i)(unsigned __int64)sub_86A450);
      sub_86FFC0(a1, a2, (__int64)&si128);
      goto LABEL_6;
    case 0x2C:
      v42[0].m128i_i64[0] = a1;
      v15 = sub_86A6F0;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v30 = _mm_load_si128(v42);
      v16 = _mm_loadl_epi64((const __m128i *)&off_1C55818);
      goto LABEL_79;
    case 0x2D:
      v42[0].m128i_i64[0] = a1;
      v15 = sub_86A550;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v30 = _mm_load_si128(v42);
      v16 = _mm_loadl_epi64((const __m128i *)&off_1C55798);
      goto LABEL_79;
    case 0x2E:
      v42[0].m128i_i64[0] = a1;
      v15 = sub_86A570;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v30 = _mm_load_si128(v42);
      v16 = _mm_loadl_epi64((const __m128i *)&off_1C557A0);
      goto LABEL_79;
    case 0x2F:
      v42[0].m128i_i64[0] = a1;
      v15 = sub_86A590;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v30 = _mm_load_si128(v42);
      v16 = _mm_loadl_epi64((const __m128i *)&off_1C557A8);
      goto LABEL_79;
    case 0x30:
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      v36 = _mm_load_si128(v42);
      v37 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55830), (__m128i)(unsigned __int64)sub_86A750);
      sub_870190(a1, a2, (__int64)&v36);
      goto LABEL_6;
    case 0x31:
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      v36 = _mm_load_si128(v42);
      v37 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55838), (__m128i)(unsigned __int64)sub_86A770);
      sub_870190(a1, a2, (__int64)&v36);
      goto LABEL_6;
    case 0x32:
      v42[0].m128i_i64[0] = a1;
      v15 = sub_86A5B0;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v30 = _mm_load_si128(v42);
      v16 = _mm_loadl_epi64((const __m128i *)&off_1C557B0);
      goto LABEL_79;
    case 0x33:
      v42[0].m128i_i64[0] = a1;
      v15 = sub_86A5D0;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v30 = _mm_load_si128(v42);
      v16 = _mm_loadl_epi64((const __m128i *)&off_1C557B8);
      goto LABEL_79;
    case 0x34:
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v32 = _mm_load_si128(v42);
      *(__m128i *)v33 = _mm_unpacklo_epi64(
                          _mm_loadl_epi64((const __m128i *)&off_1C55840),
                          (__m128i)(unsigned __int64)sub_86A790);
      sub_86DEA0(a1, a2, (__int64)v32);
      goto LABEL_6;
    case 0x35:
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v32 = _mm_load_si128(v42);
      *(__m128i *)v33 = _mm_unpacklo_epi64(
                          _mm_loadl_epi64((const __m128i *)&off_1C55848),
                          (__m128i)(unsigned __int64)sub_86A7B0);
      sub_86DEA0(a1, a2, (__int64)v32);
      goto LABEL_6;
    case 0x36:
      v42[0].m128i_i64[0] = a1;
      *(__m128i *)((char *)v42 + 8) = 0;
      *(__m128i *)v32 = _mm_load_si128(v42);
      *(__m128i *)v33 = _mm_unpacklo_epi64(
                          _mm_loadl_epi64((const __m128i *)&off_1C55850),
                          (__m128i)(unsigned __int64)sub_86A7D0);
      sub_86DEA0(a1, a2, (__int64)v32);
      goto LABEL_6;
    case 0x3F:
      sub_86B670(a1, (unsigned int *)a2);
      goto LABEL_6;
    case 0x40:
      sub_86FE00((_QWORD *)a1, a2);
      goto LABEL_6;
    case 0x41:
      v12 = sub_7E4F00(a1, (unsigned int *)a2);
      v13 = (char *)(v12 + 88);
      if ( *(int *)(v12 + 88) >> 8 == -1 )
        goto LABEL_90;
      break;
    case 0x42:
      sub_86E140(a1, (unsigned int *)a2);
      goto LABEL_6;
    case 0x43:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v42[0].m128i_i64, "sbv_to_int is not handled. Pre-processing should have removed it");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v42);
      sub_233E40((__int64)v42);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    case 0x44:
      sub_86B340(a1, a2);
      goto LABEL_6;
    case 0x45:
      sub_86B420(a1, a2);
      goto LABEL_6;
    default:
      goto LABEL_3;
  }
  do
  {
    if ( *v13 == *(_DWORD *)(a1 + 12) )
    {
      v14 = *(int *)v13 >> 8;
      goto LABEL_27;
    }
    v13 = *((char **)v13 + 1);
  }
  while ( v13 );
LABEL_90:
  v14 = -1;
LABEL_27:
  sub_86BD80((_QWORD *)a1, v14);
  sub_86BFC0((unsigned int *)a1, *(_QWORD *)(v12 + 176));
  sub_86C0A0(a1, a2);
LABEL_6:
  if ( v41.m128i_i64[0] )
    ((void (__fastcall *)(int *, int *, __int64))v41.m128i_i64[0])(v40, v40, 3);
LABEL_8:
  if ( v39.m128i_i64[0] )
    ((void (__fastcall *)(int *, int *, __int64))v39.m128i_i64[0])(v38, v38, 3);
  if ( v37.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v37.m128i_i64[0])(&v36, &v36, 3);
  if ( v35.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v35.m128i_i64[0])(&si128, &si128, 3);
  if ( v33[0] )
    ((void (__fastcall *)(int *, int *, __int64))v33[0])(v32, v32, 3);
  if ( *(_QWORD *)v31 )
    (*(void (__fastcall **)(__int64 *, __int64 *, __int64))v31)(v30, v30, 3);
  return 1;
}

