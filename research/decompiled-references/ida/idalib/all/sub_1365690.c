__int64 __fastcall sub_1365690(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  const char *v8; // rsi
  __int64 v9; // rax
  const __m128i *v10; // rsi
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rdi

  v6 = sub_227D600();
  v7 = sub_995540(v6, "PCH DECL: ");
  v8 = (const char *)sub_B88090(a3);
  sub_995540(v7, v8);
  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 18 <= 0x3F )
  {
    v9 = sub_227D600();
    sub_995540(v9, " - ");
    v10 = (const __m128i *)sub_227D600();
    sub_B76F90((_QWORD *)a3, v10);
  }
  v11 = sub_227D600();
  result = sub_995540(v11, "\n");
  v13 = *(_QWORD *)(a1 + 8);
  if ( v13 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, a2, a3);
  return result;
}
