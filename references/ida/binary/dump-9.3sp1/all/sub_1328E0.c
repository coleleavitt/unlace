__int64 __fastcall sub_1328E0(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 *a6,
        _QWORD *a7,
        char a8)
{
  int v8; // r14d
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rbx
  unsigned __int8 v13; // al
  char v14; // r10
  unsigned __int8 v15; // r9
  __int64 result; // rax
  char *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 v23; // [rsp+18h] [rbp-70h]
  __int64 v24; // [rsp+28h] [rbp-60h]
  unsigned __int8 v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  __int64 v29; // [rsp+48h] [rbp-40h]

  v8 = 0;
  v10 = a1[30].m128i_i64[0];
  v23 = (__int64)a4;
  v11 = a8 & 4;
  v29 = a5 + 32;
  v27 = *(_QWORD *)(v10 + 112);
  v12 = a5 + 32;
  v24 = a5 + 48;
  while ( 1 )
  {
    v13 = *(_BYTE *)v12;
    if ( (a8 & 2) != 0
      && v13 == 4
      && (a4 = *(_DWORD **)(v12 + 8), v10 = (unsigned int)(*a4 - 8), (unsigned int)v10 <= 1) )
    {
      v12 = (__int64)(a4 + 8);
      v14 = 1;
    }
    else
    {
      v14 = a8 & 1 | (v13 == 2);
    }
    v15 = v14;
    if ( (a8 & 4) != 0
      && (v25 = v14,
          v17 = (char *)j__qalloc_or_throw(16, v11, v10, (__int64)a4),
          sub_123A40((__int64)v17, (unsigned __int8 *)v12, v18, v19),
          sub_1207E0(v17, v27, 5, *(_QWORD *)(a5 + 24), *(_DWORD *)(v12 + 4)),
          v15 = v25,
          v17) )
    {
      v11 = a2;
      v26 = sub_132840(a1, a2, a3, v23, (__int64)v17, v25);
      sub_11CDA0((__int64)v17);
      j__qfree((__int64)v17);
      result = v26;
    }
    else
    {
      v11 = a2;
      result = sub_132840(a1, a2, a3, v23, v12, v15);
    }
    if ( result )
      break;
    if ( v8 == 1 )
      return result;
    v12 = v24;
    v8 = 1;
  }
  if ( a6 )
    *a6 = result;
  if ( a7 )
  {
    v20 = a5 + 48;
    if ( v8 )
      v20 = v29;
    *a7 = v20;
  }
  return v12;
}
