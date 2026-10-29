/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482E20
// Address: 0x0000000000482E20

//----- (0000000000482E20) ----------------------------------------------------
pthread_t __fastcall sub_482E20(void *(*start_routine)(void *), void *arg)
{
  int v2; // ebp
  pthread_t result; // rax
  pthread_t newthread; // [rsp+8h] [rbp-60h] BYREF
  pthread_attr_t attr; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( !qword_4C9510 )
  {
    qword_4C9510 = j__pthread_self();
    qword_4C9518 = (__int64)sub_482C40();
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
// 4C9510: using guessed type __int64 qword_4C9510;
// 4C9518: using guessed type __int64 qword_4C9518;
