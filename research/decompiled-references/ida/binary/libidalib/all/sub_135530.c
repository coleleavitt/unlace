__int64 __fastcall sub_135530(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 184) + 16LL * **(_QWORD **)a2;
  qword_2450D0 = *(_QWORD *)v3;
  byte_2450D8 = *(_BYTE *)(v3 + 8);
  get_problem_name();
  sub_8F740((__int64)"%08a: %s\n", a3, *(const char **)v3);
  sub_120E80();
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

