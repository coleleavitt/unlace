__int64 __fastcall sub_153C910(__int64 a1, __int64 a2, __m128i a3, __m128 a4)
{
  int v4; // r15d
  unsigned int v5; // r12d
  int v6; // ebp
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // [rsp+8h] [rbp-D0h]
  _DWORD v12[2]; // [rsp+10h] [rbp-C8h] BYREF
  char v13; // [rsp+18h] [rbp-C0h]
  __int64 v14; // [rsp+1Ch] [rbp-BCh]
  char v15; // [rsp+24h] [rbp-B4h]
  void *v16; // [rsp+28h] [rbp-B0h]
  __int64 v17; // [rsp+30h] [rbp-A8h]
  _BYTE v18[24]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v19[17]; // [rsp+50h] [rbp-88h] BYREF

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 16);
  while ( *(_WORD *)(a1 + 32) == 63 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
      break;
    v6 = *(_DWORD *)(a1 + 16);
    if ( v6 <= 0 )
      break;
    v7 = sub_153BAF0(a1, (__int64 (__fastcall ***)())a2, 0, nullptr, a3, a4);
    if ( v7 > 1 )
    {
      v8 = *(unsigned int *)(a2 + 8);
      v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
      if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
      {
        v11 = v9;
        sub_2237220(a2, a2 + 16, v8 + 1, 8);
        v8 = *(unsigned int *)(a2 + 8);
        v9 = v11;
      }
      *(_QWORD *)(*(_QWORD *)a2 + 8 * v8) = v9;
      ++*(_DWORD *)(a2 + 8);
    }
    v4 = v6;
  }
  result = 0;
  if ( v4 )
  {
    sub_1564820(v19, a1, v5, 2156);
    v15 = 0;
    v18[0] = 0;
    v14 = 0;
    v16 = v18;
    v17 = 0;
    v18[16] = 0;
    v12[0] = v5;
    v12[1] = v4;
    v13 = 1;
    if ( v5 )
    {
      sub_1535AC0(v19, (unsigned __int64)v12);
      if ( v16 != v18 )
        operator delete(v16);
    }
    sub_AEA040((__int64)v19);
    return 1;
  }
  return result;
}
