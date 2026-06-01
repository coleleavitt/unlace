void __fastcall __noreturn sub_457570(int a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v3; // rdx
  __int64 *v4; // rax
  __int64 v5; // rax
  const char *v6; // rsi

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  v3 = haystack;
  v4 = (__int64 *)(184LL * a1 + v2);
  if ( v4[21] )
    v3 = (const char *)v4[20];
  v5 = *v4;
  if ( v5 )
  {
    v6 = haystack;
    if ( *(_QWORD *)(v5 + 8) )
      v6 = *(const char **)v5;
    sub_391C60((int)"TITLE %s\nAUTOHIDE NONE\nICON NONE\n\n%s", v6, v3);
  }
  sub_454530(a2, a2, v3);
}
