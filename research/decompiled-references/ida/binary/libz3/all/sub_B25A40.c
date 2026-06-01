__int64 __fastcall sub_B25A40(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r11
  __int64 v7; // rax
  int v8; // edi
  char *v9; // rcx
  unsigned int v10; // edx
  char *v11; // rsi
  __int64 v12; // rdx
  char *v13; // r8
  char *i; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 result; // rax
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-78h]
  int v23; // [rsp+14h] [rbp-6Ch]
  int v24; // [rsp+14h] [rbp-6Ch]
  int *v25; // [rsp+18h] [rbp-68h]
  int v26; // [rsp+24h] [rbp-5Ch] BYREF
  unsigned int *v27; // [rsp+28h] [rbp-58h] BYREF
  int *v28; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+38h] [rbp-48h]
  __m128i v30; // [rsp+40h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 24);
  v5 = *a2;
  ++*(_DWORD *)(a1 + 80);
  v6 = a2[2];
  v22 = v4;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  v7 = *(unsigned int *)(a1 + 152);
  v8 = *(_DWORD *)(v5 + 12);
  v9 = *(char **)(a1 + 144);
  v10 = v7 - 1;
  v7 *= 16;
  v11 = &v9[v7];
  v12 = 16LL * (v8 & v10);
  v13 = &v9[v12];
  if ( v12 != v7 )
  {
    for ( i = &v9[v12]; v11 != i; i += 16 )
    {
      v15 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v15 + 12) == v8 && v5 == v15 )
        {
LABEL_26:
          v16 = *((unsigned int *)i + 2);
          goto LABEL_11;
        }
      }
      else if ( !v15 )
      {
        goto LABEL_10;
      }
    }
  }
  for ( ; v13 != v9; v9 += 16 )
  {
    v21 = *(_QWORD *)v9;
    if ( *(_QWORD *)v9 > 1u )
    {
      if ( *(_DWORD *)(v21 + 12) == v8 && v5 == v21 )
      {
        i = v9;
        goto LABEL_26;
      }
    }
    else if ( !v21 )
    {
      break;
    }
  }
LABEL_10:
  v16 = 0;
LABEL_11:
  sub_B24C20(&v28, a1, v16, (__int64)(a2 + 3), *(_QWORD *)(v6 + 88));
  v25 = v28;
  if ( v28 && !v28[2] )
    sub_15D7BC0(v29, v28);
  v26 = sub_B23390(a1, v5, v25);
  v17 = *(_QWORD *)(a1 + 24);
  v23 = v26;
  v29 = 0;
  v28 = &v26;
  v30 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C56DE8), (__m128i)(unsigned __int64)sub_B22850);
  if ( *(_QWORD *)(v17 + 912) )
  {
    v27 = nullptr;
    v18 = sub_186B270(0x10u);
    v27 = (unsigned int *)(v18 + 8);
    *(_DWORD *)(v18 + 8) = v23;
    *(_QWORD *)v18 = 0x100000002LL;
    sub_966E60(a1, &v27);
    if ( v27 )
      sub_186B220(v27 - 2);
  }
  sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), 1, (unsigned int)&v26, 0, 0, 1);
  if ( *(_QWORD *)(v17 + 912) )
    std::__ostream_insert<char,std::char_traits<char>>();
  result = v30.m128i_i64[0];
  if ( v30.m128i_i64[0] )
    result = ((__int64 (__fastcall *)(int **, int **, __int64))v30.m128i_i64[0])(&v28, &v28, 3);
  if ( !v25 || (v24 = v25[2], result = (unsigned int)(v24 - 1), v25[2] = result, v24 != 1) )
  {
    v20 = (*(_DWORD *)(v5 + 8))-- == 1;
    if ( !v20 )
      return result;
    return sub_15D7BC0(v22, v5);
  }
  result = sub_15D7BC0(v22, v25);
  v20 = (*(_DWORD *)(v5 + 8))-- == 1;
  if ( v20 )
    return sub_15D7BC0(v22, v5);
  return result;
}

