__int64 __fastcall sub_99C40(__int64 a1, int *a2)
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
  __int64 *v37; // r10
  __int64 *v38; // r11
  __int64 v39; // r12
  __m128i v40; // xmm0
  __int64 *v41; // r10
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
  int v56; // r8d
  int v57; // r9d
  __int64 v58; // r12
  __m128i v59; // xmm0
  __int64 *v60; // r10
  __int64 *v61; // r11
  __int64 *v62; // r12
  __int64 v63; // [rsp-10h] [rbp-1E0h]
  __m128i v64; // [rsp+0h] [rbp-1D0h] BYREF
  __m128i v65; // [rsp+10h] [rbp-1C0h] BYREF
  __int64 *v66; // [rsp+20h] [rbp-1B0h]
  __int64 *v67; // [rsp+28h] [rbp-1A8h]
  _DWORD *v68; // [rsp+30h] [rbp-1A0h]
  __int64 v69; // [rsp+38h] [rbp-198h]
  __int64 *v70; // [rsp+40h] [rbp-190h]
  __int64 *v71; // [rsp+48h] [rbp-188h]
  __int64 *v72; // [rsp+50h] [rbp-180h]
  __int64 *v73; // [rsp+58h] [rbp-178h]
  __int64 v74; // [rsp+60h] [rbp-170h]
  int *v75; // [rsp+68h] [rbp-168h]
  char v76; // [rsp+7Fh] [rbp-151h] BYREF
  int *v77; // [rsp+80h] [rbp-150h] BYREF
  int *v78; // [rsp+88h] [rbp-148h] BYREF
  _QWORD v79[2]; // [rsp+90h] [rbp-140h] BYREF
  unsigned __int64 v80; // [rsp+A0h] [rbp-130h] BYREF
  __m128i *v81; // [rsp+A8h] [rbp-128h]
  __int64 v82[2]; // [rsp+B0h] [rbp-120h] BYREF
  __int64 v83; // [rsp+C0h] [rbp-110h]
  __int128 v84; // [rsp+C8h] [rbp-108h]
  __int64 v85[2]; // [rsp+E0h] [rbp-F0h] BYREF
  __int64 v86; // [rsp+F0h] [rbp-E0h]
  __m128i v87; // [rsp+F8h] [rbp-D8h]
  _QWORD v88[2]; // [rsp+110h] [rbp-C0h] BYREF
  __int64 v89; // [rsp+120h] [rbp-B0h]
  __m128i v90; // [rsp+128h] [rbp-A8h]
  __int64 v91; // [rsp+140h] [rbp-90h] BYREF
  __int128 v92; // [rsp+148h] [rbp-88h]
  __m128i v93; // [rsp+158h] [rbp-78h] BYREF
  __int64 v94; // [rsp+168h] [rbp-68h]
  _QWORD v95[2]; // [rsp+170h] [rbp-60h] BYREF
  _QWORD v96[10]; // [rsp+180h] [rbp-50h] BYREF

  v75 = a2;
  v96[3] = __readfsqword(0x28u);
  v79[1] = 0;
  v77 = a2;
  v79[0] = 0xFFFFFFFF00000000LL;
  v3 = sub_93440(a1, &v77, (__int64)v79, &v76, 0);
  if ( v3 && (!LOBYTE(v79[0]) || HIDWORD(v79[0]) == v75[9]) )
  {
    v78 = v77;
    v6 = sub_129440(a1, v3, &v78, 0);
    if ( v6 )
    {
      if ( (*(_BYTE *)(v6 + 4) & 0x10) == 0 )
      {
        v7 = *(_QWORD *)(a1 + 480);
        v8 = (__int64 *)(v6 + 32);
        v9 = (__int64 *)(v6 + 48);
        v81 = nullptr;
        v74 = *(_QWORD *)(v7 + 112);
        v80 = 0xFFFFFFFF00000000LL;
        v10 = *(_DWORD *)v6;
        if ( v76 )
        {
          if ( v10 != 34 )
          {
            if ( v10 == 32 && (unsigned __int8)sub_11FD80(v9, &v91, 0) && !v91 )
            {
              sub_125180(&v80);
              v73 = (__int64 *)&v80;
              v81[1] = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
              goto LABEL_17;
            }
LABEL_11:
            v4 = 0;
LABEL_12:
            sub_11CDA0(&v80);
            goto LABEL_5;
          }
        }
        else if ( v10 != 35 )
        {
          if ( v10 != 36 )
            goto LABEL_11;
          v73 = v8;
          v8 = v9;
LABEL_17:
          v82[0] = 0;
          v82[1] = 0;
          v83 = 0;
          v84 = 0;
          sub_123EA0(a1, v82, v8, 0, 4294901760LL);
          if ( (unsigned __int8)sub_64880(v82) && !(_QWORD)v84 )
          {
            sub_123EA0(a1, v82, v73, 0, 4294901760LL);
            if ( (unsigned __int8)sub_64880(v82) && !(_QWORD)v84 )
              goto LABEL_24;
            v72 = v73;
          }
          else
          {
            v72 = v8;
          }
          v11 = sub_124CC0(a1, v82, v75, 0, 0, 1);
          v12 = (__int64 *)v11;
          if ( v78 == (int *)v11 )
            v12 = (__int64 *)sub_124CC0(a1, v82, v11, 0, 0, 1);
          v13 = (__int64 *)v75;
          if ( !v12 )
          {
            v28 = sub_A9D90(a1, v82, *((_QWORD *)v75 + 1), 0, 0);
            v13 = (__int64 *)v28;
            if ( !v28 )
              goto LABEL_24;
            v12 = (__int64 *)v28;
          }
          if ( *(_DWORD *)v12 != 13 )
            goto LABEL_24;
          v14 = *((_DWORD *)v12 + 9);
          if ( v14 != v75[9] )
            goto LABEL_24;
          if ( v14 >= *(_DWORD *)(v74 + 88) )
          {
            if ( v14 != *(_DWORD *)(v74 + 88) )
              goto LABEL_24;
            v70 = v12;
            v71 = v13;
            v15 = sub_11CBB0(v74, 13);
            v13 = v71;
            v12 = v70;
            if ( !v15 )
              goto LABEL_24;
          }
          v16 = v72;
          v17 = v12 + 6;
          v70 = v13;
          v69 = (__int64)(v12 + 4);
          v71 = v12;
          if ( v72 == v8 )
            v17 = v12 + 4;
          v72 = v70;
          if ( !(unsigned __int8)sub_125B60(v17, v16, 0) )
            goto LABEL_24;
          v70 = v71;
          LOBYTE(v71) = sub_12EA80(v74, a1, (_DWORD)v78, (_DWORD)v8, (_DWORD)v71, v69, 0);
          if ( !(_BYTE)v71 )
            goto LABEL_24;
          v67 = v70 + 6;
          v18 = sub_12EA80(v74, a1, (_DWORD)v78, (_DWORD)v73, (_DWORD)v70, (int)v70 + 48, 0);
          v19 = v70;
          v20 = v72;
          if ( !v18 )
          {
            v29 = v70[1];
            v73 = v70;
            v30 = sub_12EA80(v74, a1, (_DWORD)v78, (_DWORD)v9, v29, (int)v70 + 64, 0);
            v19 = v70;
            v20 = v72;
            if ( !v30 )
              goto LABEL_24;
          }
          if ( *v75 != 13 )
          {
            v68 = nullptr;
LABEL_45:
            if ( LOBYTE(v79[0]) )
            {
              v72 = v19;
              v73 = v20;
              v33 = sub_157240(a1, v67, v79);
              v20 = v73;
              v19 = v72;
              if ( !v33 )
                goto LABEL_24;
            }
            v21 = (__int64)v75;
            v70 = v20;
            v72 = v85;
            if ( v20 == (__int64 *)v75 )
              v21 = (__int64)v19;
            v73 = v19;
            v22 = v21;
            sub_124680(v85, a1, v19, 1);
            v23 = *(_QWORD *)(v22 + 8);
            v24 = v73;
            v25 = v70;
            v73 = v70;
            v70 = v24;
            v26 = sub_A9AA0(a1, v72, v23, v25, 1);
            v4 = 0;
            v27 = v70;
            if ( v26 )
            {
LABEL_49:
              if ( v86 )
              {
                v87.m128i_i64[0] = 0;
                qfree(v86);
              }
              qfree(v85[0]);
              goto LABEL_25;
            }
            v34 = v70;
            v70 = v88;
            v66 = v27;
            sub_127A20(v88, a1, v34, 1);
            if ( sub_A9AA0(a1, v88, *(_QWORD *)(v22 + 8), v73, 1) )
            {
              LOBYTE(v71) = 0;
              if ( v73 == (__int64 *)v75 )
                goto LABEL_90;
            }
            v35 = sub_A9D90(a1, v70, *(_QWORD *)(v22 + 8), v73, 1);
            v36 = v73;
            v37 = v66;
            if ( v35 )
              goto LABEL_67;
            v65.m128i_i64[0] = (__int64)v73;
            v73 = &v91;
            sub_127A20(&v91, a1, v66, 0);
            sub_648D0(v70, &v91);
            v58 = *((_QWORD *)&v92 + 1);
            v59 = _mm_loadu_si128(&v93);
            *((_QWORD *)&v92 + 1) = 0;
            v60 = v66;
            v61 = (__int64 *)v65.m128i_i64[0];
            v93 = 0;
            if ( v89 )
            {
              v65.m128i_i64[0] = (__int64)v66;
              v66 = v61;
              v64 = v59;
              v90.m128i_i64[0] = 0;
              qfree(v89);
              v59 = _mm_load_si128(&v64);
              v60 = (__int64 *)v65.m128i_i64[0];
              v61 = v66;
            }
            v89 = v58;
            v62 = v73;
            v65.m128i_i64[0] = (__int64)v60;
            v66 = v61;
            v90 = v59;
            sub_93B40(v73);
            sub_124680(v62, a1, v66, 0);
            v73 = v62;
            LOBYTE(v62) = sub_94210(v70, v62);
            sub_93B40(v73);
            v36 = v66;
            v37 = (__int64 *)v65.m128i_i64[0];
            if ( (_BYTE)v62 )
            {
LABEL_67:
              if ( v36 == v37 )
                goto LABEL_90;
              v73 = &v91;
            }
            else if ( (_BYTE)v71 )
            {
              goto LABEL_75;
            }
            v66 = v36;
            v71 = v37;
            sub_124680(v73, a1, v37, 0);
            v38 = v66;
            v66 = v71;
            v71 = v38;
            sub_648D0(v72, v73);
            v39 = *((_QWORD *)&v92 + 1);
            v40 = _mm_loadu_si128(&v93);
            v41 = v66;
            *((_QWORD *)&v92 + 1) = 0;
            v93 = 0;
            v42 = v71;
            if ( v86 )
            {
              v65 = v40;
              v87.m128i_i64[0] = 0;
              qfree(v86);
              v40 = _mm_load_si128(&v65);
              v41 = v66;
              v42 = v71;
            }
            v86 = v39;
            v43 = v73;
            v65.m128i_i64[0] = (__int64)v41;
            v66 = v42;
            v87 = v40;
            sub_93B40(v73);
            sub_127A20(v43, a1, v22, 0);
            LOBYTE(v71) = sub_94210(v72, v43);
            if ( !(_BYTE)v71 )
            {
              sub_93B40(v73);
              v37 = (__int64 *)v65.m128i_i64[0];
              v36 = v66;
              if ( v65.m128i_i64[0] == v22 )
              {
                v44 = v69;
                v69 = v65.m128i_i64[0];
                if ( !(unsigned __int8)sub_155CD0(a1, v65.m128i_i64[0], v44, 0) )
                {
                  if ( !under_debugger )
                    sub_383060(52456);
                  goto LABEL_106;
                }
                v45 = sub_155CD0(a1, v69, v67, 0);
                v37 = (__int64 *)v69;
                v36 = v66;
                if ( !v45 )
                {
                  if ( !under_debugger )
                    sub_383060(52457);
                  goto LABEL_106;
                }
              }
LABEL_75:
              v94 = 0;
              v67 = v36;
              v93.m128i_i64[1] = 0xFFFFFFFF00000000LL;
              v95[0] = 0xFFFFFFFF00000000LL;
              v95[1] = 0;
              v96[0] = 0xFFFFFFFF00000000LL;
              v96[1] = 0;
              v69 = (__int64)v37;
              v92 = 0;
              sub_1253A0(v73, v37);
              if ( v68 )
              {
                v46 = v69;
                v63 = (__int64)v68;
                v68 = (_DWORD *)v69;
                v69 = (__int64)v67;
                sub_B1520(
                  a1,
                  (_DWORD)v67,
                  (unsigned int)&v93.m128i_u32[2],
                  v46,
                  (unsigned int)&v93.m128i_u32[2],
                  (_DWORD)v75,
                  v63,
                  0);
                v47 = v69;
                v48 = (__int64)v68;
              }
              else
              {
                v68 = (_DWORD *)v69;
                v69 = (__int64)v67;
                sub_1207E0(&v93.m128i_u64[1], v74, 9, v93.m128i_i64[0], (unsigned int)(2 * v93.m128i_i32[3]));
                v48 = (__int64)v68;
                v47 = v69;
              }
              if ( LOBYTE(v79[0]) )
              {
                v74 = v48;
                sub_B1520(a1, v47, (unsigned int)v95, v48, (unsigned int)v95, (_DWORD)v75, (__int64)v79, 0);
                v49 = v74;
              }
              else
              {
                v69 = v48;
                sub_1207E0(v95, v74, 9, v93.m128i_i64[0], v93.m128i_u32[3]);
                v49 = v69;
              }
              v50 = (__int64)v75;
              v51 = *(_QWORD *)(v49 + 8);
              v74 = v49;
              v52 = v75 + 16;
              sub_1571F0(a1, v51, v96, *((_QWORD *)v75 + 1), v75 + 16, 1);
              sub_11D890(v50, v73);
              v4 = sub_11EFE0(v74 + 64, v52, 1);
              if ( (_BYTE)v4 )
              {
                if ( (_BYTE)v71 )
                  sub_11D5A0(v74);
                sub_993D0(a1, (__int64)v75);
                sub_7CCD0((__int64)v73);
                goto LABEL_83;
              }
              if ( !under_debugger )
                sub_383060(52455);
LABEL_106:
              BUG();
            }
            sub_93B40(v73);
LABEL_90:
            v4 = 0;
LABEL_83:
            sub_93B40(v70);
            goto LABEL_49;
          }
          v68 = v75 + 8;
          if ( !LOBYTE(v79[0]) )
          {
            if ( *((_BYTE *)v75 + 32) == 4 )
            {
              v53 = *((_DWORD **)v75 + 5);
              if ( *v53 != 13 )
                goto LABEL_60;
            }
            else
            {
              v31 = *((_DWORD **)v75 + 2);
              if ( !v31 )
                goto LABEL_60;
              if ( *v31 != 13 )
                goto LABEL_60;
              v72 = v19;
              v73 = v20;
              v54 = sub_125B60(v31 + 16, v68, 0);
              v20 = v73;
              v19 = v72;
              if ( !v54 )
                goto LABEL_60;
              v66 = v72;
              v55 = *((_QWORD *)v75 + 2);
              v72 = v73;
              v70 = v88;
              sub_124680(v88, a1, v55, 1);
              v91 = 0;
              v92 = 0u;
              v73 = &v91;
              v93 = 0;
              sub_127FE0(
                a1,
                (__int64)&v91,
                (__int64)v68,
                0,
                v56,
                v57,
                v64.m128i_i32[0],
                v64.m128i_i32[2],
                v65.m128i_i32[0],
                v65.m128i_i32[2],
                (__int64)v66);
              v53 = nullptr;
              if ( !(unsigned __int8)sub_94210(v88, &v91) )
                v53 = *((_DWORD **)v75 + 2);
              sub_93B40(v73);
              sub_93B40(v70);
              v19 = v66;
              v20 = v72;
            }
            if ( v53 )
            {
              v72 = v19;
              v73 = v20;
              sub_125180(v79);
              v19 = v72;
              v20 = v73;
              v68 = v53 + 8;
            }
          }
LABEL_60:
          v72 = v19;
          v73 = v20;
          v32 = sub_157240(a1, v69, v68);
          v20 = v73;
          v19 = v72;
          if ( v32 )
            goto LABEL_45;
LABEL_24:
          v4 = 0;
LABEL_25:
          if ( v83 )
          {
            *(_QWORD *)&v84 = 0;
            qfree(v83);
          }
          qfree(v82[0]);
          goto LABEL_12;
        }
        v73 = v9;
        goto LABEL_17;
      }
    }
  }
  v4 = 0;
LABEL_5:
  sub_11CDA0(v79);
  return v4;
}
