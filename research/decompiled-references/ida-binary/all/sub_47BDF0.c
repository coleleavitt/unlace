void __fastcall sub_47BDF0(__int64 a1, const char *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax

  v2 = *((_QWORD *)&xmmword_8D1740 + 1);
  v3 = **((_QWORD **)&xmmword_8D1740 + 1);
  **(_QWORD **)(*((_QWORD *)&xmmword_8D1740 + 1) + 8LL) = **((_QWORD **)&xmmword_8D1740 + 1);
  *(_QWORD *)(v3 + 8) = *(_QWORD *)(v2 + 8);
  qfree(v2, a2);
  --qword_8D1750;
}
