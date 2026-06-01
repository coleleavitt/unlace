void __fastcall sub_16BFA80(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v8; // cl
  int v9; // ecx
  __int64 v10; // rdi
  int v11; // esi
  __int64 v12; // r12
  unsigned int v13; // edx
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // rbp
  unsigned int v16; // esi
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // edi
  unsigned __int64 v20; // rcx
  unsigned __int8 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r9d
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rdx
  bool v28; // zf
  __int64 v29; // rax
  unsigned int v30; // r9d
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r15
  unsigned __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int32 v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int32 v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // ecx
  __int64 v51; // rsi
  unsigned int v52; // ecx
  __int64 v53; // rsi
  unsigned int v54; // ecx
  __int64 v55; // rsi
  unsigned int v56; // ecx
  __int64 v57; // rsi
  unsigned __int8 *v58; // r10
  unsigned int *v59; // rdi
  unsigned int *v60; // rdi
  unsigned int *v61; // rdi
  unsigned int *v62; // rdi
  bool v63; // sf
  __int64 v64; // r15
  __int64 v65; // r15
  __int64 v66; // r15
  __int64 v67; // r15
  __int64 v68; // r8
  int v69; // edx
  __int64 v70; // r11
  __int64 v71; // r10
  __int64 v72; // r9
  int v73; // edx
  __int64 v74; // r11
  __int64 v75; // r10
  __int64 v76; // r8
  int v77; // edx
  __int64 v78; // r11
  __int64 v79; // r10
  __int64 v80; // r9
  int v81; // edx
  __int64 v82; // r11
  __int64 v83; // r10
  __int64 v84; // [rsp+8h] [rbp-90h] BYREF
  _DWORD *v85; // [rsp+10h] [rbp-88h]
  __int64 v86; // [rsp+18h] [rbp-80h]
  int v87; // [rsp+24h] [rbp-74h]
  __int64 v88; // [rsp+28h] [rbp-70h] BYREF
  __m128 v89; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int8 *v90; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v91; // [rsp+48h] [rbp-50h]

  v8 = *(_BYTE *)(a1 + 64);
  v88 = a2;
  v9 = v8 & 1;
  if ( v9 )
  {
    v10 = a1 + 72;
    v11 = 15;
  }
  else
  {
    v16 = *(_DWORD *)(a1 + 80);
    v10 = *(_QWORD *)(a1 + 72);
    if ( !v16 )
    {
      v90 = nullptr;
      v17 = *(_DWORD *)(a1 + 64);
      v18 = (v17 >> 1) + 1;
      goto LABEL_8;
    }
    v11 = v16 - 1;
  }
  v12 = v88;
  v13 = v11 & (((unsigned int)v88 >> 9) ^ ((unsigned int)v88 >> 4));
  v14 = (unsigned __int8 *)(v10 + ((unsigned __int64)v13 << 6));
  a5 = *(_QWORD *)v14;
  if ( v88 == *(_QWORD *)v14 )
    goto LABEL_4;
  a6 = 1;
  v58 = nullptr;
  if ( a5 == -4096 )
  {
LABEL_46:
    v90 = v14;
    v17 = *(_DWORD *)(a1 + 64);
    v19 = 48;
    v16 = 16;
    v18 = (v17 >> 1) + 1;
    if ( (_BYTE)v9 )
    {
LABEL_9:
      v20 = (unsigned int)(4 * v18);
      if ( (unsigned int)v20 >= v19 )
      {
        v16 *= 2;
      }
      else
      {
        v18 = v16 - *(_DWORD *)(a1 + 68) - (unsigned int)v18;
        v20 = v16 >> 3;
        if ( (unsigned int)v18 > (unsigned int)v20 )
        {
LABEL_11:
          *(_DWORD *)(a1 + 64) = (2 * (v17 >> 1) + 2) | v17 & 1;
          v21 = v90;
          if ( *(_QWORD *)v90 != -4096 )
            --*(_DWORD *)(a1 + 68);
          v22 = v88;
          *((_QWORD *)v21 + 1) = 0;
          v15 = v21 + 8;
          *((_DWORD *)v21 + 4) = 0;
          *((_QWORD *)v21 + 3) = 0;
          *((_DWORD *)v21 + 8) = 0;
          *((_QWORD *)v21 + 5) = 0;
          *((_DWORD *)v21 + 12) = 0;
          v21[56] = 0;
          *(_QWORD *)v21 = v22;
          v12 = v88;
          goto LABEL_14;
        }
      }
      sub_16B9B50(a1 + 64, v16, v18, (_QWORD *)v20, a5, a6);
      sub_16B5A70(a1 + 64, &v88, &v90);
      v17 = *(_DWORD *)(a1 + 64);
      goto LABEL_11;
    }
    v16 = *(_DWORD *)(a1 + 80);
LABEL_8:
    v19 = 3 * v16;
    goto LABEL_9;
  }
  while ( 1 )
  {
    if ( !v58 && a5 == -8192 )
      v58 = v14;
    v13 = v11 & (a6 + v13);
    v14 = (unsigned __int8 *)(v10 + ((unsigned __int64)v13 << 6));
    a5 = *(_QWORD *)v14;
    if ( v88 == *(_QWORD *)v14 )
      break;
    if ( a5 == -4096 )
    {
      if ( v58 )
        v14 = v58;
      goto LABEL_46;
    }
    a6 = (unsigned int)(a6 + 1);
  }
LABEL_4:
  v15 = v14 + 8;
  if ( v14[56] )
    return;
LABEL_14:
  if ( *((_QWORD *)v15 + 2) )
  {
    v23 = *(_QWORD *)(a1 + 16);
    v24 = *((_DWORD *)v15 + 6);
    v25 = *(unsigned int *)(a1 + 1096);
    v26 = v23 + 4 * v25;
    if ( *(char *)(v26 + 3) < 0 )
    {
      v54 = *(_DWORD *)v26 & 0x7FFFFFFF;
      v25 = v54;
      v55 = v23 + 4LL * v54;
      if ( *(char *)(v55 + 3) < 0 )
      {
        v54 = *(_DWORD *)v55 & 0x7FFFFFFF;
        v25 = v54;
        v84 = 4LL * v54;
        v60 = (unsigned int *)(v23 + v84);
        if ( *(char *)(v23 + v84 + 3) < 0 )
        {
          v54 = *v60 & 0x7FFFFFFF;
          v86 = 4LL * v54;
          v63 = *(char *)(v23 + v86 + 3) < 0;
          v85 = (_DWORD *)(v23 + v86);
          if ( v63 )
          {
            v87 = *(_DWORD *)(v23 + v86);
            v54 = v87 & 0x7FFFFFFF;
            v65 = v23 + 4LL * (v87 & 0x7FFFFFFF);
            if ( *(char *)(v65 + 3) < 0 )
            {
              v54 = sub_16B5920((_QWORD *)(a1 + 16), *(_DWORD *)v65 & 0x7FFFFFFF) & 0x7FFFFFFF;
              v23 = *(_QWORD *)(a1 + 16);
              v69 = *(_DWORD *)(v23 + 4 * v68);
              v55 = v23 + v70;
              v85 = (_DWORD *)(v23 + v86);
              v60 = (unsigned int *)(v23 + v84);
              *(_DWORD *)(v23 + 4 * v68) = v54 | v69 & 0x80000000;
              v25 = v54;
              v26 = v23 + v71;
            }
            else
            {
              v25 = v54;
            }
            LODWORD(v84) = *v85;
            *v85 = v54 | v84 & 0x80000000;
          }
          else
          {
            v25 = v54;
          }
          *v60 = v54 | *v60 & 0x80000000;
        }
        *(_DWORD *)v55 = v54 | *(_DWORD *)v55 & 0x80000000;
      }
      *(_DWORD *)v26 = *(_DWORD *)v26 & 0x80000000 | v54;
    }
    v27 = v23 + 4LL * v24;
    if ( *(char *)(v27 + 3) < 0 )
    {
      v52 = *(_DWORD *)v27 & 0x7FFFFFFF;
      v24 = v52;
      v53 = v23 + 4LL * v52;
      if ( *(char *)(v53 + 3) < 0 )
      {
        v52 = *(_DWORD *)v53 & 0x7FFFFFFF;
        v24 = v52;
        v84 = 4LL * v52;
        v62 = (unsigned int *)(v23 + v84);
        if ( *(char *)(v23 + v84 + 3) < 0 )
        {
          v52 = *v62 & 0x7FFFFFFF;
          v86 = 4LL * v52;
          v63 = *(char *)(v23 + v86 + 3) < 0;
          v85 = (_DWORD *)(v23 + v86);
          if ( v63 )
          {
            v87 = *(_DWORD *)(v23 + v86);
            v52 = v87 & 0x7FFFFFFF;
            v67 = v23 + 4LL * (v87 & 0x7FFFFFFF);
            if ( *(char *)(v67 + 3) < 0 )
            {
              v52 = sub_16B5920((_QWORD *)(a1 + 16), *(_DWORD *)v67 & 0x7FFFFFFF) & 0x7FFFFFFF;
              v23 = *(_QWORD *)(a1 + 16);
              v81 = *(_DWORD *)(v23 + 4 * v80);
              v53 = v23 + v82;
              v85 = (_DWORD *)(v23 + v86);
              v62 = (unsigned int *)(v23 + v84);
              *(_DWORD *)(v23 + 4 * v80) = v52 | v81 & 0x80000000;
              v24 = v52;
              v27 = v23 + v83;
            }
            else
            {
              v24 = v87 & 0x7FFFFFFF;
            }
            LODWORD(v84) = *v85;
            *v85 = v52 | v84 & 0x80000000;
          }
          else
          {
            v24 = v52;
          }
          *v62 = v52 | *v62 & 0x80000000;
        }
        *(_DWORD *)v53 = v52 | *(_DWORD *)v53 & 0x80000000;
      }
      *(_DWORD *)v27 = *(_DWORD *)v27 & 0x80000000 | v52;
    }
    v28 = v24 == (_DWORD)v25;
    if ( v24 <= (unsigned int)v25 )
    {
      while ( !v28 )
      {
        LODWORD(v25) = *(_DWORD *)(v23 + 4 * v25) & 0x7FFFFFFF;
        v28 = (_DWORD)v25 == v24;
        if ( (unsigned int)v25 < v24 )
          goto LABEL_20;
      }
      v34 = *(_QWORD *)(a1 + 8);
      v44 = *((_QWORD *)v15 + 2);
      sub_168B9B0((__int64)&v90, v34 + 8, 7506);
      sub_16B73F0(&v90, v12);
      v48 = sub_C00A40(a3, v12, v45, v46, v47);
      v89.m128_i8[8] = 1;
      v89.m128_i32[0] = v48;
      v89.m128_i32[1] = v48;
      sub_AEC610((__int64 *)&v90, (__int64 *)&v89);
      v43 = v44;
      v84 = a3;
      v89 = _mm_loadh_ps((const double *)&v84);
      goto LABEL_31;
    }
LABEL_20:
    v12 = v88;
    if ( v15[48] )
      return;
  }
  if ( *(_QWORD *)v15 )
  {
    v29 = *(_QWORD *)(a1 + 16);
    v30 = *((_DWORD *)v15 + 2);
    v31 = *(unsigned int *)(a1 + 1096);
    v32 = v29 + 4 * v31;
    if ( *(char *)(v32 + 3) < 0 )
    {
      v50 = *(_DWORD *)v32 & 0x7FFFFFFF;
      v31 = v50;
      v51 = v29 + 4LL * v50;
      if ( *(char *)(v51 + 3) < 0 )
      {
        v50 = *(_DWORD *)v51 & 0x7FFFFFFF;
        v31 = v50;
        v84 = 4LL * v50;
        v61 = (unsigned int *)(v29 + v84);
        if ( *(char *)(v29 + v84 + 3) < 0 )
        {
          v50 = *v61 & 0x7FFFFFFF;
          v86 = 4LL * v50;
          v63 = *(char *)(v29 + v86 + 3) < 0;
          v85 = (_DWORD *)(v29 + v86);
          if ( v63 )
          {
            v87 = *(_DWORD *)(v29 + v86);
            v50 = v87 & 0x7FFFFFFF;
            v66 = v29 + 4LL * (v87 & 0x7FFFFFFF);
            if ( *(char *)(v66 + 3) < 0 )
            {
              v50 = sub_16B5920((_QWORD *)(a1 + 16), *(_DWORD *)v66 & 0x7FFFFFFF) & 0x7FFFFFFF;
              v29 = *(_QWORD *)(a1 + 16);
              v77 = *(_DWORD *)(v29 + 4 * v76);
              v51 = v29 + v78;
              v85 = (_DWORD *)(v29 + v86);
              v61 = (unsigned int *)(v29 + v84);
              *(_DWORD *)(v29 + 4 * v76) = v50 | v77 & 0x80000000;
              v31 = v50;
              v32 = v29 + v79;
            }
            else
            {
              v31 = v50;
            }
            LODWORD(v84) = *v85;
            *v85 = v50 | v84 & 0x80000000;
          }
          else
          {
            v31 = v50;
          }
          *v61 = v50 | *v61 & 0x80000000;
        }
        *(_DWORD *)v51 = v50 | *(_DWORD *)v51 & 0x80000000;
      }
      *(_DWORD *)v32 = *(_DWORD *)v32 & 0x80000000 | v50;
    }
    v33 = v29 + 4LL * v30;
    if ( *(char *)(v33 + 3) < 0 )
    {
      v56 = *(_DWORD *)v33 & 0x7FFFFFFF;
      v30 = v56;
      v57 = v29 + 4LL * v56;
      if ( *(char *)(v57 + 3) < 0 )
      {
        v56 = *(_DWORD *)v57 & 0x7FFFFFFF;
        v30 = v56;
        v84 = 4LL * v56;
        v59 = (unsigned int *)(v29 + v84);
        if ( *(char *)(v29 + v84 + 3) < 0 )
        {
          v56 = *v59 & 0x7FFFFFFF;
          v86 = 4LL * v56;
          v63 = *(char *)(v29 + v86 + 3) < 0;
          v85 = (_DWORD *)(v29 + v86);
          if ( v63 )
          {
            v87 = *(_DWORD *)(v29 + v86);
            v56 = v87 & 0x7FFFFFFF;
            v64 = v29 + 4LL * (v87 & 0x7FFFFFFF);
            if ( *(char *)(v64 + 3) < 0 )
            {
              v56 = sub_16B5920((_QWORD *)(a1 + 16), *(_DWORD *)v64 & 0x7FFFFFFF) & 0x7FFFFFFF;
              v29 = *(_QWORD *)(a1 + 16);
              v73 = *(_DWORD *)(v29 + 4 * v72);
              v57 = v29 + v74;
              v85 = (_DWORD *)(v29 + v86);
              v59 = (unsigned int *)(v29 + v84);
              *(_DWORD *)(v29 + 4 * v72) = v56 | v73 & 0x80000000;
              v30 = v56;
              v33 = v29 + v75;
            }
            else
            {
              v30 = v87 & 0x7FFFFFFF;
            }
            LODWORD(v84) = *v85;
            *v85 = v56 | v84 & 0x80000000;
          }
          else
          {
            v30 = v56;
          }
          *v59 = v56 | *v59 & 0x80000000;
        }
        *(_DWORD *)v57 = v56 | *(_DWORD *)v57 & 0x80000000;
      }
      *(_DWORD *)v33 = *(_DWORD *)v33 & 0x80000000 | v56;
    }
    if ( v30 <= (unsigned int)v31 )
    {
      if ( v30 == (_DWORD)v31 )
      {
LABEL_28:
        v34 = *(_QWORD *)(a1 + 8);
        v35 = *(_QWORD *)v15;
        sub_168B9B0((__int64)&v90, v34 + 8, 7507);
        sub_16B73F0(&v90, v12);
        v39 = sub_C00A40(v35, v12, v36, v37, v38);
        v89.m128_i8[8] = 1;
        v89.m128_i32[0] = v39;
        v89.m128_i32[1] = v39;
        sub_AEC610((__int64 *)&v90, (__int64 *)&v89);
        v43 = a3;
        v84 = v35;
        v89 = _mm_loadh_ps((const double *)&v84);
LABEL_31:
        v49 = sub_C00A40(v43, (__int64)&v89, v40, v41, v42);
        sub_18CA280(v34, v49, &v89, 2, &v90);
        if ( v90 )
        {
          if ( v91 )
            sub_1580C40(v91, (unsigned __int64)v90);
        }
        v15[48] = 1;
        return;
      }
      while ( 1 )
      {
        LODWORD(v31) = *(_DWORD *)(v29 + 4 * v31) & 0x7FFFFFFF;
        if ( (unsigned int)v31 < v30 )
          break;
        if ( (_DWORD)v31 == v30 )
          goto LABEL_28;
      }
    }
  }
}
