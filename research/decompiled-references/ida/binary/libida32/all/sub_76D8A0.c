const char *__fastcall sub_76D8A0(const char *a1, int *a2)
{
  void *v3; // r13
  __int64 *v4; // rax
  __int64 *v5; // r12
  int v6; // eax
  int v7; // esi
  const char *v8; // rbx

  v3 = qword_2CAA770;
  qmutex_lock(qword_2CAA770);
  v4 = (__int64 *)sub_76BCD0();
  v5 = v4;
  if ( a1 )
  {
    v6 = sub_76D7A0(v4, a1);
    if ( v6 == 0x7FFFFFFF )
    {
      v8 = nullptr;
      goto LABEL_4;
    }
  }
  else
  {
    v6 = -1;
  }
  v7 = *a2;
  *a2 = v6;
  v8 = sub_76D830(v5, v7);
LABEL_4:
  qmutex_unlock(v3);
  return v8;
}

