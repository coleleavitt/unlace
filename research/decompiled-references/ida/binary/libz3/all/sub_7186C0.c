__m128i *__fastcall sub_7186C0(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rcx
  int v9; // esi
  __m128i *v10; // rax
  unsigned int v11; // r8d
  int v12; // r10d
  __int64 v13; // rcx
  __m128i *v14; // rbx
  __int64 v15; // r8
  __m128i *v16; // rdi
  __m128i *i; // rdx
  __int64 v18; // r9
  int v19; // edx
  __m128i v20; // xmm0
  __m128i *v21; // rdx
  __m128i *v22; // r8
  __int64 v23; // rcx
  __m128i *result; // rax
  bool v25; // zf
  __m128i *j; // rdx
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // r9d
  __m128i *v30; // rdx
  __m128i *v31; // r10
  __int64 v32; // r11
  const __m128i *v33; // r8
  __m128i *v34; // r11
  __int64 v35; // rdx
  __m128i *v36; // rsi
  __m128i *v37; // rdx
  __int32 v38; // r8d
  __m128i v39; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+18h] [rbp-B0h]
  const __m128i *v41; // [rsp+20h] [rbp-A8h]
  _OWORD *v42; // [rsp+28h] [rbp-A0h]
  __int64 v43; // [rsp+30h] [rbp-98h]
  __m128i *v44; // [rsp+38h] [rbp-90h]
  int v45; // [rsp+44h] [rbp-84h]
  __m128i *v46; // [rsp+48h] [rbp-80h]
  __int64 v47; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v48[2]; // [rsp+60h] [rbp-68h] BYREF
  __m128i v49; // [rsp+70h] [rbp-58h] BYREF
  __m128i v50[4]; // [rsp+80h] [rbp-48h] BYREF

  v40 = *(_QWORD *)(a1 + 16);
  sub_712560(v48, a1 + 144, "b");
  v4 = v48[0];
  v5 = v48[1];
  v47 = v48[0];
  if ( v48[0] )
    ++*(_DWORD *)(v48[0] + 8LL);
  sub_712A90((_QWORD *)(a1 + 384), &v47);
  v6 = sub_15E1B70(*(_QWORD *)(a1 + 16));
  v7 = v6;
  v39 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)a2);
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  if ( v6 != *(_QWORD *)(*(_QWORD *)(a1 + 104) + 856LL) )
    sub_E5EBF0(*(_QWORD *)(a1 + 120), v6);
  if ( v7 != *(_QWORD *)(*(_QWORD *)(a1 + 64) + 856LL) )
    sub_E5EBF0(*(_QWORD *)(a1 + 80), v7);
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  v50[0] = _mm_load_si128(&v39);
  sub_686B20(a1 + 184, v50);
  v8 = *(unsigned int *)(a1 + 216);
  v9 = *(_DWORD *)(a2 + 12);
  v10 = *(__m128i **)(a1 + 208);
  v11 = v8 - 1;
  v12 = *(_DWORD *)(a1 + 216);
  v13 = 16 * v8;
  v14 = (__m128i *)((char *)v10 + v13);
  v15 = 16LL * (v9 & v11);
  v16 = &v10[(unsigned __int64)v15 / 0x10];
  if ( v15 != v13 )
  {
    for ( i = &v10[(unsigned __int64)v15 / 0x10]; v14 != i; ++i )
    {
      v18 = i->m128i_i64[0];
      if ( i->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v18 + 12) == v9 && a2 == v18 )
          goto LABEL_30;
      }
      else if ( !v18 )
      {
        goto LABEL_18;
      }
    }
  }
  if ( v10 != v16 )
  {
    for ( j = *(__m128i **)(a1 + 208); v16 != j; ++j )
    {
      v27 = j->m128i_i64[0];
      if ( j->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v27 + 12) == v9 && a2 == v27 )
          goto LABEL_30;
      }
      else if ( !v27 )
      {
        break;
      }
    }
  }
