__int64 sub_2E8E30()
{
  __int64 result; // rax

  qword_2CA16B0 = 0;
  xmmword_2CA16B8 = 0;
  __cxa_atexit(sub_3E7540, &qword_2CA16B0, &off_2AFC540);
  result = qmutex_create();
  qword_2CA16A8 = result;
  return result;
}

