__int64 __fastcall sub_372B00(__int64 a1, __int64 a2)
{
  const char *v2; // r12
  __int64 ph; // rax
  unsigned int v4; // ebx
  int v5; // ebp
  __int64 v6; // r13
  __int64 v7; // rax

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(const char **)(a1 + 40);
  ph = get_ph();
  v4 = *(_DWORD *)(ph + 68);
  v5 = *(_DWORD *)(ph + 72);
  if ( v5 < (int)v4 )
    goto LABEL_9;
  v6 = *(_QWORD *)(ph + 56);
  while ( strcasecmp(*(const char **)(v6 + 8LL * (int)v4), v2) )
  {
    if ( v5 < (int)++v4 )
      goto LABEL_9;
  }
  if ( v4 == -1 )
LABEL_9:
    v7 = -1;
  else
    v7 = (unsigned __int8)split_sreg_range(
                            *(_QWORD *)(a1 + 8),
                            v4,
                            *(_QWORD *)(a1 + 72),
                            *(unsigned __int8 *)(a1 + 104),
                            0);
  *(_QWORD *)(a2 + 8) = v7;
  return 0;
}
