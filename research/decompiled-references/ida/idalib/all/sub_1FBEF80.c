char __fastcall sub_1FBEF80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r12

  sub_1FBEE10((__int64 *)a1, a2, a3, a4, a5, a6);
  v6 = *(_QWORD *)(a2 + 72);
  sub_9B9C90(
    *(_QWORD *)(a1 + 24),
    (((*(_BYTE *)(a2 + 76) >> 4) & 3) << 12)
  | (((v6 & 0x800000000LL) != 0) << 11)
  | (((v6 & 0x400000000LL) != 0) << 10)
  | (((v6 & 0x200000000LL) != 0) << 9)
  | (BYTE3(v6) >> 7 << 7)
  | (((v6 & 0x40000000) != 0) << 6)
  | (32 * ((v6 & 0x20000000) != 0))
  | (8 * ((v6 & 0x4000000) != 0))
  | (4 * ((v6 & 0x2000000) != 0))
  | ((BYTE4(v6) & 1) << 8)
  | (BYTE2(v6) >> 7)
  | (2 * ((v6 >> 24) & 1))
  | (16 * (unsigned int)((v6 & 0x10000000) != 0)));
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 > 2 )
  {
    v11 = sub_B78F30(a2);
    sub_9B9C90(*(_QWORD *)(a1 + 24), v11);
  }
  v10 = *(_QWORD *)(a2 + 16);
  if ( (v10 & 4) == 0 || (v10 &= 0xFFFFFFFFFFFFFFF8LL, v7 = *(_QWORD *)v10, *(_QWORD *)(v10 + 8) == *(_QWORD *)v10) )
  {
    if ( (*(_BYTE *)(a2 + 29) & 3) == 0 && *(char *)(a2 + 28) >= 0 )
    {
      v12 = *(_QWORD *)(a2 + 120);
      LOBYTE(v10) = v12 & 0xF8;
      if ( !(v12 & 0xFFFFFFFFFFFFFFF8LL | (v12 >> 2) & 1) )
      {
        v13 = *(_QWORD *)(a2 + 104);
        v10 = (unsigned __int64)sub_7052B0((__int64 *)(v13 + 96), v13, 0, v7, v8, v9);
        if ( v13 == v10 && (*(_BYTE *)(a2 + 29) & 0x10) == 0 )
        {
          LODWORD(v10) = (*(_BYTE *)(a2 + 28) & 0x7F) - 59;
          if ( (unsigned int)v10 > 2 )
          {
            LOBYTE(v10) = sub_1EA74C0(a2);
            if ( !(_BYTE)v10 && (*(_BYTE *)(a2 + 40) & 7) == 0 )
            {
              LODWORD(v10) = *(_DWORD *)(*(_QWORD *)a1 + 3484LL);
              *(_DWORD *)(a1 + 228) = v10;
            }
          }
        }
      }
    }
  }
  *(_DWORD *)(a1 + 224) = 54;
  return v10;
}
