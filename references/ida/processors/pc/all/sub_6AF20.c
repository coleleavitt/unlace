__int64 __fastcall sub_6AF20(const char *a1, __int64 a2, char a3)
{
  const char *v4; // r12
  unsigned int v5; // ebp
  __int64 fchunk; // rax

  if ( strncmp(a1, "guard_", 6u) )
    return 0;
  v4 = a1 + 6;
  v5 = 0;
  if ( !strncmp(a1 + 6, "xfg_", 4u) )
    v4 = a1 + 10;
  if ( !strncmp(v4, "dispatch", 8u) )
  {
    v4 += 8;
    v5 = 1;
  }
  else if ( !strncmp(v4, "check", 5u) )
  {
    v4 += 5;
    v5 = 2;
  }
  if ( strncmp(v4, "_icall", 6u) )
    return 0;
  if ( a3 )
    goto LABEL_17;
  if ( v4[6] && strcmp(v4 + 6, "_nop") )
  {
    fchunk = get_fchunk();
    if ( fchunk && *(_QWORD *)fchunk == a2 && *(char *)(fchunk + 16) < 0 )
    {
LABEL_17:
      if ( !strcmp(v4 + 6, "_fptr") )
        return v5;
    }
    return 0;
  }
  return v5;
}
