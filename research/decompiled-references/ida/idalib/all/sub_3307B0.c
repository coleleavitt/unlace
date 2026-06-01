int sub_3307B0()
{
  _BYTE *v0; // rax

  v0 = byte_2CFBFB8;
  if ( !byte_2CFBFB8[0] )
  {
    byte_2CFBFB8[0] = 1;
    qword_2CFBFC0[1] = 4;
    qword_2CFBFC0[0] = &qword_2CFBFC0[3];
    LODWORD(qword_2CFBFC0[2]) = 0;
    BYTE4(qword_2CFBFC0[2]) = 1;
    qword_2CFBFC0[7] = &qword_2CFBFC0[10];
    qword_2CFBFC0[8] = 4;
    LODWORD(qword_2CFBFC0[9]) = 0;
    BYTE4(qword_2CFBFC0[9]) = 1;
    qword_2CFBFC0[14] = 0;
    qword_2CFBFC0[15] = 0;
    LODWORD(qword_2CFBFC0[16]) = 0;
    LODWORD(v0) = __cxa_atexit(sub_201A730, qword_2CFBFC0, &off_2B25620);
  }
  return (int)v0;
}
