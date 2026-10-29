__int64 __fastcall sub_727BB0(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // ax
  const char *v5; // rax

  v4 = *(_WORD *)(a3 + 24);
  if ( v4 > 0x83u )
  {
    if ( (unsigned __int16)(v4 - 132) > 1u )
    {
LABEL_4:
      v5 = (const char *)qstrerror(1355, a2, a3, a4);
      sub_727620(a2, (__int64)"%s", v5);
    }
    goto LABEL_8;
  }
  if ( v4 <= 0x80u )
  {
    if ( v4 != 128 )
      goto LABEL_4;
LABEL_8:
    *a1 = 1;
    return 1;
  }
  *a1 = 0;
  return 1;
}

