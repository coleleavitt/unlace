__int64 __fastcall sub_1E9370(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int8 a5)
{
  _BYTE *v7; // rax
  __int64 v8; // rdx

  if ( a3 && (v7 = (_BYTE *)skip_spaces(a3), v8 = (__int64)v7, *v7) )
    a4 |= 4 * (a5 & (v7 != nullptr));
  else
    v8 = 0;
  return sub_1E90E0(a1, a2, v8, a4);
}
