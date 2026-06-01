__int64 __fastcall sub_1766F00(__int64 *a1, __int64 a2, double a3)
{
  __int64 *v4; // rax
  unsigned __int16 *v5; // rsi
  __int64 v6; // r12
  __int64 v7; // r13
  unsigned int v8; // eax

  v4 = *(__int64 **)(a2 + 16);
  v5 = *(unsigned __int16 **)(a2 + 24);
  v6 = *v4;
  if ( *v4 )
  {
    v7 = *a1;
    v8 = sub_EEB7E0((unsigned __int64)v5, (__int64)v5, a3);
    sub_1910D40(v7, v8, v6, 1);
    v5 = *(unsigned __int16 **)(a2 + 24);
  }
  return sub_175B800(a1, v5);
}
