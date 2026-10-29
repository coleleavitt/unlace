__int64 __fastcall sub_8C7CA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10)
{
  int v14; // eax
  unsigned __int8 v15; // al
  __int64 result; // rax

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x6D;
  if ( byte_4AD234C )
    sub_AC4570(109);
  *(_WORD *)(a1 + 1) &= 0xF801u;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 20) = a7;
  *(_DWORD *)(a1 + 16) = a4;
  *(_DWORD *)(a1 + 24) = a9;
  v14 = 0;
  if ( BYTE4(a10) )
    v14 = a10 + 1;
  *(_DWORD *)(a1 + 28) = v14;
  *(_DWORD *)(a1 + 56) = a6;
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 40) = a5;
  *(_QWORD *)(a1 + 48) = a8;
  v15 = sub_76D280(a1);
  *(_BYTE *)(a1 + 1) = (v15 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v15 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

