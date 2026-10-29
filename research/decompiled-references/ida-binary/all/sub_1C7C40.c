__int64 __fastcall sub_1C7C40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // ebx
  unsigned __int16 *v5; // rbp
  QT::QChar *v6; // rdi

  v2 = *(_QWORD *)(a2 + 16);
  if ( (_DWORD)v2 && (v4 = v2 - 1, v4 >= 0) )
  {
    v5 = (unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 2LL * v4);
    while ( 1 )
    {
      v6 = (QT::QChar *)*v5;
      if ( (unsigned int)((_DWORD)v6 - 9) > 4
        && (_DWORD)v6 != 32
        && ((unsigned int)v6 <= 0x7F
         || (_DWORD)v6 != 133 && (_DWORD)v6 != 160 && !(unsigned __int8)QT::QChar::isSpace_helper(v6, a2)) )
      {
        break;
      }
      --v4;
      --v5;
      if ( v4 == -1 )
        goto LABEL_12;
    }
    QT::QString::mid(a1, a2, 0, v4 + 1);
  }
  else
  {
LABEL_12:
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)a1 = 0;
  }
  return a1;
}
