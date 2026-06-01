int sub_5A17C0()
{
  __int64 *v0; // rax

  v0 = &qword_4B00E38;
  if ( !(_BYTE)qword_4B00E38 )
  {
    LOBYTE(qword_4B00E38) = 1;
    LODWORD(qword_4B00E40[2]) = 0;
    qword_4B00E40[0] = (__int64)&qword_4B00E40[3];
    qword_4B00E40[7] = (__int64)&qword_4B00E40[10];
    LODWORD(qword_4B00E40[16]) = 0;
    qword_4B00E40[1] = 4;
    BYTE4(qword_4B00E40[2]) = 1;
    qword_4B00E40[8] = 4;
    LODWORD(qword_4B00E40[9]) = 0;
    BYTE4(qword_4B00E40[9]) = 1;
    qword_4B00E40[14] = 0;
    qword_4B00E40[15] = 0;
    LODWORD(v0) = __cxa_atexit(sub_349AD70, qword_4B00E40, &off_47CFE00);
  }
  return (int)v0;
}

