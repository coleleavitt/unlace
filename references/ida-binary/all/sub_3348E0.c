__int64 __fastcall sub_3348E0(__int64 a1, QT::QWidget **a2, double a3)
{
  __int64 ph; // rbp
  __int64 result; // rax

  sub_206150(a1, a2, a3);
  ph = get_ph(a1, (const char *)a2);
  result = netnode_inited(a3);
  if ( (_BYTE)result )
  {
    if ( (*(_BYTE *)(ph + 12) & 0x20) != 0 )
    {
      sub_534680(&qword_8CEBA0, &off_8662A0, 8, 0);
      sub_5392E0(a2, 0, 1);
      return sub_539A10(a2, &qword_8CEBA0);
    }
  }
  return result;
}
