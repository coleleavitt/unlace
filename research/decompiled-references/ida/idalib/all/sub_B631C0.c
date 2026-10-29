__int64 __fastcall sub_B631C0(__int64 a1, char a2)
{
  unsigned int v3; // ebx
  char v4; // dl
  char v5; // r9
  char v6; // si
  char v7; // r8
  char v8; // al
  int v9; // edx
  __int64 v10; // rdi

  v3 = 8;
  v4 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v5 = 32 * ((v4 & 8) != 0);
  v6 = 16 * ((v4 & 0x10) != 0);
  v7 = 2 * ((v4 & 2) != 0);
  v8 = v7 | ((v4 & 4) != 0 ? 0xC : 0) | v6 | v5 | v4 & 1;
  v9 = v7 & 0x10 | v6 & 0x10;
  if ( v7 & 0x10 | v6 & 0x10 | v5 & 0x10 )
  {
    v3 = 24;
    v9 = 16;
  }
  v10 = *(_QWORD *)(a1 + 16);
  if ( (v8 & 8) == 0 )
    v3 = v9;
  if ( (v8 & 4) != 0 )
    v3 |= 4u;
  if ( (v8 & 2) != 0 )
    v3 |= 2u;
  if ( (unsigned __int8)sub_B8E180(v10 + 40) )
    v3 |= 2u;
  if ( a2 )
    v3 |= 1u;
  return v3;
}
