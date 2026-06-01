__int64 __fastcall sub_591CF6(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  void *v3; // rbx
  void *v4; // rbx
  __int64 v6; // [rsp+18h] [rbp-28h] BYREF
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v8[3]; // [rsp+28h] [rbp-18h] BYREF

  pthread_mutex_lock(&mutex);
  v7 = a1;
  v1 = sub_5939CC(qword_8D29E0);
  v2 = sub_5939A6(qword_8D29E0);
  v6 = sub_5939F5(v2, v1, &v7);
  v3 = qword_8D29E0;
  sub_593A2E(v8, &v6);
  sub_593A58(v3, v8[0]);
  if ( (unsigned __int8)sub_593AC8(qword_8D29E0) )
  {
    v4 = qword_8D29E0;
    if ( qword_8D29E0 )
    {
      sub_593B0A(qword_8D29E0);
      operator delete(v4, 0x18u);
    }
    qword_8D29E0 = nullptr;
    sub_591A03();
    sub_591F7C();
  }
  pthread_mutex_unlock(&mutex);
  sub_5936BC(a1 + 152);
  sub_5936A0(a1 + 136);
  sub_593670(a1 + 32);
  return sub_593860(a1 + 24);
}
