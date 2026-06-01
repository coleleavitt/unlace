__int64 __fastcall sub_369150(__int64 a1, __int64 a2)
{
  const char *v2; // rdx

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(const char **)(a1 + 40);
  *(_QWORD *)(a2 + 8) = (unsigned int)get_idcv_attr(0, a1, v2, 0) == 0;
  return 0;
}
