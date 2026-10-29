__int64 __fastcall sub_4FA840(__int64 a1, const void *a2, __m128 a3)
{
  signed __int64 v4; // r12
  __int64 v5; // rax
  char v6; // al
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // ebx
  char v11; // al
  char v12; // dl
  unsigned int v13; // edx
  __int64 v14; // r15
  int v15; // r14d
  _QWORD *v16; // r13
  __int64 v17; // rax
  char *v18; // rax
  char *v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  _BYTE *v22; // r15
  char *v23; // rbx
  __m128i v24; // xmm1
  void **p_ptr; // rsi
  __int64 v26; // rdx
  __int64 *v27; // r14
  __int64 *v28; // rbp
  __int64 v29; // r15
  unsigned int v30; // edx
  __int64 v31; // r13
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  char *v35; // rdi
  __int64 v36; // rax
  char *v37; // r13
  __int64 *v38; // rbx
  __int64 v39; // r14
  __int64 *v40; // r15
  unsigned int v41; // edx
  _QWORD *v42; // r13
  __int64 v43; // rcx
  __int64 v44; // rax
  char *v45; // rax
  char *v46; // rdi
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  void *v49; // rdi
  __int64 result; // rax
  __int64 v51; // rbx
  char *v52; // rdi
  unsigned int v53; // ecx
  __int64 v54; // rax
  void **v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rax
  void (__fastcall *v59)(signed __int64, __int64); // rbx
  __int64 v60; // rsi
  _BYTE *v61; // rdx
  __int64 v62; // r14
  __int64 v63; // r13
  _QWORD *v64; // rbp
  __int64 v65; // rbx
  __int64 v66; // rdx
  _QWORD *v67; // r13
  char *v68; // rdi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 (__fastcall *v71)(signed __int64, __int64); // rbx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // r9
  __int64 v77; // [rsp+0h] [rbp-108h]
  __int64 v78; // [rsp+8h] [rbp-100h]
  char *v79; // [rsp+8h] [rbp-100h]
  char v80; // [rsp+13h] [rbp-F5h]
  unsigned int v81; // [rsp+14h] [rbp-F4h]
  void **v82; // [rsp+20h] [rbp-E8h]
  void *ptr; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v84; // [rsp+38h] [rbp-D0h]
  _BYTE v85[64]; // [rsp+40h] [rbp-C8h] BYREF
  void *v86; // [rsp+80h] [rbp-88h]
  unsigned __int64 v87; // [rsp+88h] [rbp-80h]
  _BYTE v88[120]; // [rsp+90h] [rbp-78h] BYREF

  v4 = (signed __int64)sub_4EC5D0(a2);
  v82 = (void **)(v4 + 40);
  sub_4F7040(v4 + 40, *(_QWORD *)(a1 + 64), a1 + 104);
  sub_4F1700((unsigned int *)v4, *(_QWORD *)(a1 + 88), v4 + 40, a1 + 200, a1 + 184);
  v77 = *(_QWORD *)(a1 + 64);
  ptr = v85;
  v84 = 0x800000000LL;
  v5 = *(unsigned int *)(v4 + 48);
  if ( !(_DWORD)v5 )
  {
    v22 = *(_BYTE **)(v4 + 40);
    v23 = (char *)(v4 + 56);
    v86 = v88;
    v87 = 0x800000000LL;
    if ( (_BYTE *)(v4 + 56) != v22 )
    {
LABEL_32:
      v24 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 52));
      v86 = v22;
      *(_QWORD *)(v4 + 40) = v23;
      *(_QWORD *)(v4 + 48) = 0x800000000LL;
      a3.m128_u64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), v24).m128i_u64[0];
      v87 = a3.m128_u64[0];
      goto LABEL_33;
    }
    goto LABEL_131;
  }
  v78 = 0;
  do
  {
    v6 = sub_5537F0(v77, *(_QWORD *)(*(_QWORD *)(v4 + 40) + 8 * v78));
    v7 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 8 * v78);
    if ( !v6 )
    {
LABEL_29:
      sub_553300(v77, v7);
      goto LABEL_30;
    }
    v81 = v84;
    if ( (_DWORD)v84 )
    {
      v80 = 0;
      v8 = (unsigned int)v84;
      v9 = 0;
      v10 = 0;
      do
      {
        while ( 1 )
        {
          v11 = sub_558790(v77, *((_QWORD *)ptr + v9), v7);
          if ( v11 )
            break;
          v12 = sub_558790(v77, v7, *((_QWORD *)ptr + v9));
          v11 = v80;
          if ( !v12 )
            break;
          sub_553300(v77, *((_QWORD *)ptr + v9++));
          if ( v9 == v8 )
            goto LABEL_12;
        }
        if ( v10 != (_DWORD)v9 )
          *((_QWORD *)ptr + v10) = *((_QWORD *)ptr + v9);
        ++v9;
        v80 = v11;
        ++v10;
      }
      while ( v9 != v8 );
LABEL_12:
      if ( v81 != v10 )
      {
        v13 = v84;
        if ( (unsigned int)v84 >= v10 )
        {
          if ( v10 < (unsigned int)v84 )
            LODWORD(v84) = v10;
        }
        else
        {
          LODWORD(v14) = HIDWORD(v84);
          v15 = v84;
          do
          {
            if ( v13 < (unsigned int)v14 )
            {
              v16 = ptr;
            }
            else
            {
              v14 = (unsigned int)(2 * v14);
              v18 = (char *)sub_186B270(8 * v14);
              v13 = v84;
              v19 = (char *)ptr;
              v16 = v18;
              if ( (_DWORD)v84 )
              {
                if ( (unsigned int)(v84 - 1) <= 2 || v18 == (char *)ptr + 8 )
                {
                  v56 = 0;
                  v57 = 8LL * (unsigned int)v84;
                  do
                  {
                    v16[v56 / 8] = *(_QWORD *)&v19[v56];
                    v56 += 8LL;
                  }
                  while ( v56 != v57 );
                }
                else
                {
                  v20 = 0;
                  v21 = 16LL * ((unsigned int)v84 >> 1);
                  do
                  {
                    a3 = (__m128)_mm_loadu_si128((const __m128i *)&v19[v20]);
                    *(__m128 *)&v16[v20 / 8] = a3;
                    v20 += 16LL;
                  }
                  while ( v20 != v21 );
                  if ( (v13 & 1) != 0 )
                    v16[v13 & 0xFFFFFFFE] = *(_QWORD *)&v19[8 * (v13 & 0xFFFFFFFE)];
                }
              }
              if ( v19 != v85 && v19 )
              {
                sub_186B220(v19);
                v13 = v84;
              }
              ptr = v16;
              HIDWORD(v84) = v14;
            }
            v17 = v13;
            ++v15;
            ++v13;
            v16[v17] = 0;
            LODWORD(v84) = v13;
          }
          while ( v15 != v10 );
        }
      }
      if ( v80 )
        goto LABEL_29;
      v81 = v84;
    }
    if ( v81 >= HIDWORD(v84) )
    {
      v51 = (unsigned int)(2 * HIDWORD(v84));
      v37 = (char *)sub_186B270(8 * v51);
      v52 = (char *)ptr;
      v81 = v84;
      if ( (_DWORD)v84 )
      {
        v53 = v84;
        if ( (unsigned int)(v84 - 1) <= 2 || v37 == (char *)ptr + 8 )
        {
          v73 = 0;
          v74 = 8LL * (unsigned int)v84;
          do
          {
            *(_QWORD *)&v37[v73] = *(_QWORD *)&v52[v73];
            v73 += 8;
          }
          while ( v73 != v74 );
          if ( v52 )
          {
LABEL_91:
            if ( v52 != v85 )
            {
              sub_186B220(v52);
              v81 = v84;
            }
          }
LABEL_93:
          ptr = v37;
          HIDWORD(v84) = v51;
          goto LABEL_56;
        }
        v54 = 0;
        do
        {
          a3 = (__m128)_mm_loadu_si128((const __m128i *)&v52[v54]);
          *(__m128 *)&v37[v54] = a3;
          v54 += 16;
        }
        while ( 16LL * (v53 >> 1) != v54 );
        if ( (v81 & 1) != 0 )
          *(_QWORD *)&v37[8 * (v81 & 0xFFFFFFFE)] = *(_QWORD *)&v52[8 * (v81 & 0xFFFFFFFE)];
      }
      if ( v52 )
        goto LABEL_91;
      goto LABEL_93;
    }
    v37 = (char *)ptr;
