_BYTE *__fastcall sub_F548D0(__int64 a1, const __m128i *a2, unsigned __int64 a3, const __m128i *a4, __int64 a5)
{
  const __m128i *v5; // r14
  __int64 v7; // rbx
  char *v8; // rax
  _BYTE *v9; // rax
  __int64 v10; // r13
  char v11; // r15
  __m128i si128; // xmm0
  unsigned __int8 v13; // cl
  __int64 v14; // r8
  _BYTE *v15; // rdi
  size_t v16; // rcx
  _BYTE *v17; // r8
  unsigned __int64 v18; // rax
  _BYTE *result; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  _BYTE *v22; // r8
  size_t v23; // rcx
  __int64 v24; // rax
  size_t v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  _QWORD *v28; // rdi
  unsigned __int64 v29; // rsi
  const __m128i *v30; // rdi
  const __m128i *v31; // r12
  unsigned __int64 v32; // r15
  __int8 *v33; // rsi
  __int64 v34; // rcx
  __int64 v36; // r13
  __int64 v37; // rdx
  __m128i *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // r13
  unsigned int v42; // ecx
  __int64 v43; // rsi
  unsigned __int64 v44; // r12
  __int64 m128i_i64; // [rsp+10h] [rbp-1B8h]
  const __m128i *v47; // [rsp+28h] [rbp-1A0h]
  bool v48; // [rsp+30h] [rbp-198h]
  _BYTE *v49; // [rsp+30h] [rbp-198h]
  _BYTE *v50; // [rsp+30h] [rbp-198h]
  void *v51; // [rsp+30h] [rbp-198h]
  size_t v52; // [rsp+38h] [rbp-190h]
  size_t v53; // [rsp+38h] [rbp-190h]
  _BYTE *v54; // [rsp+38h] [rbp-190h]
  char *s; // [rsp+40h] [rbp-188h]
  const void **v56; // [rsp+50h] [rbp-178h] BYREF
  __int16 v57; // [rsp+70h] [rbp-158h]
  __m128i v58[2]; // [rsp+80h] [rbp-148h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-128h]
  char v60; // [rsp+A8h] [rbp-120h]
  int v61; // [rsp+ACh] [rbp-11Ch]
  void **p_ptr; // [rsp+B0h] [rbp-118h]
  void *ptr; // [rsp+C0h] [rbp-108h] BYREF
  __m128i v64; // [rsp+C8h] [rbp-100h] BYREF
  _BYTE v65[240]; // [rsp+D8h] [rbp-F0h] BYREF

  v5 = a4;
  v7 = (__int64)a2;
  if ( a5 && (_UNKNOWN *)(a4->m128i_i64[0] & 0x10000400000LL) == &loc_400000 )
  {
    m128i_i64 = (__int64)a2;
    if ( a3 )
    {
      v30 = &a2[2 * a3];
      m128i_i64 = (__int64)v30;
      if ( a3 <= (*(_DWORD *)(a5 + 20) & 0x1FFFFFFFu) )
      {
        v31 = a2;
        v32 = (unsigned __int64)&a2[2];
        v33 = &v64.m128i_i8[8];
        v64.m128i_i64[0] = 0x800000000LL;
        v34 = 0;
        m128i_i64 = v7;
        v47 = v5;
        v36 = 32 * a3;
        ptr = &v64.m128i_u64[1];
        while ( 1 )
        {
          v38 = (__m128i *)&v33[24 * v34];
          *v38 = _mm_loadu_si128(v31);
          v39 = v31[1].m128i_i64[0];
          v31 = (const __m128i *)v32;
          v38[1].m128i_i64[0] = v39;
          v34 = (unsigned int)++v64.m128i_i32[0];
          if ( v30 == (const __m128i *)v32 )
            break;
          v37 = v34 + 1;
          v33 = (__int8 *)ptr;
          if ( v34 + 1 > (unsigned __int64)v64.m128i_u32[1] )
          {
            if ( (unsigned __int64)ptr > v32 || (unsigned __int64)ptr + 24 * v34 <= v32 )
            {
              sub_22134E0(&ptr, &v64.m128i_u64[1], v37, 24);
              v33 = (__int8 *)ptr;
              v34 = v64.m128i_u32[0];
            }
            else
            {
              v44 = v32 - (_QWORD)ptr;
              sub_22134E0(&ptr, &v64.m128i_u64[1], v37, 24);
              v33 = (__int8 *)ptr;
              v34 = v64.m128i_u32[0];
              v31 = (const __m128i *)((char *)ptr + v44);
            }
          }
          v32 += 32LL;
        }
        v40 = v36;
        v41 = a3;
        v5 = v47;
        while ( *(char *)(v40 + v7 - 29) < 0 )
        {
          v40 -= 32;
          if ( !--v41 )
            goto LABEL_56;
        }
        m128i_i64 = v7 + v40;
LABEL_56:
        if ( ptr != &v64.m128i_u64[1] )
          free(ptr);
      }
    }
  }
  else
  {
    m128i_i64 = (__int64)a2[2 * a3].m128i_i64;
  }
  v8 = ", ";
  if ( (v5->m128i_i8[4] & 0x10) != 0 )
    v8 = ",";
  s = v8;
  v9 = *(_BYTE **)(a1 + 32);
  if ( (unsigned __int64)v9 >= *(_QWORD *)(a1 + 24) )
  {
    sub_2257CD0(a1, 60);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v9 + 1;
    *v9 = 60;
  }
  if ( v7 == m128i_i64 )
  {
LABEL_22:
    result = *(_BYTE **)(a1 + 32);
    v20 = *(_QWORD *)(a1 + 24);
    goto LABEL_23;
  }
  v48 = 0;
  v10 = 0;
  v11 = 1;
  do
  {
    while ( 1 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
      v58[0].m128i_i32[2] = 2;
      ptr = v65;
      v64 = si128;
      v58[0].m128i_i64[0] = (__int64)&off_2BC1F40;
      v60 = 0;
      p_ptr = &ptr;
      v61 = 1;
      v59 = 0;
      v58[1] = 0;
      sub_2257B70(v58, 0, 0, 0);
      if ( (*(_DWORD *)v7 & 0x7FFFFFFF) == 9 )
      {
        v21 = *(unsigned int *)(v7 + 4);
        if ( (_DWORD)v21 && !v11 )
        {
          sub_971800(a1, s);
          v21 = *(unsigned int *)(v7 + 4);
        }
        sub_F4B8B0((__int64)v58, *(const __m128i **)(v7 + 8), v21, v5, a5, 1, v10);
      }
      else
      {
        if ( !v11 )
        {
          v25 = strlen(s);
          v26 = *(_QWORD *)(a1 + 32);
          if ( v25 <= *(_QWORD *)(a1 + 24) - v26 )
          {
            if ( (_DWORD)v25 )
            {
              v42 = 0;
              do
              {
                v43 = v42++;
                *(_BYTE *)(v26 + v43) = s[v43];
              }
              while ( v42 < (unsigned int)v25 );
            }
            *(_QWORD *)(a1 + 32) += v25;
          }
          else
          {
            sub_22581D0(a1, s, v25);
          }
        }
        v13 = sub_B99D10((__int64)v5, a5, v10);
        if ( (*(_DWORD *)v7 & 0x7FFFFFFF) == 1 )
        {
          v27 = *(_QWORD *)(*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFFCLL);
          v57 = 257;
          if ( (v5->m128i_i8[5] & 1) != 0 )
            v27 = *(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)*(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v27) & 7;
          v28 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
          v29 = v27 & 7;
          if ( (v27 & 8) != 0 )
          {
            v29 |= *(__int64 *)((char *)&qword_18 + (v27 & 0xFFFFFFFFFFFFFFF0LL));
            v28 = (_QWORD *)*v28;
          }
          sub_F50910((__int64)v28, v29, (unsigned __int64)v58, v5, &v56, 0);
        }
        else
        {
          sub_EFA2F0(v7, v5, v58, v13, v14, *(double *)si128.m128i_i64);
        }
      }
      v15 = *(_BYTE **)(a1 + 32);
      v16 = (size_t)p_ptr[1];
      v17 = *p_ptr;
      v18 = *(_QWORD *)(a1 + 24);
      if ( v11 && v16 && *v17 == 58 )
      {
        if ( v18 <= (unsigned __int64)v15 )
        {
          v54 = *p_ptr;
          v51 = p_ptr[1];
          sub_2257CD0(a1, 32);
          v24 = *(_QWORD *)(a1 + 24);
          v15 = *(_BYTE **)(a1 + 32);
          v16 = (size_t)v51;
          v17 = v54;
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v15 + 1;
          *v15 = 32;
          v24 = *(_QWORD *)(a1 + 24);
          v15 = *(_BYTE **)(a1 + 32);
        }
        if ( v16 > v24 - (__int64)v15 )
        {
LABEL_31:
          v52 = v16;
          v49 = v17;
          sub_22581D0(a1, v17, v16);
          v22 = v49;
          v23 = v52;
          if ( (v5->m128i_i8[3] & 0x40) == 0 )
            goto LABEL_32;
          goto LABEL_39;
        }
      }
      else
      {
        if ( v16 > v18 - (unsigned __int64)v15 )
          goto LABEL_31;
        if ( !v16 )
          goto LABEL_17;
      }
      v53 = v16;
      v50 = v17;
      memcpy(v15, v17, v16);
      v23 = v53;
      v22 = v50;
      *(_QWORD *)(a1 + 32) += v53;
      if ( (v5->m128i_i8[3] & 0x40) == 0 )
      {
LABEL_32:
        v11 = 0;
        v48 = 0;
        goto LABEL_17;
      }
LABEL_39:
      v48 = v22[v23 - 1] == 62;
      v11 = 0;
LABEL_17:
      v10 = (unsigned int)(v10 + 1);
      v58[0].m128i_i64[0] = (__int64)&unk_2C4C288;
      sub_2257A60(v58);
      if ( ptr == v65 )
        break;
      free(ptr);
      v7 += 32;
      if ( m128i_i64 == v7 )
        goto LABEL_19;
    }
    v7 += 32;
  }
  while ( m128i_i64 != v7 );
LABEL_19:
  result = *(_BYTE **)(a1 + 32);
  v20 = *(_QWORD *)(a1 + 24);
  if ( v48 )
  {
    if ( v20 > (unsigned __int64)result )
    {
      *(_QWORD *)(a1 + 32) = result + 1;
      *result = 32;
      goto LABEL_22;
    }
    sub_2257CD0(a1, 32);
    result = *(_BYTE **)(a1 + 32);
    v20 = *(_QWORD *)(a1 + 24);
  }
LABEL_23:
  if ( (unsigned __int64)result >= v20 )
    return (_BYTE *)sub_2257CD0(a1, 62);
  *(_QWORD *)(a1 + 32) = result + 1;
  *result = 62;
  return result;
}

