__int64 __fastcall sub_451BF0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 != 64 )
  {
    if ( v2 == 69 )
    {
      v4 = sub_5313F0(unk_8CAB10);
      if ( v4 )
      {
        sub_537630(v4, 1, "Open commit...");
        return 3;
      }
    }
    return 3;
  }
  v5 = sub_5313F0(unk_8CAB10);
  if ( !v5 )
    return 3;
  sub_537630(v5, 1, "~D~etails...");
  return 3;
}
