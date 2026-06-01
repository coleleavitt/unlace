unsigned __int64 __fastcall sub_211A480(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int64 result; // rax
  void (*v13)(); // rdx

  v6 = (_QWORD *)a1[1];
  v7 = sub_210EA90(a3, 0, v6, 0, a5, a6);
  v10 = sub_210EA90(a2, 0, (_QWORD *)a1[1], 0, v8, v9);
  result = sub_210EB10(18, v10, v7, v6, 0, v11);
  v13 = *(void (**)())(*a1 + 568LL);
  if ( v13 != nullsub_1427 )
    return ((__int64 (__fastcall *)(_QWORD *, unsigned __int64))v13)(a1, result);
  return result;
}
