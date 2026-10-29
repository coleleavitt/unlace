__int64 __fastcall compile_idc_file(__int64 a1, __int64 a2, char a3)
{
  void *v5; // r12
  __int64 v6; // rax
  __int64 v7; // r14
  _QWORD *v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rsi
  unsigned int v11; // ebx
  _QWORD v13[11]; // [rsp+0h] [rbp-58h] BYREF

  v13[3] = __readfsqword(0x28u);
  v5 = qword_2CD4690;
  qmutex_lock(qword_2CD4690);
  v6 = off_2C81CA0();
  sub_7A0540(v6, 0, 0);
  v7 = sub_78C130();
  if ( (unsigned int)lex_init_file(*(_QWORD *)(v7 + 32)) )
  {
    sub_7886A0(*(_QWORD *)(v7 + 32), 0, a2);
    lex_term_file(*(_QWORD *)(v7 + 32), a3 & 1);
    v11 = 0;
  }
  else
  {
    v8 = v13;
    v13[1] = -1;
    v13[0] = &off_2B39F68;
    if ( (a3 & 2) == 0 )
      v8 = nullptr;
    v9 = sub_788920(v7, (__int64)v8, a2, (a3 & 4) == 0);
    v10 = a3 & 1;
    v11 = v9;
    lex_term_file(*(_QWORD *)(v7 + 32), v10);
  }
  qmutex_unlock(v5);
  return v11;
}
