__int64 *sub_10E2140()
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rax

  if ( (_BYTE)byte_2CAE8B0 )
    return &qword_2CAE8C0;
  if ( !__cxa_guard_acquire(&byte_2CAE8B0) )
    return &qword_2CAE8C0;
  sub_2197300(
    (unsigned int)&qword_2CAE8C0,
    (unsigned int)&off_2B7EF70,
    (unsigned int)&unk_25CA360,
    15,
    (unsigned int)&unk_2B394C0,
    3567,
    0);
  qword_2CAE8C0 = (__int64)&off_2B39478;
  v1 = (unsigned int)dword_2CAE918;
  v2 = (unsigned int)dword_2CAE918 + 1LL;
  if ( (unsigned int)dword_2CAE91C < v2 )
  {
    sub_22134E0((char *)&unk_2CAE920 - 16, &unk_2CAE920, v2, 16);
    v1 = (unsigned int)dword_2CAE918;
  }
  v3 = (_QWORD *)(qword_2CAE910 + 16 * v1);
  *v3 = &unk_25CBE81;
  v3[1] = 1;
  v4 = (unsigned int)++dword_2CAE918;
  if ( (unsigned __int64)(unsigned int)dword_2CAE918 + 1 > (unsigned int)dword_2CAE91C )
  {
    sub_22134E0((char *)&unk_2CAE920 - 16, &unk_2CAE920, (unsigned int)dword_2CAE918 + 1LL, 16);
    v4 = (unsigned int)dword_2CAE918;
  }
  v5 = (_QWORD *)(qword_2CAE910 + 16 * v4);
  *v5 = &unk_25CBE83;
  v5[1] = 2;
  v6 = (unsigned int)++dword_2CAE918;
  if ( (unsigned __int64)(unsigned int)dword_2CAE918 + 1 > (unsigned int)dword_2CAE91C )
  {
    sub_22134E0((char *)&unk_2CAE920 - 16, &unk_2CAE920, (unsigned int)dword_2CAE918 + 1LL, 16);
    v6 = (unsigned int)dword_2CAE918;
  }
  v7 = (_QWORD *)(qword_2CAE910 + 16 * v6);
  *v7 = &unk_25CBE86;
  v7[1] = 1;
  ++dword_2CAE918;
  sub_21973F0(&qword_2CAE8C0);
  qword_2CAE8C0 = (__int64)&off_2B39498;
  __cxa_atexit((void (*)(void *))sub_10E20F0, &qword_2CAE8C0, &off_2AFC540);
  __cxa_guard_release(&byte_2CAE8B0);
  return &qword_2CAE8C0;
}

