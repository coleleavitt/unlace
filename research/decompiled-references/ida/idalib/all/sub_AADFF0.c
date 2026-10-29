char __fastcall sub_AADFF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  char result; // al
  char v14; // al
  unsigned int v15; // ebp
  unsigned int v16; // r13d
  unsigned __int64 v17; // rax

  v6 = sub_AAC1F0(a1, a3, a3, a4, a5);
  if ( !*(_BYTE *)(a2 + 12) )
  {
    v7 = *(_DWORD *)(a2 + 8);
    v8 = *(_QWORD *)a2;
    v9 = 1LL << ((unsigned __int8)v7 - 1);
    if ( v7 > 0x40 )
    {
      if ( (v9 & *(_QWORD *)(v8 + 8LL * ((v7 - 1) >> 6))) != 0 )
      {
        v10 = sub_2206800(a2);
        return v6 >= v7 + 1 - v10;
      }
    }
    else if ( (v9 & v8) != 0 )
    {
      if ( v7 )
      {
        v10 = 64;
        v11 = ~(v8 << (64 - (unsigned __int8)v7));
        if ( v11 )
        {
          _BitScanReverse64(&v12, v11);
          v10 = v12 ^ 0x3F;
        }
      }
      else
      {
        v10 = 0;
      }
      return v6 >= v7 + 1 - v10;
    }
  }
  v14 = sub_F65240(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
  v15 = *(_DWORD *)(a2 + 8);
  v16 = (v14 == 0) + v6 - 1;
  if ( v15 > 0x40 )
    return v16 >= v15 - (unsigned int)sub_2206780(a2);
  result = 1;
  if ( *(_QWORD *)a2 )
  {
    _BitScanReverse64(&v17, *(_QWORD *)a2);
    return v16 >= 64 - ((unsigned int)v17 ^ 0x3F);
  }
  return result;
}
