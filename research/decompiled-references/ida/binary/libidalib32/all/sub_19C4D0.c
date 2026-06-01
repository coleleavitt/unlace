__int64 __fastcall sub_19C4D0(char *a1, __int64 a2)
{
  __int16 v2; // bp
  int v3; // edx
  _WORD *v4; // rcx
  __int64 v5; // rbx
  char *v6; // r13

  if ( !a1 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v2 = sub_19BE40(a1);
  if ( !v2 )
    return 4294967294LL;
  if ( dword_255978 > 0 )
  {
    v3 = 0;
    v4 = &unk_255980;
    while ( *v4 != v2 )
    {
      ++v3;
      v4 += 8;
      if ( v3 == dword_255978 )
        goto LABEL_12;
    }
    if ( dword_255978 != v3 )
      goto LABEL_9;
LABEL_12:
    if ( v3 == 64 )
      return 4294967293LL;
    goto LABEL_13;
  }
  v3 = 0;
  if ( !dword_255978 )
  {
LABEL_13:
    v5 = v3;
    ++dword_255978;
    goto LABEL_10;
  }
LABEL_9:
  v5 = v3;
  qfree();
LABEL_10:
  v6 = (char *)&unk_255980 + 16 * v5;
  *(_WORD *)v6 = v2;
  *((_QWORD *)v6 + 1) = qstrdup();
  return 0;
}

