__int64 __fastcall sub_369120(__int64 a1, __int64 a2)
{
  const char *v2; // rdx

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(const char **)(a1 + 40);
  return get_idcv_attr(a2, a1, v2, 0);
}
