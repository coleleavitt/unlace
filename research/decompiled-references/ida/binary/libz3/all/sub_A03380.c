void __fastcall sub_A03380(__int64 *a1)
{
  __int64 v2; // rax
  unsigned int v3; // r12d
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rax
  __int8 v7; // cl
  char v8; // dl
  char v9; // cl
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  void *v14; // rbp
  __int64 v15; // r13
  void *v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // r13d
  size_t v19; // rdi
  __int64 v20; // r8
  const __m128i *v21; // rax
  __int64 v22; // rsi
  __m128i *v23; // rdx
  const __m128i *i; // rsi
  bool v25; // zf
  __int8 v26; // dl
  __int64 v27; // rax
  __m128i *v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r12d
  __int64 v31; // r15
  void *v32; // rdi
  int v33; // eax
  __int64 v34; // rax
  __int8 v35; // cl
  char v36; // dl
  char v37; // cl
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  void *v42; // rbp
  _QWORD *v43; // rax
  char **exception; // rbp
  void *v45; // [rsp+0h] [rbp-A8h]
  __int64 v46; // [rsp+0h] [rbp-A8h]
  void *v47; // [rsp+0h] [rbp-A8h]
  _DWORD *v48; // [rsp+8h] [rbp-A0h]
  __int64 *v49; // [rsp+18h] [rbp-90h]
  __m128i v50; // [rsp+20h] [rbp-88h] BYREF
  __m128i v51; // [rsp+30h] [rbp-78h] BYREF
  int v52; // [rsp+40h] [rbp-68h] BYREF
  char v53; // [rsp+44h] [rbp-64h]
  __int64 v54; // [rsp+48h] [rbp-60h]
  __m128i v55; // [rsp+50h] [rbp-58h] BYREF
  int v56; // [rsp+60h] [rbp-48h] BYREF
  char v57; // [rsp+64h] [rbp-44h]
  __int64 v58; // [rsp+68h] [rbp-40h]

  if ( !*((_BYTE *)a1 + 40) && ((v2 = a1[3]) != 0 && *(_DWORD *)(v2 - 4) || (v17 = a1[2]) != 0 && *(_DWORD *)(v17 - 4)) )
  {
    v49 = a1 + 4;
    sub_180C5A0(&v51, "unknown-arith");
    v55.m128i_i8[8] = 2;
    v55.m128i_i64[0] = v51.m128i_i64[0];
    sub_98D240(a1 + 4, &v55);
    v3 = 0;
    sub_15D0DF0(&v55);
    v4 = *a1;
    if ( !*a1 )
    {
LABEL_30:
      v29 = a1[1];
      if ( !v29 )
      {
LABEL_42:
        *((_BYTE *)a1 + 40) = 1;
        return;
      }
      v30 = 0;
      while ( 1 )
      {
        if ( v30 >= *(_DWORD *)(v29 - 4) )
          goto LABEL_42;
        v55.m128i_i8[4] &= 0xFCu;
        v31 = a1[3] + 32LL * v30;
        v57 &= 0xFCu;
        v55.m128i_i32[0] = 0;
        v32 = qword_1C7F2C0;
        v55.m128i_i64[1] = 0;
        v56 = 1;
        v58 = 0;
        if ( (*(_BYTE *)(v31 + 4) & 1) != 0 )
        {
          v47 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, &v55, v31);
          v32 = v47;
        }
        else
        {
          v55.m128i_i32[0] = *(_DWORD *)v31;
        }
        if ( (*(_BYTE *)(v31 + 20) & 1) != 0 )
        {
          sub_182C690(v32, &v56, v31 + 16);
        }
        else
        {
          v33 = *(_DWORD *)(v31 + 16);
          v57 &= ~1u;
          v56 = v33;
        }
        v34 = sub_186B270(0x20u);
        v35 = v55.m128i_i8[4];
        v51.m128i_i64[0] = v34;
        v51.m128i_i8[8] = 4;
        *(_DWORD *)v34 = v55.m128i_i32[0];
        v36 = v35 & 3 | *(_BYTE *)(v34 + 4) & 0xFC;
        v37 = v57;
        *(_BYTE *)(v34 + 4) = v36;
        v38 = v55.m128i_i64[1];
        v55.m128i_i64[1] = 0;
        *(_QWORD *)(v34 + 8) = v38;
        *(_DWORD *)(v34 + 16) = v56;
        *(_BYTE *)(v34 + 20) = v37 & 3 | *(_BYTE *)(v34 + 20) & 0xFC;
        v39 = v58;
        v58 = 0;
        *(_QWORD *)(v34 + 24) = v39;
        v40 = a1[4];
        if ( !v40 || (v41 = *(unsigned int *)(v40 - 4), (_DWORD)v41 == *(_DWORD *)(v40 - 8)) )
        {
          sub_8B4B00(v49);
          v40 = a1[4];
          v25 = v51.m128i_i8[8] == 0;
          *(__m128i *)(v40 + 16LL * *(unsigned int *)(v40 - 4)) = _mm_load_si128(&v51);
          if ( v25 )
          {
            v51.m128i_i32[0] = 0;
            goto LABEL_41;
          }
        }
        else
        {
          *(__m128i *)(v40 + 16 * v41) = _mm_load_si128(&v51);
        }
        v51.m128i_i32[0] = 0;
        v51.m128i_i8[8] = 0;
LABEL_41:
        ++*(_DWORD *)(v40 - 4);
        ++v30;
        sub_15D0DF0(&v51);
        v42 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v55);
        sub_182CBA0(v42, &v56);
        v29 = a1[1];
        if ( !v29 )
          goto LABEL_42;
      }
    }
    while ( 1 )
    {
      if ( v3 >= *(_DWORD *)(v4 - 4) )
        goto LABEL_30;
      v51.m128i_i8[4] &= 0xFCu;
      v15 = a1[2] + 32LL * v3;
      v53 &= 0xFCu;
      v51.m128i_i32[0] = 0;
      v16 = qword_1C7F2C0;
      v51.m128i_i64[1] = 0;
      v52 = 1;
      v54 = 0;
      if ( (*(_BYTE *)(v15 + 4) & 1) != 0 )
      {
        v45 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, &v51, v15);
        v16 = v45;
        if ( (*(_BYTE *)(v15 + 20) & 1) == 0 )
        {
LABEL_7:
          v5 = *(_DWORD *)(v15 + 16);
          v53 &= ~1u;
          v52 = v5;
          goto LABEL_8;
        }
      }
      else
      {
        v51.m128i_i32[0] = *(_DWORD *)v15;
        if ( (*(_BYTE *)(v15 + 20) & 1) == 0 )
          goto LABEL_7;
      }
      sub_182C690(v16, &v52, v15 + 16);
