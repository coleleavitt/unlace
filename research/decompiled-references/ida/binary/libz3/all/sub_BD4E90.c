__int64 __fastcall sub_BD4E90(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int v6; // ecx
  unsigned int v7; // r8d
  __m128i *v8; // r15
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __m128i *v13; // rsi
  __m128i *v14; // rbp
  __int64 *i; // rax
  _DWORD *v16; // rdx
  __m128i *v17; // rax
  __m128i *v18; // rcx
  _DWORD *v19; // rdx
  __m128i *j; // rax
  _DWORD *v22; // rdx
  _DWORD *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // r12
  unsigned int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rax
  unsigned int v30; // r9d
  int v31; // r10d
  _DWORD *v32; // rax
  __int64 *v33; // rax
  const __m128i *v34; // rax
  __m128i *v35; // r11
  __int64 v36; // rdx
  __m128i *v37; // rsi
  __m128i *v38; // rdx
  size_t v39; // [rsp+8h] [rbp-70h]
  size_t v40; // [rsp+10h] [rbp-68h]
  unsigned int v41; // [rsp+10h] [rbp-68h]
  unsigned int v42; // [rsp+18h] [rbp-60h]
  int v43; // [rsp+18h] [rbp-60h]
  unsigned int *v44; // [rsp+38h] [rbp-40h] BYREF

  v6 = a2[3];
  v7 = *(_DWORD *)(a1 + 576);
  v8 = *(__m128i **)(a1 + 568);
  v9 = (a3[3] - v6) ^ (v6 << 8);
  v10 = ((v9 ^ ((v6 - v9) << 16)) + v9 - v6) ^ ((v6 - v9) << 10);
  v11 = 24LL * (v10 & (v7 - 1));
  v12 = 24LL * v7;
  v13 = (__m128i *)((char *)v8 + v11);
  v14 = (__m128i *)((char *)v8 + v12);
  if ( v11 != v12 )
  {
    for ( i = &v8->m128i_i64[(unsigned __int64)v11 / 8]; v14 != (__m128i *)i; i += 3 )
    {
      v16 = (_DWORD *)*i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *((_DWORD *)i + 5) == v10 && a2 == v16 && a3 == (_DWORD *)i[1] )
          return 0;
      }
      else if ( !v16 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v8 != v13 )
  {
    for ( j = v8; v13 != j; j = (__m128i *)((char *)j + 24) )
    {
      v22 = (_DWORD *)j->m128i_i64[0];
      if ( j->m128i_i64[0] > 1uLL )
      {
        if ( j[1].m128i_i32[1] == v10 && a2 == v22 && a3 == (_DWORD *)j->m128i_i64[1] )
          return 0;
      }
      else if ( !v22 )
      {
        break;
      }
    }
  }
LABEL_8:
  if ( 3 * v7 < 4 * (*(_DWORD *)(a1 + 580) + *(_DWORD *)(a1 + 584)) )
  {
    v42 = 2 * v7;
    v40 = 48LL * v7;
    v39 = v40;
    v29 = sub_186B270(v40);
    v30 = v42;
    v12 = v40;
    v8 = (__m128i *)v29;
    if ( v42 )
    {
      v31 = v42 - 1;
      if ( v42 - 1 <= 2 )
      {
        *(_DWORD *)(v29 + 20) = 0;
        *(_DWORD *)(v29 + 44) = 0;
        *(_OWORD *)v29 = 0;
        *(_OWORD *)(v29 + 24) = 0;
      }
      else
      {
        v32 = (_DWORD *)(v29 + 20);
        do
        {
          *v32 = 0;
          v32 += 24;
          *(_OWORD *)(v32 - 29) = 0;
          *(_OWORD *)(v32 - 23) = 0;
          *(_OWORD *)(v32 - 17) = 0;
          *(_OWORD *)(v32 - 11) = 0;
          *(v32 - 18) = 0;
          *(v32 - 12) = 0;
          *(v32 - 6) = 0;
        }
        while ( (_DWORD *)((char *)v8[6 * (v42 >> 2) + 1].m128i_i64 + 4) != v32 );
        v33 = &v8->m128i_i64[3 * (v42 & 0xFFFFFFFC)];
        if ( (v42 & 2) != 0 )
        {
          *((_DWORD *)v33 + 5) = 0;
          *((_DWORD *)v33 + 11) = 0;
          *(_OWORD *)v33 = 0;
          *(_OWORD *)(v33 + 3) = 0;
          if ( (v42 & 2) != 2 )
          {
            v33[8] = 0;
            *((_OWORD *)v33 + 3) = 0;
          }
        }
      }
    }
    else
    {
      v31 = -1;
    }
    v34 = *(const __m128i **)(a1 + 568);
    v14 = &v8[v40 / 0x10];
    v35 = (__m128i *)((char *)v34 + 24 * *(unsigned int *)(a1 + 576));
    if ( v34 != v35 )
    {
      do
      {
        if ( v34->m128i_i64[0] > 1uLL )
        {
          v36 = 24LL * (v34[1].m128i_i32[1] & (unsigned int)v31);
          v37 = (__m128i *)((char *)v8 + v36);
          if ( v36 == v40 )
          {
LABEL_63:
            if ( v37 == v8 )
            {
LABEL_76:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v38 = v8;
            while ( v38->m128i_i64[0] )
            {
              v38 = (__m128i *)((char *)v38 + 24);
              if ( v37 == v38 )
                goto LABEL_76;
            }
          }
          else
          {
            v38 = (__m128i *)((char *)v8 + v36);
            while ( v38->m128i_i64[0] )
            {
              v38 = (__m128i *)((char *)v38 + 24);
              if ( v14 == v38 )
                goto LABEL_63;
            }
          }
          *v38 = _mm_loadu_si128(v34);
          v38[1].m128i_i64[0] = v34[1].m128i_i64[0];
        }
        v34 = (const __m128i *)((char *)v34 + 24);
      }
      while ( v35 != v34 );
      v35 = *(__m128i **)(a1 + 568);
    }
    if ( v35 )
    {
      v43 = v31;
      v41 = v30;
      sub_186B220(v35);
      v31 = v43;
      v30 = v41;
      v12 = v39;
    }
    *(_QWORD *)(a1 + 568) = v8;
    *(_DWORD *)(a1 + 576) = v30;
    *(_DWORD *)(a1 + 584) = 0;
    v11 = 24LL * (v10 & (unsigned int)v31);
    v13 = (__m128i *)((char *)v8 + v11);
  }
  if ( v12 != v11 )
  {
    v17 = v13;
    v18 = nullptr;
    while ( 1 )
    {
      v19 = (_DWORD *)v17->m128i_i64[0];
      if ( v17->m128i_i64[0] > 1uLL )
      {
        if ( v17[1].m128i_i32[1] == v10 && a2 == v19 && a3 == (_DWORD *)v17->m128i_i64[1] )
        {
          v17->m128i_i64[0] = (__int64)a2;
          v17->m128i_i64[1] = (__int64)a3;
          v17[1].m128i_i8[0] = 1;
          v17[1].m128i_i32[1] = v10;
          goto LABEL_38;
        }
      }
      else
      {
        if ( !v19 )
        {
          if ( v18 )
            goto LABEL_74;
          v18 = v17;
          goto LABEL_75;
        }
        v18 = v17;
      }
      v17 = (__m128i *)((char *)v17 + 24);
      if ( v14 == v17 )
        goto LABEL_32;
    }
  }
  v18 = nullptr;
  while ( 1 )
  {
LABEL_32:
    if ( v13 == v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v23 = (_DWORD *)v8->m128i_i64[0];
    if ( v8->m128i_i64[0] <= 1uLL )
      break;
    if ( v8[1].m128i_i32[1] == v10 && a2 == v23 && a3 == (_DWORD *)v8->m128i_i64[1] )
    {
      v8->m128i_i64[0] = (__int64)a2;
      v8->m128i_i64[1] = (__int64)a3;
      v8[1].m128i_i8[0] = 1;
      v8[1].m128i_i32[1] = v10;
      goto LABEL_38;
    }
LABEL_31:
    v8 = (__m128i *)((char *)v8 + 24);
  }
  if ( v23 )
  {
    v18 = v8;
    goto LABEL_31;
  }
  if ( v18 )
LABEL_74:
    --*(_DWORD *)(a1 + 584);
  else
    v18 = v8;
LABEL_75:
  v18->m128i_i64[0] = (__int64)a2;
  v18->m128i_i64[1] = (__int64)a3;
  v18[1].m128i_i8[0] = 1;
  v18[1].m128i_i32[1] = v10;
  ++*(_DWORD *)(a1 + 580);
LABEL_38:
  v24 = sub_966380(a1, a2, a3);
  v25 = *(_QWORD *)(a1 + 24);
  v26 = v24;
  if ( *(_QWORD *)(v25 + 912) )
  {
    v27 = sub_186B270(0x10u);
    *(_DWORD *)(v27 + 8) = v26;
    v44 = (unsigned int *)(v27 + 8);
    *(_QWORD *)v27 = 0x100000002LL;
    sub_966E60(a1, &v44);
    if ( v44 )
      sub_186B220(v44 - 2);
  }
  v28 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v28 + 7488) + 48LL))(
    *(_QWORD *)(v28 + 7488),
    *(_QWORD *)(*(_QWORD *)(v28 + 8840) + 8LL * (v26 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v28 + 7488) + 64LL))(*(_QWORD *)(v28 + 7488));
  sub_BDD600(a1, v26);
  if ( *(_QWORD *)(v25 + 912) )
    std::__ostream_insert<char,std::char_traits<char>>();
  return 1;
}

