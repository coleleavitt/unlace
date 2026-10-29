__int64 __fastcall sub_205EA70(__int64 a1, unsigned __int8 *a2)
{
  __int64 result; // rax

  result = sub_204E860(30, a1, a2);
  if ( !result )
  {
    result = *(_QWORD *)(a1 + 8);
    if ( result )
      return sub_205E8D0(30, a1, (__int64)a2, 0);
  }
  return result;
}
