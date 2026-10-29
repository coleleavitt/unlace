void *__fastcall sub_F57C00(__int64 a1, __int64 a2, unsigned __int64 a3, const void *a4, __int64 a5)
{
  char v5; // r9
  char v6; // r12
  char v7; // bp
  char v8; // r10
  bool v9; // bl
  char v10; // al
  char v11; // r9
  char v12; // al
  char v13; // r10
  char v14; // al
  int v15; // edx
  void *result; // rax

  v5 = *(_BYTE *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v6 = 32 * ((v5 & 8) != 0);
  v7 = 16 * ((v5 & 0x10) != 0);
  v8 = (v5 & 4) != 0 ? 0xC : 0;
  v9 = (v5 & 2) != 0;
  v10 = v5 & 1;
  v11 = 16;
  v12 = (2 * v9) | v8 | v7 | v6 | v10;
  v13 = v12 & 0x20;
  if ( (v12 & 0x20) != 0 )
  {
    v11 = 24;
    v13 = 8;
  }
  *(_QWORD *)a1 = a1;
  if ( (v12 & 0x10) == 0 )
    v11 = v13;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = a2;
  if ( (v12 & 0xC) != 0 )
    v11 |= 4u;
  if ( (v12 & 2) != 0 )
    v11 |= 2u;
  if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    a3 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v14 = *(_BYTE *)(a1 + 17);
  *(_BYTE *)(a1 + 18) &= 0xF8u;
  *(_QWORD *)(a1 + 8) = a3;
  v15 = a5 & 0x3F;
  *(_BYTE *)(a1 + 17) = v14 & 0xE0 | v11 & 0x1F;
  *(_WORD *)(a1 + 16) = *(_WORD *)(a1 + 16) & 0x1F00 | 0x25;
  result = (void *)(v15 | *(_BYTE *)(a1 + 32) & 0xC0u);
  *(_BYTE *)(a1 + 32) = v15 | *(_BYTE *)(a1 + 32) & 0xC0;
  if ( a5 )
    return memcpy((void *)(a1 + 48), a4, 8 * a5);
  return result;
}
