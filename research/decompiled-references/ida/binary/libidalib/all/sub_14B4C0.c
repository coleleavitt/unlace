__int64 __fastcall sub_14B4C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  sub_120E80();
  v2 = *(_QWORD *)(a2 + 8);
  result = 0;
  if ( v2 != 1 )
  {
    memmove(*(void **)a2, (const void *)(*(_QWORD *)a2 + 8LL), 8 * v2 - 8);
    --*(_QWORD *)(a2 + 8);
    return 2;
  }
  return result;
}

