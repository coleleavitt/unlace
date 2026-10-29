__int64 __fastcall sub_5216C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  const char *v3; // rdx

  if ( *(_QWORD *)(a1 + 56) == -1 || *(_BYTE *)(a1 + 64) )
  {
    sub_521660(a1, a2);
    sub_7BE7C0(a1 + 56, a2, 1, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), 0, 83);
    v2 = *(_QWORD *)(a1 + 40);
    v3 = haystack;
    if ( v2 )
      v3 = *(const char **)(a1 + 32);
    sub_7BEF30(a1 + 56, a2, v3, v2, 0, 88);
    *(_BYTE *)(a1 + 64) = 0;
  }
  return *(_QWORD *)(a1 + 56);
}
