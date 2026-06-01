__int64 __fastcall sub_40C3D0(__int64 a1, double a2)
{
  int v2; // eax
  __int64 v3; // rax

  if ( isnan(a2)
    || ((v2 = *__errno_location(), v2 != 34) || a2 != 0.0 && a2 <= 1.797693134862316e308 && a2 >= -1.797693134862316e308)
    && v2 )
  {
    sub_449F80(a1, a2);
    return 1;
  }
  else
  {
    v3 = sub_47B930(a2);
    sub_48AFD0(a1, v3);
    return 0;
  }
}

