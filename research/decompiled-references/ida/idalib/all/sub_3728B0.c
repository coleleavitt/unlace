__int64 __fastcall sub_3728B0(_QWORD *a1, __int64 a2)
{
  const char *v2; // r12
  __int64 ph; // rax
  unsigned int v4; // ebx
  int v5; // ebp
  __int64 v6; // r13
  __int64 sreg; // rax

  v2 = haystack;
  if ( a1[6] )
    v2 = (const char *)a1[5];
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
    sreg = -1;
  else
    sreg = get_sreg(a1[1], v4);
  *(_QWORD *)(a2 + 8) = sreg;
  return 0;
}
