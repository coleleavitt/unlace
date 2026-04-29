__int64 __fastcall sub_3B5B40(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // r12
  unsigned __int64 i; // rbx

  if ( a5 >= *(_QWORD *)(a1 + 232) || (result = *(_QWORD *)(a1 + 224), (v6 = result + 40 * a5) == 0) )
  {
    if ( !under_debugger )
      sub_37EA20(561);
    BUG();
  }
  for ( i = 0; i < a2[1]; ++i )
    result = ((__int64 (__fastcall *)(__int64, unsigned __int64))funcs_3B5B89[i])(v6, *a2 + 24 * i);
  return result;
}
