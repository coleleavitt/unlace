__int64 *__fastcall sub_179A630(__int64 *a1, __int64 a2)
{
  char v3; // dl
  __int64 v4; // rdi
  int v5; // eax

  v3 = *(_BYTE *)(a2 + 1);
  while ( 1 )
  {
    v5 = *((_DWORD *)a1 + 2);
    if ( (v5 & 0x20) == 0 && ((v3 & 8) == 0 || (v5 & 0x100) == 0) && (v5 & 8) != 0 )
      break;
LABEL_5:
    a1 = (__int64 *)*a1;
  }
  if ( (v5 & 0x80u) == 0 )
  {
    v4 = a1[45];
    if ( v4 )
    {
      if ( sub_B8E490(v4) )
      {
        v3 = *(_BYTE *)(a2 + 1);
        goto LABEL_5;
      }
    }
  }
  return a1;
}
