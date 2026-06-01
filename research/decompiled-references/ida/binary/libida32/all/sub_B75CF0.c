_QWORD *__fastcall sub_B75CF0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx

  v6 = sub_B6C230(88, a1, a2, 0, a5, a6);
  if ( !(_BYTE)qword_2CA2500 && __cxa_guard_acquire(&qword_2CA2500) )
  {
    unk_2CA2508 = 2;
    __cxa_guard_release(&qword_2CA2500);
  }
  sub_B4E870((__int64)v6, 0x38u, 0, 0);
  v6[5] = &unk_2CA250F;
  v6[6] = 0;
  *v6 = &off_2BD8F98;
  *(_OWORD *)(v6 + 7) = 0;
  *(_OWORD *)(v6 + 9) = 0;
  return v6;
}

