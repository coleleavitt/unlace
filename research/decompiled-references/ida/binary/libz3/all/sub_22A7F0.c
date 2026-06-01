__int64 sub_22A7F0()
{
  __int64 result; // rax

  result = operator new(0x28u);
  *(_QWORD *)(result + 32) = 0;
  qword_1C7F5A8 = (pthread_mutex_t *)result;
  *(_OWORD *)result = 0;
  *(_OWORD *)(result + 16) = 0;
  return result;
}

