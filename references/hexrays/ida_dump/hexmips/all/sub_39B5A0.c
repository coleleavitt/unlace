__int64 __fastcall sub_39B5A0(__int64 a1, __m128 a2)
{
  unsigned int v2; // ecx
  __int64 v3; // rax

  sub_386590(a1, 0);
  v2 = 0;
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v3 = sub_37FBF0(*(_QWORD *)(a1 + 88));
    if ( v3 )
    {
      *(_BYTE *)(v3 + 13) = (*(_BYTE *)(v3 + 13) ^ 0x10) & 0xFA | 1;
      sub_39AE80(a1, v3, 1u, a2);
      return 1;
    }
  }
  return v2;
}
