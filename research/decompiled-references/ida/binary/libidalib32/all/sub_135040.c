__int64 __fastcall sub_135040(__int64 a1, __int64 a2, double a3)
{
  unsigned int *v3; // rbp
  __int64 v4; // rdx
  __int64 result; // rax

  v3 = (unsigned int *)(*(_QWORD *)(a1 + 184) + 8LL * **(_QWORD **)a2);
  dword_2440A4 = *v3;
  byte_2440A8 = *((_BYTE *)v3 + 4);
  get_problem_name();
  sub_8F660((__int64)"%08a: %s\n", a3, (const char *)*v3);
  sub_120900();
  v4 = *(_QWORD *)(a2 + 8);
  result = 0;
  if ( v4 != 1 )
  {
    memmove(*(void **)a2, (const void *)(*(_QWORD *)a2 + 8LL), 8 * v4 - 8);
    --*(_QWORD *)(a2 + 8);
    return 2;
  }
  return result;
}

