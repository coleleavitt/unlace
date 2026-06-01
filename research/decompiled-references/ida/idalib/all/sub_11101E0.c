__int64 __fastcall sub_11101E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  char *v3; // rcx
  __m128i si128; // xmm0
  char *v5; // r12
  const void *v6; // r13
  size_t v7; // rbp
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r15d
  __int64 *v14; // r14
  __int64 v15; // rax
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r14
  char *v20; // r15
  __int64 v21; // rax
  _BYTE *v22; // rdx
  _BYTE *v23; // rax
  size_t v24; // rbp
  size_t v25; // r12
  char *v26; // r12
  char *v27; // r13
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rax
  char *v31; // rbp
  _QWORD *v32; // r12
  const void *v33; // r13
  size_t v34; // rbp
  unsigned int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // r14d
  __int64 *v41; // r15
  __int64 v42; // rax
  _QWORD *v43; // rcx
  unsigned int v44; // eax
  size_t v46; // rbp
  _BYTE *v47; // rsi
  unsigned __int64 v48; // rax
  char *v49; // [rsp+8h] [rbp-C0h]
  _QWORD *v50; // [rsp+18h] [rbp-B0h]
  _QWORD *v51; // [rsp+20h] [rbp-A8h]
  _QWORD *v52; // [rsp+28h] [rbp-A0h]
  __int64 v53; // [rsp+30h] [rbp-98h]
  __int64 v55; // [rsp+40h] [rbp-88h]
  char *v56; // [rsp+48h] [rbp-80h]
  __int64 *v57; // [rsp+58h] [rbp-70h] BYREF
  char v58; // [rsp+60h] [rbp-68h] BYREF
  void *src; // [rsp+70h] [rbp-58h] BYREF
  size_t n; // [rsp+78h] [rbp-50h]
  _QWORD v61[9]; // [rsp+80h] [rbp-48h] BYREF

  v3 = (char *)a3[1];
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  *(_QWORD *)a1 = 0;
  v5 = (char *)*a3;
  *(__m128i *)(a1 + 8) = si128;
  v49 = v3;
  while ( v49 != v5 )
  {
    while ( 1 )
    {
      v6 = *(const void **)v5;
      v7 = *((_QWORD *)v5 + 1);
      v8 = sub_2244B30(*(_QWORD *)v5, v7);
      v9 = sub_2244CB0(a1, v6, v7, v8);
      v13 = v9;
      v14 = (__int64 *)(*(_QWORD *)a1 + 8LL * v9);
      if ( *v14 )
        break;
LABEL_7:
      v15 = sub_22300B0(v7 + 9, 8, v9, v10, v11, v12);
      v16 = (_QWORD *)v15;
      if ( v7 )
      {
        v50 = (_QWORD *)v15;
        memcpy((void *)(v15 + 8), v6, v7);
        v16 = v50;
      }
      *((_BYTE *)v16 + v7 + 8) = 0;
      v5 += 32;
      *v16 = v7;
      *v14 = (__int64)v16;
      ++*(_DWORD *)(a1 + 12);
      v17 = sub_22450D0(a1, v13);
      sub_A45C10((__int64 **)&src, (__int64 *)(*(_QWORD *)a1 + 8LL * v17), 0);
      if ( v49 == v5 )
        goto LABEL_10;
    }
    if ( *v14 == -8 )
    {
      --*(_DWORD *)(a1 + 16);
      goto LABEL_7;
    }
    v5 += 32;
    sub_A45C10((__int64 **)&src, v14, 0);
  }
