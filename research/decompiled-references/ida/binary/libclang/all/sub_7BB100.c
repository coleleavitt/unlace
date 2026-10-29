_BOOL8 __fastcall sub_7BB100(__int64 a1)
{
  unsigned __int64 v1; // rdx
  _BOOL8 result; // rax
  unsigned __int64 v3; // rdx
  char v4; // al

  v1 = *(_QWORD *)(a1 + 120);
  if ( !v1 )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v1 = *(_QWORD *)(a1 + 120);
  }
  result = 0;
  if ( v1 > 7 )
  {
    v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
    if ( a1 == *(_QWORD *)v3 )
    {
      v4 = *(_BYTE *)(v3 + 72);
      if ( (v4 & 1) != 0 )
      {
        sub_7B7DB0(a1);
        v4 = *(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72);
      }
      return (v4 & 4) != 0;
    }
  }
  return result;
}

