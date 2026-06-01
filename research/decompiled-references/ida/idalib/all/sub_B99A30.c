_QWORD *__fastcall sub_B99A30(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx

  v6 = sub_B8FF70(88, a1, a2, 0, a5, a6);
  if ( !(_BYTE)qword_2CCC3F8 && __cxa_guard_acquire(&qword_2CCC3F8) )
  {
    unk_2CCC400 = 2;
    __cxa_guard_release(&qword_2CCC3F8);
  }
  sub_B725B0((__int64)v6, 0x38u, 0, 0);
  v6[5] = &unk_2CCC407;
  v6[6] = 0;
  *v6 = &off_2C02F98;
  *(_OWORD *)(v6 + 7) = 0;
  *(_OWORD *)(v6 + 9) = 0;
  return v6;
}
