int sub_32D3F0()
{
  _BYTE *v0; // rax

  v0 = byte_2CD2098;
  if ( !byte_2CD2098[0] )
  {
    byte_2CD2098[0] = 1;
    qword_2CD20A0[1] = 4;
    qword_2CD20A0[0] = &qword_2CD20A0[3];
    LODWORD(qword_2CD20A0[2]) = 0;
    BYTE4(qword_2CD20A0[2]) = 1;
    qword_2CD20A0[7] = &qword_2CD20A0[10];
    qword_2CD20A0[8] = 4;
    LODWORD(qword_2CD20A0[9]) = 0;
    BYTE4(qword_2CD20A0[9]) = 1;
    qword_2CD20A0[14] = 0;
    qword_2CD20A0[15] = 0;
    LODWORD(qword_2CD20A0[16]) = 0;
    LODWORD(v0) = __cxa_atexit(sub_1FF69F0, qword_2CD20A0, &off_2AFC540);
  }
  return (int)v0;
}

