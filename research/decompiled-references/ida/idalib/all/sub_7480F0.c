__int64 __fastcall sub_7480F0(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  const char *v4; // rax

  v3 = *(_WORD *)(a3 + 24);
  if ( v3 > 0x83u )
  {
    if ( (unsigned __int16)(v3 - 132) > 1u )
    {
LABEL_4:
      v4 = (const char *)qstrerror(1355);
      sub_747B60(a2, (__int64)"%s", v4);
    }
    goto LABEL_8;
  }
  if ( v3 <= 0x80u )
  {
    if ( v3 != 128 )
      goto LABEL_4;
LABEL_8:
    *a1 = 1;
    return 1;
  }
  *a1 = 0;
  return 1;
}
