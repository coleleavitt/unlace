__int64 __fastcall sub_12C120(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v6; // r14
  __int64 v8; // r15
  char v9; // al
  _DWORD *v11; // [rsp+8h] [rbp-50h]
  _DWORD *v12; // [rsp+8h] [rbp-50h]
  int v13; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( *(_DWORD *)a3 != 10 )
    return 0;
  if ( *(_BYTE *)(a3 + 32) != 4 )
    return 0;
  v6 = *(_QWORD *)(a3 + 40);
  if ( !v6
    || (unsigned int)(*(_DWORD *)v6 - 23) > 1
    || (unsigned int)(*a5 - 23) > 1
    || *(_DWORD *)(a3 + 68) + a5[17] != *(_DWORD *)(v6 + 68) )
  {
    return 0;
  }
  v8 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  if ( *(_DWORD *)v6 != *a5 )
  {
    v11 = a5;
    v9 = sub_14E430(v6, &v13);
    a5 = v11;
    if ( v9 )
    {
      if ( 8 * (*(_DWORD *)(a3 + 36) - *(_DWORD *)(a3 + 68)) < v13 )
        return 0;
    }
    else if ( v11[17] != 4 || (*(_BYTE *)(v8 + 48) & 0x10) == 0 )
    {
      return 0;
    }
  }
  v12 = a5;
  if ( !sub_1213D0((unsigned __int8 *)(v6 + 48), v8, (__int64)(a5 + 12), 1u) )
    return 0;
  return sub_12BFF0(a1, a4, (__int64)(v12 + 8), a2, v6 + 32);
}
