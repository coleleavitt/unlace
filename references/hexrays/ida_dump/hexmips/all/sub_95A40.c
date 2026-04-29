__int64 __fastcall sub_95A40(__int64 a1, int *a2)
{
  __int64 v3; // rax
  unsigned int v4; // r12d
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // r12
  __int64 *v9; // r13
  int v10; // eax
  __int64 v11; // rax
  __int64 *v12; // r10
  __int64 *v13; // r11
  int v14; // eax
  char v15; // al
  __int64 *v16; // rsi
  __int64 *v17; // rdi
  char v18; // al
  __int64 *v19; // r10
  __int64 *v20; // r11
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 *v24; // r10
  __int64 *v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // r10
  __int64 v28; // rax
  __int64 v29; // r8
  char v30; // al
  _DWORD *v31; // rax
  char v32; // al
  char v33; // al
  __int64 *v34; // rdx
  __int64 v35; // rax
  __int64 *v36; // r11
  __int64 v37; // r10
  __int64 *v38; // r11
  __int64 v39; // r12
  __m128i v40; // xmm0
  __int64 v41; // r10
  __int64 *v42; // r11
  __int64 *v43; // r12
  __int64 v44; // rdx
  char v45; // al
  int v46; // ecx
  int v47; // r11d
  __int64 v48; // r10
  __int64 v49; // r10
  __int64 v50; // r13
  __int64 v51; // rsi
  int *v52; // r12
  _DWORD *v53; // r12
  char v54; // al
  __int64 v55; // rdx
  __int64 v56; // r12
  __m128i v57; // xmm0
  __int64 v58; // r10
  __int64 v59; // r11
  __int64 *v60; // r12
  __int64 v61; // [rsp-10h] [rbp-1E0h]
  __m128i v62; // [rsp+0h] [rbp-1D0h] BYREF
  __m128i v63; // [rsp+10h] [rbp-1C0h] BYREF
  __int64 *v64; // [rsp+20h] [rbp-1B0h]
  __int64 *v65; // [rsp+28h] [rbp-1A8h]
  _DWORD *v66; // [rsp+30h] [rbp-1A0h]
  __int64 v67; // [rsp+38h] [rbp-198h]
  __int64 *v68; // [rsp+40h] [rbp-190h]
  __int64 *v69; // [rsp+48h] [rbp-188h]
  __int64 *v70; // [rsp+50h] [rbp-180h]
  __int64 *v71; // [rsp+58h] [rbp-178h]
  __int64 v72; // [rsp+60h] [rbp-170h]
  int *v73; // [rsp+68h] [rbp-168h]
  char v74; // [rsp+7Fh] [rbp-151h] BYREF
  int *v75; // [rsp+80h] [rbp-150h] BYREF
  int *v76; // [rsp+88h] [rbp-148h] BYREF
  _QWORD v77[2]; // [rsp+90h] [rbp-140h] BYREF
  unsigned __int64 v78; // [rsp+A0h] [rbp-130h] BYREF
  __m128i *v79; // [rsp+A8h] [rbp-128h]
  _QWORD v80[2]; // [rsp+B0h] [rbp-120h] BYREF
  __int64 v81; // [rsp+C0h] [rbp-110h]
  __int128 v82; // [rsp+C8h] [rbp-108h]
  _QWORD v83[2]; // [rsp+E0h] [rbp-F0h] BYREF
  __int64 v84; // [rsp+F0h] [rbp-E0h]
  __m128i v85; // [rsp+F8h] [rbp-D8h]
  _QWORD v86[2]; // [rsp+110h] [rbp-C0h] BYREF
  __int64 v87; // [rsp+120h] [rbp-B0h]
  __m128i v88; // [rsp+128h] [rbp-A8h]
  __int64 v89; // [rsp+140h] [rbp-90h] BYREF
  __int128 v90; // [rsp+148h] [rbp-88h]
  __m128i v91; // [rsp+158h] [rbp-78h] BYREF
  __int64 v92; // [rsp+168h] [rbp-68h]
  _QWORD v93[2]; // [rsp+170h] [rbp-60h] BYREF
  _QWORD v94[10]; // [rsp+180h] [rbp-50h] BYREF

  v73 = a2;
  v94[3] = __readfsqword(0x28u);
  v77[1] = 0;
  v75 = a2;
  v77[0] = 0xFFFFFFFF00000000LL;
  v3 = sub_8F240(a1, &v75, (__int64)v77, &v74, 0);
  if ( v3 && (!LOBYTE(v77[0]) || HIDWORD(v77[0]) == v73[9]) )
  {
    v76 = v75;
    v6 = sub_125240(a1, v3, &v76, 0);
    if ( v6 )
    {
      if ( (*(_BYTE *)(v6 + 4) & 0x10) == 0 )
      {
        v7 = *(_QWORD *)(a1 + 480);
        v8 = (__int64 *)(v6 + 32);
        v9 = (__int64 *)(v6 + 48);
        v79 = nullptr;
        v72 = *(_QWORD *)(v7 + 112);
        v78 = 0xFFFFFFFF00000000LL;
        v10 = *(_DWORD *)v6;
        if ( v74 )
        {
          if ( v10 != 34 )
          {
            if ( v10 == 32 && (unsigned __int8)sub_11BB80(v9, &v89, 0) && !v89 )
            {
              sub_120F80(&v78);
              v71 = (__int64 *)&v78;
              v79[1] = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
              goto LABEL_17;
            }
LABEL_11:
            v4 = 0;
LABEL_12:
            sub_118BA0(&v78);
            goto LABEL_5;
          }
        }
        else if ( v10 != 35 )
        {
          if ( v10 != 36 )
            goto LABEL_11;
          v71 = v8;
          v8 = v9;
LABEL_17:
          v80[0] = 0;
          v80[1] = 0;
          v81 = 0;
          v82 = 0;
          sub_11FCA0(a1, v80, v8, 0, 4294901760LL);
          if ( (unsigned __int8)sub_60680(v80) && !(_QWORD)v82 )
          {
            sub_11FCA0(a1, v80, v71, 0, 4294901760LL);
            if ( (unsigned __int8)sub_60680(v80) && !(_QWORD)v82 )
              goto LABEL_24;
            v70 = v71;
          }
          else
          {
            v70 = v8;
          }
          v11 = sub_120AC0(a1, v80, v73, 0, 0, 1);
          v12 = (__int64 *)v11;
          if ( v76 == (int *)v11 )
            v12 = (__int64 *)sub_120AC0(a1, v80, v11, 0, 0, 1);
          v13 = (__int64 *)v73;
          if ( !v12 )
          {
            v28 = sub_A5B90(a1, v80, *((_QWORD *)v73 + 1), 0, 0);
            v13 = (__int64 *)v28;
            if ( !v28 )
              goto LABEL_24;
            v12 = (__int64 *)v28;
          }
          if ( *(_DWORD *)v12 != 13 )
            goto LABEL_24;
          v14 = *((_DWORD *)v12 + 9);
          if ( v14 != v73[9] )
            goto LABEL_24;
          if ( v14 >= *(_DWORD *)(v72 + 88) )
          {
            if ( v14 != *(_DWORD *)(v72 + 88) )
              goto LABEL_24;
            v68 = v12;
            v69 = v13;
            v15 = sub_1189B0(v72, 13);
            v13 = v69;
            v12 = v68;
            if ( !v15 )
              goto LABEL_24;
          }
          v16 = v70;
          v17 = v12 + 6;
          v68 = v13;
          v67 = (__int64)(v12 + 4);
          v69 = v12;
          if ( v70 == v8 )
            v17 = v12 + 4;
          v70 = v68;
          if ( !(unsigned __int8)sub_121960(v17, v16, 0) )
            goto LABEL_24;
          v68 = v69;
          LOBYTE(v69) = sub_12A880(v72, a1, (_DWORD)v76, (_DWORD)v8, (_DWORD)v69, v67, 0);
          if ( !(_BYTE)v69 )
            goto LABEL_24;
          v65 = v68 + 6;
          v18 = sub_12A880(v72, a1, (_DWORD)v76, (_DWORD)v71, (_DWORD)v68, (int)v68 + 48, 0);
          v19 = v68;
          v20 = v70;
          if ( !v18 )
          {
            v29 = v68[1];
            v71 = v68;
            v30 = sub_12A880(v72, a1, (_DWORD)v76, (_DWORD)v9, v29, (int)v68 + 64, 0);
            v19 = v68;
            v20 = v70;
            if ( !v30 )
              goto LABEL_24;
          }
          if ( *v73 != 13 )
          {
            v66 = nullptr;
LABEL_45:
            if ( LOBYTE(v77[0]) )
            {
              v70 = v19;
              v71 = v20;
              v33 = sub_153040(a1, v65, v77);
              v20 = v71;
              v19 = v70;
              if ( !v33 )
                goto LABEL_24;
            }
            v21 = (__int64)v73;
            v68 = v20;
            v70 = v83;
            if ( v20 == (__int64 *)v73 )
              v21 = (__int64)v19;
            v71 = v19;
            v22 = v21;
            sub_120480(v83, a1, v19, 1);
            v23 = *(_QWORD *)(v22 + 8);
            v24 = v71;
            v25 = v68;
            v71 = v68;
            v68 = v24;
            v26 = sub_A58A0(a1, v70, v23, v25, 1);
            v4 = 0;
            v27 = v68;
            if ( v26 )
            {
LABEL_49:
              if ( v84 )
              {
                v85.m128i_i64[0] = 0;
                qfree(v84);
              }
              qfree(v83[0]);
              goto LABEL_25;
            }
            v34 = v68;
            v68 = v86;
            v64 = v27;
            sub_123820(v86, a1, v34, 1);
            if ( sub_A58A0(a1, v86, *(_QWORD *)(v22 + 8), v71, 1) )
            {
              LOBYTE(v69) = 0;
              if ( v71 == (__int64 *)v73 )
                goto LABEL_90;
            }
            v35 = sub_A5B90(a1, v68, *(_QWORD *)(v22 + 8), v71, 1);
            v36 = v71;
            v37 = (__int64)v64;
            if ( v35 )
              goto LABEL_67;
            v63.m128i_i64[0] = (__int64)v71;
            v71 = &v89;
            sub_123820(&v89, a1, v64, 0);
            sub_606D0(v68, &v89);
            v56 = *((_QWORD *)&v90 + 1);
            v57 = _mm_loadu_si128(&v91);
            *((_QWORD *)&v90 + 1) = 0;
            v58 = (__int64)v64;
            v59 = v63.m128i_i64[0];
            v91 = 0;
            if ( v87 )
            {
              v63.m128i_i64[0] = (__int64)v64;
              v64 = (__int64 *)v59;
              v62 = v57;
              v88.m128i_i64[0] = 0;
              qfree(v87);
              v57 = _mm_load_si128(&v62);
              v58 = v63.m128i_i64[0];
              v59 = (__int64)v64;
            }
            v87 = v56;
            v60 = v71;
            v63.m128i_i64[0] = v58;
            v64 = (__int64 *)v59;
            v88 = v57;
            sub_8F940(v71);
            sub_120480(v60, a1, v64, 0);
            v71 = v60;
            LOBYTE(v60) = sub_90010(v68, v60);
            sub_8F940(v71);
            v36 = v64;
            v37 = v63.m128i_i64[0];
            if ( (_BYTE)v60 )
            {
LABEL_67:
              if ( v36 == (__int64 *)v37 )
                goto LABEL_90;
              v71 = &v89;
            }
            else if ( (_BYTE)v69 )
            {
              goto LABEL_75;
            }
            v64 = v36;
            v69 = (__int64 *)v37;
            sub_120480(v71, a1, v37, 0);
            v38 = v64;
            v64 = v69;
            v69 = v38;
            sub_606D0(v70, v71);
            v39 = *((_QWORD *)&v90 + 1);
            v40 = _mm_loadu_si128(&v91);
            v41 = (__int64)v64;
            *((_QWORD *)&v90 + 1) = 0;
            v91 = 0;
            v42 = v69;
            if ( v84 )
            {
              v63 = v40;
              v85.m128i_i64[0] = 0;
              qfree(v84);
              v40 = _mm_load_si128(&v63);
              v41 = (__int64)v64;
              v42 = v69;
            }
            v84 = v39;
            v43 = v71;
            v63.m128i_i64[0] = v41;
            v64 = v42;
            v85 = v40;
            sub_8F940(v71);
            sub_123820(v43, a1, v22, 0);
            LOBYTE(v69) = sub_90010(v70, v43);
            if ( !(_BYTE)v69 )
            {
              sub_8F940(v71);
              v37 = v63.m128i_i64[0];
              v36 = v64;
              if ( v63.m128i_i64[0] == v22 )
              {
                v44 = v67;
                v67 = v63.m128i_i64[0];
                if ( !(unsigned __int8)sub_151AD0(a1, v63.m128i_i64[0], v44, 0) )
                {
                  if ( !under_debugger )
                    sub_37E160(52456);
                  goto LABEL_106;
                }
                v45 = sub_151AD0(a1, v67, v65, 0);
                v37 = v67;
                v36 = v64;
                if ( !v45 )
                {
                  if ( !under_debugger )
                    sub_37E160(52457);
                  goto LABEL_106;
                }
              }
LABEL_75:
              v92 = 0;
              v65 = v36;
              v91.m128i_i64[1] = 0xFFFFFFFF00000000LL;
              v93[0] = 0xFFFFFFFF00000000LL;
              v93[1] = 0;
              v94[0] = 0xFFFFFFFF00000000LL;
              v94[1] = 0;
              v67 = v37;
              v90 = 0;
              sub_1211A0(v71, v37);
              if ( v66 )
              {
                v46 = v67;
                v61 = (__int64)v66;
                v66 = (_DWORD *)v67;
                v67 = (__int64)v65;
                sub_AD320(
                  a1,
                  (_DWORD)v65,
                  (unsigned int)&v91.m128i_u32[2],
                  v46,
                  (unsigned int)&v91.m128i_u32[2],
                  (_DWORD)v73,
                  v61,
                  0);
                v47 = v67;
                v48 = (__int64)v66;
              }
              else
              {
                v66 = (_DWORD *)v67;
                v67 = (__int64)v65;
                sub_11C5E0(&v91.m128i_u64[1], v72, 9, v91.m128i_i64[0], (unsigned int)(2 * v91.m128i_i32[3]));
                v48 = (__int64)v66;
                v47 = v67;
              }
              if ( LOBYTE(v77[0]) )
              {
                v72 = v48;
                sub_AD320(a1, v47, (unsigned int)v93, v48, (unsigned int)v93, (_DWORD)v73, (__int64)v77, 0);
                v49 = v72;
              }
              else
              {
                v67 = v48;
                sub_11C5E0(v93, v72, 9, v91.m128i_i64[0], v91.m128i_u32[3]);
                v49 = v67;
              }
              v50 = (__int64)v73;
              v51 = *(_QWORD *)(v49 + 8);
              v72 = v49;
              v52 = v73 + 16;
              sub_152FF0(a1, v51, v94, *((_QWORD *)v73 + 1), v73 + 16, 1);
              sub_119690(v50, v71);
              v4 = sub_11ADE0(v72 + 64, v52, 1);
              if ( (_BYTE)v4 )
              {
                if ( (_BYTE)v69 )
                  sub_1193A0(v72);
                sub_951D0(a1, (__int64)v73);
                sub_78AD0((__int64)v71);
                goto LABEL_83;
              }
              if ( !under_debugger )
                sub_37E160(52455);
LABEL_106:
              BUG();
            }
            sub_8F940(v71);
LABEL_90:
            v4 = 0;
LABEL_83:
            sub_8F940(v68);
            goto LABEL_49;
          }
          v66 = v73 + 8;
          if ( !LOBYTE(v77[0]) )
          {
            if ( *((_BYTE *)v73 + 32) == 4 )
            {
              v53 = *((_DWORD **)v73 + 5);
              if ( *v53 != 13 )
                goto LABEL_60;
            }
            else
            {
              v31 = *((_DWORD **)v73 + 2);
              if ( !v31 )
                goto LABEL_60;
              if ( *v31 != 13 )
                goto LABEL_60;
              v70 = v19;
              v71 = v20;
              v54 = sub_121960(v31 + 16, v66, 0);
              v20 = v71;
              v19 = v70;
              if ( !v54 )
                goto LABEL_60;
              v64 = v70;
              v55 = *((_QWORD *)v73 + 2);
              v70 = v71;
              v68 = v86;
              sub_120480(v86, a1, v55, 1);
              v89 = 0;
              v90 = 0u;
              v71 = &v89;
              v91 = 0;
              sub_123DE0(a1, &v89, v66, 0);
              v53 = nullptr;
              if ( !(unsigned __int8)sub_90010(v86, &v89) )
                v53 = *((_DWORD **)v73 + 2);
              sub_8F940(v71);
              sub_8F940(v68);
              v19 = v64;
              v20 = v70;
            }
            if ( v53 )
            {
              v70 = v19;
              v71 = v20;
              sub_120F80(v77);
              v19 = v70;
              v20 = v71;
              v66 = v53 + 8;
            }
          }
LABEL_60:
          v70 = v19;
          v71 = v20;
          v32 = sub_153040(a1, v67, v66);
          v20 = v71;
          v19 = v70;
          if ( v32 )
            goto LABEL_45;
LABEL_24:
          v4 = 0;
LABEL_25:
          if ( v81 )
          {
            *(_QWORD *)&v82 = 0;
            qfree(v81);
          }
          qfree(v80[0]);
          goto LABEL_12;
        }
        v71 = v9;
        goto LABEL_17;
      }
    }
  }
  v4 = 0;
LABEL_5:
  sub_118BA0(v77);
  return v4;
}
