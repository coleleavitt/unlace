/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_506C4
// Address: 0x000506C4

//----- (000506C4) --------------------------------------------------------
unsigned int __fastcall sub_506C4(int a1, int a2, int a3)
{
  unsigned int result; // r0
  int v6; // r3
  int v7; // r3
  __int64 v8; // r2
  __int64 v9; // kr00_8
  int v10; // r12
  int v11; // r2
  unsigned int v12; // r3
  __int64 v13; // kr08_8
  unsigned int v14; // r3
  _BYTE v15[8]; // [sp+0h] [bp-18h] BYREF
  int v16; // [sp+8h] [bp-10h]
  int v17; // [sp+Ch] [bp-Ch]

  for ( result = sub_50628(a1, a2, a3); ; *(_DWORD *)(a2 + 12) = HIDWORD(v8) | result )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 592);
      v16 = 0;
      v17 = 0;
      v15[0] = 1;
      v7 = *(unsigned __int16 *)(v6 + 12);
      if ( v7 != 15934 )
        break;
      sub_50628(a1, (int)v15, 1);
      if ( *(_BYTE *)a2 )
      {
        v13 = *(_QWORD *)(a2 + 8);
        result = HIDWORD(v13) >> (v16 - 32);
        v14 = ((unsigned int)v13 >> v16) | (HIDWORD(v13) << (32 - v16));
        *(_DWORD *)(a2 + 12) = HIDWORD(v13) >> v16;
        *(_DWORD *)(a2 + 8) = v14 | result;
      }
      else
      {
        v9 = *(_QWORD *)(a2 + 8);
        v10 = v16 - 32;
        result = HIDWORD(v9) << (32 - v16);
        if ( v16 - 32 >= 0 )
          v10 = SHIDWORD(v9) >> v10;
        v11 = SHIDWORD(v9) >> v16;
        v12 = ((unsigned int)v9 >> v16) | result;
        if ( v16 - 32 >= 0 )
          v12 |= v10;
        *(_DWORD *)(a2 + 8) = v12;
        *(_DWORD *)(a2 + 12) = v11;
      }
    }
    if ( v7 != 15420 )
      break;
    sub_50628(a1, (int)v15, 1);
    v8 = *(_QWORD *)(a2 + 8);
    result = (unsigned int)v8 >> (32 - v16);
    HIDWORD(v8) = (HIDWORD(v8) << v16) | ((_DWORD)v8 << (v16 - 32));
    *(_DWORD *)(a2 + 8) = (_DWORD)v8 << v16;
  }
  return result;
}
