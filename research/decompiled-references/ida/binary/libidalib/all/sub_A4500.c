__int64 sub_A4500()
{
  return (unsigned int)((qword_251F70 - qword_251F60) >> 5)
       + (unsigned int)((qword_251F80 - qword_251F88) >> 5)
       + 16 * ((qword_251F98 == 0) + (unsigned int)((qword_251F98 - qword_251F78) >> 3) - 1);
}

