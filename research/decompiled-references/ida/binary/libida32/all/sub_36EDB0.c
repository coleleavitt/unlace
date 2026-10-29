__int64 __fastcall sub_36EDB0(__int64 a1, __int64 a2)
{
  const char *v2; // r12
  __int64 ph; // rax
  int sreg; // ebx
  int v5; // ebp
  __int64 v6; // r13

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v2 = *(const char **)(a1 + 40);
  ph = get_ph();
  sreg = *(_DWORD *)(ph + 68);
  v5 = *(_DWORD *)(ph + 72);
  if ( v5 < sreg )
  {
LABEL_9:
    sreg = -1;
  }
  else
  {
    v6 = *(_QWORD *)(ph + 56);
    while ( strcasecmp(*(const char **)(v6 + 8LL * sreg), v2) )
    {
      if ( v5 < ++sreg )
        goto LABEL_9;
    }
    if ( sreg != -1 )
      sreg = get_sreg(*(unsigned int *)(a1 + 8), (unsigned int)sreg);
  }
  *(_DWORD *)(a2 + 8) = sreg;
  return 0;
}

