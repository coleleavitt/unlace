_QWORD *sub_32F600()
{
  qword_2CD3060[0] = 0;
  qword_2CD3060[1] = &qword_2CD3060[1];
  qword_2CD3060[2] = &qword_2CD3060[1];
  return qword_2CD3060;
}

