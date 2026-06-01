unsigned __int64 __fastcall sub_7A7BD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a2 + 72);
  result = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2 == (v2 & 0xFFFFFFFFFFFFFFF8LL) )
  {
    result = 0;
    if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 51 > 1 )
      v3 = 0;
    *(_QWORD *)(a1 + 48) = v3 | v2 & 7;
    *(_QWORD *)(a2 + 72) = a1;
  }
  else
  {
    do
    {
      v5 = result;
      result = *(_QWORD *)(result + 72);
    }
    while ( result != a2 );
    *(_QWORD *)(v5 + 72) = v3;
    *(_QWORD *)(a2 + 72) = a1;
  }
  return result;
}

