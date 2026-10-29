__int64 sub_3E7F60()
{
  __int64 v0; // rbp
  __int64 v1; // rbx

  v0 = qword_2CA16A8;
  qmutex_lock(qword_2CA16A8);
  v1 = operator new(0x6B8u);
  sub_3E7960(v1);
  qword_2CA1698 = v1;
  qmutex_unlock(v0);
  return v1;
}

