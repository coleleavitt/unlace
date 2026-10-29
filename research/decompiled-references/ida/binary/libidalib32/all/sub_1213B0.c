__int64 __fastcall sub_1213B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
    return 0;
  if ( getnseg() )
    sub_120900();
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == 1 )
    return 0;
  memmove(*(void **)a2, (const void *)(*(_QWORD *)a2 + 8LL), 8 * v3 - 8);
  --*(_QWORD *)(a2 + 8);
  return 2;
}

