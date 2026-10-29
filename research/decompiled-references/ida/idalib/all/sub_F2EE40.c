_QWORD *__fastcall sub_F2EE40(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *result; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi

  v4 = *(_QWORD *)(a2 + 72);
  if ( (v4 & 0x8000000000LL) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 1096);
    if ( (v4 & 0x10000000000LL) != 0 )
      sub_995540(v7, " class");
    else
      sub_995540(v7, " struct");
  }
  sub_F2AD60(a1, a2);
  if ( (*(_QWORD *)(a2 + 8) & 7LL) == 4 )
    sub_995540(*(_QWORD *)(a1 + 1096), " __module_private__");
  if ( (*(_BYTE *)(a2 + 77) & 2) != 0 )
  {
    v8 = *(_QWORD *)(a2 + 128);
    v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (v8 & 4) != 0 )
      {
        v10 = *v9;
        v11 = *(_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFF0LL);
        if ( !(*(_QWORD *)(v11 + 8) & 7LL | (*(__int64 *)(v11 + 8) >> 3) & 1) )
        {
          v9 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
          goto LABEL_13;
        }
        v8 = sub_F64F00(v10);
      }
      v9 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
    }
LABEL_13:
    sub_F2A610(a1, (__int64)v9);
  }
  result = sub_B78820(a2);
  v6 = (__int64)result;
  if ( result )
  {
    sub_995540(*(_QWORD *)(a1 + 1096), " instantiated_from");
    return (_QWORD *)sub_F29AE0(a1, v6);
  }
  return result;
}
