__int64 __fastcall sub_2CA210(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // ebx
  _BYTE v5[48]; // [rsp+0h] [rbp-458h] BYREF
  _BYTE v6[1032]; // [rsp+30h] [rbp-428h] BYREF
  unsigned __int64 v7; // [rsp+438h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  sub_1E96E0((QT::QObject *)v5, a3, a1, 0);
  if ( (unsigned __int8)getinf_flag(44, 32) )
    v3 = hexplace_t__ea2str(v6, 1024, *(_QWORD *)(a1 + 728), a2);
  else
    v3 = 0;
  sub_1E98C0((QT::QObject *)v5);
  return v3;
}
