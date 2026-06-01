__int64 __fastcall sub_80B5B0(__int64 a1, __int64 a2, __int64 a3, __int16 a4, int a5, unsigned __int8 a6)
{
  int v7; // edx
  __int16 v9; // [rsp+4h] [rbp-24h]
  int v10; // [rsp+8h] [rbp-20h]
  unsigned __int8 v11; // [rsp+Ch] [rbp-1Ch]

  if ( a1 )
  {
    *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x5A;
    if ( byte_4AD234C )
    {
      v11 = a6;
      v10 = a5;
      v9 = a4;
      sub_AC4570(90);
      a6 = v11;
      a5 = v10;
      a4 = v9;
    }
    v7 = *(_DWORD *)a1;
    *(_QWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 20) = a5;
    *(_QWORD *)(a1 + 24) = a2;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)a1 = v7 & 0xE001FF | (a6 << 20) & 0xFF1FFE00 | (a4 << 9) & 0x600 | 0x18000000;
    *(_DWORD *)a1 = *(_DWORD *)a1 & 0xFF983FFF | ((sub_76C380(a1, (_DWORD **)(a1 + 32), 0) & 0x1F) << 14);
  }
  return a1;
}

