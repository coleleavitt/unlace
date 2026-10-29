/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: gxx_personality_v0
// Address: 0x00090710

//----- (00090710) --------------------------------------------------------
int __fastcall _gxx_personality_v0(int a1, int a2, int a3, int a4)
{
  int result; // r0
  unsigned int v8; // r0
  __int64 v9; // r8
  int v10; // r8
  int v11; // r2
  int v12; // r3
  int v13; // r1
  __int64 v14; // r2
  int v15; // r5
  int v16; // r10
  __int64 v17; // kr08_8
  __int64 v18; // r2
  int v19; // r0
  int v20[2]; // [sp+8h] [bp-40h] BYREF
  int v21; // [sp+10h] [bp-38h]
  __int64 v22; // [sp+14h] [bp-34h]
  int v23; // [sp+1Ch] [bp-2Ch]
  int v24; // [sp+20h] [bp-28h]

  result = 3;
  if ( !a2 || !a3 )
    return result;
  v8 = a1 & 0xFFFFFFF7;
  if ( (a1 & 0xFFFFFFF7) == 2 )
    return sub_9086C(a2, a3);
  HIDWORD(v9) = *(_DWORD *)(a2 + 4);
  LODWORD(v9) = *(_DWORD *)a2 & 0xFFFFFF00;
  if ( v8 == 1 )
  {
    v16 = *(_DWORD *)(a2 + 32);
    if ( v16 == sub_90BA4(a3, 0xDu, *(_DWORD *)a2, a4) )
    {
      if ( v9 == 0x434C4E47432B2B00LL )
      {
        v17 = *(_QWORD *)(a2 + 36);
        v18 = *(_QWORD *)(a2 + 44);
        v19 = *(_DWORD *)(a2 + 52);
        v21 = *(_DWORD *)(a2 + 40);
        v22 = v18;
        v23 = v17;
        v20[0] = v19;
        v24 = 6;
        v20[1] = v19 >> 31;
      }
      else
      {
        sub_90880(v20, 6, 0, (char *)a2, a3);
        if ( v24 != 6 )
          sub_90BDC(0, (void *)a2);
      }
LABEL_21:
      sub_90BF8(a2, a3, v20, SHIDWORD(v18));
      return 7;
    }
    sub_90880(v20, 2, v9 == 0x434C4E47432B2B00LL, (char *)a2, a3);
    result = v24;
    if ( v24 != 8 )
    {
      if ( v24 != 6 )
        return result;
      _cxa_begin_cleanup((_QWORD *)a2);
      goto LABEL_21;
    }
    return sub_9086C(a2, a3);
  }
  if ( v8 )
    return 3;
  if ( (a1 & 8) != 0 )
    return sub_9086C(a2, a3);
  v10 = v9 ^ 0x432B2B00 | HIDWORD(v9) ^ 0x434C4E47;
  sub_90880(v20, 1, v10 == 0, (char *)a2, a3);
  result = v24;
  if ( v24 == 8 )
    return sub_9086C(a2, a3);
  if ( v24 == 6 )
  {
    *(_DWORD *)(a2 + 32) = sub_90BA4(a3, 0xDu, v11, v12);
    if ( !v10 )
    {
      v13 = v21;
      v14 = v22;
      v15 = v20[0];
      *(_DWORD *)(a2 + 36) = v23;
      *(_DWORD *)(a2 + 40) = v13;
      *(_QWORD *)(a2 + 44) = v14;
      *(_DWORD *)(a2 + 52) = v15;
    }
    return 6;
  }
  return result;
}
// 90786: variable 'v11' is possibly undefined
// 90786: variable 'v12' is possibly undefined
// 9083E: variable 'v18' is possibly undefined
