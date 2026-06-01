__int64 __fastcall sub_205EA20(__int64 a1, __int64 a2, unsigned __int8 *a3, char a4, __int64 a5)
{
  __int64 result; // rax

  result = sub_204E860(a1, a2, a3);
  if ( !result && a5 != *(_QWORD *)(a2 + 8) )
    return sub_205E8D0(a1, a2, (__int64)a3, a4);
  return result;
}
