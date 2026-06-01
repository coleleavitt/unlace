__int64 sub_2EC200()
{
  __int64 result; // rax

  qword_2CCB5B0 = 0;
  xmmword_2CCB5B8 = 0;
  __cxa_atexit(sub_3FA410, &qword_2CCB5B0, &off_2B25620);
  result = qmutex_create();
  qword_2CCB5A8 = result;
  return result;
}
