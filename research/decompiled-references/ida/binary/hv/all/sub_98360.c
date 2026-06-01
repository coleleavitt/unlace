pthread_t __fastcall sub_98360(void *(*start_routine)(void *), void *arg)
{
  int v2; // ebp
  pthread_t result; // rax
  pthread_t newthread; // [rsp+8h] [rbp-60h] BYREF
  pthread_attr_t attr; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( !qword_1671D0 )
  {
    qword_1671D0 = j__pthread_self();
    qword_1671D8 = (__int64)sub_98180();
  }
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, 0);
  v2 = pthread_create(&newthread, &attr, start_routine, arg);
  pthread_attr_destroy(&attr);
  result = 0;
  if ( !v2 )
    return newthread;
  return result;
}

