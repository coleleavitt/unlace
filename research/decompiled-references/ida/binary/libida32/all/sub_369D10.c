__int64 __fastcall sub_369D10(__int64 a1, __int64 a2)
{
  const char *v2; // r12
  __int64 ph; // rax
  int v4; // ebx
  int v5; // ebp
  __int64 v6; // r13

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(const char **)(a1 + 40);
  ph = get_ph();
  v4 = *(_DWORD *)(ph + 68);
  v5 = *(_DWORD *)(ph + 72);
  if ( v5 < v4 )
  {
LABEL_9:
    v4 = -1;
  }
  else
  {
    v6 = *(_QWORD *)(ph + 56);
    while ( strcasecmp(*(const char **)(v6 + 8LL * v4), v2) )
    {
      if ( v5 < ++v4 )
        goto LABEL_9;
    }
    if ( v4 != -1 )
      v4 = (unsigned __int8)split_sreg_range(
                              *(unsigned int *)(a1 + 8),
                              (unsigned int)v4,
                              *(unsigned int *)(a1 + 72),
                              *(unsigned __int8 *)(a1 + 104),
                              0);
  }
  *(_DWORD *)(a2 + 8) = v4;
  return 0;
}

