__int64 __fastcall sub_2F270(__int64 a1)
{
  unsigned int v1; // ebx
  int v4; // r12d
  int v5; // r15d
  __int64 v6; // rbp
  unsigned int v7; // r13d
  unsigned int v8; // ebp
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __m128 v19; // xmm0
  __int64 (__fastcall *v20)(); // rcx
  __int64 v21; // r8
  int v22; // r9d
  __int64 v23; // rax
  __int64 (__fastcall *v24)(); // rdx
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 (__fastcall **v27)(); // rdi
  __m128i v28; // xmm0
  __m128i *v29; // rsi
  __int64 v30; // rax
  unsigned int v31; // [rsp+8h] [rbp-3C0h]
  unsigned int v32; // [rsp+Ch] [rbp-3BCh]
  __int64 v33; // [rsp+10h] [rbp-3B8h]
  __int64 v34; // [rsp+18h] [rbp-3B0h] BYREF
  __int64 v35; // [rsp+20h] [rbp-3A8h]
  __int64 (__fastcall ***v36)(); // [rsp+28h] [rbp-3A0h]
  __int64 v37; // [rsp+30h] [rbp-398h]
  __int64 (__fastcall *v38)(); // [rsp+38h] [rbp-390h]
  __m128i v39; // [rsp+40h] [rbp-388h] BYREF
  __int64 v40; // [rsp+50h] [rbp-378h] BYREF
  __int64 v41; // [rsp+58h] [rbp-370h] BYREF
  __int64 (__fastcall **v42)(); // [rsp+60h] [rbp-368h] BYREF
  __m128i v43; // [rsp+68h] [rbp-360h] BYREF
  _QWORD v44[2]; // [rsp+80h] [rbp-348h] BYREF
  __m128i si128; // [rsp+90h] [rbp-338h]
  __int64 v46; // [rsp+A0h] [rbp-328h]
  int v47; // [rsp+A8h] [rbp-320h]
  char v48; // [rsp+ACh] [rbp-31Ch]
  __int64 v49; // [rsp+B0h] [rbp-318h]
  char v50; // [rsp+B8h] [rbp-310h]
  __int64 v51; // [rsp+C8h] [rbp-300h]
  __int128 v52; // [rsp+D0h] [rbp-2F8h]
  __m128i v53; // [rsp+E0h] [rbp-2E8h]
  char v54; // [rsp+F0h] [rbp-2D8h]
  __m128i v55; // [rsp+F8h] [rbp-2D0h]
  __int64 v56; // [rsp+108h] [rbp-2C0h]
  __int128 v57; // [rsp+110h] [rbp-2B8h]
  __int16 v58; // [rsp+120h] [rbp-2A8h]
  __int64 v59; // [rsp+148h] [rbp-280h]
  __int128 v60; // [rsp+150h] [rbp-278h]
  __int64 v61; // [rsp+160h] [rbp-268h]
  __int128 v62; // [rsp+168h] [rbp-260h]
  __int64 v63; // [rsp+178h] [rbp-250h]
  __int128 v64; // [rsp+180h] [rbp-248h]
  __int64 v65; // [rsp+190h] [rbp-238h]
  __int128 v66; // [rsp+198h] [rbp-230h]
  __int64 v67; // [rsp+1A8h] [rbp-220h]
  __int128 v68; // [rsp+1B0h] [rbp-218h]
  __int64 v69; // [rsp+1C0h] [rbp-208h]
  __int128 v70; // [rsp+1C8h] [rbp-200h]
  __int64 v71; // [rsp+1D8h] [rbp-1F0h]
  __int128 v72; // [rsp+1E0h] [rbp-1E8h]
  __int64 v73; // [rsp+1F0h] [rbp-1D8h]
  __int128 v74; // [rsp+1F8h] [rbp-1D0h]
  __int64 v75; // [rsp+208h] [rbp-1C0h]
  __int128 v76; // [rsp+210h] [rbp-1B8h]
  __int64 v77; // [rsp+220h] [rbp-1A8h]
  __int128 v78; // [rsp+228h] [rbp-1A0h]
  __int16 v79; // [rsp+238h] [rbp-190h]
  char v80; // [rsp+23Ah] [rbp-18Eh]
  int v81; // [rsp+23Ch] [rbp-18Ch]
  __int128 v82; // [rsp+240h] [rbp-188h]
  __int64 v83; // [rsp+250h] [rbp-178h]
  __int64 v84; // [rsp+258h] [rbp-170h]
  int v85; // [rsp+260h] [rbp-168h]
  __int64 v86; // [rsp+268h] [rbp-160h]
  __int128 v87; // [rsp+270h] [rbp-158h]
  __int64 v88; // [rsp+280h] [rbp-148h]
  char v89[40]; // [rsp+290h] [rbp-138h] BYREF
  __int64 v90; // [rsp+2B8h] [rbp-110h]
  int v91; // [rsp+2C0h] [rbp-108h]
  char v92[40]; // [rsp+2E0h] [rbp-E8h] BYREF
  __int64 v93; // [rsp+308h] [rbp-C0h]
  int v94; // [rsp+310h] [rbp-B8h]
  char v95[32]; // [rsp+330h] [rbp-98h] BYREF
  unsigned __int64 v96; // [rsp+350h] [rbp-78h]
  __int64 v97; // [rsp+358h] [rbp-70h]
  unsigned __int64 v98; // [rsp+388h] [rbp-40h]

  v98 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 161)
    && (unsigned __int8)sub_290B0(a1, "__PRELINK_INFO", "__kmod_start", v89)
    && (v4 = v90, v90)
    && (unsigned __int8)sub_290B0(a1, "__PRELINK_INFO", "__kmod_info", v92)
    && (v5 = v93, v93)
    && (v1 = sub_290B0(a1, "__TEXT_EXEC", "__text", v95), (_BYTE)v1)
    && (v33 = v97) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 120);
    v7 = v6 + v91;
    v8 = v94 + v6;
    v31 = v7 + v4;
    v32 = v8 + v5;
    if ( v7 < v7 + v4 && v8 < v8 + v5 )
    {
      do
      {
        v9 = *(_QWORD *)(a1 + 48);
        v40 = 0;
        v41 = 0;
        if ( v7 != qlseek(v9, v7, 0)
          || qlread(*(_QWORD *)(a1 + 48), &v40, 8) != 8
          || v8 != qlseek(*(_QWORD *)(a1 + 48), v8, 0)
          || qlread(*(_QWORD *)(a1 + 48), &v41, 8) != 8 )
        {
          break;
        }
        v10 = v40;
        if ( (v40 & 0x4000000000000000LL) == 0 )
        {
          if ( v40 < 0 )
            v10 = *(_QWORD *)(a1 + 448) + (unsigned int)v40;
          else
            v10 = (v40 << 21 >> 21) & 0xFFFFFFFFFFFFFFLL | (v40 << 13) & 0xFF00000000000000LL;
        }
        v11 = v41;
        v40 = v10;
        if ( (v41 & 0x4000000000000000LL) == 0 )
        {
          if ( v41 < 0 )
            v11 = *(_QWORD *)(a1 + 448) + (unsigned int)v41;
          else
            v11 = (v41 << 21 >> 21) & 0xFFFFFFFFFFFFFFLL | (v41 << 13) & 0xFF00000000000000LL;
        }
        v41 = v11;
        if ( v10 >= v96 && v10 < v33 + v96 )
        {
          v34 = sub_28C90(a1);
          v12 = sub_29210(a1);
          if ( !v12 )
          {
            if ( !under_debugger )
              interr(20122);
            BUG();
          }
          v44[1] = *(_QWORD *)(a1 + 8);
          v58 = 0;
          v44[0] = &off_62AA0;
          v46 = -1;
          v47 = 8;
          v48 = 1;
          v49 = v12;
          v50 = 0;
          v51 = 0;
          v54 = 0;
          v56 = 0;
          v59 = 0;
          v61 = 0;
          v63 = 0;
          v65 = 0;
          v67 = 0;
          v69 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_574B0);
          v52 = 0;
          v53 = _mm_load_si128((const __m128i *)&xmmword_57480);
          v55 = _mm_load_si128((const __m128i *)&xmmword_574C0);
          v57 = 0;
          v60 = 0;
          v62 = 0;
          v64 = 0;
          v66 = 0;
          v68 = 0;
          v70 = 0;
          v71 = 0;
          v73 = 0;
          v75 = 0;
          v77 = 0;
          v79 = 0;
          v80 = 0;
          v81 = 0;
          v83 = 0;
          v84 = 0;
          v85 = 0;
          v86 = 0;
          v88 = 0;
          v72 = 0;
          v74 = 0;
          v76 = 0;
          v78 = 0;
          v82 = -1;
          v87 = 0;
          if ( !(unsigned __int8)sub_25BB0(v44) || !(unsigned __int8)sub_25EF0(v44, 0, 0, 0) )
            goto LABEL_43;
          if ( !(_BYTE)v79 )
            sub_28840(v44);
          v13 = v61;
          v14 = v61 + 72 * v62;
          if ( v14 == v61 )
            goto LABEL_43;
          while ( *(_QWORD *)(v13 + 40) )
          {
            v13 += 72;
            if ( v14 == v13 )
              goto LABEL_43;
          }
          v15 = *(_QWORD *)(v13 + 32);
          if ( v15 )
          {
            v16 = *(_QWORD *)(a1 + 304);
            v17 = *(_QWORD *)(a1 + 296);
            if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)(v16 + 1) )
            {
              v35 = v15;
              v30 = qvector_reserve(a1 + 296, v17, v16 + 1, 80);
              *(_QWORD *)(a1 + 296) = v30;
              v17 = v30;
              v15 = v35;
              v16 = *(_QWORD *)(a1 + 304);
            }
            v18 = v17 + 80 * v16;
            *(_OWORD *)v18 = 0;
            *(_OWORD *)(v18 + 16) = 0;
            *(_OWORD *)(v18 + 48) = 0;
            *(_OWORD *)(v18 + 64) = 0;
            *(_QWORD *)(v18 + 32) = 0;
            v19 = _mm_loadh_ps((const double *)&v40);
            *(_QWORD *)(v18 + 40) = 0;
            ++*(_QWORD *)(a1 + 304);
            *(_QWORD *)(v18 + 16) = v15;
            v37 = v18;
            *(__m128 *)v18 = v19;
            v35 = v18 + 64;
            v36 = &v42;
            sub_28E30(&v42, a1);
            v23 = v37;
            v24 = (__int64 (__fastcall *)())v42;
            v42 = 0;
            v25 = _mm_loadu_si128(&v43);
            v43 = 0;
            v26 = *(_QWORD *)(v37 + 40);
            if ( v26 )
            {
              *(_QWORD *)(v37 + 48) = 0;
              v38 = v24;
              v37 = v23;
              v39 = v25;
              qfree(v26, (const char *)a1);
              v27 = v42;
              v23 = v37;
              v24 = v38;
              v28 = _mm_load_si128(&v39);
              *(_QWORD *)(v37 + 40) = v38;
              *(__m128i *)(v23 + 48) = v28;
              if ( v27 )
              {
                v43.m128i_i64[0] = 0;
                qfree(v27, (const char *)a1);
                v23 = v37;
              }
            }
            else
            {
              *(_QWORD *)(v37 + 40) = v24;
              *(__m128i *)(v23 + 48) = v25;
            }
            v29 = (__m128i *)v36;
            *(__m128 *)(v23 + 24) = _mm_loadh_ps((const double *)&v34);
            v42 = off_63268;
            v43.m128i_i8[8] = 0;
            v43.m128i_i64[0] = v35;
            sub_27280((__int64)v44, v29, v24, v20, v21, v22);
            sub_162E0(v44);
            close_linput(v12);
          }
          else
          {
LABEL_43:
            sub_162E0(v44);
            close_linput(v12);
          }
        }
        v7 += 8;
        v8 += 8;
        if ( v7 >= v31 )
          break;
      }
      while ( v8 < v32 );
    }
  }
  else
  {
    return 0;
  }
  return v1;
}
