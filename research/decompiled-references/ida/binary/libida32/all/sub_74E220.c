void __fastcall sub_74E220(char a1)
{
  __int64 v1; // rdx
  char v2; // r8
  _BYTE **v3; // rax
  _BYTE *v4; // rdx
  int v5; // r8d
  char v6; // cl

  v1 = qword_2CAA4F8;
  if ( (unsigned __int64)&unk_2CAA500 < qword_2CAA4F8 )
  {
    v2 = *(_BYTE *)(qword_2CAA4F8 - 8);
    v3 = (_BYTE **)(qword_2CAA4F8 - 16);
    qword_2CAA4F8 -= 16;
    *(_BYTE *)qword_2CAA5B8 = v2;
    v4 = *(_BYTE **)(v1 - 16);
    v5 = qword_2CAA5B8;
    qword_2CAA5B8 = (__int64)v4;
    if ( a1 )
    {
      if ( v5 != (_DWORD)qword_2CAA5C0 && a1 == 1 && !byte_2CAA5A1 )
        sub_74E200();
    }
    else if ( &unk_2CAA500 < (_UNKNOWN *)v3 )
    {
      do
      {
        v6 = *((_BYTE *)v3 - 8);
        v3 -= 2;
        *v4 = v6;
        v4 = *v3;
        qword_2CAA5B8 = (__int64)*v3;
      }
      while ( &unk_2CAA500 < (_UNKNOWN *)v3 );
      qword_2CAA4F8 = (__int64)v3;
    }
  }
}

