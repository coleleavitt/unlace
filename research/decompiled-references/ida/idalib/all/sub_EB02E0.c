__int64 __fastcall sub_EB02E0(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx

  v1 = *a1;
  v2 = *(_QWORD *)(v1 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v1 + 24) - v2) <= 5 )
    return sub_227BF10(v1, "nohost", 6);
  *(_DWORD *)v2 = 1869115246;
  *(_WORD *)(v2 + 4) = 29811;
  *(_QWORD *)(v1 + 32) += 6LL;
  return 29811;
}