LABEL_56:
    *(_QWORD *)&v37[8 * v81] = v7;
    LODWORD(v84) = v81 + 1;
LABEL_30:
    ++v78;
    v5 = *(unsigned int *)(v4 + 48);
  }
  while ( (unsigned int)v78 < (unsigned int)v5 );
  v22 = *(_BYTE **)(v4 + 40);
  v23 = (char *)(v4 + 56);
  v86 = v88;
  v87 = 0x800000000LL;
  if ( v22 != (_BYTE *)(v4 + 56) )
    goto LABEL_32;
  if ( (_DWORD)v5 )
  {
    v79 = (char *)(v4 + 56);
    v61 = v22;
    v62 = 0;
    v63 = 8 * v5;
    v22 = v88;
    LODWORD(v5) = 0;
    v64 = (_QWORD *)v4;
    v65 = v63;
    LODWORD(v4) = 8;
    while ( 1 )
    {
      v67 = &v61[v62];
      if ( (unsigned int)v5 >= (unsigned int)v4 )
      {
        v4 = (unsigned int)(2 * v4);
        v5 = sub_186B270(8 * v4);
        v68 = (char *)v86;
        v22 = (_BYTE *)v5;
        LODWORD(v5) = v87;
        if ( (_DWORD)v87 )
        {
          if ( (unsigned int)(v87 - 1) <= 2 || v22 == (char *)v86 + 8 )
          {
            v75 = 0;
            v76 = 8LL * (unsigned int)v87;
            do
            {
              *(_QWORD *)&v22[v75] = *(_QWORD *)&v68[v75];
              v75 += 8;
            }
            while ( v76 != v75 );
          }
          else
          {
            v69 = 0;
            v70 = 16LL * ((unsigned int)v87 >> 1);
            do
            {
              a3 = (__m128)_mm_loadu_si128((const __m128i *)&v68[v69]);
              *(__m128 *)&v22[v69] = a3;
              v69 += 16;
            }
            while ( v70 != v69 );
            if ( (v5 & 1) != 0 )
              *(_QWORD *)&v22[8 * (v5 & 0xFFFFFFFE)] = *(_QWORD *)&v68[8 * (v5 & 0xFFFFFFFE)];
          }
        }
        if ( v68 != v88 && v68 )
        {
          sub_186B220(v68);
          LODWORD(v5) = v87;
        }
        v86 = v22;
        HIDWORD(v87) = v4;
      }
      v66 = (unsigned int)v5;
      v62 += 8;
      v5 = (unsigned int)(v5 + 1);
      *(_QWORD *)&v22[8 * v66] = *v67;
      LODWORD(v87) = v5;
      if ( v65 == v62 )
        break;
      v61 = (_BYTE *)v64[5];
    }
    v23 = v79;
    v4 = (signed __int64)v64;
LABEL_33:
    p_ptr = &ptr;
    if ( v82 != &ptr )
    {
      v26 = (unsigned int)v84;
      v27 = (__int64 *)ptr;
      *(_DWORD *)(v4 + 48) = 0;
      if ( (_DWORD)v26 )
      {
LABEL_35:
        v28 = &v27[v26];
        LODWORD(v29) = *(_DWORD *)(v4 + 52);
        v30 = 0;
        do
        {
          if ( v30 < (unsigned int)v29 )
          {
            v31 = *(_QWORD *)(v4 + 40);
          }
          else
          {
            v29 = (unsigned int)(2 * v29);
            v34 = sub_186B270(8 * v29);
            v30 = *(_DWORD *)(v4 + 48);
            v35 = *(char **)(v4 + 40);
            v31 = v34;
            if ( v30 )
            {
              if ( v30 - 1 <= 2 || (char *)v34 == v35 + 8 )
              {
                v58 = 0;
                do
                {
                  *(_QWORD *)(v31 + v58) = *(_QWORD *)&v35[v58];
                  v58 += 8;
                }
                while ( 8LL * v30 != v58 );
              }
              else
              {
                v36 = 0;
                do
                {
                  a3 = (__m128)_mm_loadu_si128((const __m128i *)&v35[v36]);
                  *(__m128 *)(v31 + v36) = a3;
                  v36 += 16;
                }
                while ( v36 != 16LL * (v30 >> 1) );
                if ( (v30 & 1) != 0 )
                  *(_QWORD *)(v31 + 8LL * (v30 & 0xFFFFFFFE)) = *(_QWORD *)&v35[8 * (v30 & 0xFFFFFFFE)];
              }
            }
            if ( v23 != v35 && v35 )
            {
              sub_186B220(v35);
              v30 = *(_DWORD *)(v4 + 48);
            }
            *(_QWORD *)(v4 + 40) = v31;
            *(_DWORD *)(v4 + 52) = v29;
          }
          v32 = *v27;
          v33 = v30;
          ++v27;
          ++v30;
          *(_QWORD *)(v31 + 8 * v33) = v32;
          *(_DWORD *)(v4 + 48) = v30;
        }
        while ( v27 != v28 );
        v22 = v86;
        v5 = (unsigned int)v87;
      }
    }
    LODWORD(v84) = 0;
    if ( (_DWORD)v5 )
    {
      v38 = (__int64 *)v22;
      LODWORD(v39) = HIDWORD(v84);
      v40 = (__int64 *)&v22[8 * v5];
      v41 = 0;
      do
      {
        if ( v41 < (unsigned int)v39 )
        {
          v42 = ptr;
        }
        else
        {
          v39 = (unsigned int)(2 * v39);
          v45 = (char *)sub_186B270(8 * v39);
          v41 = v84;
          v46 = (char *)ptr;
          v42 = v45;
          if ( (_DWORD)v84 )
          {
            if ( (unsigned int)(v84 - 1) <= 2 || v45 == (char *)ptr + 8 )
            {
              v55 = nullptr;
              p_ptr = (void **)(8LL * (unsigned int)v84);
              do
              {
                *(void **)((char *)v55 + (_QWORD)v42) = *(void **)((char *)v55 + (_QWORD)v46);
                ++v55;
              }
              while ( p_ptr != v55 );
            }
            else
            {
              v47 = 0;
              v48 = 16LL * ((unsigned int)v84 >> 1);
              do
              {
                a3 = (__m128)_mm_loadu_si128((const __m128i *)&v46[v47]);
                *(__m128 *)&v42[v47 / 8] = a3;
                v47 += 16LL;
              }
              while ( v48 != v47 );
              if ( (v41 & 1) != 0 )
                v42[v41 & 0xFFFFFFFE] = *(_QWORD *)&v46[8 * (v41 & 0xFFFFFFFE)];
            }
          }
          if ( v46 && v46 != v85 )
          {
            sub_186B220(v46);
            v41 = v84;
          }
          ptr = v42;
          HIDWORD(v84) = v39;
        }
        v43 = *v38;
        v44 = v41;
        ++v38;
        ++v41;
        v42[v44] = v43;
        LODWORD(v84) = v41;
      }
      while ( v38 != v40 );
      v22 = v86;
    }
LABEL_75:
    if ( v22 && v22 != v88 )
      sub_186B220(v22);
    goto LABEL_78;
  }
LABEL_131:
  p_ptr = &ptr;
  if ( v82 != &ptr )
  {
    v26 = (unsigned int)v84;
    v27 = (__int64 *)ptr;
    v23 = v22;
    *(_DWORD *)(v4 + 48) = 0;
    if ( (_DWORD)v26 )
      goto LABEL_35;
    v22 = v88;
    goto LABEL_75;
  }
  LODWORD(v84) = 0;
LABEL_78:
  v49 = ptr;
  if ( ptr != v85 && ptr )
    sub_186B220(ptr);
  result = sub_180B130(v49);
  if ( (unsigned int)result > 2 )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)a3.m128_u64) )
    {
      sub_186A4C0(*(double *)a3.m128_u64);
      v59 = *(void (__fastcall **)(signed __int64, __int64))(*(_QWORD *)v4 + 120LL);
      v60 = sub_180B150(v49, p_ptr);
      v59(v4, v60);
      return sub_186A500(v4, v60);
    }
    else
    {
      v71 = *(__int64 (__fastcall **)(signed __int64, __int64))(*(_QWORD *)v4 + 120LL);
      v72 = sub_180B150(v49, p_ptr);
      return v71(v4, v72);
    }
  }
  return result;
}

