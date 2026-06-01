__int64 __fastcall sub_20D2300(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  size_t v6; // rdx
  size_t v7; // rsi
  _BYTE *v8; // rax
  _BYTE *v9; // rbp
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 result; // rax
  __int64 (__fastcall *v12)(__int64, __int64); // rax

  sub_20D1ED0((_QWORD *)a2, *(_QWORD *)(a1 + 16), *(const void **)(a1 + 24));
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  v5 = v3 + 1;
  if ( v3 + 1 <= v4 )
  {
    v8 = *(_BYTE **)(a2 + 8);
  }
  else
  {
    v6 = v3 + 993;
    v7 = 2 * v4;
    if ( v6 > v7 )
    {
      *(_QWORD *)(a2 + 24) = v6;
      v7 = v6;
    }
    else
    {
      *(_QWORD *)(a2 + 24) = v7;
    }
    v8 = realloc(*(void **)(a2 + 8), v7);
    *(_QWORD *)(a2 + 8) = v8;
    if ( !v8 )
      abort();
    v3 = *(_QWORD *)(a2 + 16);
    v5 = v3 + 1;
  }
  *(_QWORD *)(a2 + 16) = v5;
  v8[v3] = 32;
  v9 = *(_BYTE **)(a1 + 32);
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
  if ( v10 == sub_20CEB40 )
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v9 + 64LL))(v9, a2);
  else
    v10(a2, (__int64)v9);
  result = v9[9] & 0xC0;
  if ( (v9[9] & 0xC0) != 0x40 )
  {
    v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
    if ( v12 == sub_20CEB60 )
      return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v9 + 72LL))(v9, a2);
    else
      return v12(a2, (__int64)v9);
  }
  return result;
}
