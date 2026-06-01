__int64 __fastcall sub_78D140(__int64 a1, unsigned int a2, const char *a3, __int64 a4, __int64 a5, char a6)
{
  unsigned __int16 *v8; // rax
  __int64 v9; // rsi

  if ( a2 == -1 || !a3 )
    return -1;
  sub_78D080(a1, a2, a6, a3);
  v8 = (unsigned __int16 *)sub_723E90(*(_QWORD *)a1, (unsigned __int16 *)(a1 + 45));
  v9 = (__int64)v8;
  if ( v8 )
    v9 = (__int64)v8 + *v8 + 2;
  return sub_78F1B0(a4, v9, a5);
}

