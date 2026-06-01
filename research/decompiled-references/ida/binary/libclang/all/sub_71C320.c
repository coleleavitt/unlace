__int64 __fastcall sub_71C320(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        __int128 a10,
        __int128 a11,
        __int128 a12)
{
  __int64 v12; // r12
  int v13; // ecx
  __int64 **v15; // r12
  __int64 v16; // r14
  __int64 *v17; // rdx
  __int64 *v18; // r15
  int v19; // r13d
  unsigned __int64 v20; // rsi
  unsigned __int64 *v21; // rdx
  int v22; // r10d
  __int64 v23; // r9
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // rdi
  unsigned __int64 *v26; // rbp
  __int64 v27; // r12
  int v28; // r8d
  unsigned __int64 v29; // rbp
  int v30; // eax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // r13
  _QWORD *v36; // rax
  _QWORD *v37; // r11
  _QWORD *v38; // rdx
  unsigned __int64 *v39; // rsi
  unsigned int v40; // r10d
  unsigned __int64 *v41; // rax
  int v42; // r14d
  int v43; // r13d
  unsigned __int64 v44; // rdx
  unsigned int v45; // r8d
  unsigned __int64 *v46; // rcx
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // rdx
  unsigned int v49; // r10d
  unsigned __int64 v50; // rsi
  unsigned int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v55; // rax
  unsigned int v56; // edx
  __int64 v57; // rax
  __int64 v58; // r13
  _QWORD *v59; // rax
  int v60; // ecx
  _QWORD *v61; // rdx
  unsigned __int64 *v62; // rdi
  int v63; // r14d
  unsigned __int64 *v64; // rax
  unsigned __int64 v65; // rdx
  unsigned int v66; // r10d
  unsigned __int64 *v67; // rsi
  unsigned __int64 v68; // r9
  unsigned __int64 v69; // rdx
  _QWORD *v70; // rcx
  __int64 v71; // rcx
  int v72; // r13d
  unsigned __int64 *v73; // r9
  int v74; // r10d
  unsigned int v75; // ecx
  unsigned __int64 *v76; // [rsp+8h] [rbp-B0h]
  __int64 v77; // [rsp+10h] [rbp-A8h]
  int v79; // [rsp+20h] [rbp-98h]
  int v80; // [rsp+20h] [rbp-98h]
  int v81; // [rsp+20h] [rbp-98h]
  unsigned __int64 *v82; // [rsp+20h] [rbp-98h]
  unsigned __int64 *v83; // [rsp+20h] [rbp-98h]
  __int64 **v84; // [rsp+28h] [rbp-90h]
  unsigned int v85; // [rsp+3Ch] [rbp-7Ch]
  _QWORD *v87; // [rsp+48h] [rbp-70h]
  _QWORD *v88; // [rsp+48h] [rbp-70h]
  int v89; // [rsp+48h] [rbp-70h]
  int v90; // [rsp+58h] [rbp-60h]
  unsigned int v91; // [rsp+58h] [rbp-60h]
  int v92; // [rsp+58h] [rbp-60h]
  int v93; // [rsp+5Ch] [rbp-5Ch]
  _QWORD v94[4]; // [rsp+60h] [rbp-58h] BYREF
  char v95; // [rsp+80h] [rbp-38h] BYREF

  v12 = a1;
  if ( !(_DWORD)a7 )
    goto LABEL_90;
  if ( !(_DWORD)a10 )
    goto LABEL_91;
  if ( (_DWORD)a7 == 3 )
    goto LABEL_90;
  if ( (_DWORD)a10 == 3 )
  {
LABEL_91:
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&a10);
    *(__m128i *)(a1 + 16) = _mm_loadu_si128((const __m128i *)&a11);
    *(__m128i *)(a1 + 32) = _mm_loadu_si128((const __m128i *)&a12);
    return v12;
  }
  if ( (_DWORD)a7 == 7 )
    goto LABEL_90;
  if ( (_DWORD)a10 == 7 || (_DWORD)a7 == 4 )
    goto LABEL_91;
  if ( (_DWORD)a10 == 4 )
  {
LABEL_90:
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)&a7);
    *(__m128i *)(a1 + 16) = _mm_loadu_si128((const __m128i *)&a8);
    *(__m128i *)(a1 + 32) = _mm_loadu_si128((const __m128i *)&a9);
    return v12;
  }
  if ( (_DWORD)a7 == 1 )
    goto LABEL_91;
  if ( (_DWORD)a10 == 1 )
    goto LABEL_90;
  if ( (_DWORD)a7 == 5 )
    goto LABEL_91;
  if ( (_DWORD)a10 == 5 )
    goto LABEL_90;
  if ( (_DWORD)a7 == 8 )
    goto LABEL_91;
  if ( (_DWORD)a10 == 8 )
    goto LABEL_90;
  if ( (_DWORD)a7 == 6 || (_DWORD)a10 == 6 )
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    *(_OWORD *)(a1 + 24) = 0;
    return v12;
  }
  v13 = 0;
  v94[0] = *((_QWORD *)&a7 + 1);
  v15 = (__int64 **)v94;
  v16 = 0;
  v79 = 0;
  v94[1] = a8;
  v76 = nullptr;
  v94[2] = *((_QWORD *)&a10 + 1);
  v94[3] = a11;
  do
  {
    v17 = v15[1];
    if ( *v15 == &(*v15)[(_QWORD)v17] )
      goto LABEL_53;
    v77 = (__int64)&(*v15)[(_QWORD)v17];
    v18 = *v15;
    v19 = v13;
    v84 = v15;
    do
    {
      while ( 1 )
      {
        v27 = *v18;
        v28 = *((_DWORD *)a3 + 2);
        v29 = *(_QWORD *)&byte_8[*v18 & 0xFFFFFFFFFFFFFFF0LL] | *v18 & 7;
        v30 = 0;
        if ( !(_DWORD)v16 )
        {
LABEL_23:
          v80 = *((_DWORD *)a3 + 2);
          v31 = (unsigned int)(v30 - 1) | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1);
          v32 = (((v31 >> 2) | v31) >> 4) | (v31 >> 2) | v31;
          v33 = 64;
          v34 = ((((v32 >> 8) | v32) >> 16) | (v32 >> 8) | v32) + 1;
          if ( (unsigned int)v34 >= 0x40 )
            v33 = v34;
          v85 = v33;
          v35 = 16LL * v33;
          v36 = (_QWORD *)sub_25CC9C0(v35, 8);
          v28 = v80;
          v37 = v36;
          if ( v76 )
          {
            v38 = &v36[(unsigned __int64)v35 / 8];
            v39 = &v76[2 * v16];
            if ( (v35 & 0x10) == 0 || (v36 += 2, *v37 = 0, v37 + 2 != v38) )
            {
              do
              {
                *v36 = 0;
                v36 += 4;
                *(v36 - 2) = 0;
              }
              while ( v36 != v38 );
            }
            v40 = v85 - 1;
            v41 = v76;
            if ( v76 == v39 )
            {
              v79 = 1;
            }
            else
            {
              v42 = 0;
              v43 = v80;
              do
              {
                while ( 1 )
                {
                  v44 = *v41;
                  if ( *v41 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
                    break;
                  v41 += 2;
                  if ( v39 == v41 )
                    goto LABEL_35;
                }
                v45 = v40 & (v44 ^ (v44 >> 9));
                v46 = &v37[2 * v45];
                v47 = *v46;
                if ( v44 != *v46 )
                {
                  v92 = 1;
                  v82 = nullptr;
                  while ( v47 )
                  {
                    if ( v47 == -1 )
                    {
                      if ( v82 )
                        v46 = v82;
                      v82 = v46;
                    }
                    v45 = v40 & (v92 + v45);
                    v46 = &v37[2 * v45];
                    v47 = *v46;
                    if ( v44 == *v46 )
                      goto LABEL_34;
                    ++v92;
                  }
                  if ( v82 )
                    v46 = v82;
                }
LABEL_34:
                v48 = *v41;
                v41 += 2;
                ++v42;
                *v46 = v48;
                *((_DWORD *)v46 + 2) = *((_DWORD *)v41 - 2);
              }
              while ( v39 != v41 );
LABEL_35:
              v28 = v43;
              v79 = v42 + 1;
            }
            v87 = v37;
            v90 = v28;
            operator delete();
            v49 = v85 - 1;
            v37 = v87;
            v28 = v90;
          }
          else
          {
            v70 = &v36[(unsigned __int64)v35 / 8];
            if ( (v35 & 0x10) == 0 || (*v36 = 0, v36 += 2, v70 != v36) )
            {
              do
              {
                *v36 = 0;
                v36 += 4;
                *(v36 - 2) = 0;
              }
              while ( v70 != v36 );
            }
            v79 = 1;
            v49 = v85 - 1;
          }
          v76 = v37;
          v51 = *((_DWORD *)a3 + 2);
          v19 = 0;
          v16 = v85;
          LODWORD(v71) = v49 & (v29 ^ (v29 >> 9));
          v21 = &v37[2 * (unsigned int)v71];
          v50 = *v21;
          if ( v29 == *v21 )
            goto LABEL_48;
          v72 = 1;
          v73 = nullptr;
          while ( v50 )
          {
            if ( v50 == -1 && !v73 )
              v73 = v21;
            v71 = v49 & ((_DWORD)v71 + v72);
            v21 = &v37[2 * v71];
            v50 = *v21;
            if ( v29 == *v21 )
              goto LABEL_89;
            ++v72;
          }
          goto LABEL_77;
        }
        v20 = (unsigned int)(v16 - 1);
        v21 = nullptr;
        v22 = 1;
        LODWORD(v23) = v20 & (v29 ^ (v29 >> 9));
        v24 = &v76[2 * (unsigned int)v23];
        v25 = *v24;
        if ( v29 != *v24 )
          break;
LABEL_21:
        ++v18;
        v26 = (unsigned __int64 *)(*a3 + 8LL * *((unsigned int *)v24 + 2));
        *v26 = sub_7197B0(a2, *v26, v27, 0);
        if ( (__int64 *)v77 == v18 )
          goto LABEL_52;
      }
      while ( v25 )
      {
        if ( v25 == -1 && !v21 )
          v21 = v24;
        v23 = (unsigned int)v20 & ((_DWORD)v23 + v22);
        v24 = &v76[2 * v23];
        v25 = *v24;
        if ( v29 == *v24 )
          goto LABEL_21;
        ++v22;
      }
      if ( !v21 )
        v21 = v24;
      ++v79;
      v30 = 2 * v16;
      if ( 4 * v79 >= (unsigned int)(3 * v16) )
        goto LABEL_23;
      if ( (unsigned int)v16 >> 3 < (int)v16 - v19 - v79 )
      {
        v50 = *v21;
        v51 = *((_DWORD *)a3 + 2);
LABEL_48:
        v19 = (v50 == 0) + v19 - 1;
        goto LABEL_49;
      }
      v81 = *((_DWORD *)a3 + 2);
      v55 = ((((v20 | (v20 >> 1)) >> 2) | v20 | (v20 >> 1)) >> 4) | ((v20 | (v20 >> 1)) >> 2) | v20 | (v20 >> 1);
      v56 = 64;
      v57 = ((((v55 >> 8) | v55) >> 16) | (v55 >> 8) | v55) + 1;
      if ( (unsigned int)v57 >= 0x40 )
        v56 = v57;
      v85 = v56;
      v58 = 16LL * v56;
      v59 = (_QWORD *)sub_25CC9C0(v58, 8);
      v28 = v81;
      v60 = v29 ^ (v29 >> 9);
      v37 = v59;
      v61 = &v59[(unsigned __int64)v58 / 8];
      if ( v76 )
      {
        v62 = &v76[2 * v16];
        if ( (v58 & 0x10) == 0 || (v59 += 2, *v37 = 0, v37 + 2 != v61) )
        {
          do
          {
            *v59 = 0;
            v59 += 4;
            *(v59 - 2) = 0;
          }
          while ( v59 != v61 );
        }
        v63 = 0;
        v91 = v85 - 1;
        v64 = v76;
        do
        {
          while ( 1 )
          {
            v65 = *v64;
            if ( *v64 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
              break;
            v64 += 2;
            if ( v62 == v64 )
              goto LABEL_69;
          }
          v66 = (v65 ^ (v65 >> 9)) & v91;
          v67 = &v37[2 * v66];
          v68 = *v67;
          if ( v65 != *v67 )
          {
            v89 = 1;
            v83 = nullptr;
            while ( v68 )
            {
              if ( v68 == -1 )
              {
                if ( v83 )
                  v67 = v83;
                v83 = v67;
              }
              v66 = v91 & (v89 + v66);
              v67 = &v37[2 * v66];
              v68 = *v67;
              if ( v65 == *v67 )
                goto LABEL_68;
              ++v89;
            }
            if ( v83 )
              v67 = v83;
          }
LABEL_68:
          v69 = *v64;
          v64 += 2;
          ++v63;
          *v67 = v69;
          *((_DWORD *)v67 + 2) = *((_DWORD *)v64 - 2);
        }
        while ( v62 != v64 );
LABEL_69:
        v93 = v28;
        v88 = v37;
        operator delete();
        v28 = v93;
        v60 = v29 ^ (v29 >> 9);
        v79 = v63 + 1;
        v37 = v88;
      }
      else
      {
        if ( (v58 & 0x10) == 0 || (*v59 = 0, v59 += 2, v59 != v61) )
        {
          do
          {
            *v59 = 0;
            v59 += 4;
            *(v59 - 2) = 0;
          }
          while ( v59 != v61 );
        }
        v79 = 1;
        v91 = v85 - 1;
      }
      v76 = v37;
      v19 = 0;
      v73 = nullptr;
      v16 = v85;
      v74 = 1;
      v75 = v91 & v60;
      v51 = *((_DWORD *)a3 + 2);
      v21 = &v37[2 * v75];
      v50 = *v21;
      if ( v29 == *v21 )
        goto LABEL_48;
      while ( v50 )
      {
        if ( v50 == -1 && !v73 )
          v73 = v21;
        v75 = v91 & (v74 + v75);
        v21 = &v37[2 * v75];
        v50 = *v21;
        if ( v29 == *v21 )
        {
LABEL_89:
          v76 = v37;
          v16 = v85;
          v19 = 0;
          goto LABEL_48;
        }
        ++v74;
      }
LABEL_77:
      if ( v73 )
      {
        v50 = *v73;
        v16 = v85;
        v76 = v37;
        v21 = v73;
        v19 = 0;
        goto LABEL_48;
      }
      v76 = v37;
      v16 = v85;
      v19 = 0;
LABEL_49:
      *v21 = v29;
      *((_DWORD *)v21 + 2) = v28;
      if ( *((_DWORD *)a3 + 3) <= v51 )
      {
        sub_25D6060(a3, a3 + 2, v51 + 1LL, 8);
        *(_QWORD *)(*a3 + 8LL * *((unsigned int *)a3 + 2)) = v27;
      }
      else
      {
        *(_QWORD *)(*a3 + 8LL * v51) = v27;
      }
      ++*((_DWORD *)a3 + 2);
      ++v18;
    }
    while ( (__int64 *)v77 != v18 );
LABEL_52:
    v15 = v84;
    v13 = v19;
LABEL_53:
    v15 += 2;
  }
  while ( v15 != (__int64 **)&v95 );
  v12 = a1;
  operator delete();
  v52 = *a3;
  *(_DWORD *)a1 = 2;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 8) = v52;
  v53 = *((unsigned int *)a3 + 2);
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = v53;
  return v12;
}

