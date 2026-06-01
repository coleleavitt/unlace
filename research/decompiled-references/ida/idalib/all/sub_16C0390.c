__int64 __fastcall sub_16C0390(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v8; // cl
  int v9; // ecx
  __int64 v10; // rdi
  int v11; // esi
  __int64 v12; // r13
  unsigned __int8 *v13; // rax
  __int64 v14; // rdx
  unsigned __int8 *v15; // rbp
  __int64 result; // rax
  unsigned int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rdx
  bool v21; // zf
  unsigned int v22; // esi
  __int64 v23; // rdx
  int v24; // eax
  unsigned int v25; // edi
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rcx
  __int64 v28; // rsi
  unsigned __int8 *v29; // rax
  __int64 v30; // rax
  unsigned int v31; // r9d
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int32 v39; // eax
  unsigned __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rsi
  unsigned int v47; // ecx
  __int64 v48; // rsi
  unsigned int v49; // ecx
  __int64 v50; // rsi
  unsigned int v51; // ecx
  __int64 v52; // rsi
  unsigned __int8 *v53; // r10
  __int64 v54; // rcx
  int v55; // edi
  unsigned int v56; // edx
  __int64 v57; // r8
  __int64 v58; // r14
  unsigned int *v59; // rdi
  __int64 v60; // r14
  unsigned int *v61; // rdi
  int v62; // eax
  unsigned int *v63; // rdi
  unsigned int *v64; // rdi
  bool v65; // sf
  int v66; // r10d
  unsigned __int8 *v67; // r9
  __int64 v68; // r15
  __int64 v69; // r15
  __int64 v70; // r15
  __int64 v71; // r15
  __int64 v72; // r9
  int v73; // edx
  __int64 v74; // r11
  __int64 v75; // r10
  __int64 v76; // r8
  int v77; // edx
  __int64 v78; // r11
  __int64 v79; // r10
  __int64 v80; // r8
  int v81; // edx
  __int64 v82; // r11
  __int64 v83; // r10
  __int64 v84; // r9
  int v85; // edx
  __int64 v86; // r11
  __int64 v87; // r10
  __int64 v88; // [rsp+8h] [rbp-90h] BYREF
  char *v89; // [rsp+10h] [rbp-88h]
  __int64 v90; // [rsp+18h] [rbp-80h]
  int v91; // [rsp+24h] [rbp-74h]
  __int64 v92; // [rsp+28h] [rbp-70h] BYREF
  __m128 v93; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int8 *v94; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v95; // [rsp+48h] [rbp-50h]

  v8 = *(_BYTE *)(a1 + 64);
  v92 = a2;
  v9 = v8 & 1;
  if ( v9 )
  {
    v10 = a1 + 72;
    v11 = 15;
  }
  else
  {
    v22 = *(_DWORD *)(a1 + 80);
    v10 = *(_QWORD *)(a1 + 72);
    if ( !v22 )
    {
      v94 = nullptr;
      v23 = *(unsigned int *)(a1 + 64);
      v24 = (*(_DWORD *)(a1 + 64) >> 1) + 1;
      goto LABEL_15;
    }
    v11 = v22 - 1;
  }
  v12 = v92;
  a5 = v11 & (((unsigned int)v92 >> 9) ^ ((unsigned int)v92 >> 4));
  v13 = (unsigned __int8 *)(v10 + (a5 << 6));
  v14 = *(_QWORD *)v13;
  if ( v92 == *(_QWORD *)v13 )
    goto LABEL_4;
  a6 = 1;
  v53 = nullptr;
  if ( v14 == -4096 )
  {
LABEL_44:
    v23 = *(unsigned int *)(a1 + 64);
    v94 = v13;
    v25 = 48;
    v22 = 16;
    v24 = ((unsigned int)v23 >> 1) + 1;
    if ( (_BYTE)v9 )
    {
LABEL_16:
      v26 = (unsigned int)(4 * v24);
      if ( (unsigned int)v26 < v25 )
      {
        v27 = (_QWORD *)(v22 >> 3);
        if ( v22 - *(_DWORD *)(a1 + 68) - v24 <= (unsigned int)v27 )
        {
          sub_16B9B50(a1 + 64, v22, v23, v27, a5, a6);
          sub_16B5A70(a1 + 64, &v92, &v94);
          v28 = v92;
          v29 = v94;
          LODWORD(v23) = *(_DWORD *)(a1 + 64);
        }
        else
        {
          v28 = v92;
          v29 = v94;
        }
        goto LABEL_19;
      }
      sub_16B9B50(a1 + 64, 2 * v22, v23, (_QWORD *)v26, a5, a6);
      if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
      {
        v28 = v92;
        v54 = a1 + 72;
        v55 = 15;
      }
      else
      {
        v62 = *(_DWORD *)(a1 + 80);
        v54 = *(_QWORD *)(a1 + 72);
        v28 = v92;
        v55 = v62 - 1;
        if ( !v62 )
        {
          v94 = nullptr;
          v29 = nullptr;
          LODWORD(v23) = *(_DWORD *)(a1 + 64);
LABEL_19:
          *(_DWORD *)(a1 + 64) = (2 * ((unsigned int)v23 >> 1) + 2) | v23 & 1;
          if ( *(_QWORD *)v29 != -4096 )
            --*(_DWORD *)(a1 + 68);
          *((_QWORD *)v29 + 1) = 0;
          v15 = v29 + 8;
          *((_DWORD *)v29 + 4) = 0;
          *((_QWORD *)v29 + 3) = 0;
          *((_DWORD *)v29 + 8) = 0;
          *((_QWORD *)v29 + 5) = 0;
          *((_DWORD *)v29 + 12) = 0;
          v29[56] = 0;
          *(_QWORD *)v29 = v28;
          v12 = v92;
LABEL_22:
          if ( *((_QWORD *)v15 + 4) )
          {
            v30 = *(_QWORD *)(a1 + 16);
            v31 = *((_DWORD *)v15 + 10);
            v32 = *(unsigned int *)(a1 + 1096);
            v33 = v30 + 4 * v32;
            if ( *(char *)(v33 + 3) < 0 )
            {
              v51 = *(_DWORD *)v33 & 0x7FFFFFFF;
              v32 = v51;
              v52 = v30 + 4LL * v51;
              if ( *(char *)(v52 + 3) < 0 )
              {
                v51 = *(_DWORD *)v52 & 0x7FFFFFFF;
                v32 = v51;
                v88 = 4LL * v51;
                v63 = (unsigned int *)(v30 + v88);
                if ( *(char *)(v30 + v88 + 3) < 0 )
                {
                  v51 = *v63 & 0x7FFFFFFF;
                  v90 = 4LL * v51;
                  v65 = *(char *)(v30 + v90 + 3) < 0;
                  v89 = (char *)(v30 + v90);
                  if ( v65 )
                  {
                    v91 = *(_DWORD *)(v30 + v90);
                    v51 = v91 & 0x7FFFFFFF;
                    v70 = v30 + 4LL * (v91 & 0x7FFFFFFF);
                    if ( *(char *)(v70 + 3) < 0 )
                    {
                      v51 = sub_16B5920((_QWORD *)(a1 + 16), *(_DWORD *)v70 & 0x7FFFFFFF) & 0x7FFFFFFF;
                      v30 = *(_QWORD *)(a1 + 16);
                      v81 = *(_DWORD *)(v30 + 4 * v80);
                      v52 = v30 + v82;
                      v89 = (char *)(v30 + v90);
                      v63 = (unsigned int *)(v30 + v88);
                      *(_DWORD *)(v30 + 4 * v80) = v51 | v81 & 0x80000000;
                      v32 = v51;
                      v33 = v30 + v83;
                    }
                    else
                    {
                      v32 = v51;
                    }
                    LODWORD(v88) = *(_DWORD *)v89;
                    *(_DWORD *)v89 = v51 | v88 & 0x80000000;
                  }
                  else
                  {
                    v32 = v51;
                  }
                  *v63 = v51 | *v63 & 0x80000000;
                }
                *(_DWORD *)v52 = v51 | *(_DWORD *)v52 & 0x80000000;
              }
              *(_DWORD *)v33 = *(_DWORD *)v33 & 0x80000000 | v51;
            }
            v34 = v30 + 4LL * v31;
            if ( *(char *)(v34 + 3) < 0 )
            {
              v49 = *(_DWORD *)v34 & 0x7FFFFFFF;
              v31 = v49;
              v50 = v30 + 4LL * v49;
              if ( *(char *)(v50 + 3) < 0 )
              {
                v49 = *(_DWORD *)v50 & 0x7FFFFFFF;
                v31 = v49;
                v88 = 4LL * v49;
                v64 = (unsigned int *)(v30 + v88);
                if ( *(char *)(v30 + v88 + 3) < 0 )
                {
                  v49 = *v64 & 0x7FFFFFFF;
                  v90 = 4LL * v49;
                  v65 = *(char *)(v30 + v90 + 3) < 0;
                  v89 = (char *)(v30 + v90);
                  if ( v65 )
                  {
                    v91 = *(_DWORD *)(v30 + v90);
                    v49 = v91 & 0x7FFFFFFF;
                    v71 = v30 + 4LL * (v91 & 0x7FFFFFFF);
                    if ( *(char *)(v71 + 3) < 0 )
                    {
                      v49 = sub_16B5920((_QWORD *)(a1 + 16), *(_DWORD *)v71 & 0x7FFFFFFF) & 0x7FFFFFFF;
                      v30 = *(_QWORD *)(a1 + 16);
                      v85 = *(_DWORD *)(v30 + 4 * v84);
                      v50 = v30 + v86;
                      v89 = (char *)(v30 + v90);
                      v64 = (unsigned int *)(v30 + v88);
                      *(_DWORD *)(v30 + 4 * v84) = v49 | v85 & 0x80000000;
                      v31 = v49;
                      v34 = v30 + v87;
                    }
                    else
                    {
                      v31 = v91 & 0x7FFFFFFF;
                    }
                    LODWORD(v88) = *(_DWORD *)v89;
                    *(_DWORD *)v89 = v49 | v88 & 0x80000000;
                  }
                  else
                  {
                    v31 = v49;
                  }
                  *v64 = v49 | *v64 & 0x80000000;
                }
                *(_DWORD *)v50 = v49 | *(_DWORD *)v50 & 0x80000000;
              }
              *(_DWORD *)v34 = *(_DWORD *)v34 & 0x80000000 | v49;
            }
            if ( v31 <= (unsigned int)v32 )
            {
              if ( v31 == (_DWORD)v32 )
              {
LABEL_29:
                v35 = *(_QWORD *)(a1 + 8);
                v88 = *((_QWORD *)v15 + 4);
                sub_168B9B0((__int64)&v94, v35 + 8, 7507);
                sub_16B73F0(&v94, v12);
                v39 = sub_C00A40(a3, v12, v36, v37, v38);
                v93.m128_i8[8] = 1;
                v93.m128_i32[0] = v39;
                v93.m128_i32[1] = v39;
                sub_AEC610((__int64 *)&v94, (__int64 *)&v93);
                v40 = v88;
                v88 = a3;
                v93 = _mm_loadh_ps((const double *)&v88);
                v44 = sub_C00A40(v40, (__int64)&v93, v41, v42, v43);
                sub_18CA280(v35, v44, &v93, 2, &v94);
                if ( v94 && v95 )
                  sub_1580C40(v95, (unsigned __int64)v94);
                v15[48] = 1;
              }
              else
              {
                while ( 1 )
                {
                  LODWORD(v32) = *(_DWORD *)(v30 + 4 * v32) & 0x7FFFFFFF;
                  if ( (unsigned int)v32 < v31 )
                    break;
                  if ( (_DWORD)v32 == v31 )
                    goto LABEL_29;
                }
              }
            }
          }
          goto LABEL_5;
        }
      }
      v56 = v55 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
      v29 = (unsigned __int8 *)(v54 + ((unsigned __int64)v56 << 6));
      v57 = *(_QWORD *)v29;
      if ( *(_QWORD *)v29 != v28 )
      {
        v66 = 1;
        v67 = nullptr;
        if ( v57 != -4096 )
        {
          while ( 1 )
          {
            if ( !v67 && v57 == -8192 )
              v67 = v29;
            v56 = v55 & (v66 + v56);
            v29 = (unsigned __int8 *)(v54 + ((unsigned __int64)v56 << 6));
            v57 = *(_QWORD *)v29;
            if ( *(_QWORD *)v29 == v28 )
              break;
            if ( v57 == -4096 )
            {
              if ( v67 )
                v29 = v67;
              break;
            }
            ++v66;
          }
        }
      }
      v94 = v29;
      LODWORD(v23) = *(_DWORD *)(a1 + 64);
      goto LABEL_19;
    }
    v22 = *(_DWORD *)(a1 + 80);
LABEL_15:
    v25 = 3 * v22;
    goto LABEL_16;
  }
  while ( 1 )
  {
    if ( !v53 && v14 == -8192 )
      v53 = v13;
    a5 = v11 & (unsigned int)(a6 + a5);
    v13 = (unsigned __int8 *)(v10 + ((unsigned __int64)(unsigned int)a5 << 6));
    v14 = *(_QWORD *)v13;
    if ( v92 == *(_QWORD *)v13 )
      break;
    if ( v14 == -4096 )
    {
      if ( v53 )
        v13 = v53;
      goto LABEL_44;
    }
    a6 = (unsigned int)(a6 + 1);
  }
LABEL_4:
  v15 = v13 + 8;
  if ( !v13[56] )
    goto LABEL_22;
LABEL_5:
  if ( !*(_QWORD *)v15 )
    goto LABEL_11;
  result = *(_QWORD *)(a1 + 16);
  v17 = *((_DWORD *)v15 + 2);
  v18 = *(unsigned int *)(a1 + 1096);
  v19 = result + 4 * v18;
  if ( *(char *)(v19 + 3) < 0 )
  {
    v45 = *(_DWORD *)v19 & 0x7FFFFFFF;
    v18 = v45;
    v46 = result + 4LL * v45;
    if ( *(char *)(v46 + 3) < 0 )
    {
      v45 = *(_DWORD *)v46 & 0x7FFFFFFF;
      v18 = v45;
      v60 = 4LL * v45;
      v61 = (unsigned int *)(result + v60);
      if ( *(char *)(result + v60 + 3) < 0 )
      {
        v45 = *v61 & 0x7FFFFFFF;
        v18 = v45;
        v89 = (char *)(4LL * v45);
        v65 = v89[result + 3] < 0;
        v88 = (__int64)&v89[result];
        if ( v65 )
        {
          v45 = *(_DWORD *)&v89[result] & 0x7FFFFFFF;
          v68 = result + 4LL * v45;
          if ( *(char *)(v68 + 3) < 0 )
          {
            v45 = sub_16B5920((_QWORD *)(a1 + 16), *(_DWORD *)v68 & 0x7FFFFFFF) & 0x7FFFFFFF;
            result = *(_QWORD *)(a1 + 16);
            v77 = *(_DWORD *)(result + 4 * v76);
            v61 = (unsigned int *)(result + v60);
            v46 = result + v78;
            v88 = (__int64)&v89[result];
            *(_DWORD *)(result + 4 * v76) = v45 | v77 & 0x80000000;
            v18 = v45;
            v19 = result + v79;
          }
          else
          {
            v18 = v45;
          }
          *(_DWORD *)v88 = v45 | *(_DWORD *)v88 & 0x80000000;
        }
        *v61 = v45 | *v61 & 0x80000000;
      }
      *(_DWORD *)v46 = v45 | *(_DWORD *)v46 & 0x80000000;
    }
    *(_DWORD *)v19 = *(_DWORD *)v19 & 0x80000000 | v45;
  }
  v20 = result + 4LL * v17;
  if ( *(char *)(v20 + 3) >= 0 )
  {
    v21 = v17 == (_DWORD)v18;
    if ( v17 <= (unsigned int)v18 )
      goto LABEL_9;
    goto LABEL_11;
  }
  v47 = *(_DWORD *)v20 & 0x7FFFFFFF;
  v17 = v47;
  v48 = result + 4LL * v47;
  if ( *(char *)(v48 + 3) < 0 )
  {
    v47 = *(_DWORD *)v48 & 0x7FFFFFFF;
    v17 = v47;
    v58 = 4LL * v47;
    v59 = (unsigned int *)(result + v58);
    if ( *(char *)(result + v58 + 3) < 0 )
    {
      v47 = *v59 & 0x7FFFFFFF;
      v17 = v47;
      v89 = (char *)(4LL * v47);
      v65 = v89[result + 3] < 0;
      v88 = (__int64)&v89[result];
      if ( v65 )
      {
        v47 = *(_DWORD *)&v89[result] & 0x7FFFFFFF;
        v69 = result + 4LL * v47;
        if ( *(char *)(v69 + 3) < 0 )
        {
          v47 = sub_16B5920((_QWORD *)(a1 + 16), *(_DWORD *)v69 & 0x7FFFFFFF) & 0x7FFFFFFF;
          result = *(_QWORD *)(a1 + 16);
          v73 = *(_DWORD *)(result + 4 * v72);
          v59 = (unsigned int *)(result + v58);
          v48 = result + v74;
          v88 = (__int64)&v89[result];
          *(_DWORD *)(result + 4 * v72) = v47 | v73 & 0x80000000;
          v17 = v47;
          v20 = result + v75;
        }
        else
        {
          v17 = v47;
        }
        *(_DWORD *)v88 = v47 | *(_DWORD *)v88 & 0x80000000;
      }
      *v59 = v47 | *v59 & 0x80000000;
    }
    *(_DWORD *)v48 = v47 | *(_DWORD *)v48 & 0x80000000;
  }
  *(_DWORD *)v20 = *(_DWORD *)v20 & 0x80000000 | v47;
  v21 = v17 == (_DWORD)v18;
  if ( v17 > (unsigned int)v18 )
  {
LABEL_11:
    *(_QWORD *)v15 = a3;
    result = *(unsigned int *)(a1 + 1096);
    *((_DWORD *)v15 + 2) = result;
    return result;
  }
LABEL_9:
  while ( !v21 )
  {
    LODWORD(v18) = *(_DWORD *)(result + 4 * v18) & 0x7FFFFFFF;
    v21 = (_DWORD)v18 == v17;
    if ( (unsigned int)v18 < v17 )
      goto LABEL_11;
  }
  return result;
}
