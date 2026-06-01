char __fastcall sub_451350(__int64 a1, const char *a2)
{
  _QWORD *v3; // rbx
  char result; // al
  __int64 v5; // rax
  const char *v6; // rsi
  __int64 v7; // rdx
  const char *v8; // rdi

  v3 = sub_426230(a1, a2);
  result = sub_4170D0((__int64)v3);
  if ( !result )
  {
    v5 = sub_4170C0((__int64)v3);
    v6 = &s1;
    v7 = *(_QWORD *)(a1 + 216) + 88LL * (_QWORD)a2;
    if ( *(_QWORD *)(v5 + 8) )
      v6 = *(const char **)v5;
    v8 = &s1;
    if ( *(_QWORD *)(v7 + 24) )
      v8 = *(const char **)(v7 + 16);
    return strcmp(v8, v6) == 0;
  }
  return result;
}
