_QWORD *__fastcall sub_1FECDC0(_QWORD *a1, __int64 **a2)
{
  __int64 *v2; // rdx
  __int64 v3; // rdx

  v2 = a2[1];
  if ( !v2[2] )
    std::__throw_bad_function_call();
  ((void (__fastcall *)(__int64 *))v2[3])(a2[1]);
  v3 = **a2;
  **a2 = 0;
  *a1 = v3;
  return a1;
}
