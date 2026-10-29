__int64 __fastcall compile_idc_text(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  void *v6; // r15
  __int64 v7; // rbp
  unsigned int v8; // ebx

  v6 = qword_2CAA770;
  qmutex_lock(qword_2CAA770);
  v7 = sub_76BCD0();
  lex_init_string(*(_QWORD *)(v7 + 32), a1, *(_QWORD *)(v7 + 24));
  v8 = sub_7683C0(v7, a3, a2, a4 ^ 1u);
  qmutex_unlock(v6);
  return v8;
}

