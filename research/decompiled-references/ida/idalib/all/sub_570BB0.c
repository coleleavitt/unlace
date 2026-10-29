__int64 __fastcall sub_570BB0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 *a5,
        _QWORD *a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        __m128 a14,
        int a15)
{
  const __m128i *v15; // r13
  unsigned __int64 v16; // rbp
  int v17; // ebx
  int v18; // edx
  char v19; // bl
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdi
  char *v27; // r15
  __int64 v28; // rdx
  __int64 tinfo_size; // r14
  unsigned __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rcx
  __int64 v33; // r12
  char v34; // al
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rsi
  int v38; // edx
  char v39; // cl
  int v40; // eax
  __int64 v41; // rdx
  char *v42; // rbx
  void *v43; // r14
  char *v44; // rbx
  char *v45; // rbp
  void *v46; // rdi
  void *v47; // rdi
  unsigned __int64 v48; // rsi
  __int32 v49; // eax
  unsigned int v50; // edx
  unsigned int v51; // ebp
  char v52; // r14
  __int64 v53; // r12
  __int64 v54; // r15
  unsigned __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // r15
  char v59; // r12
  unsigned __int64 v60; // r8
  unsigned __int64 *v61; // rbx
  bool v62; // zf
  __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // r12
  __int64 v66; // r13
  int v68; // [rsp+8h] [rbp-90h]
  char v69; // [rsp+8h] [rbp-90h]
  unsigned __int64 v70; // [rsp+8h] [rbp-90h]
  unsigned __int64 v71; // [rsp+8h] [rbp-90h]
  const __m128i *v74; // [rsp+18h] [rbp-80h]
  __int16 v77; // [rsp+34h] [rbp-64h] BYREF
  char v78; // [rsp+36h] [rbp-62h]
  unsigned int v79; // [rsp+38h] [rbp-60h]
  __int16 v80; // [rsp+3Ch] [rbp-5Ch]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  void *v82[2]; // [rsp+48h] [rbp-50h]
  unsigned __int64 v83; // [rsp+58h] [rbp-40h]

  v15 = (const __m128i *)a4;
  v83 = __readfsqword(0x28u);
  v16 = a4[1];
  if ( (a15 & 1) != 0 )
  {
    v42 = (char *)*a4;
    v43 = (void *)(*a4 + 144 * v16);
    if ( v43 != (void *)*a4 )
    {
      sub_5705B0((__int64 *)&ptr, *a4, (__int64)(0x8E38E38E38E38E39LL * ((__int64)(144 * v16) >> 4) + 1) / 2);
      if ( ptr == v82[0] )
      {
        sub_563790((__int64)v42, &v42[144 * (__int64)v82[0]], v43, (__int64)v82[1]);
      }
      else if ( v82[1] )
      {
        sub_565840((__int64)v42, v43, (__int64)v82[1], (__int64)v82[0]);
      }
      else
      {
        sub_570B20(v42, v43);
      }
      v44 = (char *)v82[1];
      v45 = (char *)v82[1] + 144 * (__int64)v82[0];
      if ( v82[1] == v45 )
      {
        v48 = 0;
      }
      else
      {
        do
        {
          clear_tinfo_t(v44 + 64);
          v46 = *((void **)v44 + 5);
          if ( v46 )
          {
            *((_QWORD *)v44 + 6) = 0;
            qfree(v46);
          }
          v47 = *((void **)v44 + 2);
          if ( v47 )
          {
            *((_QWORD *)v44 + 3) = 0;
            qfree(v47);
          }
          v44 += 144;
        }
        while ( v45 != v44 );
        v45 = (char *)v82[1];
        v48 = 144 * (__int64)v82[0];
      }
      operator delete(v45, v48);
      v16 = v15->m128i_u64[1];
    }
  }
  v17 = a15 & 0x10;
  if ( (a15 & 0x10) != 0 )
    goto LABEL_3;
  ptr = nullptr;
  *(_OWORD *)v82 = 0;
  if ( v16 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, v16, 24);
    memset((char *)ptr + 24 * (__int64)v82[0], 0, 24 * (v16 - (unsigned __int64)v82[0]));
    v82[0] = (void *)v16;
  }
  v79 = 0;
  v80 = 0;
  if ( (v15[2].m128i_i8[12] & 0x20) != 0 )
  {
    v79 = getinf(67);
    setinf(67, v79 & 0xFFFFFFFE);
    LOBYTE(v80) = getinf(57);
    setinf(57, (unsigned __int8)v80 & 0xF0 | 1LL);
    v62 = v15->m128i_i64[1] == 0;
    HIBYTE(v80) = 1;
    if ( v62 )
    {
      LOBYTE(v68) = 1;
LABEL_91:
      setinf(57, (unsigned __int8)v80);
      setinf(67, v79);
      goto LABEL_97;
    }
  }
  else if ( !v15->m128i_i64[1] )
  {
    LOBYTE(v68) = 1;
    goto LABEL_97;
  }
  v68 = 1;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  do
  {
    v31 = v15->m128i_i64[0] + 144 * v25;
    v32 = *(_QWORD *)v31;
    v33 = v31;
    if ( v15[3].m128i_i8[3] )
    {
      if ( v32 || (*(_BYTE *)(v31 + 132) & 0x20) != 0 )
        goto LABEL_62;
      v26 = *(_QWORD *)(v31 + 64);
      v27 = (char *)ptr + 24 * v25;
      if ( (*(_BYTE *)(v31 + 64) & 0xF) != 0xE )
        goto LABEL_17;
    }
    else
    {
      if ( v32 < v24 )
        goto LABEL_62;
      v26 = *(_QWORD *)(v31 + 64);
      v34 = v26 & 0xF;
      if ( (v32 & 7) != 0 )
      {
        if ( v34 != 14 )
          goto LABEL_62;
        v27 = (char *)ptr + 24 * v25;
      }
      else
      {
        v27 = (char *)ptr + 24 * v25;
        if ( v34 != 14 )
        {
          if ( (*(_BYTE *)(v31 + 132) & 0x20) != 0 )
            v28 = 3;
          else
LABEL_17:
            v28 = 1;
          tinfo_size = get_tinfo_size(v27 + 16, v26, v28);
          *(_QWORD *)v27 = (int)sub_5696F0((_QWORD *)(v33 + 64), tinfo_size);
          if ( tinfo_size == -1 )
          {
            if ( (a15 & 8) == 0 )
              goto LABEL_62;
            v39 = *(_BYTE *)(v33 + 136);
            if ( v39 )
            {
              v40 = 1 << (v39 - 1);
            }
            else
            {
              v41 = *(_QWORD *)(v33 + 8);
              v40 = 1;
              if ( (int)v41 > 8 )
              {
                v40 = 2;
                if ( (int)v41 > 16 )
                  v40 = 4 * ((int)v41 > 32) + 4;
              }
            }
            *((_DWORD *)v27 + 4) = v40;
            v68 |= 2u;
            *(_QWORD *)v27 = (unsigned __int64)(*(_QWORD *)(v33 + 8) + 7LL) >> 3;
            v30 = *(_QWORD *)v33;
          }
          else
          {
            if ( 8 * tinfo_size != *(_QWORD *)(v33 + 8) )
              goto LABEL_62;
            v30 = *(_QWORD *)v33;
          }
LABEL_21:
          if ( (*(_BYTE *)(v33 + 132) & 0x20) != 0 )
            goto LABEL_22;
          goto LABEL_40;
        }
      }
    }
    v78 = 0;
    v77 = 0;
    if ( !(unsigned __int8)get_tinfo_details(v26, 14, &v77) )
      goto LABEL_62;
    v35 = HIBYTE(v77);
    if ( HIBYTE(v77) != *(_QWORD *)(v33 + 8) )
      goto LABEL_62;
    v36 = (unsigned __int8)v77;
    *(_QWORD *)v27 = HIBYTE(v77);
    *((_DWORD *)v27 + 4) = v36;
    v37 = v36;
    v30 = *(_QWORD *)v33;
    if ( (unsigned __int8)v35 <= 1u )
      goto LABEL_21;
    v38 = v68 | 4;
    if ( (v30 >> 3) / v37 == ((v35 + v30 - 1) >> 3) / v37 )
      v38 = v68;
    v68 = v38;
    if ( (*(_BYTE *)(v33 + 132) & 0x20) != 0 )
    {
LABEL_22:
      v24 = v30 + 8LL * *(_QWORD *)v27;
      goto LABEL_23;
    }
LABEL_40:
    v24 = v30 + *(_QWORD *)(v33 + 8);
LABEL_23:
    *((_QWORD *)v27 + 1) = v24;
    if ( v23 < v24 )
      v23 = v24;
    if ( *(_QWORD *)v33 >= v24 && *(_QWORD *)v27 || v24 > 0x7FFFFFFF7LL )
    {
LABEL_62:
      sub_66C650("FAILED", v15, 1);
      goto LABEL_63;
    }
    v25 = ++v17;
  }
  while ( (unsigned __int64)v17 < v15->m128i_i64[1] );
  if ( 8 * v15[1].m128i_i64[1] < v23 )
  {
LABEL_63:
    if ( HIBYTE(v80) )
    {
      setinf(57, (unsigned __int8)v80);
      setinf(67, v79);
    }
    goto LABEL_65;
  }
  if ( HIBYTE(v80) )
    goto LABEL_91;
