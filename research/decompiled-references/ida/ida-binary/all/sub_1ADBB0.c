__int64 __fastcall sub_1ADBB0(__int64 *a1, int a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 module_data; // rbp
  unsigned int v9; // eax
  unsigned int v10; // ebx
  const char *v11; // rdx
  const char *v12; // rsi

  module_data = get_module_data((unsigned int)dword_8CD7F0);
  LOBYTE(v9) = sub_1ACBD0(module_data, a2, a3, a4);
  v10 = v9;
  if ( (_BYTE)v9 )
  {
    v11 = &s1;
    if ( *(_QWORD *)(a5 + 8) )
      v11 = *(const char **)a5;
    v12 = *(const char **)(*(_QWORD *)(module_data + 8) + 320LL);
    if ( !v12 )
      v12 = "sizeof(%s)";
    sub_1ADAF0(a1, (__int64)v12, v11);
  }
  return v10;
}
