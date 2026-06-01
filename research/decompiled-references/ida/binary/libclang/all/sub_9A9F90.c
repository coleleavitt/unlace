_BYTE *__fastcall sub_9A9F90(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rsi
  char v11; // bl
  _BYTE *result; // rax

  v5 = *(_QWORD *)(a1 + 184);
  v6 = *(_QWORD *)sub_A1A5A0(v5, 8);
  sub_A1A5E0(v5, 8);
  v7 = *(_QWORD *)(a1 + 184);
  v8 = *(_QWORD *)sub_A1A5A0(v7, 8);
  sub_A1A5E0(v7, 8);
  v9 = *(_QWORD *)(a1 + 184);
  v10 = 2;
  if ( v8 >= v6 )
  {
    LOBYTE(v10) = v8 > v6;
    v10 = (unsigned int)(3 * v10);
  }
  v11 = a2(a3, v10);
  result = (_BYTE *)sub_A1A4E0(v9, 8);
  *result = v11;
  return result;
}

