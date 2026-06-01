__int64 __fastcall sub_21C6B30(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD v14[2]; // [rsp+8h] [rbp-10h] BYREF

  if ( *a2 == 0x8169666F72706CFFLL )
  {
    v3 = a2[1];
    if ( (unsigned int)v3 > 0xCuLL )
    {
      sub_21C5200(v14, 5);
      v13 = v14[0];
      *(_BYTE *)(a1 + 72) |= 1u;
      *(_QWORD *)a1 = v13;
      return a1;
    }
    else
    {
      v4 = a2[3];
      v5 = a2[4];
      v6 = (unsigned int)v3 & 0xFFFFFFF8;
      if ( (v3 & 0xFFFFFFF8) != 0 )
      {
        v6 = a2[5];
        v7 = a2 + 6;
      }
      else
      {
        v7 = a2 + 5;
      }
      v8 = 0;
      if ( (unsigned int)v3 > 8uLL )
        v8 = *v7++;
      v9 = 0;
      if ( (unsigned int)v3 > 9uLL )
        v9 = *v7++;
      v10 = 0;
      if ( (unsigned int)v3 == 12 )
        v10 = *v7;
      *(_QWORD *)(a1 + 8) = v3;
      *(_BYTE *)(a1 + 72) &= ~1u;
      *(_QWORD *)a1 = 0x8169666F72706CFFLL;
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = v4;
      *(_QWORD *)(a1 + 32) = v5;
      *(_QWORD *)(a1 + 40) = v6;
      *(_QWORD *)(a1 + 48) = v8;
      *(_QWORD *)(a1 + 56) = v9;
      *(_QWORD *)(a1 + 64) = v10;
      return a1;
    }
  }
  else
  {
    sub_21C5200(v14, 3);
    v12 = v14[0];
    *(_BYTE *)(a1 + 72) |= 1u;
    *(_QWORD *)a1 = v12;
    return a1;
  }
}
