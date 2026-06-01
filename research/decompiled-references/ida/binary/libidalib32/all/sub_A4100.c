__int64 sub_A4100()
{
  return (unsigned int)((qword_250EB0 - qword_250EA0) >> 5)
       + (unsigned int)((qword_250EC0 - qword_250EC8) >> 5)
       + 16 * ((qword_250ED8 == 0) + (unsigned int)((qword_250ED8 - qword_250EB8) >> 3) - 1);
}

