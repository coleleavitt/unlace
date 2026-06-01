__int64 __fastcall sub_48B5B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  if ( *(int *)a2 < 0 || *(int *)(a2 + 4) < 0 || !*(_QWORD *)(a2 + 16) )
    return -1;
  v2 = HIDWORD(*(_QWORD *)(a2 + 8));
  if ( v2 == 0xFFFFFFFFLL )
    return -1;
  return v2;
}
