_QWORD *sub_47B970()
{
  _QWORD *v0; // rdx
  _QWORD *v1; // rax

  v0 = (_QWORD *)qalloc_or_throw(216);
  memset(v0 + 2, 0, 0xC8u);
  *v0 = &xmmword_8D1740;
  v1 = *((_QWORD **)&xmmword_8D1740 + 1);
  v0[1] = *((_QWORD *)&xmmword_8D1740 + 1);
  *v1 = v0;
  ++qword_8D1750;
  *((_QWORD *)&xmmword_8D1740 + 1) = v0;
  return v0 + 2;
}
