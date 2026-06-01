__int64 __fastcall sub_3D0D10(__int64 *a1, void *a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = sub_3BE900(a1, (unsigned __int64)a2, 0);
  result = 0;
  if ( (v4 & 0x400) != 0 )
  {
    sub_39ADA0(0x10u, a2, a3, 0);
    if ( (v4 & 0x60000) != 0 )
      v4 = sub_3D0C40((__int64)a1, a2, v4, a3);
    sub_3C8FE0(a1, (unsigned __int64)a2, a3, v4);
    if ( (~(_BYTE)a3 & 0xF) != 0 )
    {
      if ( a3 <= 7 )
        v4 &= ~(15LL << (4 * ((unsigned __int8)a3 + (a3 > 1) + 5)));
    }
    else
    {
      v4 &= 0xFF000000F00FFFFFLL;
    }
    if ( (unsigned __int8)sub_3D07C0(a1, a2, v4) )
    {
      if ( qword_2CCB548 )
        qword_2CCB548(a2, 1);
    }
    sub_39ADA0(0x11u, a2, a3);
    return 1;
  }
  return result;
}
