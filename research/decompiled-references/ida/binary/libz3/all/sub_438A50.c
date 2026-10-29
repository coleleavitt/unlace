__int64 __fastcall sub_438A50(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4, double *a5, __m128 *a6)
{
  char **exception; // rbp
  __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 result; // rax
  __int64 *v11; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // r12
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __m128i v19; // xmm1
  int v20; // esi
  __m128 *v21; // rbx
  __int32 v22; // ecx
  __int64 v23; // r9
  __m128 *v24; // rbp
  int v25; // edi
  __int64 v26; // rax
  __m128 *v27; // rcx
  __m128 *v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned int v31; // ebx
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  __int64 *v35; // rsi
  __m128 *v36; // rax
  __int32 v37; // r10d
  __int64 v38; // r11
  unsigned __int16 *v39; // rdx
  __m128 *v40; // rax
  const double *v41; // r15
  const double *v42; // rsi
  __int64 v43; // rax
  unsigned int v44; // r8d
  __int64 v45; // r11
  __int64 v46; // r14
  __int64 v47; // r13
  __m128 *v48; // r12
  const double *v49; // rbx
  __int64 v50; // rax
  __m128 *v51; // rsi
  __m128 *v52; // rax
  _QWORD *v53; // rax
  __int64 *v54; // [rsp+0h] [rbp-C8h] BYREF
  __int64 *v55; // [rsp+8h] [rbp-C0h]
  __m128i v56; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+20h] [rbp-A8h]
  __int64 v58; // [rsp+28h] [rbp-A0h]
  __m128i v59; // [rsp+30h] [rbp-98h] BYREF
  __int64 v60; // [rsp+40h] [rbp-88h]
  unsigned int v61; // [rsp+48h] [rbp-80h]
  __int32 v62; // [rsp+4Ch] [rbp-7Ch]
  __int64 v63; // [rsp+60h] [rbp-68h] BYREF
  __int64 v64[11]; // [rsp+70h] [rbp-58h] BYREF

  v8 = a2[3];
  v54 = a2;
  v61 = a3;
  if ( v8 )
