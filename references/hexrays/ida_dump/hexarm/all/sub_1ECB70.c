__int64 __fastcall sub_1ECB70(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *a2;
  if ( (unsigned __int8)v2 <= 0xFu )
  {
    v3 = 49186;
    if ( _bittest64(&v3, v2) )
      ++*(_QWORD *)(a1 + 48);
  }
  return 0;
}
