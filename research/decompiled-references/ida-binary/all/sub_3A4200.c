__int64 __fastcall sub_3A4200(__int64 a1)
{
  __int64 v1; // rax
  char **v3; // rbx
  _DWORD *v4; // rbp
  void *v5; // rsi

  if ( dword_8BCB00[0] == -2 )
  {
    v3 = off_868708;
    v4 = &unk_8BCB04;
    do
    {
      v5 = *v3++;
      *v4++ = sub_47A0E0(QT::QCoreApplication::self, v5, 0);
    }
    while ( v3 != (char **)&off_868740 );
    dword_8BCB00[0] = -1;
  }
  v1 = *(unsigned __int8 *)(a1 + 80);
  if ( (unsigned __int8)v1 > 7u )
    return 0xFFFFFFFFLL;
  else
    return (unsigned int)dword_8BCB00[v1];
}
