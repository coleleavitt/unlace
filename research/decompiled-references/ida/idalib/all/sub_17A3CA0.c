__int64 *__fastcall sub_17A3CA0(__int64 a1, __int64 *a2)
{
  int v4; // eax
  __int64 v5; // rdi

  while ( 1 )
  {
    v4 = *((_DWORD *)a2 + 2);
    if ( (v4 & 8) == 0 )
      goto LABEL_3;
    if ( (v4 & 0x80u) == 0 )
    {
      v5 = a2[45];
      if ( v5 )
      {
        if ( sub_B8E490(v5) )
          goto LABEL_3;
        v4 = *((_DWORD *)a2 + 2);
      }
    }
    if ( (v4 & 0x20) == 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
      return a2;
LABEL_3:
    a2 = (__int64 *)*a2;
  }
}
