unsigned __int64 __fastcall sub_59776A(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rax
  __int64 v3; // [rsp+18h] [rbp-18h] BYREF
  unsigned __int64 v4; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 i; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(a1 + 48) )
    sub_59B256(
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 96),
      *(_QWORD *)(a1 + 104),
      *(_QWORD *)(a1 + 120),
      *(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 112));
  sub_5970BA(a1, (__int64)"S 0 ");
  sub_598238(a1, *(_QWORD *)(a1 + 120));
  sub_5970BA(a1, (__int64)" ");
  sub_598238(a1, *(_QWORD *)(a1 + 112));
  sub_5970BA(a1, (__int64)" ");
  sub_598238(a1, *(_QWORD *)(a1 + 104));
  sub_597166(a1);
  v3 = 384;
  for ( i = 0; ; i += 384LL )
  {
    result = *(_QWORD *)(a1 + 104);
    if ( i >= result )
      break;
    sub_5970BA(a1, (__int64)"S ");
    sub_598238(a1, i + *(_QWORD *)(a1 + 112));
    sub_5970BA(a1, (__int64)" ");
    v4 = *(_QWORD *)(a1 + 104) - i;
    v2 = (unsigned __int64 *)sub_598413(&v3, &v4);
    sub_597110(a1, (unsigned __int8 *)(i + *(_QWORD *)(a1 + 96)), *v2);
    sub_597166(a1);
  }
  return result;
}
