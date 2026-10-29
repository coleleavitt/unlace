__m128i *__fastcall sub_DF7FD0(__int64 a1, void (***a2)())
{
  __int64 (__fastcall *v4)(__int64); // rax
  unsigned __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // ecx
  void (***v15)(); // rbx
  void (**v16)(); // rax
  void (*v17)(); // rdx
  void (*v18)(); // rax
  __m128i *v19; // rbx
  unsigned int v20; // r10d
  __int64 v21; // rcx
  __m128i *v22; // r14
  unsigned __int64 v23; // rsi
  __int64 v24; // r10
  __m128i *v25; // rdi
  __m128i *result; // rax
  __m128i *v27; // rcx
  int v28; // edx
  int v29; // eax
  __m128i *v30; // rax
  int v31; // r8d
  __m128i *v32; // rdx
  const __m128i *v33; // r15
  __m128i *v34; // r11
  __int64 v35; // rax
  __m128i *v36; // rdx
  __m128i *v37; // rax
  __m128i v38; // xmm0
  size_t v39; // [rsp+10h] [rbp-58h]
  int v40; // [rsp+18h] [rbp-50h]

  v4 = (__int64 (__fastcall *)(__int64))(*a2)[4];
  if ( v4 == sub_2D03A0 )
    v5 = (unsigned __int64)a2[1];
  else
    v5 = v4((__int64)a2);
  v6 = *(_QWORD *)(a1 + 512);
  v7 = *(unsigned int *)(a1 + 520);
  if ( v5 )
  {
    if ( (v5 & 7) == 1 )
      v8 = v5 >> 3;
    else
      LODWORD(v8) = *(_DWORD *)(v5 - 8);
  }
  else
  {
    LODWORD(v8) = -1640531495;
  }
  v9 = 24LL * ((unsigned int)v8 & ((_DWORD)v7 - 1));
  v10 = 24LL * (unsigned int)v7;
  v11 = v6 + v9;
  v12 = v6 + v10;
  if ( v9 != v10 )
  {
    v13 = v6 + v9;
    do
    {
      v14 = *(_DWORD *)(v13 + 4);
      if ( v14 == 2 )
      {
        if ( (_DWORD)v8 == *(_DWORD *)v13 && *(_QWORD *)(v13 + 8) == v5 )
          goto LABEL_13;
      }
      else if ( !v14 )
      {
        goto LABEL_19;
      }
      v13 += 24;
    }
    while ( v12 != v13 );
  }
  for ( ; v11 != v6; v6 += 24 )
  {
    v29 = *(_DWORD *)(v6 + 4);
    if ( v29 == 2 )
    {
      if ( (_DWORD)v8 == *(_DWORD *)v6 && *(_QWORD *)(v6 + 8) == v5 )
      {
        v13 = v6;
LABEL_13:
        v15 = *(void (****)())(v13 + 16);
        if ( v15 != a2 )
        {
          v16 = *v15;
          v17 = (*v15)[3];
          if ( v17 != nullsub_127 )
          {
            v12 = a1;
            ((void (__fastcall *)(void (***)(), __int64))v17)(v15, a1);
            v16 = *v15;
          }
          v18 = *v16;
          if ( v18 != nullsub_131 )
            ((void (__fastcall *)(void (***)(), __int64))v18)(v15, v12);
          sub_186B220(v15);
          v7 = *(unsigned int *)(a1 + 520);
        }
        break;
      }
    }
    else if ( !v29 )
    {
      break;
    }
  }
LABEL_19:
  if ( 3 * (int)v7 < (unsigned int)(4 * (*(_DWORD *)(a1 + 524) + *(_DWORD *)(a1 + 528))) )
  {
    v40 = 2 * v7;
    v39 = 24LL * (unsigned int)(2 * v7);
    v30 = (__m128i *)sub_186B270(v39);
    v31 = v40;
    v21 = v39;
    v19 = v30;
    v32 = (__m128i *)((char *)v30 + v39);
    if ( v40 )
    {
      do
      {
        v30->m128i_i64[0] = 0;
        v30 = (__m128i *)((char *)v30 + 24);
        v30[-1].m128i_i64[0] = 0;
      }
      while ( v30 != v32 );
    }
    v33 = *(const __m128i **)(a1 + 512);
    v20 = v40 - 1;
    v22 = (__m128i *)((char *)v19 + v39);
    v34 = (__m128i *)((char *)v33 + 24 * *(unsigned int *)(a1 + 520));
    if ( v33 != v34 )
    {
      do
      {
        while ( v33->m128i_i32[1] != 2 )
        {
          v33 = (const __m128i *)((char *)v33 + 24);
          if ( v34 == v33 )
            goto LABEL_64;
        }
        v35 = 24LL * (v33->m128i_i32[0] & v20);
        v36 = (__m128i *)((char *)v19 + v35);
        if ( v35 == v39 )
        {
LABEL_70:
          if ( v36 == v19 )
          {
LABEL_78:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v37 = v19;
          while ( v37->m128i_i32[1] )
          {
            v37 = (__m128i *)((char *)v37 + 24);
            if ( v36 == v37 )
              goto LABEL_78;
          }
        }
        else
        {
          v37 = (__m128i *)((char *)v19 + v35);
          while ( v37->m128i_i32[1] )
          {
            v37 = (__m128i *)((char *)v37 + 24);
            if ( v22 == v37 )
              goto LABEL_70;
          }
        }
        v38 = _mm_loadu_si128(v33);
        v33 = (const __m128i *)((char *)v33 + 24);
        *v37 = v38;
        v37[1].m128i_i64[0] = v33[-1].m128i_i64[1];
      }
      while ( v34 != v33 );
LABEL_64:
      v34 = *(__m128i **)(a1 + 512);
    }
    if ( v34 )
    {
      sub_186B220(v34);
      v31 = v40;
      v21 = v39;
      v20 = v40 - 1;
    }
    *(_QWORD *)(a1 + 512) = v19;
    *(_DWORD *)(a1 + 520) = v31;
    *(_DWORD *)(a1 + 528) = 0;
    if ( v5 )
      goto LABEL_21;
  }
  else
  {
    v19 = *(__m128i **)(a1 + 512);
    v20 = v7 - 1;
    v21 = 24 * v7;
    v22 = (__m128i *)((char *)v19 + 24 * v7);
    if ( v5 )
    {
LABEL_21:
      if ( (v5 & 7) == 1 )
        v23 = v5 >> 3;
      else
        LODWORD(v23) = *(_DWORD *)(v5 - 8);
      goto LABEL_23;
    }
  }
  LODWORD(v23) = -1640531495;
LABEL_23:
  v24 = (unsigned int)v23 & v20;
  v25 = (__m128i *)((char *)v19 + 24 * v24);
  if ( 24 * v24 != v21 )
  {
    result = (__m128i *)((char *)v19 + 24 * v24);
    v27 = nullptr;
    while ( 1 )
    {
      v28 = result->m128i_i32[1];
      if ( v28 == 2 )
      {
        if ( (_DWORD)v23 == result->m128i_i32[0] && result->m128i_i64[1] == v5 )
        {
          result->m128i_i64[1] = v5;
          result[1].m128i_i64[0] = (__int64)a2;
          result->m128i_i32[1] = 2;
          return result;
        }
      }
      else
      {
        if ( !v28 )
        {
          if ( v27 )
            goto LABEL_51;
          v27 = result;
          goto LABEL_52;
        }
        v27 = result;
      }
      result = (__m128i *)((char *)result + 24);
      if ( result == v22 )
        goto LABEL_36;
    }
  }
  v27 = nullptr;
  while ( 1 )
  {
LABEL_36:
    if ( v25 == v19 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v19->m128i_u32[1];
    if ( (_DWORD)result != 2 )
      break;
    if ( (_DWORD)v23 == v19->m128i_i32[0] && v19->m128i_i64[1] == v5 )
    {
      v19->m128i_i64[1] = v5;
      v19[1].m128i_i64[0] = (__int64)a2;
      v19->m128i_i32[1] = 2;
      return result;
    }
LABEL_35:
    v19 = (__m128i *)((char *)v19 + 24);
  }
  if ( (_DWORD)result )
  {
    v27 = v19;
    goto LABEL_35;
  }
  if ( v27 )
LABEL_51:
    --*(_DWORD *)(a1 + 528);
  else
    v27 = v19;
LABEL_52:
  v27->m128i_i64[1] = v5;
  v27[1].m128i_i64[0] = (__int64)a2;
  v27->m128i_i32[1] = 2;
  v27->m128i_i32[0] = v23;
  ++*(_DWORD *)(a1 + 524);
  return result;
}

