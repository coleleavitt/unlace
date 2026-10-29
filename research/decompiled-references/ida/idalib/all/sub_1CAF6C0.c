__int64 __fastcall sub_1CAF6C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // [rsp+8h] [rbp-10h] BYREF

  v4 = a2;
  v2 = sub_F22BD0(&v4, 0);
  if ( !v2 || (*(_BYTE *)(v2 + 28) & 0x7F) != 0x44 || *(_DWORD *)(a1 + 12) > (*(_DWORD *)(v2 + 64) & 0xFFFFFu) )
    return sub_BC8830(a1, v4);
  *(_BYTE *)(a1 + 17) = 1;
  *(_DWORD *)(a1 + 20) = 0;
  return 0;
}
