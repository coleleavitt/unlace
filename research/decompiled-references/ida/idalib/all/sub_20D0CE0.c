void (*__fastcall sub_20D0CE0(__int64 a1, _QWORD *a2))()
{
  _BYTE *v3; // rbp
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  void *v8; // rax
  __int64 v9; // rcx
  _BYTE *v10; // rbp
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  void (*result)(); // rax
  _BYTE *v13; // rsi
  _BYTE *v14; // rdi
  size_t v15; // rdx
  size_t v16; // rsi

  v3 = *(_BYTE **)(a1 + 24);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v4 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 64LL))(*(_QWORD *)(a1 + 24));
  else
    v4((__int64)a2, *(_QWORD *)(a1 + 24));
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
  v8 = (void *)a2[1];
  v9 = v6 + 1;
  if ( v6 + 1 > v7 )
  {
    v15 = v6 + 993;
    v16 = 2 * v7;
    if ( v15 > v16 )
    {
      a2[3] = v15;
      v16 = v15;
    }
    else
    {
      a2[3] = v16;
    }
    v8 = realloc(v8, v16);
    a2[1] = v8;
    if ( !v8 )
      abort();
    v6 = a2[2];
    v9 = v6 + 1;
  }
  a2[2] = v9;
  *((_BYTE *)v8 + v6) = 64;
  v10 = *(_BYTE **)(a1 + 16);
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v11 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v10 + 64LL))(*(_QWORD *)(a1 + 16), a2);
  else
    v11((__int64)a2, *(_QWORD *)(a1 + 16));
  result = (void (*)())(v10[9] & 0xC0);
  if ( (v10[9] & 0xC0) != 0x40 )
  {
    result = *(void (**)())(*a2 + 24LL);
    if ( (char *)result == (char *)sub_20CEB60 )
    {
      v13 = a2;
      v14 = v10;
      result = *(void (**)())(*(_QWORD *)v10 + 72LL);
      if ( result == nullsub_1308 )
        return result;
    }
    else
    {
      v13 = v10;
      v14 = a2;
    }
    return (void (*)())((__int64 (__fastcall *)(_BYTE *, _BYTE *))result)(v14, v13);
  }
  return result;
}
