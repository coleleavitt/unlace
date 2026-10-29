__int64 __fastcall compile_idc_text(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  void *v6; // r15
  __int64 v7; // rbp
  unsigned int v8; // ebx

  v6 = qword_2CD4690;
  qmutex_lock(qword_2CD4690);
  v7 = sub_78C130();
  lex_init_string(*(_QWORD *)(v7 + 32), a1, *(_QWORD *)(v7 + 24));
  v8 = sub_788920(v7, a3, a2, a4 ^ 1u);
  qmutex_unlock(v6);
  return v8;
}
