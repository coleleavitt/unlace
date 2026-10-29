void __fastcall sub_158F10(__int64 a1)
{
  TView *v1; // rbp
  __int64 v2; // rax
  bool v3; // zf

  v1 = (TView *)(a1 - 160);
  *(_QWORD *)(a1 - 160) = &off_23A4B8;
  *(_QWORD *)(a1 - 88) = &off_23A7A0;
  *(_QWORD *)(a1 - 56) = off_23A7B8;
  *(_QWORD *)a1 = off_23A7E8;
  qfree();
  v2 = *(int *)(a1 + 1032);
  *(_QWORD *)(a1 + 1040) = 0;
  if ( (_DWORD)v2 != -1 && (v3 = v1 == (TView *)qword_2532B0, qword_253100[v2] = 0, v3) )
  {
    qword_2532B0 = 0;
    sub_F9290(v1);
  }
  else
  {
    sub_F9290(v1);
  }
}

