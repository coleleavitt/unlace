__int64 sub_11BA40()
{
  __int64 v0; // rbx
  __int64 v1; // rsi

  if ( (unsigned int)gen_file() )
  {
    v0 = sub_117010(1u, 0, 977);
    if ( !v0
      || !batch
      && qfilesize()
      && (unsigned int)sub_119270(
                         (__int64)"~A~ppend",
                         (__int64)"~O~verwrite",
                         (__int64)"~C~ancel",
                         0xFFFFFFFF,
                         1011,
                         v0) )
    {
      return 0;
    }
    v1 = fopenWB();
    if ( !(unsigned int)gen_file() )
    {
      qfclose();
      qunlink();
      sub_F9340(1016, v1);
      return 0;
    }
    qfclose();
    sub_108A90(978, v0);
  }
  else
  {
    sub_F9340(1016, 0);
  }
  return 1;
}