LABEL_2:
    v9 = *(_DWORD *)(v8 - 4);
  else
    v9 = 0;
  v55 = &v63;
  result = v61;
  if ( v9 < v61 )
  {
LABEL_4:
    v11 = v54;
    sub_4381A0(v55, (__int64 *)a1, *v54, v9, (int)a5, (int)a6);
    v12 = (_QWORD *)v11[3];
    v13 = v63;
    if ( v12 )
    {
      v14 = *((_DWORD *)v12 - 1);
      if ( v14 == *((_DWORD *)v12 - 2) )
      {
        v31 = (3 * v14 + 1) >> 1;
        v32 = 8 * v31 + 8;
        if ( 8 * v14 + 8 >= (unsigned int)v32 || v14 >= v31 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v64, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v64);
          sub_233E40((__int64)v64);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v33 = (unsigned int *)sub_186B300(v12 - 1, v32);
        v34 = v33[1];
        v35 = v54;
        v12 = v33 + 2;
        *v33 = v31;
        LODWORD(v33) = v34;
        v35[3] = (__int64)v12;
        v17 = &v12[v34];
        v16 = (_DWORD)v33 + 1;
      }
      else
      {
        v15 = v14;
        v16 = v14 + 1;
        v17 = &v12[v15];
      }
    }
    else
    {
      v53 = (_QWORD *)sub_186B270(0x18u);
      v12 = v53 + 1;
      *v53 = 2;
      v17 = v53 + 1;
      v54[3] = (__int64)(v53 + 1);
      v16 = 1;
    }
    *v17 = v13;
    *((_DWORD *)v12 - 1) = v16;
    v18 = *(unsigned int *)(a1 + 40);
    v19 = (__m128i)_mm_loadh_ps((const double *)&v54);
    v20 = *(_DWORD *)(a1 + 48);
    if ( 3 * (int)v18 < (unsigned int)(4 * (v20 + *(_DWORD *)(a1 + 44))) )
    {
      LODWORD(v58) = 2 * v18;
      v59 = v19;
      v57 = 24LL * (unsigned int)(2 * v18);
      v56.m128i_i64[0] = v57;
      v36 = (__m128 *)sub_186B270(v57);
      v37 = v58;
      v38 = v56.m128i_i64[0];
      v23 = v57;
      v19 = _mm_load_si128(&v59);
      v21 = v36;
      v39 = (unsigned __int16 *)((char *)v36 + v56.m128i_i64[0]);
      if ( (_DWORD)v58 )
      {
        do
        {
          v36->m128_u64[0] = 0;
          v36 = (__m128 *)((char *)v36 + 24);
          v36[-1].m128_i32[2] = 0;
        }
        while ( v36 != (__m128 *)v39 );
        v40 = v21;
        if ( (((_BYTE)v39 - (_BYTE)v21) & 8) == 0
          || (v40 = (__m128 *)((char *)v21 + 24), v21->m128_u64[1] = 0, &v21[1].m128_u16[4] != v39) )
        {
          do
          {
            v40->m128_u64[1] = 0;
            v40 += 3;
            v40[-1].m128_u64[0] = 0;
          }
          while ( v40 != (__m128 *)v39 );
        }
      }
      v41 = *(const double **)(a1 + 32);
      v22 = v37 - 1;
      v24 = (__m128 *)((char *)v21 + v38);
      a5 = (double *)&v41[3 * *(unsigned int *)(a1 + 40)];
      if ( v41 != a5 )
      {
        v42 = &v41[3 * *(unsigned int *)(a1 + 40)];
        v43 = v38;
        v44 = v9;
        v45 = a1;
        v46 = v13;
        v47 = v43;
        v48 = v21;
        v49 = v42;
        do
        {
          while ( *(_QWORD *)v41 <= 1u )
          {
            v41 += 3;
            if ( v49 == v41 )
              goto LABEL_44;
          }
          v50 = 24LL * (*(_DWORD *)(*(_QWORD *)v41 + 12LL) & (unsigned int)v22);
          v51 = (__m128 *)((char *)v48 + v50);
          if ( v50 == v47 )
          {
LABEL_48:
            if ( v51 == v48 )
            {
LABEL_56:
              v62 = v37;
              v60 = v45;
              v59.m128i_i64[0] = v23;
              LODWORD(v58) = v37 - 1;
              LODWORD(v57) = v44;
              v56 = v19;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v52 = v48;
            while ( v52->m128_u64[0] )
            {
              v52 = (__m128 *)((char *)v52 + 24);
              if ( v51 == v52 )
                goto LABEL_56;
            }
          }
          else
          {
            v52 = (__m128 *)((char *)v48 + v50);
            while ( v52->m128_u64[0] )
            {
              v52 = (__m128 *)((char *)v52 + 24);
              if ( v24 == v52 )
                goto LABEL_48;
            }
          }
          v41 += 3;
          *v52 = _mm_loadh_ps(v41 - 2);
          v52[1].m128_i32[0] = *((_DWORD *)v41 - 2);
        }
        while ( v49 != v41 );
LABEL_44:
        v21 = v48;
        v13 = v46;
        v9 = v44;
        a5 = *(double **)(v45 + 32);
        a1 = v45;
      }
      if ( a5 )
      {
        v59.m128i_i32[0] = v37;
        v58 = v23;
        LODWORD(v57) = v37 - 1;
        v56 = v19;
        sub_186B220(a5);
        v37 = v59.m128i_i32[0];
        v23 = v58;
        v22 = v57;
        v19 = _mm_load_si128(&v56);
      }
      *(_QWORD *)(a1 + 32) = v21;
      v20 = 0;
      *(_DWORD *)(a1 + 40) = v37;
      *(_DWORD *)(a1 + 48) = 0;
    }
    else
    {
      v21 = *(__m128 **)(a1 + 32);
      v22 = v18 - 1;
      v23 = 24 * v18;
      v24 = (__m128 *)((char *)v21 + 24 * v18);
    }
    v25 = *(_DWORD *)(v13 + 12);
    v26 = 24LL * (v25 & (unsigned int)v22);
    v27 = (__m128 *)((char *)v21 + v26);
    if ( v26 != v23 )
    {
      v28 = (__m128 *)((char *)v21 + v26);
      a6 = nullptr;
      while ( 1 )
      {
        v29 = v28->m128_u64[0];
        if ( v28->m128_u64[0] > 1 )
        {
          if ( *(_DWORD *)(v29 + 12) == v25 && v13 == v29 )
          {
            v28[1].m128_i32[0] = v9;
            *v28 = (__m128)v19;
            goto LABEL_28;
          }
        }
        else
        {
          if ( !v29 )
          {
            if ( a6 )
              goto LABEL_54;
            a6 = v28;
            goto LABEL_55;
          }
          a6 = v28;
        }
        v28 = (__m128 *)((char *)v28 + 24);
        if ( v28 == v24 )
          goto LABEL_20;
      }
    }
    a6 = nullptr;
    while ( 1 )
    {
LABEL_20:
      if ( v27 == v21 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v30 = v21->m128_u64[0];
      if ( v21->m128_u64[0] > 1 )
      {
        if ( *(_DWORD *)(v30 + 12) == v25 && v13 == v30 )
        {
          v21[1].m128_i32[0] = v9;
          *v21 = (__m128)v19;
          goto LABEL_28;
        }
      }
      else
      {
        if ( !v30 )
        {
          if ( a6 )
LABEL_54:
            *(_DWORD *)(a1 + 48) = v20 - 1;
          else
            a6 = v21;
LABEL_55:
          a6[1].m128_i32[0] = v9;
          *a6 = (__m128)v19;
          ++*(_DWORD *)(a1 + 44);
LABEL_28:
          v9 = 0;
          v8 = v54[3];
          if ( v8 )
            goto LABEL_2;
          goto LABEL_4;
        }
        a6 = v21;
      }
      v21 = (__m128 *)((char *)v21 + 24);
    }
  }
  return result;
}

