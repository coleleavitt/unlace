bool __fastcall sub_6FF60(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6, unsigned int a7)
{
  __int64 v8; // r13
  __int64 v9; // rbp
  bool v10; // dl
  bool result; // al
  bool v12; // [rsp+Fh] [rbp-29h]

  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 16LL) + 168LL);
  v9 = sub_85560(v8, a6);
  v10 = sub_85560(v8, a7) != 0;
  result = v10 && v9 != 0;
  if ( result )
  {
    v12 = v10 && v9 != 0;
    cleanup_argloc(a2);
    *a2 = 4;
    a2[2] = a6 | (a7 << 16);
    return v12;
  }
  return result;
}
