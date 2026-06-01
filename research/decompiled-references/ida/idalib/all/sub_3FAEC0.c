__int64 sub_3FAEC0()
{
  __int64 v0; // rbp
  __int64 v1; // rbx

  v0 = qword_2CCB5A8;
  qmutex_lock(qword_2CCB5A8);
  v1 = operator new(0x780u);
  sub_3FA820(v1);
  qword_2CCB598 = v1;
  qmutex_unlock(v0);
  return v1;
}
