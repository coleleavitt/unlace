void __fastcall sub_F4B8B0(
        __int64 a1,
        const __m128i *a2,
        unsigned __int64 a3,
        const __m128i *a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  char *v10; // rax
  _BYTE *v11; // rax
  char v12; // r14
  unsigned __int8 v13; // al
  __int64 v14; // r8
  _BYTE *v15; // rdi
  size_t v16; // rcx
  _BYTE *v17; // r8
  unsigned __int64 v18; // rax
  _BYTE *v19; // rax
  unsigned __int64 v20; // rdx
  char *v21; // rax
  int v22; // edx
  __int64 v23; // rax
  _BYTE *v24; // r8
  size_t v25; // rcx
  unsigned __int64 v26; // r14
  __int64 v27; // r15
  __int8 *v28; // rdx
  const __m128i *v29; // r9
  __int64 v30; // rcx
  __int8 *v31; // rsi
  unsigned __int64 v32; // rax
  __int8 *v33; // rbx
  unsigned __int64 v34; // r12
  __int64 v35; // rdx
  __m128i *v36; // rdx
  __int64 v37; // rcx
  char *v38; // rax
  __int64 v39; // [rsp+8h] [rbp-180h]
  bool v41; // [rsp+20h] [rbp-168h]
  _BYTE *v42; // [rsp+20h] [rbp-168h]
  _BYTE *v43; // [rsp+20h] [rbp-168h]
  void *v44; // [rsp+20h] [rbp-168h]
  size_t v47; // [rsp+30h] [rbp-158h]
  size_t v48; // [rsp+30h] [rbp-158h]
  _BYTE *v49; // [rsp+30h] [rbp-158h]
  unsigned __int64 v50; // [rsp+30h] [rbp-158h]
  const char *v51; // [rsp+38h] [rbp-150h]
  __m128i v52[2]; // [rsp+40h] [rbp-148h] BYREF
  __int64 v53; // [rsp+60h] [rbp-128h]
  char v54; // [rsp+68h] [rbp-120h]
  int v55; // [rsp+6Ch] [rbp-11Ch]
  void **p_ptr; // [rsp+70h] [rbp-118h]
  void *ptr; // [rsp+80h] [rbp-108h] BYREF
  __m128i si128; // [rsp+88h] [rbp-100h] BYREF
  _BYTE v59[240]; // [rsp+98h] [rbp-F0h] BYREF

  v8 = a1;
  v9 = (__int64)a2;
  if ( a5 && (_UNKNOWN *)(a4->m128i_i64[0] & 0x10000400000LL) == &loc_400000 )
  {
    v26 = a3;
    if ( a3 )
    {
      v27 = 24 * a3;
      v28 = &a2->m128i_i8[24 * a3];
      v39 = (__int64)v28;
      if ( !a6 )
      {
        if ( (*(_DWORD *)(a5 + 20) & 0x1FFFFFFFu) >= v26 )
        {
          v29 = a2;
          v39 = (__int64)a2;
          v30 = 0;
          v31 = &si128.m128i_i8[8];
          si128.m128i_i64[0] = 0x800000000LL;
          v32 = v9 + 24;
          v33 = v28;
          v34 = v32;
          ptr = &si128.m128i_u64[1];
          while ( 1 )
          {
            v36 = (__m128i *)&v31[24 * v30];
            *v36 = _mm_loadu_si128(v29);
            v37 = v29[1].m128i_i64[0];
            v29 = (const __m128i *)v34;
            v36[1].m128i_i64[0] = v37;
            v30 = (unsigned int)++si128.m128i_i32[0];
            if ( (__int8 *)v34 == v33 )
              break;
            v35 = v30 + 1;
            v31 = (__int8 *)ptr;
            if ( v30 + 1 > (unsigned __int64)si128.m128i_u32[1] )
            {
              if ( (unsigned __int64)ptr > v34 || (unsigned __int64)ptr + 24 * v30 <= v34 )
              {
                sub_22134E0(&ptr, &si128.m128i_u64[1], v35, 24);
                v31 = (__int8 *)ptr;
                v29 = (const __m128i *)v34;
                v30 = si128.m128i_u32[0];
              }
              else
              {
                v50 = v34 - (_QWORD)ptr;
                sub_22134E0(&ptr, &si128.m128i_u64[1], v35, 24);
                v31 = (__int8 *)ptr;
                v30 = si128.m128i_u32[0];
                v29 = (const __m128i *)((char *)ptr + v50);
              }
            }
            v34 += 24LL;
          }
          v8 = a1;
          v9 = v39;
          while ( *(char *)(v27 + v39 - 21) < 0 )
          {
            v27 -= 24;
            if ( !--v26 )
              goto LABEL_59;
          }
          v39 += v27;
LABEL_59:
          if ( ptr != &si128.m128i_u64[1] )
            free(ptr);
        }
        v38 = ", ";
        if ( (a4->m128i_i8[4] & 0x10) != 0 )
          v38 = ",";
        v51 = v38;
        goto LABEL_7;
      }
      v21 = ", ";
      if ( (a4->m128i_i8[4] & 0x10) != 0 )
        v21 = ",";
      v51 = v21;
LABEL_31:
      if ( a2 == (const __m128i *)v39 )
        return;
      goto LABEL_10;
    }
    v39 = (__int64)a2;
  }
  else
  {
    v39 = (__int64)&a2->m128i_i64[3 * a3];
  }
  v10 = ", ";
  if ( (a4->m128i_i8[4] & 0x10) != 0 )
    v10 = ",";
  v51 = v10;
  if ( a6 )
    goto LABEL_31;
LABEL_7:
  v11 = *(_BYTE **)(v8 + 32);
  if ( (unsigned __int64)v11 >= *(_QWORD *)(v8 + 24) )
  {
    sub_2257CD0(v8, 60);
  }
  else
  {
    *(_QWORD *)(v8 + 32) = v11 + 1;
    *v11 = 60;
  }
  if ( v9 == v39 )
  {
LABEL_24:
    v19 = *(_BYTE **)(v8 + 32);
    v20 = *(_QWORD *)(v8 + 24);
    goto LABEL_25;
  }
LABEL_10:
  v41 = 0;
  v12 = 1;
  do
  {
    while ( 1 )
    {
      ptr = v59;
      v52[0].m128i_i32[2] = 2;
      v52[0].m128i_i64[0] = (__int64)&off_2BC1F40;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
      p_ptr = &ptr;
      v54 = 0;
      v55 = 1;
      v53 = 0;
      v52[1] = 0;
      sub_2257B70(v52, 0, 0, 0);
      if ( (*(_DWORD *)v9 & 0x7FFFFFFF) == 9 )
      {
        v22 = *(_DWORD *)(v9 + 4);
        if ( v22 && !v12 )
        {
          sub_971800(v8, v51);
          v22 = *(_DWORD *)(v9 + 4);
        }
        sub_F4B8B0((unsigned int)v52, *(_QWORD *)(v9 + 8), v22, (_DWORD)a4, a5, 1, (unsigned int)a7);
      }
      else
      {
        if ( !v12 )
          sub_971800(v8, v51);
        v13 = sub_B99D10((__int64)a4, a5, a7);
        sub_EFA2F0(v9, a4, v52, v13, v14, 0.0);
      }
      v15 = *(_BYTE **)(v8 + 32);
      v16 = (size_t)p_ptr[1];
      v17 = *p_ptr;
      v18 = *(_QWORD *)(v8 + 24);
      if ( v12 && v16 && *v17 == 58 )
      {
        if ( (unsigned __int64)v15 >= v18 )
        {
          v49 = *p_ptr;
          v44 = p_ptr[1];
          sub_2257CD0(v8, 32);
          v23 = *(_QWORD *)(v8 + 24);
          v15 = *(_BYTE **)(v8 + 32);
          v16 = (size_t)v44;
          v17 = v49;
        }
        else
        {
          *(_QWORD *)(v8 + 32) = v15 + 1;
          *v15 = 32;
          v23 = *(_QWORD *)(v8 + 24);
          v15 = *(_BYTE **)(v8 + 32);
        }
        if ( v16 > v23 - (__int64)v15 )
        {
LABEL_44:
          v47 = v16;
          v42 = v17;
          sub_22581D0(v8, v17, v16);
          v24 = v42;
          v25 = v47;
          goto LABEL_45;
        }
      }
      else
      {
        if ( v16 > v18 - (unsigned __int64)v15 )
          goto LABEL_44;
        if ( !v16 )
          goto LABEL_18;
      }
      v48 = v16;
      v43 = v17;
      memcpy(v15, v17, v16);
      v25 = v48;
      v24 = v43;
      *(_QWORD *)(v8 + 32) += v48;
LABEL_45:
      if ( (a4->m128i_i8[3] & 0x40) != 0 )
      {
        v41 = v24[v25 - 1] == 62;
        v12 = 0;
      }
      else
      {
        v12 = 0;
        v41 = 0;
      }
LABEL_18:
      LODWORD(a7) = (a6 == 0) + (_DWORD)a7;
      v52[0].m128i_i64[0] = (__int64)&unk_2C4C288;
      sub_2257A60(v52);
      if ( ptr == v59 )
        break;
      free(ptr);
      v9 += 24;
      if ( v39 == v9 )
        goto LABEL_20;
    }
    v9 += 24;
  }
  while ( v39 != v9 );
LABEL_20:
  if ( !a6 )
  {
    v19 = *(_BYTE **)(v8 + 32);
    v20 = *(_QWORD *)(v8 + 24);
    if ( v41 )
    {
      if ( (unsigned __int64)v19 < v20 )
      {
        *(_QWORD *)(v8 + 32) = v19 + 1;
        *v19 = 32;
        goto LABEL_24;
      }
      sub_2257CD0(v8, 32);
      v19 = *(_BYTE **)(v8 + 32);
      v20 = *(_QWORD *)(v8 + 24);
    }
LABEL_25:
    if ( (unsigned __int64)v19 >= v20 )
    {
      sub_2257CD0(v8, 62);
    }
    else
    {
      *(_QWORD *)(v8 + 32) = v19 + 1;
      *v19 = 62;
    }
  }
}

