__int64 __fastcall sub_12E420(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        _QWORD *a7,
        char a8)
{
  int v8; // r14d
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  char v12; // r10
  unsigned __int8 v13; // r9
  __int64 result; // rax
  char *v15; // rbp
  _DWORD *v16; // rcx
  __int64 v17; // r13
  __int64 v20; // [rsp+28h] [rbp-60h]
  unsigned __int8 v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+30h] [rbp-58h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+48h] [rbp-40h]

  v8 = 0;
  v25 = a5 + 32;
  v23 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  v10 = a5 + 32;
  v20 = a5 + 48;
  while ( 1 )
  {
    v11 = *(_BYTE *)v10;
    if ( (a8 & 2) != 0 && v11 == 4 && (v16 = *(_DWORD **)(v10 + 8), (unsigned int)(*v16 - 8) <= 1) )
    {
      v10 = (__int64)(v16 + 8);
      v12 = 1;
    }
    else
    {
      v12 = a8 & 1 | (v11 == 2);
    }
    v13 = v12;
    if ( (a8 & 4) != 0
      && (v21 = v12,
          v15 = (char *)j__qalloc_or_throw(16),
          sub_11F580((__int64)v15, (unsigned __int8 *)v10),
          sub_11C320(v15, v23, 5, *(_QWORD *)(a5 + 24), *(_DWORD *)(v10 + 4)),
          v13 = v21,
          v15) )
    {
      v22 = sub_12E380(a1, a2, a3, a4, (__int64)v15, v21);
      sub_1188E0((__int64)v15);
      j__qfree(v15);
      result = v22;
    }
    else
    {
      result = sub_12E380(a1, a2, a3, a4, v10, v13);
    }
    if ( result )
      break;
    if ( v8 == 1 )
      return result;
    v10 = v20;
    v8 = 1;
  }
  if ( a6 )
    *a6 = result;
  if ( a7 )
  {
    v17 = a5 + 48;
    if ( v8 )
      v17 = v25;
    *a7 = v17;
  }
  return v10;
}
