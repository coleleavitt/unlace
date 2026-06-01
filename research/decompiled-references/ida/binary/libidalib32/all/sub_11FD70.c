__int64 sub_11FD70()
{
  int data_elsize; // ebp
  int v2; // eax
  int v3; // esi
  int v4; // eax

  if ( (qword_251710 & 0x600) != 0x400
    || (qword_251710 & 0xE0000000) != 0x80000000LL && (qword_251710 & 0xF0000000) != 0x40000000 )
  {
    return sub_11F5C0(qword_251700);
  }
  data_elsize = get_data_elsize();
  v2 = nbits();
  v3 = v2 + 14;
  v4 = v2 + 7;
  if ( v4 >= 0 )
    v3 = v4;
  return sub_119F50((unsigned int)qword_251700, data_elsize * (v3 >> 3));
}

