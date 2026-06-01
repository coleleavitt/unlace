__int64 __fastcall sub_2945C0(_QWORD *a1, unsigned __int32 a2, char a3)
{
  __m128i **v3; // r14
  __int64 v7; // rax
  const __m128i *v8; // rdx
  int v9; // ecx
  __int64 v10; // rcx
  const __m128i *v11; // rsi
  __int64 v12; // rcx
  const __m128i *v13; // rdi
  const __m128i *v14; // rax
  __int32 v15; // ecx
  _QWORD *v16; // r8
  __int32 v18; // eax
  _QWORD *v19; // rax
  __int64 v20; // r15
  _QWORD *v21; // r8
  __m128i *v22; // r13
  unsigned int v23; // r9d
  __int64 v24; // r15
  __int64 v25; // rdx
  __m128i *v26; // rsi
  __m128i *v27; // rax
  __m128i *v28; // rcx
  int v29; // edx
  __int32 v30; // eax
  __int64 v31; // rdi
  __m128i *v32; // rax
  int v33; // r11d
  __m128i *v34; // rdx
  const __m128i *v35; // rcx
  __m128i *v36; // r10
  __int64 v37; // rax
  __m128i *v38; // rdx
  __m128i *v39; // rax
  __int64 v40; // [rsp+0h] [rbp-78h]
  _QWORD *v41; // [rsp+0h] [rbp-78h]
  size_t v42; // [rsp+8h] [rbp-70h]
  unsigned int v43; // [rsp+8h] [rbp-70h]
  _QWORD *v44; // [rsp+10h] [rbp-68h]
  _QWORD *v45; // [rsp+18h] [rbp-60h]
  int v46; // [rsp+18h] [rbp-60h]
  int v47; // [rsp+30h] [rbp-48h] BYREF
  char v48; // [rsp+34h] [rbp-44h]
  __int64 v49; // [rsp+38h] [rbp-40h]

  v3 = (__m128i **)(a1 + 1);
  if ( a3 )
    v3 = (__m128i **)(a1 + 4);
  v7 = *((unsigned int *)v3 + 2);
  v8 = *v3;
  v9 = v7 - 1;
  v7 *= 24;
  v10 = 3LL * (a2 & v9);
  v11 = (__m128i *)((char *)*v3 + v7);
  v12 = 8 * v10;
  v13 = (__m128i *)((char *)*v3 + v12);
  if ( v12 != v7 )
  {
    v14 = (__m128i *)((char *)*v3 + v12);
    do
    {
      v15 = v14->m128i_i32[1];
      if ( v15 == 2 )
      {
        if ( a2 == v14->m128i_i32[0] && a2 == v14->m128i_i32[2] )
          goto LABEL_10;
      }
      else if ( !v15 )
      {
        goto LABEL_25;
      }
      v14 = (const __m128i *)((char *)v14 + 24);
    }
    while ( v11 != v14 );
  }
  while ( v13 != v8 )
  {
    v18 = v8->m128i_i32[1];
    if ( v18 == 2 )
    {
      if ( a2 == v8->m128i_i32[0] && a2 == v8->m128i_i32[2] )
      {
        v14 = v8;
LABEL_10:
        if ( v14 != v11 )
        {
          while ( v14->m128i_i32[1] != 2 )
          {
            v14 = (const __m128i *)((char *)v14 + 24);
            if ( v11 == v14 )
              goto LABEL_25;
          }
          if ( v14 != v11 )
            return v14[1].m128i_i64[0];
        }
        break;
      }
    }
    else if ( !v18 )
    {
      break;
    }
    v8 = (const __m128i *)((char *)v8 + 24);
  }
LABEL_25:
  v19 = (_QWORD *)sub_186B270(0x10u);
  v20 = *((unsigned int *)v3 + 2);
  *v19 = 0;
  v21 = v19;
  v19[1] = 0;
  if ( 3 * (int)v20 < (unsigned int)(4 * (*((_DWORD *)v3 + 3) + *((_DWORD *)v3 + 4))) )
  {
    v45 = v19;
    v42 = 24LL * (unsigned int)(2 * v20);
    v40 = v42;
    v32 = (__m128i *)sub_186B270(v42);
    v33 = 2 * v20;
    v21 = v45;
    v22 = v32;
    if ( 2 * (_DWORD)v20 )
    {
      v34 = &v32[3 * (v20 & 0x7FFFFFFF)];
      do
      {
        v32->m128i_i64[0] = 0;
        v32 += 3;
        v32[-2].m128i_i64[1] = 0;
      }
      while ( v34 != v32 );
    }
    v35 = *v3;
    v23 = v33 - 1;
    v36 = (__m128i *)((char *)*v3 + 24 * *((unsigned int *)v3 + 2));
    v24 = (__int64)&v22->m128i_i64[v42 / 8];
    if ( *v3 != v36 )
    {
      do
      {
        if ( v35->m128i_i32[1] == 2 )
        {
          v37 = 24LL * (v35->m128i_i32[0] & v23);
          v38 = (__m128i *)((char *)v22 + v37);
          if ( v42 == v37 )
          {
LABEL_67:
            if ( v22 == v38 )
            {
LABEL_74:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v39 = v22;
            while ( v39->m128i_i32[1] )
            {
              v39 = (__m128i *)((char *)v39 + 24);
              if ( v38 == v39 )
                goto LABEL_74;
            }
          }
          else
          {
            v39 = (__m128i *)((char *)v22 + v37);
            while ( v39->m128i_i32[1] )
            {
              v39 = (__m128i *)((char *)v39 + 24);
              if ( (__m128i *)v24 == v39 )
                goto LABEL_67;
            }
          }
          *v39 = _mm_loadu_si128(v35);
          v39[1].m128i_i64[0] = v35[1].m128i_i64[0];
        }
        v35 = (const __m128i *)((char *)v35 + 24);
      }
      while ( v36 != v35 );
      v36 = *v3;
    }
    if ( v36 )
    {
      v46 = v33;
      v44 = v21;
      v43 = v33 - 1;
      sub_186B220(v36);
      v33 = v46;
      v21 = v44;
      v23 = v43;
    }
    *v3 = v22;
    *((_DWORD *)v3 + 2) = v33;
    *((_DWORD *)v3 + 4) = 0;
  }
  else
  {
    v22 = *v3;
    v23 = v20 - 1;
    v40 = 24 * v20;
    v24 = (__int64)&(*v3)->m128i_i64[3 * v20];
  }
  v25 = a2 & v23;
  v26 = (__m128i *)((char *)v22 + 24 * v25);
  if ( 24 * v25 != v40 )
  {
    v27 = (__m128i *)((char *)v22 + 24 * v25);
    v28 = nullptr;
    while ( 1 )
    {
      v29 = v27->m128i_i32[1];
      if ( v29 == 2 )
      {
        if ( a2 == v27->m128i_i32[0] && a2 == v27->m128i_i32[2] )
        {
          v27->m128i_i32[2] = a2;
          v27[1].m128i_i64[0] = (__int64)v21;
          v27->m128i_i32[1] = 2;
          goto LABEL_47;
        }
      }
      else
      {
        if ( !v29 )
        {
          if ( v28 )
            goto LABEL_45;
          v28 = v27;
          goto LABEL_46;
        }
        v28 = v27;
      }
      v27 = (__m128i *)((char *)v27 + 24);
      if ( v27 == (__m128i *)v24 )
        goto LABEL_39;
    }
  }
  v28 = nullptr;
  while ( 1 )
  {
LABEL_39:
    if ( v26 == v22 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v30 = v22->m128i_i32[1];
    if ( v30 != 2 )
      break;
    if ( a2 == v22->m128i_i32[0] && a2 == v22->m128i_i32[2] )
    {
      v22->m128i_i32[2] = a2;
      v22[1].m128i_i64[0] = (__int64)v21;
      v22->m128i_i32[1] = 2;
      goto LABEL_47;
    }
LABEL_38:
    v22 = (__m128i *)((char *)v22 + 24);
  }
  if ( v30 )
  {
    v28 = v22;
    goto LABEL_38;
  }
  if ( v28 )
LABEL_45:
    --*((_DWORD *)v3 + 4);
  else
    v28 = v22;
LABEL_46:
  v28->m128i_i32[2] = a2;
  v28[1].m128i_i64[0] = (__int64)v21;
  v28->m128i_i32[1] = 2;
  v28->m128i_i32[0] = a2;
  ++*((_DWORD *)v3 + 3);
LABEL_47:
  v31 = *a1;
  v48 &= 0xFCu;
  v41 = v21;
  v47 = 2;
  v49 = 0;
  sub_18393F0(v31, &v47, a2, v21);
  v16 = v41;
  if ( a3 )
  {
    sub_1839100(*a1, v41);
    return (__int64)v41;
  }
  return (__int64)v16;
}

