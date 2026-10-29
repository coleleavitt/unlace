__int64 __fastcall qfsize(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbp

  if ( !a1 )
  {
    if ( !under_debugger )
      interr(552);
    BUG();
  }
  v1 = qftell(a1);
  qfseek(a1, 0, 2);
  v2 = qftell(a1);
  qfseek(a1, v1, 0);
  return v2;
}
