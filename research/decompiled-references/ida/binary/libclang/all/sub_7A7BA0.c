unsigned __int64 __fastcall sub_7A7BA0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 > 7 )
  {
    *(_QWORD *)(a2 + 72) = v2 & 0xFFFFFFFFFFFFFFF8LL;
    v2 = *(_QWORD *)(a1 + 48);
  }
  result = v2 & 7;
  *(_QWORD *)(a1 + 48) = result | a2;
  return result;
}

