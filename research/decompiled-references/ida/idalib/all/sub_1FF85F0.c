void __fastcall sub_1FF85F0(__int64 a1, _BYTE *a2, size_t a3, unsigned int a4)
{
  unsigned __int64 v8; // r14
  size_t v9; // rsi
  void *v10; // rax
  size_t v11; // rdx
  size_t v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // r8
  _QWORD *v17; // rax
  _BYTE *v18; // rdi
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  unsigned __int64 v21; // rsi
  void *v22; // rax
  size_t v23; // rdx
  size_t v24; // r14
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rax
  unsigned int v31; // r9d
  __int64 *v32; // r8
  __int64 v33; // rcx
  const void *v34; // rdi
  __m128i si128; // xmm0
  unsigned int v36; // eax
  size_t v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  unsigned int v40; // r9d
  __int64 *v41; // r8
  __int64 v42; // rcx
  const void *v43; // rdi
  __m128i v44; // xmm0
  unsigned int v45; // eax
  size_t v46; // rdx
  _BYTE *v47; // [rsp+0h] [rbp-98h] BYREF
  void *src; // [rsp+8h] [rbp-90h]
  void *v49; // [rsp+10h] [rbp-88h]
  __int64 *v50; // [rsp+18h] [rbp-80h]
  __int64 *v51; // [rsp+20h] [rbp-78h]
  __int64 v52; // [rsp+28h] [rbp-70h]
  void *v53; // [rsp+30h] [rbp-68h] BYREF
  size_t n; // [rsp+38h] [rbp-60h]
  _QWORD v55[2]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v56; // [rsp+50h] [rbp-48h]

  v53 = a2;
  v56 = 261;
  n = a3;
  if ( (unsigned __int8)sub_228B190(&v53, 0) )
    return;
  v8 = *(_QWORD *)(a1 + 8);
  if ( !v8 )
  {
    v53 = v55;
    sub_1FF59C0(&v53, a2, (__int64)&a2[a3]);
    v18 = *(_BYTE **)a1;
    if ( v53 == v55 )
    {
      v46 = n;
      if ( n )
      {
        if ( n == 1 )
          *v18 = v55[0];
        else
          memcpy(v18, v53, n);
        v46 = n;
        v18 = *(_BYTE **)a1;
      }
      *(_QWORD *)(a1 + 8) = v46;
      v18[v46] = 0;
      v18 = v53;
      goto LABEL_14;
    }
    if ( v18 == (_BYTE *)(a1 + 16) )
    {
      v47 = (_BYTE *)v55[0];
      *(_QWORD *)a1 = v53;
      *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v47);
    }
    else
    {
      v47 = (_BYTE *)v55[0];
      v19 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)a1 = v53;
      *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v47);
      if ( v18 )
      {
        v53 = v18;
        v55[0] = v19;
        goto LABEL_14;
      }
    }
    v18 = v55;
    v53 = v55;
LABEL_14:
    n = 0;
    *v18 = 0;
    if ( v53 != v55 )
      operator delete(v53);
    return;
  }
  if ( *(_DWORD *)(a1 + 44) )
  {
    src = (void *)a4;
    v47 = (_BYTE *)(a1 + 32);
    goto LABEL_5;
  }
  v20 = *(_BYTE **)a1;
  if ( v8 != a3 || (v37 = *(_QWORD *)(a1 + 8), v47 = *(_BYTE **)a1, v38 = memcmp(a2, v47, v37), v20 = v47, v38) )
  {
    v21 = v8 - a4;
    src = (void *)a4;
    if ( v21 > v8 )
      v21 = v8;
    v22 = (void *)sub_228AA60(v20, v21, 0);
    v24 = v23;
    v49 = v22;
    v47 = (_BYTE *)(a1 + 32);
    v25 = sub_2244B30(v22, v23);
    v26 = (unsigned int)sub_2244CB0(a1 + 32, v49, v24, v25);
    v28 = (__int64 *)(*(_QWORD *)(a1 + 32) + 8 * v26);
    if ( *v28 )
    {
      if ( *v28 != -8 )
      {
        sub_1FF85B0((__int64 **)&v53, v28, 0);
        v29 = v53;
LABEL_23:
        sub_9EE8A0(*v29 + 8LL, a1);
LABEL_5:
        v9 = a3 - (_QWORD)src;
        if ( a3 - (unsigned __int64)src > a3 )
          v9 = a3;
        v10 = (void *)sub_228AA60(a2, v9, 0);
        v12 = v11;
        src = v10;
        v13 = sub_2244B30(v10, v11);
        v14 = (unsigned int)sub_2244CB0(v47, src, v12, v13);
        v16 = (__int64 *)(*(_QWORD *)(a1 + 32) + 8 * v14);
        if ( *v16 )
        {
          if ( *v16 != -8 )
          {
            sub_1FF85B0((__int64 **)&v53, v16, 0);
            v17 = v53;
LABEL_28:
            sub_1FF85F0(*v17 + 8LL, a2, a3, a4 + (unsigned int)v12 + 1);
            return;
          }
          --*(_DWORD *)(a1 + 48);
        }
        v50 = v16;
        LODWORD(v49) = v14;
        v30 = sub_22300B0(v12 + 65, 8, v14, v15, v16, v14);
        v31 = (unsigned int)v49;
        v32 = v50;
        v33 = v30;
        if ( v12 )
        {
          v51 = (__int64 *)v30;
          memcpy((void *)(v30 + 64), src, v12);
          v33 = (__int64)v51;
          v32 = v50;
          v31 = (unsigned int)v49;
        }
        v34 = v47;
        *(_BYTE *)(v33 + v12 + 64) = 0;
        *(_OWORD *)(v33 + 24) = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
        *(_QWORD *)v33 = v12;
        *(_QWORD *)(v33 + 8) = v33 + 24;
        *(_QWORD *)(v33 + 16) = 0;
        *(_QWORD *)(v33 + 40) = 0;
        *(__m128i *)(v33 + 48) = si128;
        *v32 = v33;
        ++*(_DWORD *)(a1 + 44);
        v36 = sub_22450D0(v34, v31);
        sub_1FF85B0((__int64 **)&v53, (__int64 *)(*(_QWORD *)(a1 + 32) + 8LL * v36), 0);
        v17 = v53;
        goto LABEL_28;
      }
      --*(_DWORD *)(a1 + 48);
    }
    v51 = v28;
    LODWORD(v50) = v26;
    v39 = sub_22300B0(v24 + 65, 8, v26, v27, v28, v26);
    v40 = (unsigned int)v50;
    v41 = v51;
    v42 = v39;
    if ( v24 )
    {
      v52 = v39;
      memcpy((void *)(v39 + 64), v49, v24);
      v42 = v52;
      v41 = v51;
      v40 = (unsigned int)v50;
    }
    v43 = v47;
    *(_BYTE *)(v42 + v24 + 64) = 0;
    *(_OWORD *)(v42 + 24) = 0;
    v44 = _mm_load_si128((const __m128i *)&xmmword_23AAE90);
    *(_QWORD *)v42 = v24;
    *(_QWORD *)(v42 + 8) = v42 + 24;
    *(_QWORD *)(v42 + 16) = 0;
    *(_QWORD *)(v42 + 40) = 0;
    *(__m128i *)(v42 + 48) = v44;
    *v41 = v42;
    ++*(_DWORD *)(a1 + 44);
    v45 = sub_22450D0(v43, v40);
    sub_1FF85B0((__int64 **)&v53, (__int64 *)(*(_QWORD *)(a1 + 32) + 8LL * v45), 0);
    v29 = v53;
    goto LABEL_23;
  }
}
