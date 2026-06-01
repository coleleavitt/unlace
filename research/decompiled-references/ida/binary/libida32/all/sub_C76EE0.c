__int64 __fastcall sub_C76EE0(__int64 a1)
{
  unsigned __int8 v1; // al
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 26);
  if ( v1 == 1 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( v1 )
  {
    if ( v1 > 3u )
      BUG();
    return *(_QWORD *)(a1 + 40);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 40);
    result = 0;
    if ( v2 )
      return *(_QWORD *)v2;
  }
  return result;
}