LABEL_97:
  if ( v15[3].m128i_i8[3] )
  {
    if ( (v15[2].m128i_i8[13] & 4) != 0 )
      goto LABEL_65;
    if ( (a15 & 2) == 0 )
      goto LABEL_100;
LABEL_106:
    if ( !sub_56FCD0(v15, (unsigned __int64)&ptr, a15, (v68 & 4) != 0, 0.0, a8, a9, a10, a11, a12, a13, a14) )
    {
LABEL_65:
      if ( ptr )
      {
        v82[0] = nullptr;
        qfree(ptr);
      }
      return 0;
    }
  }
  else if ( (a15 & 2) != 0 && (v15[2].m128i_i8[13] & 4) == 0 )
  {
    goto LABEL_106;
  }
LABEL_100:
  if ( ptr )
  {
    v82[0] = nullptr;
    qfree(ptr);
  }
  v16 = v15->m128i_u64[1];
LABEL_3:
  if ( v16 )
  {
    v18 = 0;
    v19 = 0;
    v20 = 0;
    while ( 1 )
    {
      v21 = v15->m128i_i64[0] + 144 * v20;
      if ( *(_BYTE *)(v21 + 136) > 0xFu )
        return 0;
      v19 |= *(_QWORD *)(v21 + 72) != 0;
      if ( (*(_DWORD *)(v21 + 132) & 0xFFFF800F) != 0 )
        return 0;
      v20 = ++v18;
      if ( v18 >= v16 )
      {
        if ( v15[3].m128i_i8[1] > 0xFu )
          return 0;
        v49 = v15[2].m128i_i32[3];
        if ( (v49 & 0xFFFF800F) != 0 )
          return 0;
        if ( !v19 )
          goto LABEL_94;
        BYTE1(v49) |= 2u;
        goto LABEL_71;
      }
    }
  }
  else
  {
    if ( v15[3].m128i_i8[1] > 0xFu )
      return 0;
    v49 = v15[2].m128i_i32[3];
    if ( (v49 & 0xFFFF800F) != 0 )
      return 0;
LABEL_94:
    BYTE1(v49) &= ~2u;
    v19 = 0;
LABEL_71:
    v15[2].m128i_i32[3] = v49;
    if ( a1 )
    {
      v50 = a15;
      BYTE1(v50) = BYTE1(a15) | 8;
      LOBYTE(v49) = 13;
      if ( (v49 & 0x400) == 0 )
        v50 = a15 & 0xFFFFF7FF;
      v51 = v50;
      if ( v15[3].m128i_i8[3] )
        LOBYTE(v49) = 29;
      v52 = v49 | v50 & 0xC0;
      v53 = a1[1];
      if ( v53 )
      {
        v55 = v53 + 1;
        v54 = a1[1];
        --v53;
      }
      else
      {
        v54 = 1;
        v55 = 2;
      }
      v56 = *a1;
      if ( a1[2] < v55 )
      {
        v70 = v55;
        v63 = qvector_reserve(a1, v56, v55, 1);
        v55 = v70;
        v56 = v63;
        *a1 = v63;
      }
      a1[1] = v55;
      *(_BYTE *)(v56 + v53) = v52;
      *(_BYTE *)(*a1 + v54) = 0;
      v57 = v15->m128i_i64[1];
      if ( a5 )
        v57 += a5[1];
      if ( !(unsigned __int8)sub_6B35E0(a1, v15[3].m128i_u8[2] | (unsigned int)(8 * v57), v57 == 0)
        || !(unsigned __int8)sub_535F20(a1, v15[3].m128i_u8[1], v15[2].m128i_i32[3], a6, 1) )
      {
        return 0;
      }
      LOBYTE(v51) = v51 & 0x3F;
      v58 = v15->m128i_i64[0] + 144 * v15->m128i_i64[1];
      if ( v58 != v15->m128i_i64[0] )
      {
        v69 = v19;
        v59 = v19;
        v60 = 0;
        v61 = (unsigned __int64 *)v15->m128i_i64[0];
        while ( (unsigned __int8)sub_561D70(a1, a2, a3, (__int64)v61, v60, v59, v51) )
        {
          v60 = *v61;
          v61 += 18;
          if ( (unsigned __int64 *)v58 == v61 )
          {
            v19 = v69;
            goto LABEL_112;
          }
        }
        return 0;
      }
      v60 = 0;
LABEL_112:
      if ( a5 )
      {
        v64 = *a5;
        v65 = *a5 + 144 * a5[1];
        if ( v65 != *a5 )
        {
          v74 = v15;
          v66 = v64;
          v71 = v60;
          while ( 1 )
          {
            *(_DWORD *)(v66 + 132) |= 0x200u;
            if ( !(unsigned __int8)sub_561D70(a1, a2, a3, v66, 0, v19, v51) )
              return 0;
            v66 += 144;
            if ( v66 == v65 )
            {
              v60 = v71;
              v15 = v74;
              break;
            }
          }
        }
      }
      if ( (v15[2].m128i_i8[13] & 4) != 0 )
        sub_6B3440(a1, v15[1].m128i_i64[1] - (v60 >> 3));
    }
    return 1;
  }
}
