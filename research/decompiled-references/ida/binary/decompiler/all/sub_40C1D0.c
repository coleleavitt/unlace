__int64 sub_40C1D0()
{
  unsigned int v0; // r13d
  char **v1; // rbx
  char v2; // al
  const char *v3; // rdx
  const char *v4; // rsi

  v0 = 1;
  v1 = &off_4EACE0;
  sub_6C720((__int64)"==== Running unbounded_history extended tests ====\n");
  do
  {
    while ( 1 )
    {
      v2 = ((__int64 (*)(void))v1[1])();
      v3 = *v1;
      if ( !v2 )
        break;
      v1 += 2;
      sub_6C720((__int64)"  [%s] %s\n", "PASS", v3);
      if ( v1 == (char **)&`typeinfo for'std::exception )
        goto LABEL_5;
    }
    v1 += 2;
    sub_6C720((__int64)"  [%s] %s\n", "FAIL", v3);
    v0 = 0;
  }
  while ( v1 != (char **)&`typeinfo for'std::exception );
LABEL_5:
  v4 = "FAILED";
  if ( (_BYTE)v0 )
    v4 = "PASSED";
  sub_6C720((__int64)"==== Extended tests %s ====\n", v4);
  return v0;
}
