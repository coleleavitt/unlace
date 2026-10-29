__int64 __fastcall sub_7AD500(__int64 a1, __int64 a2, const char *a3, __int64 a4, __int64 a5, char a6, char a7)
{
  __int64 v10; // rdi
  unsigned __int16 *v11; // rax
  __int64 v12; // rsi

  if ( a2 == -1 || !a3 )
    return -1;
  sub_7AD400(a1, a2, a6, a3, a7);
  if ( !a7 || (v10 = *(_QWORD *)(a1 + 8)) == 0 )
    v10 = *(_QWORD *)a1;
  v11 = (unsigned __int16 *)sub_7443D0(v10, (unsigned __int16 *)(a1 + 53));
  v12 = (__int64)v11;
  if ( v11 )
    v12 = (__int64)v11 + *v11 + 2;
  return sub_7AFF00(a4, v12, a5);
}
