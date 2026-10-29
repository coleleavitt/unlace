__int64 __fastcall sub_B74790(__int64 a1)
{
  char v1; // al
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned int v5; // edx
  unsigned __int64 v6; // rax

  v1 = (*(_BYTE *)(a1 + 97) >> 1) & 3;
  if ( v1 == 2 )
    return sub_EEC8C0(*(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v1 != 3 )
    return 0;
  v3 = sub_B73640(a1);
  if ( v3 )
  {
    v4 = sub_EEC8C0(v3);
    v5 = v4;
    v6 = HIDWORD(v4);
  }
  else
  {
    v6 = 0;
    v5 = 0;
  }
  return (v6 << 32) | v5;
}
