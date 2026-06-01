unsigned __int64 __fastcall sub_1E5D3C0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r9
  char v5; // dl
  __int64 v6; // rdx

  result = a2;
  v3 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(_BYTE *)(v4 + 16);
  if ( v5 != 16 && (*(_BYTE *)(v3 + 17) & 4) == 0 && (v5 != 13 || ((*(_WORD *)(v4 + 18) >> 3) & 0x1FF) != 0x1EC) )
  {
    v6 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v6 & 8) == 0 || (*(__int64 *)((char *)&qword_18 + (v6 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFE00) == 0 )
      return sub_A70E70(
               *(_QWORD *)(a1 + 248),
               a2,
               (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 60LL) & 1) != 0) + 4);
  }
  return result;
}
