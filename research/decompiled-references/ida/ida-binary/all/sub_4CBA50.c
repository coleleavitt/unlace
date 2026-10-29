char __fastcall sub_4CBA50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rbx
  int v6; // eax
  QT::QStackedWidget **v7; // rbp

  if ( *(_BYTE *)(a1 + 32) )
    goto LABEL_15;
  v5 = a1;
  a1 = *(_QWORD *)(a1 + 24);
  if ( *(_BYTE *)(v5 + 64) )
    goto LABEL_14;
  v6 = *(_DWORD *)v5;
  a2 = *(_QWORD *)(v5 + 56);
  if ( *(_DWORD *)v5 != 1 )
  {
    if ( v6 != 2 )
      return v6;
    if ( !*(_BYTE *)(v5 + 144) )
    {
      v7 = *(QT::QStackedWidget ***)(v5 + 136);
      LOBYTE(v6) = v7 != nullptr;
      if ( v7 != nullptr && a2 != 0 )
      {
        if ( a1 )
        {
          v6 = *(_DWORD *)(v5 + 152);
          if ( v6 >= 0 )
          {
            *(_BYTE *)(a2 + 44) = 0;
            sub_4C9670(a5, a1, a2, v7, *(_DWORD *)(v5 + 152));
            LOBYTE(v6) = (*((__int64 (__fastcall **)(QT::QStackedWidget **, _QWORD))*v7 + 60))(
                           v7,
                           *(unsigned int *)(v5 + 152));
          }
        }
      }
      return v6;
    }
LABEL_16:
    sub_4C48B0(a5, a1, a2, a3, a4);
    LOBYTE(v6) = sub_4CBB30((void *)a1);
    return v6;
  }
  if ( *(_BYTE *)(v5 + 96) )
  {
LABEL_14:
    sub_4C48B0(a5, a1, a2, a3, a4);
LABEL_15:
    sub_4C48B0(a5, a1, a2, a3, a4);
    goto LABEL_16;
  }
  if ( a2 )
    LOBYTE(v6) = sub_4CB740(
                   (QT::QWidget *)a1,
                   *(_DWORD *)(v5 + 104),
                   *(QT::QWidget **)(v5 + 56),
                   *(QT::QWidget **)(v5 + 88),
                   (__int64 *)(v5 + 108),
                   a5);
  return v6;
}
