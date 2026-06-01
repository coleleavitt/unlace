void __fastcall sub_1F7E760(__int64 *a1, __int64 a2, unsigned __int8 a3)
{
  void *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  void *v12; // rbx
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  void *v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // r15
  __int64 *v32; // rbx
  _QWORD *v33; // rax
  _QWORD *i; // rcx
  __int64 v35; // r13
  unsigned __int64 v36; // r14
  __int64 v37; // rax
  _QWORD **v38; // rdx
  __m128i v39; // xmm0
  void *v40; // rdi
  void **v41; // rbx
  unsigned __int64 v42; // rbp
  void *v43; // rdi
  __int64 v44; // r14
  unsigned int v45; // esi
  unsigned int v46; // edi
  int v47; // ecx
  unsigned __int8 v48; // al
  unsigned __int8 *v49; // rcx
  __int64 v50; // r14
  unsigned int v51; // esi
  unsigned int v52; // edi
  int v53; // ecx
  unsigned __int8 v54; // al
  unsigned __int8 *v55; // rcx
  __m128i v56; // xmm0
  unsigned __int64 v57; // r14
  __int64 v58; // rax
  void **v59; // rdx
  __m128i v60; // xmm0
  int v61; // r11d
  __int64 v62; // r10
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // r11d
  __int64 v67; // r10
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // r10d
  int v72; // edi
  unsigned __int8 v73; // cl
  void *v74; // rsi
  bool v75; // zf
  __m128i v76; // [rsp+0h] [rbp-B8h] BYREF
  __int64 *v77; // [rsp+10h] [rbp-A8h]
  unsigned int *v78; // [rsp+18h] [rbp-A0h]
  int v79; // [rsp+24h] [rbp-94h] BYREF
  __int64 v80; // [rsp+28h] [rbp-90h] BYREF
  void *v81; // [rsp+30h] [rbp-88h] BYREF
  __int64 v82; // [rsp+38h] [rbp-80h]
  void *v83[2]; // [rsp+40h] [rbp-78h]
  __m128 v84; // [rsp+50h] [rbp-68h]
  __m128i v85; // [rsp+60h] [rbp-58h]
  __m128 v86; // [rsp+70h] [rbp-48h]

  v6 = (void *)sub_FEEE40(a2);
  v11 = *a1;
  LOBYTE(v82) = a3;
  v12 = v6;
  v81 = v6;
  v13 = *(_DWORD *)(v11 + 16);
  if ( !v13 )
  {
    v80 = 0;
    goto LABEL_69;
  }
  v9 = v13 - 1;
  LODWORD(v14) = v9 & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
  v15 = *(_QWORD *)v11 + 16LL * (unsigned int)v14;
  v16 = *(_QWORD *)v15;
  if ( v12 != *(void **)v15 )
  {
    v71 = 1;
    v10 = 0;
    if ( v16 != -4096 )
    {
      while ( 1 )
      {
        if ( !v10 && v16 == -8192 )
          v10 = v15;
        v14 = (unsigned int)v9 & ((_DWORD)v14 + v71);
        v15 = *(_QWORD *)v11 + 16 * v14;
        v16 = *(_QWORD *)v15;
        if ( v12 == *(void **)v15 )
          goto LABEL_3;
        if ( v16 == -4096 )
          break;
        ++v71;
      }
      if ( v10 )
        v15 = v10;
    }
    v72 = *(_DWORD *)(v11 + 8);
    v8 = 3 * v13;
    v80 = v15;
    v7 = (unsigned int)(v72 + 1);
    if ( 4 * (int)v7 < (unsigned int)v8 )
    {
      v8 = v13 - *(_DWORD *)(v11 + 12) - (unsigned int)v7;
      if ( (unsigned int)v8 > v13 >> 3 )
      {
        v73 = a3;
        v74 = v12;
        v76.m128i_i64[1] = (__int64)&v81;
LABEL_65:
        v75 = *(_QWORD *)v15 == -4096;
        *(_DWORD *)(v11 + 8) = v7;
        if ( !v75 )
          --*(_DWORD *)(v11 + 12);
        *(_QWORD *)v15 = v74;
        *(_BYTE *)(v15 + 8) = v73;
        goto LABEL_5;
      }
LABEL_70:
      sub_1F6D2C0((__int64 *)v11, v13, v7, v8, v9, v10);
      v76.m128i_i64[1] = (__int64)&v81;
      sub_1F6A2C0((__int64 *)v11, (__int64 *)&v81, &v80);
      v74 = v81;
      v73 = v82;
      LODWORD(v7) = *(_DWORD *)(v11 + 8) + 1;
      v15 = v80;
      goto LABEL_65;
    }
LABEL_69:
    v13 *= 2;
    goto LABEL_70;
  }
LABEL_3:
  if ( *(_BYTE *)(v15 + 8) >= a3 )
    return;
  v76.m128i_i64[1] = (__int64)&v81;
LABEL_5:
  *(_BYTE *)(v15 + 8) = a3;
  v81 = nullptr;
  v82 = 0;
  v83[0] = nullptr;
  v83[1] = nullptr;
  v84 = 0u;
  v85 = 0u;
  v86 = 0u;
  sub_1F7DC30(v76.m128i_i64[1], 0);
  v17 = v85.m128i_i64[0];
  if ( v85.m128i_i64[0] == v86.m128_u64[0] - 8 )
  {
    v57 = v86.m128_u64[1];
    if ( (unsigned __int64)(v82 - ((__int64)(v86.m128_u64[1] - (_QWORD)v81) >> 3)) <= 1 )
    {
      sub_1F7E5E0(v76.m128i_i64[1], 1u, 0);
      v57 = v86.m128_u64[1];
    }
    v58 = operator new(0x200u);
    v59 = (void **)v86.m128_u64[1];
    *(_QWORD *)(v57 + 8) = v58;
    ++v59;
    *(_QWORD *)v85.m128i_i64[0] = v12;
    v18 = *v59;
    v76.m128i_i64[0] = (__int64)*v59;
    v60 = _mm_loadl_epi64(&v76);
    v85 = _mm_unpacklo_epi64(v60, v60);
    v76.m128i_i64[0] = (__int64)v59;
    v86 = _mm_loadh_ps((const double *)v76.m128i_i64);
  }
  else
  {
    *(_QWORD *)v85.m128i_i64[0] = v12;
    v18 = (void *)(v17 + 8);
    v85.m128i_i64[0] = (__int64)v18;
  }
  v19 = (__int64 *)v83[0];
  if ( v83[0] != v18 )
  {
    v77 = &v80;
    v78 = (unsigned int *)&v79;
    while ( 1 )
    {
      v20 = *v19;
      if ( v19 == (__int64 *)(v84.m128_u64[0] - 8) )
      {
        operator delete(v83[1]);
        v76.m128i_i64[0] = *(_QWORD *)(v84.m128_u64[1] + 8);
        v56 = _mm_loadl_epi64(&v76);
        *(__m128i *)v83 = _mm_unpacklo_epi64(v56, v56);
        v76.m128i_i64[0] = v84.m128_u64[1] + 8;
        v84 = _mm_loadh_ps((const double *)v76.m128i_i64);
      }
      else
      {
        v83[0] = v19 + 1;
      }
      v21 = sub_13F3D60((unsigned int **)a1[1], v20);
      v79 = v21;
      if ( !v21 )
        goto LABEL_12;
      v50 = a1[3];
      v51 = *(_DWORD *)(v50 + 16);
      if ( !v51 )
        break;
      v25 = v51 - 1;
      v24 = *(_QWORD *)v50;
      v52 = v25 & v21;
      v22 = *(_QWORD *)v50 + 8LL * ((unsigned int)v25 & v21);
      v53 = *(_DWORD *)v22;
      if ( v21 != *(_DWORD *)v22 )
      {
        v61 = 1;
        v62 = 0;
        if ( !v53 )
        {
LABEL_44:
          v63 = *(_DWORD *)(v50 + 8);
          v23 = 3 * v51;
          v80 = v22;
          v64 = v63 + 1;
          if ( 4 * v64 < (unsigned int)v23 )
          {
            v23 = v51 - *(_DWORD *)(v50 + 12) - v64;
            if ( (unsigned int)v23 > v51 >> 3 )
            {
LABEL_46:
              *(_DWORD *)(v50 + 8) = v64;
              if ( *(_DWORD *)v22 )
                --*(_DWORD *)(v50 + 12);
              v65 = v79;
              v55 = (unsigned __int8 *)(v22 + 4);
              *(_BYTE *)(v22 + 4) = 0;
              *(_DWORD *)v22 = v65;
              v54 = 0;
              goto LABEL_36;
            }
LABEL_51:
            sub_1F6D0F0(v50, v51, v22, v23, v24, v25);
            sub_1F6A220((__int64 *)v50, v78, v77);
            v22 = v80;
            v64 = *(_DWORD *)(v50 + 8) + 1;
            goto LABEL_46;
          }
LABEL_50:
          v51 *= 2;
          goto LABEL_51;
        }
        while ( 1 )
        {
          if ( !v62 && v53 == -1 )
            v62 = v22;
          v52 = v25 & (v61 + v52);
          v22 = v24 + 8LL * v52;
          v53 = *(_DWORD *)v22;
          if ( v21 == *(_DWORD *)v22 )
            break;
          if ( !v53 )
          {
            if ( v62 )
              v22 = v62;
            goto LABEL_44;
          }
          ++v61;
        }
      }
      v54 = *(_BYTE *)(v22 + 4);
      v55 = (unsigned __int8 *)(v22 + 4);
LABEL_36:
      if ( v54 < a3 )
        v54 = a3;
      *v55 = v54;
LABEL_12:
      v26 = sub_13FA250(a1[1], v20);
      v79 = v26;
      if ( v26 )
      {
        v44 = a1[3];
        v45 = *(_DWORD *)(v44 + 16);
        if ( v45 )
        {
          v30 = v45 - 1;
          v29 = *(_QWORD *)v44;
          v46 = v30 & v26;
          v27 = *(_QWORD *)v44 + 8LL * ((unsigned int)v30 & v26);
          v47 = *(_DWORD *)v27;
          if ( v26 == *(_DWORD *)v27 )
            goto LABEL_29;
          v66 = 1;
          v67 = 0;
          if ( v47 )
          {
            while ( 1 )
            {
              if ( !v67 && v47 == -1 )
                v67 = v27;
              v46 = v30 & (v66 + v46);
              v27 = v29 + 8LL * v46;
              v47 = *(_DWORD *)v27;
              if ( v26 == *(_DWORD *)v27 )
                break;
              if ( !v47 )
              {
                if ( v67 )
                  v27 = v67;
                goto LABEL_53;
              }
              ++v66;
            }
LABEL_29:
            v48 = *(_BYTE *)(v27 + 4);
            v49 = (unsigned __int8 *)(v27 + 4);
          }
          else
          {
LABEL_53:
            v68 = *(_DWORD *)(v44 + 8);
            v28 = 3 * v45;
            v80 = v27;
            v69 = v68 + 1;
            if ( 4 * v69 < (unsigned int)v28 )
            {
              v28 = v45 - *(_DWORD *)(v44 + 12) - v69;
              if ( (unsigned int)v28 > v45 >> 3 )
                goto LABEL_55;
              goto LABEL_60;
            }
LABEL_59:
            v45 *= 2;
LABEL_60:
            sub_1F6D0F0(v44, v45, v27, v28, v29, v30);
            sub_1F6A220((__int64 *)v44, v78, v77);
            v27 = v80;
            v69 = *(_DWORD *)(v44 + 8) + 1;
LABEL_55:
            *(_DWORD *)(v44 + 8) = v69;
            if ( *(_DWORD *)v27 )
              --*(_DWORD *)(v44 + 12);
            v70 = v79;
            v49 = (unsigned __int8 *)(v27 + 4);
            *(_BYTE *)(v27 + 4) = 0;
            *(_DWORD *)v27 = v70;
            v48 = 0;
          }
          if ( a3 >= v48 )
            v48 = a3;
          *v49 = v48;
          goto LABEL_13;
        }
        v80 = 0;
        goto LABEL_59;
      }
LABEL_13:
      v31 = *(__int64 **)(v20 + 264);
      v32 = *(__int64 **)(v20 + 256);
      v33 = (_QWORD *)v85.m128i_i64[0];
      for ( i = (_QWORD *)v86.m128_u64[0]; v31 != v32; v86 = _mm_loadh_ps((const double *)v76.m128i_i64) )
      {
        while ( 1 )
        {
          v35 = *v32;
          if ( v33 == i - 1 )
            break;
          *v33 = v35;
          ++v32;
          v85.m128i_i64[0] = (__int64)++v33;
          if ( v31 == v32 )
            goto LABEL_20;
        }
        v36 = v86.m128_u64[1];
        if ( (unsigned __int64)(v82 - ((__int64)(v86.m128_u64[1] - (_QWORD)v81) >> 3)) <= 1 )
        {
          sub_1F7E5E0(v76.m128i_i64[1], 1u, 0);
          v36 = v86.m128_u64[1];
        }
        ++v32;
        v37 = operator new(0x200u);
        v38 = (_QWORD **)v86.m128_u64[1];
        *(_QWORD *)(v36 + 8) = v37;
        ++v38;
        *(_QWORD *)v85.m128i_i64[0] = v35;
        v33 = *v38;
        v76.m128i_i64[0] = (__int64)v33;
        v39 = _mm_loadl_epi64(&v76);
        i = v33 + 64;
        v85 = _mm_unpacklo_epi64(v39, v39);
        v76.m128i_i64[0] = (__int64)v38;
      }
LABEL_20:
      v19 = (__int64 *)v83[0];
      if ( v83[0] == v33 )
        goto LABEL_21;
    }
    v80 = 0;
    goto LABEL_50;
  }
LABEL_21:
  v40 = v81;
  if ( v81 )
  {
    v41 = (void **)v84.m128_u64[1];
    v42 = v86.m128_u64[1] + 8;
    if ( v86.m128_u64[1] + 8 > v84.m128_u64[1] )
    {
      do
      {
        v43 = *v41++;
        operator delete(v43);
      }
      while ( v42 > (unsigned __int64)v41 );
      v40 = v81;
    }
    operator delete(v40);
  }
}
