_WORD *__fastcall std::__fill_n_a<unsigned short *,unsigned long,unsigned short>(_WORD *a1, __int64 a2, __int16 *a3)
{
  __int16 v5; // [rsp+1Eh] [rbp-Ah]

  v5 = *a3;
  while ( a2 )
  {
    *a1 = v5;
    --a2;
    ++a1;
  }
  return a1;
}

