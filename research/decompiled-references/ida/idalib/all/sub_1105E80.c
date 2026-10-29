__int64 *sub_1105E80()
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rax

  if ( (_BYTE)byte_2CD87D0 )
    return &qword_2CD87E0;
  if ( !__cxa_guard_acquire(&byte_2CD87D0) )
    return &qword_2CD87E0;
  sub_21BB040(
    (unsigned int)&qword_2CD87E0,
    (unsigned int)&off_2BA8F10,
    (unsigned int)&unk_25EE4C0,
    15,
    (unsigned int)&unk_2B63460,
    3567,
    0);
  qword_2CD87E0 = (__int64)&off_2B63418;
  v1 = (unsigned int)dword_2CD8838;
  v2 = (unsigned int)dword_2CD8838 + 1LL;
  if ( (unsigned int)dword_2CD883C < v2 )
  {
    sub_2237220((char *)&unk_2CD8840 - 16, &unk_2CD8840, v2, 16);
    v1 = (unsigned int)dword_2CD8838;
  }
  v3 = (_QWORD *)(qword_2CD8830 + 16 * v1);
  *v3 = &unk_25EFFE1;
  v3[1] = 1;
  v4 = (unsigned int)++dword_2CD8838;
  if ( (unsigned __int64)(unsigned int)dword_2CD8838 + 1 > (unsigned int)dword_2CD883C )
  {
    sub_2237220((char *)&unk_2CD8840 - 16, &unk_2CD8840, (unsigned int)dword_2CD8838 + 1LL, 16);
    v4 = (unsigned int)dword_2CD8838;
  }
  v5 = (_QWORD *)(qword_2CD8830 + 16 * v4);
  *v5 = &unk_25EFFE3;
  v5[1] = 2;
  v6 = (unsigned int)++dword_2CD8838;
  if ( (unsigned __int64)(unsigned int)dword_2CD8838 + 1 > (unsigned int)dword_2CD883C )
  {
    sub_2237220((char *)&unk_2CD8840 - 16, &unk_2CD8840, (unsigned int)dword_2CD8838 + 1LL, 16);
    v6 = (unsigned int)dword_2CD8838;
  }
  v7 = (_QWORD *)(qword_2CD8830 + 16 * v6);
  *v7 = &unk_25EFFE6;
  v7[1] = 1;
  ++dword_2CD8838;
  sub_21BB130(&qword_2CD87E0);
  qword_2CD87E0 = (__int64)&off_2B63438;
  __cxa_atexit((void (*)(void *))sub_1105E30, &qword_2CD87E0, &off_2B25620);
  __cxa_guard_release(&byte_2CD87D0);
  return &qword_2CD87E0;
}
