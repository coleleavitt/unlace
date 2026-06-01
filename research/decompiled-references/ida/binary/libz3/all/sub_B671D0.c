void __fastcall sub_B671D0(_QWORD *a1, unsigned __int64 a2, int a3, char a4)
{
  char **v4; // rbp
  __int64 v5; // rdx
  char **v6; // rbp
  __int64 v7; // rdx
  char **exception; // rbp
  __int64 v9; // rdx
  __int64 v12; // rcx
  char v13; // dl
  unsigned __int64 v14; // r13
  __m128i *v15; // rdx
  __int64 v16; // rbp
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __m128i *v20; // rcx
  unsigned __int64 v21; // rbp
  __m128i *v22; // rdx
  __int64 v23; // r13
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __m128i *v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // r13
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  _QWORD *v34; // rcx
  unsigned int v35; // r14d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // r14d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // r14d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  __int64 v50[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( !a4 )
  {
    v28 = (_QWORD *)sub_180C100(a1 + 1050, 16);
    v29 = (_QWORD *)a1[1182];
    v30 = v28;
    *v28 = off_1C57580;
    v28[1] = a2;
    if ( v29 )
    {
      v31 = *((_DWORD *)v29 - 1);
      if ( v31 == *((_DWORD *)v29 - 2) )
      {
        v35 = (3 * v31 + 1) >> 1;
        v36 = 8 * v35 + 8;
        if ( 8 * v31 + 8 >= (unsigned int)v36 || v31 >= v35 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_14E142(v50, "Overflow encountered when expanding vector", v9);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v50);
          sub_233E40((__int64)v50);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v37 = (unsigned int *)sub_186B300(v29 - 1, v36);
        v38 = v37[1];
        v29 = v37 + 2;
        *v37 = v35;
        a1[1182] = v37 + 2;
        LODWORD(v37) = v38;
        v34 = &v29[v38];
        v33 = (_DWORD)v37 + 1;
      }
      else
      {
        v32 = v31;
        v33 = v31 + 1;
        v34 = &v29[v32];
      }
    }
    else
    {
      v47 = (_QWORD *)sub_186B270(0x18u);
      v29 = v47 + 1;
      *v47 = 2;
      v33 = 1;
      a1[1182] = v29;
      v34 = v29;
    }
    *v34 = v30;
    *((_DWORD *)v29 - 1) = v33;
  }
  *(_BYTE *)(a2 + 44) |= 0x80u;
  v12 = (unsigned int)(2 * a3);
  v13 = *(_BYTE *)(a1[1106] + v12);
  if ( v13 == -1 )
  {
    v21 = a1[1081];
    if ( *(_QWORD *)(a2 + 8) != *(_QWORD *)(v21 + 8) )
    {
      v22 = (__m128i *)a1[1095];
      v23 = 8LL * (unsigned int)(v12 + 1) + 2;
      if ( v22 )
      {
        v24 = v22[-1].m128i_u32[3];
        if ( v24 == v22[-1].m128i_i32[2] )
        {
          v39 = (3 * v24 + 1) >> 1;
          v40 = 8 * (v39 + ((3 * v24 + 1) & 0xFFFFFFFE)) + 8;
          if ( 24 * v24 + 8 >= (unsigned int)v40 || v24 >= v39 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_14E142(v50, "Overflow encountered when expanding vector", v7);
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v50);
            sub_233E40((__int64)v50);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v41 = (unsigned int *)sub_186B300(&v22[-1].m128i_u64[1], v40);
          v42 = v41[1];
          v22 = (__m128i *)(v41 + 2);
          *v41 = v39;
          a1[1095] = v41 + 2;
          LODWORD(v41) = v42;
          v27 = (__m128i *)((char *)v22 + 24 * v42);
          v26 = (_DWORD)v41 + 1;
        }
        else
        {
          v25 = v24;
          v26 = v24 + 1;
          v27 = (__m128i *)((char *)v22 + 24 * v25);
        }
      }
      else
      {
        v49 = (_QWORD *)sub_186B270(0x38u);
        v22 = (__m128i *)(v49 + 1);
        *v49 = 2;
        v26 = 1;
        a1[1095] = v22;
        v27 = v22;
      }
      v27[1].m128i_i64[0] = v23;
      *v27 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)v21);
      v22[-1].m128i_i32[3] = v26;
    }
  }
  else if ( v13 == 1 )
  {
    v14 = a1[1080];
    if ( *(_QWORD *)(a2 + 8) != *(_QWORD *)(v14 + 8) )
    {
      v15 = (__m128i *)a1[1095];
      v16 = 8 * v12 + 2;
      if ( v15 )
      {
        v17 = v15[-1].m128i_u32[3];
        if ( v17 == v15[-1].m128i_i32[2] )
        {
          v43 = (3 * v17 + 1) >> 1;
          v44 = 8 * (v43 + ((3 * v17 + 1) & 0xFFFFFFFE)) + 8;
          if ( 24 * v17 + 8 >= (unsigned int)v44 || v17 >= v43 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_14E142(v50, "Overflow encountered when expanding vector", v5);
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v50);
            sub_233E40((__int64)v50);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v45 = (unsigned int *)sub_186B300(&v15[-1].m128i_u64[1], v44);
          v46 = v45[1];
          v15 = (__m128i *)(v45 + 2);
          *v45 = v43;
          a1[1095] = v45 + 2;
          LODWORD(v45) = v46;
          v20 = (__m128i *)((char *)v15 + 24 * v46);
          v19 = (_DWORD)v45 + 1;
        }
        else
        {
          v18 = v17;
          v19 = v17 + 1;
          v20 = (__m128i *)((char *)v15 + 24 * v18);
        }
      }
      else
      {
        v48 = (_QWORD *)sub_186B270(0x38u);
        v15 = (__m128i *)(v48 + 1);
        *v48 = 2;
        v19 = 1;
        a1[1095] = v15;
        v20 = v15;
      }
      v20[1].m128i_i64[0] = v16;
      *v20 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)v14);
      v15[-1].m128i_i32[3] = v19;
    }
  }
}