LABEL_18:
  v19 = *(_DWORD *)(a1 + 224);
  ++*(_DWORD *)(a2 + 8);
  if ( 3 * v12 < (unsigned int)(4 * (*(_DWORD *)(a1 + 220) + v19)) )
  {
    LODWORD(v41) = 2 * v12;
    v39.m128i_i64[0] = 16LL * (unsigned int)(2 * v12);
    v10 = (__m128i *)sub_186B270(v39.m128i_u64[0]);
    v13 = v39.m128i_i64[0];
    v29 = (int)v41;
    v30 = v10;
    v31 = (__m128i *)((char *)v10 + v39.m128i_i64[0]);
    if ( (_DWORD)v41 )
    {
      if ( (v39.m128i_i8[0] & 0x10) == 0 || (v30 = v10 + 1, *v10 = 0, &v10[1] != v31) )
      {
        do
        {
          *v30 = 0;
          v30 += 2;
          v30[-1] = 0;
        }
        while ( v30 != v31 );
      }
    }
    v32 = *(unsigned int *)(a1 + 216);
    v33 = *(const __m128i **)(a1 + 208);
    v39.m128i_i32[0] = v29 - 1;
    v14 = v31;
    v34 = (__m128i *)&v33[v32];
    if ( v33 != v34 )
    {
      do
      {
        if ( v33->m128i_i64[0] > 1uLL )
        {
          v35 = 16LL * (unsigned int)(*(_DWORD *)(v33->m128i_i64[0] + 12) & v39.m128i_i32[0]);
          v36 = &v10[(unsigned __int64)v35 / 0x10];
          if ( v13 == v35 )
          {
LABEL_66:
            if ( v10 == v36 )
            {
LABEL_75:
              v46 = v31;
              v45 = v29;
              v44 = v34;
              v43 = v13;
              v42 = v10;
              v41 = v33;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v37 = v10;
            while ( v37->m128i_i64[0] )
            {
              if ( v36 == ++v37 )
                goto LABEL_75;
            }
          }
          else
          {
            v37 = &v10[(unsigned __int64)v35 / 0x10];
            while ( v37->m128i_i64[0] )
            {
              if ( v31 == ++v37 )
                goto LABEL_66;
            }
          }
          *v37 = _mm_loadu_si128(v33);
        }
        ++v33;
      }
      while ( v34 != v33 );
      v34 = *(__m128i **)(a1 + 208);
    }
    if ( v34 )
    {
      LODWORD(v43) = v29;
      v42 = (_OWORD *)v13;
      v41 = v10;
      sub_186B220(v34);
      v29 = v43;
      v13 = (__int64)v42;
      v10 = (__m128i *)v41;
    }
    v9 = *(_DWORD *)(a2 + 12);
    v38 = v39.m128i_i32[0];
    *(_QWORD *)(a1 + 208) = v10;
    *(_DWORD *)(a1 + 216) = v29;
    *(_DWORD *)(a1 + 224) = 0;
    v15 = 16LL * (v9 & (unsigned int)v38);
    v16 = &v10[(unsigned __int64)v15 / 0x10];
  }
  v20 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)(unsigned __int64)v4);
  if ( v15 != v13 )
  {
    v21 = v16;
    v22 = nullptr;
    while ( 1 )
    {
      v23 = v21->m128i_i64[0];
      if ( v21->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v23 + 12) == v9 && a2 == v23 )
        {
          *v21 = v20;
          goto LABEL_30;
        }
      }
      else
      {
        if ( !v23 )
        {
          if ( v22 )
            goto LABEL_28;
          v22 = v21;
          goto LABEL_29;
        }
        v22 = v21;
      }
      if ( ++v21 == v14 )
        goto LABEL_47;
    }
  }
  v22 = nullptr;
  while ( 1 )
  {
LABEL_47:
    if ( v10 == v16 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v28 = v10->m128i_i64[0];
    if ( v10->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v28 + 12) == v9 && a2 == v28 )
    {
      *v10 = v20;
      goto LABEL_30;
    }
LABEL_46:
    ++v10;
  }
  if ( v28 )
  {
    v22 = v10;
    goto LABEL_46;
  }
  if ( v22 )
LABEL_28:
    --*(_DWORD *)(a1 + 224);
  else
    v22 = v10;
LABEL_29:
  *v22 = v20;
  ++*(_DWORD *)(a1 + 220);
LABEL_30:
  v49.m128i_i64[0] = v4;
  v49.m128i_i64[1] = -1;
  result = sub_7183C0(a1 + 312, &v49);
  if ( v4 )
  {
    v25 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v25 )
      result = (__m128i *)sub_15D7BC0(v5, v4);
  }
  if ( v7 )
  {
    v25 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v25 )
      return (__m128i *)sub_15D7BC0(v40, v7);
  }
  return result;
}

