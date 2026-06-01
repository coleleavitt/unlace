__int64 __fastcall sub_1A5C990(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        double a5,
        double a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // r15d
  __int64 v9; // r8
  char v10; // al
  char v11; // bl
  __int64 v12; // r13
  int **v13; // r12
  _QWORD *v14; // r14
  bool v15; // bl
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  __int64 *v25; // rax
  unsigned __int64 (__fastcall *v26)(__int64, __int64, __int64, __int64, __int64, __int64); // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // dl
  __int64 v30; // rdx
  unsigned __int64 v31; // rbp
  __m128 *v32; // rcx
  int v33; // ebx
  char *v34; // r12
  int v35; // r13d
  __int64 v36; // rdx
  _DWORD *v37; // r14
  __int64 *v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // ecx
  __int64 v46; // r8
  int v47; // r13d
  __int64 v48; // rcx
  __int64 v49; // rbp
  unsigned __int8 *v50; // rcx
  unsigned __int8 *v51; // r12
  int v52; // ebp
  __int64 v53; // rdx
  int v54; // ebx
  __int64 v55; // rsi
  __int64 *v56; // rax
  __int64 v57; // rdx
  char *v58; // [rsp+10h] [rbp-228h] BYREF
  int **v59; // [rsp+18h] [rbp-220h]
  __m128 *v60; // [rsp+20h] [rbp-218h]
  int v61; // [rsp+28h] [rbp-210h]
  bool v62; // [rsp+2Fh] [rbp-209h]
  _QWORD *v63; // [rsp+30h] [rbp-208h]
  int **v64; // [rsp+38h] [rbp-200h]
  char v65; // [rsp+4Bh] [rbp-1EDh] BYREF
  int v66; // [rsp+4Ch] [rbp-1ECh] BYREF
  int *v67; // [rsp+50h] [rbp-1E8h] BYREF
  unsigned __int64 v68; // [rsp+58h] [rbp-1E0h]
  __int64 v69; // [rsp+60h] [rbp-1D8h] BYREF
  int v70; // [rsp+68h] [rbp-1D0h]
  __m128 v71; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v72; // [rsp+80h] [rbp-1B8h]
  __int64 v73; // [rsp+90h] [rbp-1A8h] BYREF
  _QWORD v74[4]; // [rsp+98h] [rbp-1A0h] BYREF
  __int64 v75; // [rsp+B8h] [rbp-180h] BYREF
  _QWORD v76[2]; // [rsp+138h] [rbp-100h] BYREF
  int v77; // [rsp+148h] [rbp-F0h]
  char v78; // [rsp+14Ch] [rbp-ECh]
  _QWORD v79[7]; // [rsp+150h] [rbp-E8h] BYREF
  _DWORD v80[26]; // [rsp+188h] [rbp-B0h] BYREF
  __int64 v81; // [rsp+1F0h] [rbp-48h]
  __int16 v82; // [rsp+1F8h] [rbp-40h]
  char v83; // [rsp+1FAh] [rbp-3Eh]

  v8 = 0;
  v9 = *(_QWORD *)(a2 + 120);
  if ( v9 )
  {
    v10 = *(_BYTE *)(a3 + 8);
    v11 = *(_BYTE *)(a3 + 9);
    v12 = a3 - 64;
    v13 = (int **)a3;
    *(_BYTE *)(a3 + 9) = v11 | 0x10;
    v14 = (_QWORD *)a2;
    v15 = (v11 & 0x10) != 0;
    if ( (v10 & 0x7Fu) - 59 >= 3 )
      v12 = 0;
    if ( !*(_BYTE *)(a2 + 160) && (v9 & 7) == 5 )
    {
      v9 &= 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
        goto LABEL_14;
    }
    v8 = sub_1A5A1A0(a1, a2, a3, a4, v9, a8, a5, a6);
    if ( (_BYTE)v8 )
    {
      sub_1A43500(a2);
      if ( v12 )
        *(_QWORD *)(a2 + 96) = v12;
      goto LABEL_10;
    }
    if ( *(_BYTE *)(a2 + 160) )
      goto LABEL_10;
    if ( ((_BYTE)v13[1] & 0x7F) == 0x18 || ((_BYTE)v13[1] & 0x7F) == 0 )
    {
      v8 = sub_1A5AF70(a1, a2, (unsigned __int64)v13, v17, v18, v19);
      goto LABEL_10;
    }
    if ( v12 )
    {
      v21 = *(_QWORD *)(v12 + 128);
      if ( v21
        || (sub_7052B0((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), v16, v17, v18, v19),
            (v21 = *(_QWORD *)(v12 + 128)) != 0) )
      {
        if ( *(_QWORD *)(v21 + 88) )
        {
          v22 = *(_DWORD *)(a2 + 152);
          if ( ((v22 - 2) & 0xFFFFFFFD) != 0 && ((v22 - 7) & 0xFFFFFFFB) != 0 )
          {
            if ( (unsigned __int8)sub_B8E180(v12 + 64) && (unsigned __int8)sub_B96D40(v12) )
            {
LABEL_14:
              *(_DWORD *)a2 = 1;
              v8 = 0;
              goto LABEL_10;
            }
            v23 = *(_DWORD *)(a2 + 156);
            v24 = *(_QWORD *)(a2 + 120);
            v74[2] = 0;
            v66 = v23;
            v70 = v23;
            v74[3] = 1;
            v74[1] = v74;
            v74[0] = v74;
            v69 = v24;
            v25 = &v75;
            do
            {
              *v25 = 0;
              v25 += 2;
            }
            while ( v25 != v76 );
            v26 = sub_1A38AF0;
            v78 = 1;
            v76[1] = 4;
            v76[0] = v79;
            v79[5] = v80;
            v79[6] = 0x400000000LL;
            v77 = 0;
            v79[4] = 0;
            v80[24] = 0;
            v81 = 0;
            v82 = 257;
            v83 = 1;
            v73 = v12;
            v8 = sub_B6EFE0(v12, (__int64 *)sub_1A38AF0, (__int64)&v69, (__int64)&v73, 0);
            if ( !(_BYTE)v8 )
              goto LABEL_33;
            v29 = *((_BYTE *)v14 + 167);
            v14[12] = v12;
            v65 = v29;
            v58 = &v65;
            v67 = &v66;
            v30 = v74[0];
            v72 = a1;
            v71 = _mm_loadh_ps((const double *)&v58);
            if ( (_QWORD *)v74[0] == v74 )
            {
              v45 = 3;
              LODWORD(v58) = 3;
            }
            else
            {
              v62 = v15;
              v31 = 0;
              v59 = &v67;
              v32 = &v71;
              v33 = 3;
              v61 = 0;
              v60 = &v71;
              v58 = (char *)v74;
              v63 = v14;
              v64 = v13;
              v34 = (char *)v74[0];
              do
              {
                v35 = v33;
                v36 = 3LL * *((unsigned int *)v34 + 6);
                v37 = (_DWORD *)(*((_QWORD *)v34 + 2) + 24LL * *((unsigned int *)v34 + 6) - 24);
                if ( *((_DWORD *)v34 + 32) < v33 )
                {
                  v33 = *((_DWORD *)v34 + 32);
                  v35 = v33;
                }
                v38 = *(__int64 **)(*(_QWORD *)v37 + 16LL);
                if ( (v31 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
                {
                  v39 = sub_1A386B0(v38, (__int64)v26, v36, (__int64)v32, v27);
                  if ( (*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                      | ((unsigned __int8)*(_QWORD *)&byte_8[v39 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v39) & 7) == v31 )
                  {
                    if ( v37[4] != v61 )
                    {
                      v26 = *((unsigned __int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))v34
                            + 17);
                      if ( !sub_1A38600(v59, (__int64)v26) )
                      {
                        v15 = v62;
                        v13 = v64;
                        sub_1A45E20(v63, (__int64)&v73);
                        goto LABEL_33;
                      }
                    }
                  }
                  else if ( !sub_1A38600(v59, *((_QWORD *)v34 + 17))
                         || (v26 = *(unsigned __int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(v74[0] + 136LL),
                             !sub_1A47C50((const __m128i *)v60, (__int64)v26, *((_QWORD *)v34 + 17), v40, v41, v42)) )
                  {
                    v15 = v62;
                    v13 = v64;
                    sub_1A45D10(v63, (__int64)&v73);
                    goto LABEL_33;
                  }
                }
                else
                {
                  v43 = sub_1A386B0(v38, (__int64)v26, v36, (__int64)v32, v27);
                  v44 = *(_QWORD *)&byte_8[v43 & 0xFFFFFFFFFFFFFFF0LL];
                  v61 = v37[4];
                  v31 = v44 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v44 | (unsigned __int8)v43) & 7;
                }
                v34 = *(char **)v34;
              }
              while ( v34 != v58 );
              LODWORD(v58) = v33;
              v14 = v63;
              v45 = v35;
              v15 = v62;
              v13 = v64;
              v30 = v74[0];
            }
            v46 = *(_QWORD *)(v30 + 136);
            if ( !v46 )
              goto LABEL_53;
            LOBYTE(v61) = v15;
            v47 = v45;
            v48 = v46;
            v60 = (__m128 *)(v14 + 1);
            v59 = v13;
            while ( 1 )
            {
              v49 = v48;
              v50 = (unsigned __int8 *)(v48 & 0xFFFFFFFFFFFFFFF8LL);
              v51 = v50;
              v52 = (v49 >> 2) & 1;
              if ( !v52 )
                break;
              if ( v50 )
              {
                v53 = *(unsigned __int8 *)(*(_QWORD *)v50 + 29LL);
                LOBYTE(v53) = (unsigned __int8)v53 >> 5;
                v54 = v53 & 3;
                if ( v54 == 2 )
                {
                  v54 = 3;
                  v55 = *(_QWORD *)v50;
                }
                else
                {
                  if ( v47 > v54 )
                    v54 = (int)v58;
                  v55 = *(_QWORD *)v50;
                }
                v56 = sub_1A47770((__int64)v14, v55, v53, (unsigned __int64)v50, v46, v28);
                if ( !v56 )
                  goto LABEL_51;
                goto LABEL_48;
              }
              v54 = 0;
              if ( v47 > 0 )
                v54 = (int)v58;
              v56 = sub_1A47770((__int64)v14, 0, 0, 0, v46, v28);
              if ( v56 )
                goto LABEL_48;
LABEL_49:
              if ( !v52 || !v51 )
                goto LABEL_52;
LABEL_51:
              v48 = *((_QWORD *)v51 + 1);
              if ( !v48 )
                goto LABEL_52;
            }
            v57 = v50[29];
            LOBYTE(v57) = (unsigned __int8)v57 >> 5;
            v54 = v57 & 3;
            if ( v54 == 2 )
            {
              v54 = 3;
            }
            else if ( v47 > v54 )
            {
              v54 = (int)v58;
            }
            v56 = sub_1A47770((__int64)v14, (__int64)v50, v57, (unsigned __int64)v50, v46, v28);
            if ( !v56 )
            {
LABEL_52:
              v15 = v61;
              v13 = v59;
LABEL_53:
              sub_1A43500((__int64)v14);
LABEL_33:
              sub_F7C4A0((__int64)&v73);
              goto LABEL_10;
            }
LABEL_48:
            v68 = (unsigned __int64)v56 | (unsigned int)v54;
            sub_1743080((__int64)v60, v68);
            *(_DWORD *)v14 = 2;
            goto LABEL_49;
          }
        }
      }
    }
LABEL_10:
    *((_BYTE *)v13 + 9) = *((_BYTE *)v13 + 9) & 0xEF | (16 * v15);
  }
  return v8;
}
