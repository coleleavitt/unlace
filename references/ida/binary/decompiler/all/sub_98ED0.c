__int64 __fastcall sub_98ED0(__int64 a1, int *a2)
{
  __int64 v3; // rax
  unsigned int v4; // r12d
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // r12
  __int64 *v9; // r13
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 *v13; // r11
  int v14; // eax
  char v15; // al
  __int64 *v16; // rsi
  __int64 v17; // rdi
  char v18; // al
  __int64 *v19; // r10
  __int64 *v20; // r11
  __int64 v21; // rax
  __int64 *v22; // r13
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
  __int64 v38; // r11
  __int64 v39; // r12
  __m128i v40; // xmm0
  __int64 v41; // r11
  __int64 *v42; // r10
  __int64 *v43; // r12
  __int64 v44; // rdx
  char v45; // al
  int v46; // r11d
  __int64 *v47; // r10
  __int64 *v48; // r10
  __int64 v49; // r13
  __int64 v50; // rsi
  int *v51; // r12
  _DWORD *v52; // r12
  __int64 v53; // r12
  __m128i v54; // xmm0
  __int64 *v55; // r10
  __int64 *v56; // r11
  __int64 *v57; // r12
  char v58; // al
  __int64 v59; // rdx
  __int64 v60; // [rsp-10h] [rbp-1E0h]
  __m128i v61; // [rsp+0h] [rbp-1D0h] BYREF
  __int64 *v62; // [rsp+10h] [rbp-1C0h]
  __int64 *v63; // [rsp+18h] [rbp-1B8h]
  __int64 *v64; // [rsp+20h] [rbp-1B0h]
  __int64 *v65; // [rsp+28h] [rbp-1A8h]
  __m128i v66; // [rsp+30h] [rbp-1A0h] BYREF
  __int64 v67; // [rsp+40h] [rbp-190h]
  __int64 *v68; // [rsp+48h] [rbp-188h]
  __int64 *v69; // [rsp+50h] [rbp-180h]
  __int64 *v70; // [rsp+58h] [rbp-178h]
  __int64 *v71; // [rsp+60h] [rbp-170h]
  int *v72; // [rsp+68h] [rbp-168h]
  char v73; // [rsp+7Fh] [rbp-151h] BYREF
  int *v74; // [rsp+80h] [rbp-150h] BYREF
  int *v75; // [rsp+88h] [rbp-148h] BYREF
  _QWORD v76[2]; // [rsp+90h] [rbp-140h] BYREF
  unsigned __int64 v77; // [rsp+A0h] [rbp-130h] BYREF
  __m128i *v78; // [rsp+A8h] [rbp-128h]
  _QWORD v79[2]; // [rsp+B0h] [rbp-120h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-110h]
  __int128 v81; // [rsp+C8h] [rbp-108h]
  _QWORD v82[2]; // [rsp+E0h] [rbp-F0h] BYREF
  __int64 v83; // [rsp+F0h] [rbp-E0h]
  __m128i v84; // [rsp+F8h] [rbp-D8h]
  _QWORD v85[2]; // [rsp+110h] [rbp-C0h] BYREF
  __int64 v86; // [rsp+120h] [rbp-B0h]
  __m128i v87; // [rsp+128h] [rbp-A8h]
  __int64 v88; // [rsp+140h] [rbp-90h] BYREF
  __int128 v89; // [rsp+148h] [rbp-88h]
  __m128i v90; // [rsp+158h] [rbp-78h] BYREF
  __int64 v91; // [rsp+168h] [rbp-68h]
  _QWORD v92[2]; // [rsp+170h] [rbp-60h] BYREF
  _QWORD v93[10]; // [rsp+180h] [rbp-50h] BYREF

  v72 = a2;
  v93[3] = __readfsqword(0x28u);
  v76[1] = 0;
  v74 = a2;
  v76[0] = 0xFFFFFFFF00000000LL;
  v3 = sub_926A0(a1, &v74, (__int64)v76, &v73, 0);
  if ( v3 && (!LOBYTE(v76[0]) || HIDWORD(v76[0]) == v72[9]) )
  {
    v75 = v74;
    v6 = sub_126F20(a1, v3, &v75, 0);
    if ( v6 )
    {
      if ( (*(_BYTE *)(v6 + 4) & 0x10) == 0 )
      {
        v7 = *(_QWORD *)(a1 + 480);
        v8 = (__int64 *)(v6 + 32);
        v9 = (__int64 *)(v6 + 48);
        v78 = 0;
        v71 = *(__int64 **)(v7 + 112);
        v77 = 0xFFFFFFFF00000000LL;
        v10 = *(_DWORD *)v6;
        if ( v73 )
        {
          if ( v10 != 34 )
          {
            if ( v10 == 32 && (unsigned __int8)sub_11D940(v9, &v88, 0) && !v88 )
            {
              sub_122C80(&v77);
              v70 = (__int64 *)&v77;
              v78[1] = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
              goto LABEL_17;
            }
LABEL_11:
            v4 = 0;
LABEL_12:
            sub_11A960(&v77);
            goto LABEL_5;
          }
        }
        else if ( v10 != 35 )
        {
          if ( v10 != 36 )
            goto LABEL_11;
          v70 = v8;
          v8 = v9;
LABEL_17:
          v79[0] = 0;
          v79[1] = 0;
          v80 = 0;
          v81 = 0;
          sub_1219A0(a1, v79, v8, 0, 4294901760LL);
          if ( (unsigned __int8)sub_63F80(v79) && !(_QWORD)v81 )
          {
            sub_1219A0(a1, v79, v70, 0, 4294901760LL);
            if ( (unsigned __int8)sub_63F80(v79) && !(_QWORD)v81 )
              goto LABEL_24;
            v69 = v70;
          }
          else
          {
            v69 = v8;
          }
          v11 = sub_1227C0(a1, v79, v72, 0, 0, 1);
          v12 = v11;
          if ( v75 == (int *)v11 )
            v12 = sub_1227C0(a1, v79, v11, 0, 0, 1);
          v13 = (__int64 *)v72;
          if ( !v12 )
          {
            v28 = sub_A9010(a1, v79, *((_QWORD *)v72 + 1), 0, 0);
            v13 = (__int64 *)v28;
            if ( !v28 )
              goto LABEL_24;
            v12 = v28;
          }
          if ( *(_DWORD *)v12 != 13 )
            goto LABEL_24;
          v14 = *(_DWORD *)(v12 + 36);
          if ( v14 != v72[9] )
            goto LABEL_24;
          if ( v14 >= *((_DWORD *)v71 + 22) )
          {
            if ( v14 != *((_DWORD *)v71 + 22) )
              goto LABEL_24;
            v66.m128i_i64[0] = v12;
            v68 = v13;
            v15 = sub_11A770(v71, 13);
            v13 = v68;
            v12 = v66.m128i_i64[0];
            if ( !v15 )
              goto LABEL_24;
          }
          v16 = v69;
          v17 = v12 + 48;
          v66.m128i_i64[0] = (__int64)v13;
          v67 = v12 + 32;
          v68 = (__int64 *)v12;
          if ( v69 == v8 )
            v17 = v12 + 32;
          v69 = (__int64 *)v66.m128i_i64[0];
          if ( !(unsigned __int8)sub_123660(v17, v16, 0) )
            goto LABEL_24;
          v66.m128i_i8[0] = sub_12C560((_DWORD)v71, a1, (_DWORD)v75, (_DWORD)v8, (_DWORD)v68, v67, 0);
          if ( !v66.m128i_i8[0] )
            goto LABEL_24;
          v65 = v68 + 6;
          v18 = sub_12C560((_DWORD)v71, a1, (_DWORD)v75, (_DWORD)v70, (_DWORD)v68, (int)v68 + 48, 0);
          v19 = v68;
          v20 = v69;
          if ( !v18 )
          {
            v29 = v68[1];
            v70 = v68;
            v30 = sub_12C560((_DWORD)v71, a1, (_DWORD)v75, (_DWORD)v9, v29, (int)v68 + 64, 0);
            v19 = v68;
            v20 = v69;
            if ( !v30 )
              goto LABEL_24;
          }
          if ( *v72 != 13 )
          {
            v69 = 0;
LABEL_42:
            if ( LOBYTE(v76[0]) )
            {
              v68 = v19;
              v70 = v20;
              v33 = sub_154EC0(a1, v65, v76);
              v20 = v70;
              v19 = v68;
              if ( !v33 )
                goto LABEL_24;
            }
            v21 = (__int64)v72;
            v64 = v20;
            v68 = v82;
            if ( v20 == (__int64 *)v72 )
              v21 = (__int64)v19;
            v70 = v19;
            v22 = (__int64 *)v21;
            sub_122180(v82, a1, v19, 1);
            v23 = v22[1];
            v24 = v70;
            v25 = v64;
            v70 = v64;
            v64 = v24;
            v26 = sub_A8D20(a1, v68, v23, v25, 1);
            v4 = 0;
            v27 = v64;
            if ( v26 )
            {
LABEL_46:
              if ( v83 )
              {
                v84.m128i_i64[0] = 0;
                qfree();
              }
              qfree();
              goto LABEL_25;
            }
            v34 = v64;
            v64 = v85;
            v63 = v27;
            sub_125510(v85, a1, v34, 1);
            if ( sub_A8D20(a1, v85, v22[1], v70, 1) )
            {
              v66.m128i_i8[0] = 0;
              if ( v70 == (__int64 *)v72 )
                goto LABEL_91;
            }
            v35 = sub_A9010(a1, v64, v22[1], v70, 1);
            v36 = v70;
            v37 = (__int64)v63;
            if ( v35 )
              goto LABEL_67;
            v62 = v70;
            v70 = &v88;
            sub_125510(&v88, a1, v63, 0);
            sub_63FD0(v64, &v88);
            v53 = *((_QWORD *)&v89 + 1);
            v54 = _mm_loadu_si128(&v90);
            *((_QWORD *)&v89 + 1) = 0;
            v55 = v63;
            v56 = v62;
            v90 = 0;
            if ( v86 )
            {
              v62 = v63;
              v63 = v56;
              v61 = v54;
              v87.m128i_i64[0] = 0;
              qfree();
              v54 = _mm_load_si128(&v61);
              v55 = v62;
              v56 = v63;
            }
            v86 = v53;
            v57 = v70;
            v62 = v55;
            v63 = v56;
            v87 = v54;
            sub_92DA0((__int64)v70);
            sub_122180(v57, a1, v63, 0);
            v70 = v57;
            LOBYTE(v57) = sub_93470(v64, v57);
            sub_92DA0((__int64)v70);
            v36 = v63;
            v37 = (__int64)v62;
            if ( (_BYTE)v57 )
            {
LABEL_67:
              if ( v36 == (__int64 *)v37 )
                goto LABEL_91;
              v70 = &v88;
            }
            else if ( v66.m128i_i8[0] )
            {
              goto LABEL_75;
            }
            v63 = v36;
            v66.m128i_i64[0] = v37;
            sub_122180(v70, a1, v37, 0);
            v38 = (__int64)v63;
            v63 = (__int64 *)v66.m128i_i64[0];
            v66.m128i_i64[0] = v38;
            sub_63FD0(v68, v70);
            v39 = *((_QWORD *)&v89 + 1);
            v40 = _mm_loadu_si128(&v90);
            *((_QWORD *)&v89 + 1) = 0;
            v41 = v66.m128i_i64[0];
            v42 = v63;
            v90 = 0;
            if ( v83 )
            {
              v62 = v63;
              v63 = (__int64 *)v66.m128i_i64[0];
              v66 = v40;
              v84.m128i_i64[0] = 0;
              qfree();
              v42 = v62;
              v41 = (__int64)v63;
              v40 = _mm_load_si128(&v66);
            }
            v83 = v39;
            v43 = v70;
            v62 = v42;
            v63 = (__int64 *)v41;
            v84 = v40;
            sub_92DA0((__int64)v70);
            sub_125510(v43, a1, v22, 0);
            v66.m128i_i8[0] = sub_93470(v68, v43);
            if ( !v66.m128i_i8[0] )
            {
              sub_92DA0((__int64)v70);
              v37 = (__int64)v62;
              v36 = v63;
              if ( v62 == v22 )
              {
                v44 = v67;
                v67 = (__int64)v62;
                if ( !(unsigned __int8)sub_153950(a1, v62, v44, 0) )
                {
                  if ( !under_debugger )
                    sub_37EA20(52456);
                  goto LABEL_108;
                }
                v45 = sub_153950(a1, v67, v65, 0);
                v37 = v67;
                v36 = v63;
                if ( !v45 )
                {
                  if ( !under_debugger )
                    sub_37EA20(52457);
                  goto LABEL_108;
                }
              }
LABEL_75:
              v91 = 0;
              v65 = v36;
              v90.m128i_i64[1] = 0xFFFFFFFF00000000LL;
              v92[0] = 0xFFFFFFFF00000000LL;
              v92[1] = 0;
              v93[0] = 0xFFFFFFFF00000000LL;
              v93[1] = 0;
              v67 = v37;
              v89 = 0;
              sub_122EA0(v70, v37);
              if ( v69 )
              {
                v60 = (__int64)v69;
                v69 = v65;
                sub_B0740(
                  a1,
                  (_DWORD)v65,
                  (unsigned int)&v90.m128i_u32[2],
                  v67,
                  (unsigned int)&v90.m128i_u32[2],
                  (_DWORD)v72,
                  v60,
                  0);
                v46 = (int)v69;
                v47 = (__int64 *)v67;
              }
              else
              {
                v69 = v65;
                sub_11E3A0(&v90.m128i_u64[1], v71, 9, v90.m128i_i64[0], (unsigned int)(2 * v90.m128i_i32[3]));
                v47 = (__int64 *)v67;
                v46 = (int)v69;
              }
              if ( LOBYTE(v76[0]) )
              {
                v71 = v47;
                sub_B0740(a1, v46, (unsigned int)v92, (_DWORD)v47, (unsigned int)v92, (_DWORD)v72, (__int64)v76, 0);
                v48 = v71;
              }
              else
              {
                v69 = v47;
                sub_11E3A0(v92, v71, 9, v90.m128i_i64[0], v90.m128i_u32[3]);
                v48 = v69;
              }
              v49 = (__int64)v72;
              v50 = v48[1];
              v71 = v48;
              v51 = v72 + 16;
              sub_154E70(a1, v50, v93, *((_QWORD *)v72 + 1), v72 + 16, 1);
              sub_11B450(v49, v70);
              v4 = sub_11CBA0(v71 + 8, v51, 1);
              if ( (_BYTE)v4 )
              {
                if ( v66.m128i_i8[0] )
                  sub_11B160(v71);
                sub_98660(a1, (__int64)v72);
                sub_7BF70((__int64)v70);
                goto LABEL_83;
              }
              if ( !under_debugger )
                sub_37EA20(52455);
LABEL_108:
              BUG();
            }
            sub_92DA0((__int64)v70);
LABEL_91:
            v4 = 0;
LABEL_83:
            if ( v86 )
            {
              v87.m128i_i64[0] = 0;
              qfree();
            }
            qfree();
            goto LABEL_46;
          }
          v69 = (__int64 *)(v72 + 8);
          if ( !LOBYTE(v76[0]) )
          {
            if ( *((_BYTE *)v72 + 32) == 4 )
            {
              v52 = (_DWORD *)*((_QWORD *)v72 + 5);
              if ( *v52 != 13 )
                goto LABEL_60;
            }
            else
            {
              v31 = (_DWORD *)*((_QWORD *)v72 + 2);
              if ( !v31 )
                goto LABEL_60;
              if ( *v31 != 13 )
                goto LABEL_60;
              v68 = v19;
              v70 = v20;
              v58 = sub_123660(v31 + 16, v69, 0);
              v20 = v70;
              v19 = v68;
              if ( !v58 )
                goto LABEL_60;
              v63 = v68;
              v59 = *((_QWORD *)v72 + 2);
              v68 = v70;
              v64 = v85;
              sub_122180(v85, a1, v59, 1);
              v88 = 0;
              v89 = 0u;
              v70 = &v88;
              v90 = 0;
              sub_125AC0(a1, &v88, v69, 0);
              v52 = 0;
              if ( !(unsigned __int8)sub_93470(v85, &v88) )
                v52 = (_DWORD *)*((_QWORD *)v72 + 2);
              sub_92DA0((__int64)v70);
              sub_92DA0((__int64)v64);
              v19 = v63;
              v20 = v68;
            }
            if ( v52 )
            {
              v68 = v19;
              v70 = v20;
              sub_122C80(v76);
              v19 = v68;
              v20 = v70;
              v69 = (__int64 *)(v52 + 8);
            }
          }
LABEL_60:
          v68 = v19;
          v70 = v20;
          v32 = sub_154EC0(a1, v67, v69);
          v20 = v70;
          v19 = v68;
          if ( v32 )
            goto LABEL_42;
LABEL_24:
          v4 = 0;
LABEL_25:
          if ( v80 )
          {
            *(_QWORD *)&v81 = 0;
            qfree();
          }
          qfree();
          goto LABEL_12;
        }
        v70 = v9;
        goto LABEL_17;
      }
    }
  }
  v4 = 0;
LABEL_5:
  sub_11A960(v76);
  return v4;
}
