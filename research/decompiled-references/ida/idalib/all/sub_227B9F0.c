__int64 __fastcall sub_227B9F0(__int64 *a1, _QWORD a2, _QWORD a3, _QWORD a4, _QWORD a5, _QWORD a6, __int64 a7)
{
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx

  v7 = a1[2];
  v8 = *a1;
  v9 = a1[4] - v7;
  a1[4] = v7;
  return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v8 + 72))(a1, v7, v9);
}
