unsigned __int64 __fastcall sub_12C4DF0(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ecx

  v1 = sub_112B370(a1);
  v2 = *(_DWORD *)(a1 + 60);
  if ( v2 == 37 )
  {
    v1 |= 0x100000040000uLL;
    goto LABEL_3;
  }
  if ( v2 == 36 )
LABEL_3:
    v1 |= 1uLL;
  return v1 & 0xFFFFFFFFFBFFFFFFLL;
}
