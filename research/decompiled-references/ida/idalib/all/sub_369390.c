__int64 __fastcall sub_369390(__int64 a1, __int64 a2)
{
  const char *v3; // rsi

  v3 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(const char **)(a1 + 40);
  *(_QWORD *)(a2 + 8) = (unsigned int)del_idcv_attr(a1, v3) == 0;
  return 0;
}
