__int64 __fastcall sub_1A48440(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r15d
  __int64 v5; // r11
  char v6; // al
  char v7; // bl
  __int64 v8; // rbp
  int **v9; // r12
  _QWORD *v10; // r14
  bool v11; // bl
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // cl
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  char v26; // dl
  char *v27; // r13
  _QWORD *v28; // rdx
  __int64 v29; // rsi
  unsigned __int64 v30; // rbp
  int v31; // ebx
  char *v32; // r12
  int v33; // r13d
  __int64 v34; // rdx
  _DWORD *v35; // r14
  __int64 *v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // edi
  __int64 v44; // rcx
  __int64 v45; // rbp
  unsigned __int8 *v46; // rcx
  unsigned __int8 *v47; // r12
  int v48; // ebp
  __int64 v49; // rdx
  int v50; // ebx
  __int64 v51; // rsi
  __int64 *v52; // rax
  __int64 v53; // rdx
  char *v55; // [rsp+10h] [rbp-228h] BYREF
  int **v56; // [rsp+18h] [rbp-220h]
  __m128 *v57; // [rsp+20h] [rbp-218h]
  int v58; // [rsp+28h] [rbp-210h]
  bool v59; // [rsp+2Fh] [rbp-209h]
  _QWORD *v60; // [rsp+30h] [rbp-208h]
  int **v61; // [rsp+38h] [rbp-200h]
  char v62; // [rsp+4Bh] [rbp-1EDh] BYREF
  int v63; // [rsp+4Ch] [rbp-1ECh] BYREF
  int *v64; // [rsp+50h] [rbp-1E8h] BYREF
  unsigned __int64 v65; // [rsp+58h] [rbp-1E0h]
  __int64 v66; // [rsp+60h] [rbp-1D8h] BYREF
  int v67; // [rsp+68h] [rbp-1D0h]
  __m128 v68; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v69; // [rsp+80h] [rbp-1B8h]
  __int64 v70; // [rsp+90h] [rbp-1A8h] BYREF
  _QWORD v71[4]; // [rsp+98h] [rbp-1A0h] BYREF
  __int64 v72; // [rsp+B8h] [rbp-180h] BYREF
  _QWORD v73[2]; // [rsp+138h] [rbp-100h] BYREF
  int v74; // [rsp+148h] [rbp-F0h]
  char v75; // [rsp+14Ch] [rbp-ECh]
  _QWORD v76[7]; // [rsp+150h] [rbp-E8h] BYREF
  _DWORD v77[26]; // [rsp+188h] [rbp-B0h] BYREF
  __int64 v78; // [rsp+1F0h] [rbp-48h]
  __int16 v79; // [rsp+1F8h] [rbp-40h]
  char v80; // [rsp+1FAh] [rbp-3Eh]

  v4 = 0;
  v5 = *(_QWORD *)(a2 + 120);
  if ( v5 )
  {
    v6 = *(_BYTE *)(a3 + 8);
    v7 = *(_BYTE *)(a3 + 9);
    v8 = a3 - 64;
    v9 = (int **)a3;
    *(_BYTE *)(a3 + 9) = v7 | 0x10;
    v10 = (_QWORD *)a2;
    v11 = (v7 & 0x10) != 0;
    if ( (v6 & 0x7Fu) - 59 >= 3 )
      v8 = 0;
    if ( !(_BYTE)a4
      && !*(_BYTE *)(a2 + 160)
      && (v5 & 7) == 5
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    {
      goto LABEL_15;
    }
    v12 = sub_1A5A1A0(a1, a2, a3);
    v16 = a4;
    v4 = v12;
    if ( (_BYTE)v12 )
    {
      sub_1A43500(a2);
      if ( v8 )
        *(_QWORD *)(a2 + 96) = v8;
      goto LABEL_11;
    }
    if ( *(_BYTE *)(a2 + 160) )
      goto LABEL_11;
    if ( ((_BYTE)v9[1] & 0x7F) == 0 || ((_BYTE)v9[1] & 0x7F) == 0x18 )
    {
      v4 = sub_1A5AF70(a1, a2, v9, a4);
      goto LABEL_11;
    }
    if ( v8 )
    {
      v18 = *(_QWORD *)(v8 + 128);
      if ( v18
        || (sub_7052B0((__int64 *)(*(_QWORD *)(v8 + 104) + 96LL), *(_QWORD *)(v8 + 104), v13, a4, v14, v15),
            v18 = *(_QWORD *)(v8 + 128),
            v16 = a4,
            v18) )
      {
        if ( *(_QWORD *)(v18 + 88) )
        {
          v19 = *(_DWORD *)(a2 + 152);
          if ( ((v19 - 2) & 0xFFFFFFFD) != 0 && ((v19 - 7) & 0xFFFFFFFB) != 0 )
          {
            if ( !v16 && (unsigned __int8)sub_B8E180(v8 + 64) && (unsigned __int8)sub_B96D40(v8) )
            {
LABEL_15:
              *(_DWORD *)a2 = 1;
              v4 = 0;
              goto LABEL_11;
            }
            v20 = *(_DWORD *)(a2 + 156);
            v21 = *(_QWORD *)(a2 + 120);
            v71[2] = 0;
            v63 = v20;
            v67 = v20;
            v71[3] = 1;
            v71[1] = v71;
            v71[0] = v71;
            v66 = v21;
            v22 = &v72;
            do
            {
              *v22 = 0;
              v22 += 2;
            }
            while ( v73 != v22 );
            v75 = 1;
            v73[1] = 4;
            v73[0] = v76;
            v76[5] = v77;
            v76[6] = 0x400000000LL;
            v74 = 0;
            v76[4] = 0;
            v77[24] = 0;
            v78 = 0;
            v79 = 257;
            v80 = 1;
            v70 = v8;
            v4 = sub_B6EFE0(v8, (__int64 *)sub_1A38AF0, (__int64)&v66, (__int64)&v70, 0);
            if ( !(_BYTE)v4 )
              goto LABEL_35;
            v26 = *(_BYTE *)(a2 + 167);
            v69 = a1;
            v62 = v26;
            v27 = (char *)v71[0];
            v55 = &v62;
            v64 = &v63;
            v28 = (_QWORD *)v71[0];
            *(_QWORD *)(a2 + 96) = v8;
            v68 = _mm_loadh_ps((const double *)&v55);
            if ( v28 == v71 )
            {
              v43 = 3;
              LODWORD(v55) = 3;
            }
            else
            {
              v29 = 3;
              v59 = v11;
              v30 = 0;
              v56 = &v64;
              v31 = 3;
              v58 = 0;
              v57 = &v68;
              v55 = (char *)v71;
              v60 = v10;
              v61 = v9;
              v32 = v27;
              do
              {
                v33 = v31;
                v34 = 3LL * *((unsigned int *)v32 + 6);
                v35 = (_DWORD *)(*((_QWORD *)v32 + 2) + 24LL * *((unsigned int *)v32 + 6) - 24);
                if ( *((_DWORD *)v32 + 32) < v31 )
                {
                  v31 = *((_DWORD *)v32 + 32);
                  v33 = v31;
                }
                v36 = *(__int64 **)(*(_QWORD *)v35 + 16LL);
                if ( (v30 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
                {
                  v37 = sub_1A386B0(v36, v29, v34, v23, v24);
                  if ( (*(_QWORD *)&byte_8[v37 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                      | ((unsigned __int8)*(_QWORD *)&byte_8[v37 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v37) & 7) == v30 )
                  {
                    if ( v35[4] != v58 )
                    {
                      v29 = *((_QWORD *)v32 + 17);
                      if ( !sub_1A38600(v56, v29) )
                      {
                        v11 = v59;
                        v9 = v61;
                        sub_1A45E20(v60, (__int64)&v70);
                        goto LABEL_35;
                      }
                    }
                  }
                  else if ( !sub_1A38600(v56, *((_QWORD *)v32 + 17))
                         || (v29 = *(_QWORD *)(v71[0] + 136LL),
                             !sub_1A47C50((const __m128i *)v57, v29, *((_QWORD *)v32 + 17), v38, v39, v40)) )
                  {
                    v11 = v59;
                    v9 = v61;
                    sub_1A45D10(v60, (__int64)&v70);
                    goto LABEL_35;
                  }
                }
                else
                {
                  v41 = sub_1A386B0(v36, v29, v34, v23, v24);
                  v42 = *(_QWORD *)&byte_8[v41 & 0xFFFFFFFFFFFFFFF0LL];
                  v58 = v35[4];
                  v30 = v42 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v42 | (unsigned __int8)v41) & 7;
                }
                v32 = *(char **)v32;
              }
              while ( v32 != v55 );
              LODWORD(v55) = v31;
              v10 = v60;
              v43 = v33;
              v11 = v59;
              v9 = v61;
              v28 = (_QWORD *)v71[0];
            }
            v44 = v28[17];
            if ( !v44 )
              goto LABEL_55;
            LOBYTE(v58) = v11;
            v57 = (__m128 *)(v10 + 1);
            v56 = v9;
            while ( 1 )
            {
              v45 = v44;
              v46 = (unsigned __int8 *)(v44 & 0xFFFFFFFFFFFFFFF8LL);
              v47 = v46;
              v48 = (v45 >> 2) & 1;
              if ( !v48 )
                break;
              if ( v46 )
              {
                v49 = *(unsigned __int8 *)(*(_QWORD *)v46 + 29LL);
                LOBYTE(v49) = (unsigned __int8)v49 >> 5;
                v50 = v49 & 3;
                if ( v50 == 2 )
                {
                  v50 = 3;
                  v51 = *(_QWORD *)v46;
                }
                else
                {
                  if ( v43 > v50 )
                    v50 = (int)v55;
                  v51 = *(_QWORD *)v46;
                }
                v52 = sub_1A47770((__int64)v10, v51, v49, (unsigned __int64)v46, v24, v25);
                if ( !v52 )
                  goto LABEL_53;
                goto LABEL_50;
              }
              v50 = 0;
              if ( v43 > 0 )
                v50 = (int)v55;
              v52 = sub_1A47770((__int64)v10, 0, 0, 0, v24, v25);
              if ( v52 )
                goto LABEL_50;
LABEL_51:
              if ( !v48 || !v47 )
                goto LABEL_54;
LABEL_53:
              v44 = *((_QWORD *)v47 + 1);
              if ( !v44 )
                goto LABEL_54;
            }
            v53 = v46[29];
            LOBYTE(v53) = (unsigned __int8)v53 >> 5;
            v50 = v53 & 3;
            if ( v50 == 2 )
            {
              v50 = 3;
            }
            else if ( v50 < v43 )
            {
              v50 = (int)v55;
            }
            v52 = sub_1A47770((__int64)v10, (__int64)v46, v53, (unsigned __int64)v46, v24, v25);
            if ( !v52 )
            {
LABEL_54:
              v11 = v58;
              v9 = v56;
LABEL_55:
              sub_1A43500((__int64)v10);
LABEL_35:
              sub_F7C4A0((__int64)&v70);
              goto LABEL_11;
            }
LABEL_50:
            v65 = (unsigned __int64)v52 | (unsigned int)v50;
            sub_1743080((__int64)v57, v65);
            *(_DWORD *)v10 = 2;
            goto LABEL_51;
          }
        }
      }
    }
LABEL_11:
    *((_BYTE *)v9 + 9) = *((_BYTE *)v9 + 9) & 0xEF | (16 * v11);
  }
  return v4;
}
