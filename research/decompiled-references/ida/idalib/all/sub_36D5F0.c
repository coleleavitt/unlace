__int64 __fastcall sub_36D5F0(_QWORD *a1, __int64 a2)
{
  const char *v2; // r12
  __int64 ph; // rax
  unsigned int v4; // ebx
  int v5; // ebp
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax

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
  {
LABEL_9:
    v9 = -1;
  }
  else
  {
    v7 = a1[9];
    v8 = getseg(a1[1]);
    v9 = (unsigned __int8)set_default_sreg_value(v8, v4, v7);
  }
  *(_QWORD *)(a2 + 8) = v9;
  return 0;
}
