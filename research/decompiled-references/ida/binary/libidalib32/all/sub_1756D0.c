_QWORD *sub_1756D0()
{
  _QWORD *v0; // rdx
  _QWORD *v1; // rax

  v0 = (_QWORD *)qalloc_or_throw();
  memset(v0 + 2, 0, 0xC8u);
  *v0 = &xmmword_2553D0;
  v1 = *((_QWORD **)&xmmword_2553D0 + 1);
  v0[1] = *((_QWORD *)&xmmword_2553D0 + 1);
  *v1 = v0;
  ++qword_2553E0;
  *((_QWORD *)&xmmword_2553D0 + 1) = v0;
  return v0 + 2;
}

