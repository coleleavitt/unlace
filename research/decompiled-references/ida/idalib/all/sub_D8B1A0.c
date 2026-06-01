__int64 __fastcall sub_D8B1A0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  __int64 v5; // r12
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // r12
  unsigned int v9; // r12d
  unsigned int v10; // r12d
  __int64 v11; // r12
  __int64 v12; // r12
  __m128i v13; // [rsp+0h] [rbp-38h] BYREF
  _OWORD v14[2]; // [rsp+10h] [rbp-28h] BYREF

  switch ( a3 )
  {
    case 0:
      v5 = *(unsigned __int8 *)sub_E21760(a2, 8);
      sub_E21790(a2, 8);
      *(_DWORD *)(a1 + 8) = 8;
      *(_QWORD *)a1 = v5;
      *(_BYTE *)(a1 + 12) = 0;
      break;
    case 1:
      v6 = *(unsigned __int8 *)sub_E21760(a2, 8);
      sub_E21790(a2, 8);
      *(_DWORD *)(a1 + 8) = 8;
      *(_QWORD *)a1 = v6;
      *(_BYTE *)(a1 + 12) = 1;
      break;
    case 2:
      v7 = *(unsigned __int16 *)sub_E21760(a2, 8);
      sub_E21790(a2, 8);
      *(_DWORD *)(a1 + 8) = 16;
      *(_QWORD *)a1 = v7;
      *(_BYTE *)(a1 + 12) = 0;
      break;
    case 3:
      v8 = *(unsigned __int16 *)sub_E21760(a2, 8);
      sub_E21790(a2, 8);
      *(_DWORD *)(a1 + 8) = 16;
      *(_QWORD *)a1 = v8;
      *(_BYTE *)(a1 + 12) = 1;
      break;
    case 4:
      v9 = *(_DWORD *)sub_E21760(a2, 8);
      sub_E21790(a2, 8);
      *(_DWORD *)(a1 + 8) = 32;
      *(_BYTE *)(a1 + 12) = 0;
      *(_QWORD *)a1 = v9;
      break;
    case 5:
      v10 = *(_DWORD *)sub_E21760(a2, 8);
      sub_E21790(a2, 8);
      *(_DWORD *)(a1 + 8) = 32;
      *(_BYTE *)(a1 + 12) = 1;
      *(_QWORD *)a1 = v10;
      break;
    case 6:
      v11 = *(_QWORD *)sub_E21760(a2, 8);
      sub_E21790(a2, 8);
      *(_DWORD *)(a1 + 8) = 64;
      *(_QWORD *)a1 = v11;
      *(_BYTE *)(a1 + 12) = 0;
      break;
    case 7:
      v12 = *(_QWORD *)sub_E21760(a2, 8);
      sub_E21790(a2, 8);
      *(_DWORD *)(a1 + 8) = 64;
      *(_QWORD *)a1 = v12;
      *(_BYTE *)(a1 + 12) = 1;
      break;
    case 8:
      v13 = _mm_loadu_si128((const __m128i *)sub_E21760(a2, 16));
      sub_E21790(a2, 16);
      v14[0] = _mm_load_si128(&v13);
      sub_D47D10(a1, (__int64)v14, 0);
      break;
    case 9:
      v13 = _mm_loadu_si128((const __m128i *)sub_E21760(a2, 16));
      sub_E21790(a2, 16);
      v14[0] = _mm_load_si128(&v13);
      sub_D8A9D0(a1, (__int64 *)v14);
      break;
    case 10:
      v4 = *(unsigned __int8 *)sub_E21760(a2, 8);
      sub_E21790(a2, 8);
      *(_DWORD *)(a1 + 8) = 1;
      *(_QWORD *)a1 = v4;
      *(_BYTE *)(a1 + 12) = 1;
      break;
  }
  return a1;
}
