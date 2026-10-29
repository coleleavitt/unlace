__int64 __fastcall sub_144D80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  if ( (unsigned __int8)getn_selector() )
    sub_120E80();
  v2 = *(_QWORD *)(a2 + 8);
  v3 = 0;
  if ( v2 != 1 )
  {
    memmove(*(void **)a2, (const void *)(*(_QWORD *)a2 + 8LL), 8 * v2 - 8);
    --*(_QWORD *)(a2 + 8);
    return 2;
  }
  return v3;
}

