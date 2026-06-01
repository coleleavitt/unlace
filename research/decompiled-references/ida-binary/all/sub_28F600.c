void __fastcall sub_28F600(__int64 *a1, _DWORD *a2, __int64 a3, double a4)
{
  __int64 func; // rax

  if ( a2[2] != 25 )
  {
    if ( (unsigned __int64)a1[1] > 1 )
      return;
LABEL_4:
    sub_169A50(a1, (__int64)"field_%a", a4);
    return;
  }
  func = get_func(*(_QWORD *)(*(_QWORD *)a2 + 1016LL));
  if ( (unsigned __int64)a1[1] <= 1 )
  {
    if ( func )
    {
      build_stkvar_name(a1, func, a3);
      return;
    }
    goto LABEL_4;
  }
}
