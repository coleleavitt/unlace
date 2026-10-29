QT::QComboBox *__fastcall sub_4EE2C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  double v3; // xmm0_8
  QT::QComboBox *v4; // rbx
  _QWORD v6[3]; // [rsp+0h] [rbp-38h] BYREF
  int v7[2]; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v7 = __readfsqword(0x28u);
  v3 = (*(double (__fastcall **)(_QWORD *, _QWORD, __int64, _QWORD))(**(_QWORD **)(v2 + 56) + 96LL))(
         v6,
         *(_QWORD *)(v2 + 56),
         a2 + 144,
         **(_QWORD **)(a2 + 136));
  v4 = sub_4EDDB0(a2, (__int64)v6, v3);
  if ( v6[0] )
  {
    v6[1] = 0;
    qfree(v6[0], (const char *)v6);
  }
  return v4;
}
