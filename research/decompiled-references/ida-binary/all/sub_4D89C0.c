__int64 __fastcall sub_4D89C0(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx

  v2 = a2 / (unsigned __int64)*(int *)(a1 + 376);
  v3 = -1;
  if ( v2 < *(_QWORD *)(a1 + 448) )
    return *(_QWORD *)(*(_QWORD *)(a1 + 440) + 8 * v2);
  return v3;
}
