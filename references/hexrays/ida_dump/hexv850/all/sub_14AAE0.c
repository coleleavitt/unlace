__int64 __fastcall sub_14AAE0(__int64 a1)
{
  __int64 v2; // rbp
  unsigned __int8 v3; // al
  unsigned __int8 v4; // [rsp+Fh] [rbp-39h]
  _QWORD v5[7]; // [rsp+10h] [rbp-38h] BYREF

  v5[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 32) != 4 )
    return 0;
  v2 = *(_QWORD *)(a1 + 40);
  if ( *(_DWORD *)v2 != 13 )
    return 0;
  v3 = sub_11B1C0((char *)(v2 + 48), v5, 1u);
  if ( !v3 || v5[0] != 1 )
    return 0;
  v4 = v3;
  v5[0] = 0xFFFFFFFF00000000LL;
  v5[1] = 0;
  sub_117E50((char *)v5, (char *)(v2 + 32));
  sub_117E50((char *)(a1 + 32), (char *)v5);
  *(_DWORD *)a1 = 5;
  sub_1181E0((__int64)v5);
  return v4;
}