LABEL_8:
      v6 = sub_186B270(0x20u);
      v7 = v51.m128i_i8[4];
      v50.m128i_i64[0] = v6;
      v50.m128i_i8[8] = 4;
      *(_DWORD *)v6 = v51.m128i_i32[0];
      v8 = v7 & 3 | *(_BYTE *)(v6 + 4) & 0xFC;
      v9 = v53;
      *(_BYTE *)(v6 + 4) = v8;
      v10 = v51.m128i_i64[1];
      v51.m128i_i64[1] = 0;
      *(_QWORD *)(v6 + 8) = v10;
      *(_DWORD *)(v6 + 16) = v52;
      LOBYTE(v10) = v9 & 3 | *(_BYTE *)(v6 + 20) & 0xFC;
      v11 = (_QWORD *)a1[4];
      *(_BYTE *)(v6 + 20) = v10;
      v12 = v54;
      v54 = 0;
      *(_QWORD *)(v6 + 24) = v12;
      if ( v11 )
      {
        v13 = *((unsigned int *)v11 - 1);
        if ( (_DWORD)v13 != *((_DWORD *)v11 - 2) )
        {
          *(__m128i *)&v11[2 * v13] = _mm_load_si128(&v50);
          goto LABEL_11;
        }
        v18 = (unsigned int)(3 * v13 + 1) >> 1;
        v19 = 16 * v18 + 8;
        if ( 16 * (int)v13 + 8 >= (unsigned int)v19 || (unsigned int)v13 >= v18 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_98B3B0(v55.m128i_i64, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v55);
          sub_233E40((__int64)&v55);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v20 = sub_186B270(v19);
        v21 = (const __m128i *)a1[4];
        if ( v21 )
        {
          v22 = v21[-1].m128i_u32[3];
          v23 = (__m128i *)(v20 + 8);
          *(_DWORD *)(v20 + 4) = v22;
          for ( i = &v21[v22]; i != v21; ++v23 )
          {
            v25 = v21->m128i_i8[8] == 0;
            *v23 = _mm_loadu_si128(v21);
            v21->m128i_i32[0] = 0;
            if ( !v25 )
              v21->m128i_i8[8] = 0;
            ++v21;
          }
        }
        else
        {
          *(_DWORD *)(v20 + 4) = 0;
        }
        v48 = (_DWORD *)v20;
        v46 = v20 + 8;
        sub_4EB210(v49);
        v11 = (_QWORD *)v46;
        v26 = v50.m128i_i8[8];
        v27 = (unsigned int)v48[1];
        a1[4] = v46;
        *v48 = v18;
        v28 = (__m128i *)(v46 + 16 * v27);
      }
      else
      {
        v43 = (_QWORD *)sub_186B270(0x28u);
        v11 = v43 + 1;
        *v43 = 2;
        v26 = v50.m128i_i8[8];
        a1[4] = (__int64)(v43 + 1);
        v28 = (__m128i *)(v43 + 1);
      }
      *v28 = _mm_load_si128(&v50);
      if ( !v26 )
      {
        v50.m128i_i32[0] = 0;
        goto LABEL_12;
      }
LABEL_11:
      v50.m128i_i32[0] = 0;
      v50.m128i_i8[8] = 0;
LABEL_12:
      ++*((_DWORD *)v11 - 1);
      ++v3;
      sub_15D0DF0(&v50);
      v14 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v51);
      sub_182CBA0(v14, &v52);
      v4 = *a1;
      if ( !*a1 )
        goto LABEL_30;
    }
  }
}

