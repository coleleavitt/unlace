__int64 **__fastcall sub_253620(__int64 **a1, __int64 a2)
{
  __int64 *v2; // r12

  if ( a2 )
  {
    v2 = (__int64 *)j__qalloc_or_throw(224);
    sub_253340(v2, a2);
    *a1 = v2;
  }
  else
  {
    *a1 = nullptr;
  }
  return a1;
}
