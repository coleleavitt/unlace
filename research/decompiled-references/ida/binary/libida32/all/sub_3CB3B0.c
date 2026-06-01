__int64 __fastcall sub_3CB3B0(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = sub_3B9AA0((__int64)a1, a2, 0);
  result = 0;
  if ( (v4 & 0x400) != 0 )
  {
    sub_396090(0x10u, a2, a3, 0);
    if ( (v4 & 0x60000) != 0 )
      v4 = sub_3CB2E0((__int64)a1, a2, v4, a3);
    sub_3C3D00(a1, a2, a3, v4);
    if ( (~(_BYTE)a3 & 0xF) != 0 )
    {
      if ( a3 <= 7 )
        v4 &= ~(15LL << (4 * ((unsigned __int8)a3 + (a3 > 1) + 5)));
    }
    else
    {
      v4 &= 0xFF000000F00FFFFFLL;
    }
    if ( (unsigned __int8)sub_3CAE70(a1, a2, v4) )
    {
      if ( qword_2CA1648 )
        qword_2CA1648(a2, 1);
    }
    sub_396090(0x11u, a2, a3);
    return 1;
  }
  return result;
}

