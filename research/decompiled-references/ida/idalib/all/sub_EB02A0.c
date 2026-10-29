__int64 __fastcall sub_EB02A0(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx

  v1 = *a1;
  v2 = *(_QWORD *)(v1 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v1 + 24) - v2) <= 2 )
    return sub_227BF10(v1, "seq", 3);
  *(_BYTE *)(v2 + 2) = 113;
  *(_WORD *)v2 = 25971;
  *(_QWORD *)(v1 + 32) += 3LL;
  return 25971;
}
