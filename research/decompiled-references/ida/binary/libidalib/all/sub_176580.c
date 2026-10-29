__int64 sub_176580()
{
  __int64 v0; // rdi
  __int64 v1; // rax
  __int64 result; // rax

  v0 = *((_QWORD *)&xmmword_256590 + 1);
  v1 = **((_QWORD **)&xmmword_256590 + 1);
  **(_QWORD **)(*((_QWORD *)&xmmword_256590 + 1) + 8LL) = **((_QWORD **)&xmmword_256590 + 1);
  *(_QWORD *)(v1 + 8) = *(_QWORD *)(v0 + 8);
  result = qfree();
  --qword_2565A0;
  return result;
}

