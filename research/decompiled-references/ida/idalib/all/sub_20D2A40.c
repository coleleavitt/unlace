void *__fastcall sub_20D2A40(__int64 a1, _QWORD *a2)
{
  _BYTE *v3; // rbp
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  void *result; // rax
  __int64 v9; // rcx
  size_t v10; // rdx
  size_t v11; // rsi

  sub_20D1ED0(a2, 0xAu, " typename ");
  v3 = *(_BYTE **)(a1 + 16);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v4 == sub_20CEB40 )
    (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v3 + 64LL))(v3, a2);
  else
    v4((__int64)a2, (__int64)v3);
  if ( (v3[9] & 0xC0) != 0x40 )
  {
    v5 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 24LL);
    if ( v5 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v3 + 72LL))(v3, a2);
    else
      v5((__int64)a2, (__int64)v3);
  }
  v6 = a2[2];
  v7 = a2[3];
  result = (void *)a2[1];
  v9 = v6 + 1;
  if ( v6 + 1 > v7 )
  {
    v10 = v6 + 993;
    v11 = 2 * v7;
    if ( v10 > v11 )
    {
      a2[3] = v10;
      v11 = v10;
    }
    else
    {
      a2[3] = v11;
    }
    result = realloc(result, v11);
    a2[1] = result;
    if ( !result )
      abort();
    v6 = a2[2];
    v9 = v6 + 1;
  }
  a2[2] = v9;
  *((_BYTE *)result + v6) = 59;
  return result;
}
