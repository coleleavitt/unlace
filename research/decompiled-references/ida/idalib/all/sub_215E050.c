unsigned __int64 __fastcall sub_215E050(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 112);
  v3 = *a2;
  if ( *(_QWORD *)(a1 + 96) )
  {
    result = v3 + 2 * (9LL * *(unsigned __int8 *)(v3 + 17) + 9);
    if ( result > v2 )
      result = *(_QWORD *)(a1 + 112);
    *a2 = result;
  }
  else
  {
    result = v3 + 4 * (5LL * *(unsigned __int8 *)(v3 + 19) + 5);
    if ( result > v2 )
      result = *(_QWORD *)(a1 + 112);
    *a2 = result;
  }
  return result;
}
