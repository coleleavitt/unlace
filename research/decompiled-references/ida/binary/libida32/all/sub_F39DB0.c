__int64 __fastcall sub_F39DB0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // r8
  char v5; // bp
  char v6; // bl
  char v7; // r9
  bool v8; // r10
  char v9; // al
  char v10; // r8
  char v11; // al
  char v12; // r9
  char v13; // al
  int v14; // eax
  char v15; // cl
  __int64 result; // rax

  v4 = *(_BYTE *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v5 = 32 * ((v4 & 8) != 0);
  v6 = 16 * ((v4 & 0x10) != 0);
  v7 = (v4 & 4) != 0 ? 0xC : 0;
  v8 = (v4 & 2) != 0;
  v9 = v4 & 1;
  v10 = 16;
  v11 = (2 * v8) | v7 | v6 | v5 | v9;
  v12 = v11 & 0x20;
  if ( (v11 & 0x20) != 0 )
  {
    v10 = 24;
    v12 = 8;
  }
  *(_QWORD *)a1 = a1;
  if ( (v11 & 0x10) == 0 )
    v10 = v12;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = a2;
  if ( (v11 & 0xC) != 0 )
    v10 |= 4u;
  if ( (v11 & 2) != 0 )
    v10 |= 2u;
  if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    a4 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v13 = *(_BYTE *)(a1 + 17) & 0xE0;
  *(_QWORD *)(a1 + 8) = a4;
  *(_BYTE *)(a1 + 17) = v13 | v10 & 0x1F;
  v14 = *(unsigned __int16 *)(a1 + 16);
  LOWORD(v14) = v14 & 0x1F00;
  v14 |= 0x38u;
  *(_WORD *)(a1 + 16) = v14;
  LOBYTE(v14) = (a3 & 0xFFFFFFFFFFFFFFF0LL) != 0;
  v15 = 8 * v14;
  result = (8 * v14) | *(_BYTE *)(a1 + 18) & 0xF0u;
  *(_BYTE *)(a1 + 18) = v15 | *(_BYTE *)(a1 + 18) & 0xF0;
  if ( (result & 8) != 0 )
    *(_QWORD *)(a1 + 48) = a3;
  return result;
}

