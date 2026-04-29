__int64 __fastcall ___ZNK5dyld39MachOFile14forEachSegmentEU13block_pointerFvRKNS0_11SegmentInfoERbE_block_invoke(
        __int64 result,
        __int64 a2)
{
  __int64 v2; // x19
  __int64 v3; // x8
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x10
  unsigned __int64 v6; // x11
  int v7; // w12
  __int64 v8; // x11
  __int64 v9; // x13
  int v10; // w10
  unsigned __int64 v11; // x9
  unsigned __int64 v12; // x11
  unsigned __int64 v13; // x12
  int v14; // w10
  int v15; // w13
  unsigned int v16; // w12
  unsigned int v17; // w14
  int v18; // w11
  unsigned __int64 v19; // x14
  int v20; // w11
  int v22; // w9
  int v23; // w8
  __int64 v24; // x0
  int v25; // w9
  int v26; // w8
  unsigned __int64 v27; // x15
  int v28; // w12
  _BOOL4 v30; // w8
  int v31; // w8
  int v33; // w9
  int v34; // w8
  __int64 v35; // [xsp+0h] [xbp-50h] BYREF
  unsigned __int64 v36; // [xsp+8h] [xbp-48h]
  __int64 v37; // [xsp+10h] [xbp-40h]
  unsigned __int64 v38; // [xsp+18h] [xbp-38h]
  __int64 v39; // [xsp+20h] [xbp-30h]
  __int64 v40; // [xsp+28h] [xbp-28h]
  int v41; // [xsp+30h] [xbp-20h]
  int v42; // [xsp+34h] [xbp-1Ch]
  int v43; // [xsp+38h] [xbp-18h]

  v2 = result;
  v3 = *(_QWORD *)(result + 48);
  if ( *(_DWORD *)a2 == 1 )
  {
    v11 = *(unsigned int *)(a2 + 28);
    v12 = a2 + 56;
    v13 = a2 + 56 + 68LL * *(unsigned int *)(a2 + 48);
    if ( v13 <= a2 + 56 )
    {
      v18 = 0;
      v14 = 0;
      v16 = *(_DWORD *)(a2 + 24);
      v17 = *(_DWORD *)(a2 + 28);
    }
    else
    {
      v14 = 0;
      LOBYTE(v15) = 0;
      do
      {
        if ( *(_DWORD *)(v12 + 44) > (unsigned int)(unsigned __int8)v15 )
          v15 = *(_DWORD *)(v12 + 44);
        v14 |= (*(_BYTE *)(v12 + 57) & 3) != 0;
        v12 += 68LL;
      }
      while ( v12 < v13 );
      v16 = *(_DWORD *)(a2 + 24);
      v17 = *(_DWORD *)(v12 - 32) + *(_DWORD *)(v12 - 36) - v16;
      v18 = (unsigned __int8)v15 << 16;
    }
    v27 = *(unsigned int *)(a2 + 36);
    v35 = *(unsigned int *)(a2 + 32);
    v36 = v27;
    v37 = v16;
    v38 = v11;
    v39 = v17;
    v40 = a2 + 8;
    v28 = *(_DWORD *)(a2 + 44);
    v41 = a2 - v3;
    v42 = v28;
    v30 = (v28 & 2) == 0 && *(_BYTE *)(result + 56) != 0;
    v31 = (*(_DWORD *)(a2 + 52) >> 3) & 2 | v30 & v14 | (*(_DWORD *)(a2 + 52) >> 1) & 4;
    if ( (unsigned int)v27 < (unsigned int)v11 && v28 == 3 )
      v33 = 8;
    else
      v33 = 0;
    v34 = v33 | v31;
    v24 = *(_QWORD *)(result + 32);
    v25 = 16 * (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 40) + 8LL) + 24LL) & 0xFFF);
    v26 = v34 | v18;
  }
  else
  {
    if ( *(_DWORD *)a2 != 25 )
      return result;
    v4 = *(_QWORD *)(a2 + 32);
    v5 = a2 + 72;
    v6 = a2 + 72 + 80LL * *(unsigned int *)(a2 + 64);
    if ( v6 <= a2 + 72 )
    {
      v10 = 0;
      v8 = *(_QWORD *)(a2 + 24);
      v9 = *(_QWORD *)(a2 + 32);
    }
    else
    {
      LOBYTE(v7) = 0;
      do
      {
        if ( *(_DWORD *)(v5 + 52) > (unsigned int)(unsigned __int8)v7 )
          v7 = *(_DWORD *)(v5 + 52);
        v5 += 80LL;
      }
      while ( v5 < v6 );
      v8 = *(_QWORD *)(a2 + 24);
      v9 = *(_QWORD *)(v5 - 40) + *(_QWORD *)(v5 - 48) - v8;
      v10 = (unsigned __int8)v7 << 16;
    }
    v19 = *(_QWORD *)(a2 + 48);
    v35 = *(_QWORD *)(a2 + 40);
    v36 = v19;
    v37 = v8;
    v38 = v4;
    v39 = v9;
    v40 = a2 + 8;
    v20 = *(_DWORD *)(a2 + 60);
    v41 = a2 - v3;
    v42 = v20;
    if ( v19 < v4 && v20 == 3 )
      v22 = 8;
    else
      v22 = 0;
    v23 = v22 | (*(_DWORD *)(a2 + 68) >> 3) & 2 | (*(_DWORD *)(a2 + 68) >> 1) & 4;
    v24 = *(_QWORD *)(result + 32);
    v25 = 16 * (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 40) + 8LL) + 24LL) & 0xFFF);
    v26 = v23 | v10;
  }
  v43 = v26 | v25;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(v24 + 16))(v24, &v35);
  ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 40) + 8LL) + 24LL);
  return result;
}
