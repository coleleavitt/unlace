__int64 __fastcall sub_3EE050(__int64 a1, __int64 a2)
{
  __int64 *func; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax

  func = (__int64 *)get_func(a1);
  if ( func )
  {
    v3 = *func;
    v4 = get_func(a2);
    if ( v4 )
    {
LABEL_3:
      v5 = *(_QWORD *)v4;
      LOBYTE(v4) = *(_QWORD *)v4 != -1;
      LOBYTE(v5) = v5 == v3;
      v6 = v5 & v4;
      LOBYTE(v5) = v3 != -1;
      return (unsigned int)v5 & v6;
    }
  }
  else
  {
    v3 = -1;
    v4 = get_func(a2);
    if ( v4 )
      goto LABEL_3;
  }
  return 0;
}
