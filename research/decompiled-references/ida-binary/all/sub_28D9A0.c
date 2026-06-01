__int64 __fastcall sub_28D9A0(QT::QAbstractItemView *a1, __int64 a2, double a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 ph; // rbp
  __int64 result; // rax

  sub_2DC7E0(a1);
  v5 = unk_8CA9C0;
  sub_5399B0(a2, unk_8CA9C0, "Modify filters...", 1);
  ph = get_ph(a2, v5, v6);
  result = netnode_inited(a3);
  if ( (_BYTE)result )
  {
    if ( (*(_BYTE *)(ph + 12) & 0x20) != 0 )
    {
      sub_534680(&qword_8CC8E0, &off_860B80, 10, 0);
      sub_5392E0(a2, 0, 1);
      return sub_539A10(a2, &qword_8CC8E0);
    }
  }
  return result;
}
