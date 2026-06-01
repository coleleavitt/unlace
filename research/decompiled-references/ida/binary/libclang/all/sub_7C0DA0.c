unsigned __int64 __fastcall sub_7C0DA0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  bool v8; // dl
  unsigned __int64 v9; // rcx
  __int64 v10; // r14
  unsigned int v11; // edi
  int v12; // r15d
  __int64 v13; // r9
  int v14; // esi
  __int64 v15; // r10
  unsigned __int64 v16; // rax
  unsigned int i; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 *v23; // rbx
  __int64 *v24; // r12
  __int64 v25; // rdi
  int v26; // esi
  int v27; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rcx
  const __m128i *v31; // r14
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rdx
  __m128i *v36; // rax
  unsigned __int64 v37; // [rsp+8h] [rbp-70h]
  __int64 v38; // [rsp+18h] [rbp-60h] BYREF
  __int64 v39; // [rsp+20h] [rbp-58h] BYREF
  _BOOL4 v40; // [rsp+28h] [rbp-50h]
  unsigned __int64 v41; // [rsp+30h] [rbp-48h]

  result = *(_QWORD *)(a1 + 104);
  if ( !result )
  {
    sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    result = *(_QWORD *)(a1 + 104);
  }
  if ( result <= 7 )
    return result;
  result &= 0xFFFFFFFFFFFFFFF8LL;
  v4 = *(_QWORD *)result;
  if ( !*(_QWORD *)result )
    return result;
  v5 = sub_79C190(v4 + 48);
  if ( !v5 )
    goto LABEL_21;
  while ( (*(_BYTE *)(v5 + 28) & 0x7F) != 0x49 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    v5 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v6 <= 7 )
      goto LABEL_21;
  }
LABEL_9:
  v7 = *(_QWORD *)(v5 + 40);
  v8 = (*(_BYTE *)(v5 + 73) & 0x40) != 0;
  if ( (v7 & 7) != 0 )
  {
    v10 = 0;
    LODWORD(v9) = 0;
  }
  else
  {
    v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    v10 = v9;
  }
  v11 = *(_DWORD *)(a2 + 16);
  v12 = v8;
  v39 = v10;
  v40 = v8;
  LODWORD(v41) = 0;
  if ( !v11 )
  {
    v38 = 0;
    v26 = 0;
    goto LABEL_42;
  }
  v13 = *(_QWORD *)a2;
  v14 = 1;
  v15 = 0;
  v16 = 0xBF58476D1CE4E5B9LL
      * ((v8 ? 0x25 : 0) | ((unsigned __int64)(((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4)) << 32));
  for ( i = (v11 - 1) & ((v16 >> 31) ^ v16); ; i = (v11 - 1) & v18 )
  {
    v19 = v13 + 24LL * i;
    v20 = *(_QWORD *)v19;
    if ( *(_QWORD *)v19 == v10 && v12 == *(_DWORD *)(v19 + 8) )
      goto LABEL_20;
    if ( v20 == -4096 )
      break;
    if ( v20 == -8192 && *(_DWORD *)(v19 + 8) == -2 && !v15 )
      v15 = v13 + 24LL * i;
LABEL_15:
    v18 = v14 + i;
    ++v14;
  }
  if ( *(_DWORD *)(v19 + 8) != -1 )
    goto LABEL_15;
  v26 = 2 * v11;
  if ( !v15 )
    v15 = v13 + 24LL * i;
  v27 = *(_DWORD *)(a2 + 8) + 1;
  v38 = v15;
  if ( 4 * v27 >= 3 * v11 )
    goto LABEL_42;
  if ( v11 >> 3 >= v11 - *(_DWORD *)(a2 + 12) - v27 )
  {
    v26 = v11;
LABEL_42:
    sub_7C0AC0((__int64 *)a2, v26);
    sub_7C0160((__int64 *)a2, &v39, &v38);
    v15 = v38;
    ++*(_DWORD *)(a2 + 8);
    if ( *(_QWORD *)v15 == -4096 )
      goto LABEL_43;
LABEL_33:
    --*(_DWORD *)(a2 + 12);
    goto LABEL_34;
  }
  *(_DWORD *)(a2 + 8) = v27;
  if ( *(_QWORD *)v15 != -4096 )
    goto LABEL_33;
LABEL_43:
  if ( *(_DWORD *)(v15 + 8) != -1 )
    goto LABEL_33;
LABEL_34:
  *(_DWORD *)(v15 + 16) = 0;
  *(_QWORD *)v15 = v10;
  *(_DWORD *)(v15 + 8) = v12;
  v28 = *(unsigned int *)(a2 + 32);
  *(_DWORD *)(v15 + 16) = v28;
  v29 = *(_QWORD *)(a2 + 24);
  v30 = v29 + 24 * v28;
  if ( v28 >= *(unsigned int *)(a2 + 36) )
  {
    v39 = v10;
    v31 = (const __m128i *)&v39;
    v32 = v28 + 1;
    v40 = v12;
    v33 = a2 + 40;
    v34 = a2 + 24;
    v41 = v5;
    v37 = v29;
    if ( (unsigned __int64)&v39 >= v29 && (unsigned __int64)&v39 < v30 )
    {
      sub_25D6060(v34, v33, v32, 24);
      v35 = *(_QWORD *)(a2 + 24);
      v31 = (const __m128i *)((char *)&v39 + v35 - v37);
    }
    else
    {
      sub_25D6060(v34, v33, v32, 24);
      v35 = *(_QWORD *)(a2 + 24);
    }
    v36 = (__m128i *)(v35 + 24LL * *(unsigned int *)(a2 + 32));
    *v36 = _mm_loadu_si128(v31);
    v36[1].m128i_i64[0] = v31[1].m128i_i64[0];
    ++*(_DWORD *)(a2 + 32);
  }
  else
  {
    *(_QWORD *)v30 = v10;
    *(_DWORD *)(v30 + 8) = v12;
    *(_QWORD *)(v30 + 16) = v5;
    ++*(_DWORD *)(a2 + 32);
  }
LABEL_20:
  while ( 1 )
  {
    v21 = *(_QWORD *)(v5 + 8);
    v5 = v21 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v21 <= 7 )
      break;
    if ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x49 )
      goto LABEL_9;
  }
LABEL_21:
  result = *(_QWORD *)(v4 + 104);
  if ( result )
  {
    if ( result > 7 )
      goto LABEL_23;
  }
  else
  {
    sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(v4 + 96) + 88LL), *(_QWORD *)(v4 + 96));
    result = *(_QWORD *)(v4 + 104);
    if ( result > 7 )
    {
LABEL_23:
      v22 = result & 0xFFFFFFFFFFFFFFF8LL;
      v23 = *(__int64 **)(v22 + 8);
      result = *(unsigned int *)(v22 + 16);
      v24 = &v23[result];
    }
    else
    {
      if ( result )
        return result;
      sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(v4 + 96) + 88LL), *(_QWORD *)(v4 + 96));
      result = *(_QWORD *)(v4 + 104);
      if ( result <= 7 )
        return result;
      result &= 0xFFFFFFFFFFFFFFF8LL;
      v24 = nullptr;
      v23 = *(__int64 **)(result + 8);
    }
    for ( ; v24 != v23; result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 104LL))(v25, a2) )
      v25 = *v23++;
  }
  return result;
}

