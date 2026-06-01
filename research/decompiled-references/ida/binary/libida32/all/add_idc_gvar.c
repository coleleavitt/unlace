__int64 __fastcall add_idc_gvar(const char *a1)
{
  void *v1; // rbp
  _QWORD *v2; // rax
  __int64 v3; // rbx

  v1 = qword_2CAA770;
  qmutex_lock(qword_2CAA770);
  v2 = (_QWORD *)sub_76BCD0();
  v3 = sub_76D330(v2, a1);
  qmutex_unlock(v1);
  return v3;
}

