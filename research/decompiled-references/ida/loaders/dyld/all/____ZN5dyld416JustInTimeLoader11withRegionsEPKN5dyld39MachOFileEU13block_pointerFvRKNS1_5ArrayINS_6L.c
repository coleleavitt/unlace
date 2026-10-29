__int64 __fastcall ___ZN5dyld416JustInTimeLoader11withRegionsEPKN5dyld39MachOFileEU13block_pointerFvRKNS1_5ArrayINS_6Loader6RegionEEEE_block_invoke(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v4; // x8
  __int64 v5; // x9
  int v6; // w12
  __int64 result; // x0
  __int64 v9; // x9
  __int64 v10; // x11
  int v11; // w8
  unsigned __int64 v12; // [xsp+0h] [xbp-30h] BYREF
  int v13; // [xsp+8h] [xbp-28h]
  int v14; // [xsp+Ch] [xbp-24h]
  unsigned __int64 v15; // [xsp+10h] [xbp-20h] BYREF
  int v16; // [xsp+18h] [xbp-18h]
  int v17; // [xsp+1Ch] [xbp-14h]

  v4 = *(unsigned int *)(a2 + 56);
  v5 = *(_QWORD *)(a2 + 8);
  if ( (v4 & 8) != 0 && !v5 )
    goto LABEL_10;
  v6 = *(_DWORD *)(a2 + 52);
  v15 = (*(_QWORD *)(a2 + 16) - *(_QWORD *)(a1 + 40)) & 0x7FFFFFFFFFFFFFFLL
      | ((unsigned __int64)(v6 & 7) << 59) & 0x7FFFFFFFFFFFFFFFLL
      | ((unsigned __int64)(unsigned __int8)(v4 >> 1) << 63);
  v16 = *(_QWORD *)a2;
  v17 = v5;
  if ( (unsigned __int16)v4 >> 4 == *(_DWORD *)(a1 + 48) - 1 && v6 == 1 )
    v17 = *(_QWORD *)(a2 + 24);
  result = dyld3::Array<dyld4::Loader::Region>::push_back(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL, &v15);
  if ( (*(_BYTE *)(a2 + 56) & 8) != 0 )
  {
LABEL_10:
    v9 = *(_QWORD *)(a2 + 8);
    v10 = *(_QWORD *)(a1 + 32);
    v12 = (*(_QWORD *)(a2 + 16) - *(_QWORD *)(a1 + 40) + v9) & 0x7FFFFFFFFFFFFFFLL
        | ((unsigned __int64)(*(_DWORD *)(a2 + 52) & 7) << 59)
        | 0x4000000000000000LL;
    v11 = *(_DWORD *)(a2 + 24) - v9;
    v13 = 0;
    v14 = v11;
    return dyld3::Array<dyld4::Loader::Region>::push_back(*(_QWORD *)(v10 + 8) + 40LL, &v12);
  }
  return result;
}
