__int64 __fastcall sub_57BF80(__int64 a1)
{
  char v2; // bp
  __int64 result; // rax
  __int64 v4; // r13
  int v5; // r12d
  _QWORD *v6; // r14
  unsigned __int64 v7; // r12
  _DWORD *v8; // rax
  __int64 (__fastcall *v9)(_QWORD *, char); // rax
  __int64 (__fastcall *v10)(_QWORD *, unsigned int); // rax
  const char *v11; // rsi
  __int64 v12; // rsi
  int v13; // r12d
  const void *v14; // r8
  void *v15; // rdi
  _QWORD *func; // rax
  __int64 v17; // rax
  void (__fastcall *v18)(__int64, _QWORD *); // rax
  const void *v19; // [rsp+8h] [rbp-40h]

  if ( *(_QWORD *)(a1 + 592) <= 1u
    || (v4 = *(_QWORD *)(a1 + 16), sub_3792E0(0x15u, a1, *(_QWORD *)(a1 + 584)) < 0)
    || (v5 = *(_DWORD *)(a1 + 144), v2 = 0, (v5 & 0x2000) != 0) )
  {
    v2 = 1;
    return sub_5798E0((__m128i *)a1, v2);
  }
  v6 = nullptr;
  if ( (~*(_WORD *)(a1 + 720) & 0x600) != 0 || (*(_QWORD *)(a1 + 720) & 0x10000000) == 0 )
    goto LABEL_7;
  func = (_QWORD *)get_func(v4);
  v6 = func;
  if ( !func || *func != v4 )
  {
    v5 = *(_DWORD *)(a1 + 144);
LABEL_7:
    *(_DWORD *)(a1 + 144) = v5 & 0xFFFFE76F;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
    *(_DWORD *)(a1 + 144) |= v5 & 0x1890;
    sub_4CDC80(a1, (char *)&dword_0 + 1);
    if ( (get_aflags(v4) & 0x4000) == 0 )
      *(_DWORD *)(a1 + 144) |= 0x80u;
LABEL_9:
    v7 = *(_QWORD *)(a1 + 592);
    if ( v7 > 1 )
    {
      v14 = *(const void **)(a1 + 584);
      v15 = *(void **)(a1 + 24);
      if ( *(_QWORD *)(a1 + 40) < v7 )
      {
        v19 = *(const void **)(a1 + 584);
        v17 = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 592), 1);
        v14 = v19;
        *(_QWORD *)(a1 + 24) = v17;
        v15 = (void *)v17;
      }
      *(_QWORD *)(a1 + 32) = v7;
      memmove(v15, v14, v7 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + v7 - 1) = 0;
      if ( (**(_DWORD **)(a1 + 632) & 0x4000000) != 0 )
      {
LABEL_13:
        if ( *(_QWORD *)(a1 + 32) <= 1u )
          goto LABEL_19;
        goto LABEL_14;
      }
    }
    else
    {
      v8 = *(_DWORD **)(a1 + 632);
      *(_QWORD *)(a1 + 32) = 0;
      if ( (*v8 & 0x4000000) != 0 )
        goto LABEL_19;
    }
    v9 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 32LL);
    if ( v9 == sub_572080 )
      sub_571E30((_QWORD *)a1, 58);
    else
      v9((_QWORD *)a1, 58);
    goto LABEL_13;
  }
  v18 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(a1 + 632) + 192LL);
  if ( !v18 )
  {
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 328LL))(a1, v6);
    goto LABEL_9;
  }
  v18(a1, v6);
  if ( *(_QWORD *)(a1 + 32) <= 1u )
    goto LABEL_20;
LABEL_14:
  v10 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*(_QWORD *)a1 + 128LL);
  if ( v10 == sub_571630 )
  {
    sub_3E0180(a1 + 24);
    v11 = haystack;
    if ( *(_QWORD *)(a1 + 32) )
      v11 = *(const char **)(a1 + 24);
    (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 136LL))(a1, v11, 0);
    *(_QWORD *)(a1 + 32) = 0;
  }
  else
  {
    v10((_QWORD *)a1, 0);
  }
  *(_DWORD *)(a1 + 144) |= 0x2000u;
LABEL_19:
  if ( !v6 )
    return sub_5798E0((__m128i *)a1, v2);
LABEL_20:
  v12 = get_func(v4);
  v13 = sub_57BBA0((char *)a1, v12);
  if ( !((unsigned int)sub_579770(a1, v12) + v13) )
    return sub_5798E0((__m128i *)a1, v2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  if ( !(_BYTE)result )
    return sub_5798E0((__m128i *)a1, v2);
  return result;
}