LABEL_10:
  v18 = *(_QWORD *)(a2 + 24);
  v53 = v18 + 56LL * *(unsigned int *)(a2 + 32);
  if ( v18 != v53 )
  {
    v19 = *(_QWORD *)(a2 + 24);
    v20 = &v58;
    while ( 1 )
    {
      src = v61;
      sub_110A8B0(&src, *(_BYTE **)v19, *(_QWORD *)v19 + *(_QWORD *)(v19 + 8));
      v21 = *(_QWORD *)(v19 + 8);
      v22 = *(_BYTE **)v19;
      if ( !v21 || *v22 != 94 )
      {
        v46 = n;
        if ( n == 0x7FFFFFFFFFFFFFFFLL )
          std::__throw_length_error("basic_string::_M_replace_aux");
        v47 = src;
        v48 = src == v61 ? 15LL : v61[0];
        if ( n + 1 > v48 )
        {
          sub_998B30((__int64)&src, 0, 0, nullptr, 1u);
          v47 = src;
        }
        else if ( n )
        {
          if ( n == 1 )
            *((_BYTE *)src + 1) = *(_BYTE *)src;
          else
            memmove((char *)src + 1, src, n);
          v47 = src;
        }
        *v47 = 94;
        n = v46 + 1;
        *((_BYTE *)src + v46 + 1) = 0;
        v21 = *(_QWORD *)(v19 + 8);
        v22 = *(_BYTE **)v19;
        if ( !v21 )
          break;
      }
      if ( v22[v21 - 1] != 36 )
      {
        v23 = src;
        if ( src != v61 )
          goto LABEL_16;
LABEL_51:
        v24 = n;
        v25 = n + 1;
        if ( n + 1 > 0xF )
        {
LABEL_52:
          sub_998B30((__int64)&src, v24, 0, nullptr, 1u);
          v23 = src;
        }
LABEL_17:
        v23[v24] = 36;
        n = v25;
        *((_BYTE *)src + v24 + 1) = 0;
      }
      sub_2233940(v20, src, n, 0);
      v26 = (char *)a3[1];
      v27 = (char *)*a3;
      v28 = (__int64)&v26[-*a3];
      v29 = v28 >> 7;
      v30 = v28 >> 5;
      if ( v29 <= 0 )
        goto LABEL_54;
      v31 = &v27[128 * v29];
      do
      {
        if ( (unsigned __int8)sub_2233DC0(v20, *(_QWORD *)v27, *((_QWORD *)v27 + 1), 0, 0) )
          goto LABEL_25;
        if ( (unsigned __int8)sub_2233DC0(v20, *((_QWORD *)v27 + 4), *((_QWORD *)v27 + 5), 0, 0) )
        {
          v27 += 32;
          goto LABEL_25;
        }
        if ( (unsigned __int8)sub_2233DC0(v20, *((_QWORD *)v27 + 8), *((_QWORD *)v27 + 9), 0, 0) )
        {
          v27 += 64;
          goto LABEL_25;
        }
        if ( (unsigned __int8)sub_2233DC0(v20, *((_QWORD *)v27 + 12), *((_QWORD *)v27 + 13), 0, 0) )
        {
          v27 += 96;
          goto LABEL_25;
        }
        v27 += 128;
      }
      while ( v31 != v27 );
      v30 = (v26 - v27) >> 5;
LABEL_54:
      if ( v30 == 2 )
        goto LABEL_65;
      if ( v30 != 3 )
      {
        if ( v30 == 1 )
          goto LABEL_57;
        goto LABEL_36;
      }
      if ( (unsigned __int8)sub_2233DC0(v20, *(_QWORD *)v27, *((_QWORD *)v27 + 1), 0, 0) )
        goto LABEL_25;
      v27 += 32;
LABEL_65:
      if ( (unsigned __int8)sub_2233DC0(v20, *(_QWORD *)v27, *((_QWORD *)v27 + 1), 0, 0) )
        goto LABEL_25;
      v27 += 32;
LABEL_57:
      if ( (unsigned __int8)sub_2233DC0(v20, *(_QWORD *)v27, *((_QWORD *)v27 + 1), 0, 0) )
      {
LABEL_25:
        if ( v27 == v26 )
          goto LABEL_36;
        v32 = *(_QWORD **)(v19 + 32);
        v52 = *(_QWORD **)(v19 + 40);
        if ( v52 == v32 )
          goto LABEL_36;
        v55 = v19;
        v56 = v20;
        while ( 1 )
        {
          v33 = (const void *)*v32;
          v34 = v32[1];
          v35 = sub_2244B30(*v32, v34);
          v36 = sub_2244CB0(a1, v33, v34, v35);
          v40 = v36;
          v41 = (__int64 *)(*(_QWORD *)a1 + 8LL * v36);
          if ( *v41 )
          {
            if ( *v41 != -8 )
            {
              v32 += 4;
              sub_A45C10(&v57, v41, 0);
              if ( v52 == v32 )
                goto LABEL_35;
              continue;
            }
            --*(_DWORD *)(a1 + 16);
          }
          v42 = sub_22300B0(v34 + 9, 8, v36, v37, v38, v39);
          v43 = (_QWORD *)v42;
          if ( v34 )
          {
            v51 = (_QWORD *)v42;
            memcpy((void *)(v42 + 8), v33, v34);
            v43 = v51;
          }
          *((_BYTE *)v43 + v34 + 8) = 0;
          v32 += 4;
          *v43 = v34;
          *v41 = (__int64)v43;
          ++*(_DWORD *)(a1 + 12);
          v44 = sub_22450D0(a1, v40);
          sub_A45C10(&v57, (__int64 *)(*(_QWORD *)a1 + 8LL * v44), 0);
          if ( v52 == v32 )
          {
LABEL_35:
            v19 = v55;
            v20 = v56;
            break;
          }
        }
      }
LABEL_36:
      sub_22339F0(v20);
      if ( src == v61 )
      {
        v19 += 56;
        if ( v53 == v19 )
          return a1;
      }
      else
      {
        operator delete(src);
        v19 += 56;
        if ( v53 == v19 )
          return a1;
      }
    }
    v23 = src;
    if ( src == v61 )
      goto LABEL_51;
LABEL_16:
    v24 = n;
    v25 = n + 1;
    if ( n + 1 > v61[0] )
      goto LABEL_52;
    goto LABEL_17;
  }
  return a1;
}
