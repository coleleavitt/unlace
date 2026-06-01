__int64 sub_175A80()
{
  __int64 v0; // rdi
  __int64 v1; // rax
  __int64 result; // rax

  v0 = *((_QWORD *)&xmmword_2553D0 + 1);
  v1 = **((_QWORD **)&xmmword_2553D0 + 1);
  **(_QWORD **)(*((_QWORD *)&xmmword_2553D0 + 1) + 8LL) = **((_QWORD **)&xmmword_2553D0 + 1);
  *(_QWORD *)(v1 + 8) = *(_QWORD *)(v0 + 8);
  result = qfree();
  --qword_2553E0;
  return result;
}

