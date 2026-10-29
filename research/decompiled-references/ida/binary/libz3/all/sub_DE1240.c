__int64 __fastcall sub_DE1240(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 *v5; // rcx
  int v6; // edi
  unsigned int v7; // edx
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 *i; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  int v15; // edx
  int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  __m128i *v19; // rbx
  int v20; // r9d
  __int64 v21; // rcx
  __int64 *v22; // r13
  int v23; // esi
  __int64 v24; // r9
  __m128i *v25; // rdi
  __m128i *v26; // rax
  __int64 *v27; // rcx
  __int64 v28; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // ecx
  __m128i *v34; // rax
  int v35; // r10d
  __m128i *v36; // r8
  const __m128i *v37; // r15
  __m128i *v38; // r11
  __int64 v39; // rax
  __m128i *v40; // rdx
  __m128i *v41; // rax
  size_t v42; // [rsp+8h] [rbp-60h]
  int v43; // [rsp+8h] [rbp-60h]
  int v44; // [rsp+10h] [rbp-58h]
  size_t v45; // [rsp+10h] [rbp-58h]
  int v46; // [rsp+18h] [rbp-50h]

  v4 = *(unsigned int *)(a1 + 40);
  v5 = *(__int64 **)(a1 + 32);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = v4 - 1;
  v4 *= 16;
  v8 = (__int64 *)((char *)v5 + v4);
  v9 = 16LL * (v6 & v7);
  v10 = &v5[(unsigned __int64)v9 / 8];
  if ( v9 != v4 )
  {
    for ( i = &v5[(unsigned __int64)v9 / 8]; v8 != i; i += 2 )
    {
      v12 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v12 + 12) == v6 && a2 == v12 )
          return i[1];
      }
      else if ( !v12 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v10 != v5; v5 += 2 )
  {
    v30 = *v5;
    if ( (unsigned __int64)*v5 > 1 )
    {
      if ( *(_DWORD *)(v30 + 12) == v6 && a2 == v30 )
      {
        i = v5;
        return i[1];
      }
    }
    else if ( !v30 )
    {
      break;
    }
  }
LABEL_8:
  v13 = sub_17E9C90(*(_QWORD *)(a1 + 8), 40);
  v14 = *(_QWORD *)(a1 + 24);
  if ( v14 && (v15 = *(_DWORD *)(v14 - 4)) != 0 )
  {
    v32 = (unsigned int)(v15 - 1);
    v33 = *(_DWORD *)(v14 + 4 * v32);
    *(_DWORD *)(v14 - 4) = v32;
    *(_DWORD *)(v13 + 8) = v33;
  }
  else
  {
    v16 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v16 + 1;
    *(_DWORD *)(v13 + 8) = v16;
  }
  *(_QWORD *)(v13 + 12) = 0;
  v17 = *(_DWORD *)(a1 + 40);
  *(_QWORD *)v13 = off_1C5AA70;
  v18 = *(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 48);
  *(_QWORD *)(v13 + 24) = 0;
  *(_QWORD *)(v13 + 32) = a2;
  ++*(_DWORD *)(a2 + 8);
  if ( 3 * v17 < 4 * v18 )
  {
    v44 = 2 * v17;
    v42 = 32LL * v17;
    v34 = (__m128i *)sub_186B270(v42);
    v21 = v42;
    v35 = v44;
    v19 = v34;
    v36 = &v34[v42 / 0x10];
    if ( v44 )
    {
      if ( (v42 & 0x10) == 0 || (*v34 = 0, ++v34, v34 != v36) )
      {
        do
        {
          *v34 = 0;
          v34 += 2;
          v34[-1] = 0;
        }
        while ( v34 != v36 );
      }
    }
    v37 = *(const __m128i **)(a1 + 32);
    v20 = v44 - 1;
    v22 = (__int64 *)v36;
    v38 = (__m128i *)&v37[*(unsigned int *)(a1 + 40)];
    if ( v37 != v38 )
    {
      do
      {
        if ( v37->m128i_i64[0] > 1uLL )
        {
          v39 = 16LL * (*(_DWORD *)(v37->m128i_i64[0] + 12) & (unsigned int)v20);
          v40 = &v19[(unsigned __int64)v39 / 0x10];
          if ( v42 == v39 )
          {
LABEL_54:
            if ( v19 == v40 )
            {
LABEL_66:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v41 = v19;
            while ( v41->m128i_i64[0] )
            {
              if ( v40 == ++v41 )
                goto LABEL_66;
            }
          }
          else
          {
            v41 = &v19[(unsigned __int64)v39 / 0x10];
            while ( v41->m128i_i64[0] )
            {
              if ( v36 == ++v41 )
                goto LABEL_54;
            }
          }
          *v41 = _mm_loadu_si128(v37);
        }
        ++v37;
      }
      while ( v38 != v37 );
      v38 = *(__m128i **)(a1 + 32);
    }
    if ( v38 )
    {
      v46 = v44;
      v45 = v42;
      v43 = v35 - 1;
      sub_186B220(v38);
      v35 = v46;
      v21 = v45;
      v20 = v43;
    }
    *(_QWORD *)(a1 + 32) = v19;
    *(_DWORD *)(a1 + 40) = v35;
    *(_DWORD *)(a1 + 48) = 0;
  }
  else
  {
    v19 = *(__m128i **)(a1 + 32);
    v20 = v17 - 1;
    v21 = 16LL * v17;
    v22 = (__int64 *)((char *)v19->m128i_i64 + v21);
  }
  v23 = *(_DWORD *)(a2 + 12);
  v24 = 16LL * (v23 & (unsigned int)v20);
  v25 = &v19[(unsigned __int64)v24 / 0x10];
  if ( v24 != v21 )
  {
    v26 = &v19[(unsigned __int64)v24 / 0x10];
    v27 = nullptr;
    while ( 1 )
    {
      v28 = v26->m128i_i64[0];
      if ( v26->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v28 + 12) == v23 && a2 == v28 )
        {
          v26->m128i_i64[0] = a2;
          v26->m128i_i64[1] = v13;
          return v13;
        }
      }
      else
      {
        if ( !v28 )
        {
          if ( v27 )
            goto LABEL_64;
          v27 = (__int64 *)v26;
          goto LABEL_65;
        }
        v27 = (__int64 *)v26;
      }
      if ( ++v26 == (__m128i *)v22 )
        goto LABEL_35;
    }
  }
  v27 = nullptr;
  while ( 1 )
  {
LABEL_35:
    if ( v25 == v19 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v31 = v19->m128i_i64[0];
    if ( v19->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v31 + 12) == v23 && a2 == v31 )
    {
      v19->m128i_i64[0] = a2;
      v19->m128i_i64[1] = v13;
      return v13;
    }
LABEL_34:
    ++v19;
  }
  if ( v31 )
  {
    v27 = (__int64 *)v19;
    goto LABEL_34;
  }
  if ( v27 )
LABEL_64:
    --*(_DWORD *)(a1 + 48);
  else
    v27 = (__int64 *)v19;
LABEL_65:
  *v27 = a2;
  v27[1] = v13;
  ++*(_DWORD *)(a1 + 44);
  return v13;
}

