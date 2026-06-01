int sub_5DCDB0()
{
  __int64 *v0; // rax

  v0 = &qword_4B22598;
  if ( !(_BYTE)qword_4B22598 )
  {
    LOBYTE(qword_4B22598) = 1;
    LODWORD(qword_4B225A0[2]) = 0;
    qword_4B225A0[0] = (__int64)&qword_4B225A0[3];
    qword_4B225A0[7] = (__int64)&qword_4B225A0[10];
    LODWORD(qword_4B225A0[16]) = 0;
    qword_4B225A0[1] = 4;
    BYTE4(qword_4B225A0[2]) = 1;
    qword_4B225A0[8] = 4;
    LODWORD(qword_4B225A0[9]) = 0;
    BYTE4(qword_4B225A0[9]) = 1;
    qword_4B225A0[14] = 0;
    qword_4B225A0[15] = 0;
    LODWORD(v0) = __cxa_atexit(sub_3860990, qword_4B225A0, &off_47CFE00);
  }
  return (int)v0;
}

