__int64 __fastcall sub_369A30(__int64 a1, __int64 a2)
{
  const char *v2; // rbp
  __int64 v3; // rax

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(const char **)(a1 + 40);
  v3 = getseg(*(unsigned int *)(a1 + 8));
  *(_DWORD *)(a2 + 8) = set_segm_class(v3, v2, 0);
  return 0;
}

