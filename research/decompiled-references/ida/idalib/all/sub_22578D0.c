__int64 __fastcall sub_22578D0(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r11
  __int64 v5; // r11
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  __int64 v9; // r11
  int v10; // ecx
  int v11; // edx
  int v12; // esi
  unsigned int v13; // ecx
  int v14; // edx
  __int64 v15; // r11
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  unsigned int v19; // esi
  int v20; // ecx
  unsigned int v21; // ecx
  int v22; // edx
  _BYTE *v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+8h] [rbp-20h]
  int v25; // [rsp+10h] [rbp-18h] BYREF
  int v26; // [rsp+14h] [rbp-14h] BYREF
  int v27; // [rsp+18h] [rbp-10h] BYREF
  int v28[3]; // [rsp+1Ch] [rbp-Ch] BYREF

  v23 = a2;
  v24 = a3;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28[0] = 0;
  result = sub_2257680((__int64 *)&v23, &v25);
  if ( (_BYTE)result )
    return 1;
  if ( !v24 )
  {
    v8 = v25;
    *(_QWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 12) = 0;
    *(_DWORD *)v4 = v8;
    return result;
  }
  if ( *v23 != 46 )
    return 1;
  ++v23;
  --v24;
  result = sub_2257680((__int64 *)&v23, &v26);
  if ( (_BYTE)result )
    return 1;
  if ( !v24 )
  {
    v6 = v25;
    v7 = v26;
    *(_BYTE *)(v5 + 15) = 0;
    *(_DWORD *)v5 = v6;
    *(_DWORD *)(v5 + 4) = v7 & 0x7FFFFFFF | *(_DWORD *)(v5 + 4) & 0x80000000;
    *(_QWORD *)(v5 + 7) = *(_BYTE *)(v5 + 7) & 0x7F | 0x80u;
    return result;
  }
  if ( *v23 != 46 )
    return 1;
  ++v23;
  --v24;
  result = sub_2257680((__int64 *)&v23, &v27);
  if ( (_BYTE)result )
    return 1;
  if ( !v24 )
  {
    v10 = v25;
    v11 = v26;
    *(_BYTE *)(v9 + 15) = 0;
    v12 = v27;
    *(_DWORD *)v9 = v10;
    v13 = v11 & 0x7FFFFFFF | *(_DWORD *)(v9 + 4) & 0x80000000;
    v14 = *(_DWORD *)(v9 + 8);
    *(_DWORD *)(v9 + 4) = v13;
    *(_DWORD *)(v9 + 8) = v12 & 0x7FFFFFFF | v14 & 0x80000000;
    *(_QWORD *)(v9 + 7) = *(_QWORD *)(v9 + 7) & 0x7FFFFFFF7FLL | 0x8000000080LL;
    return result;
  }
  if ( *v23 != 46 )
    return 1;
  ++v23;
  --v24;
  result = sub_2257680((__int64 *)&v23, v28);
  if ( (_BYTE)result || v24 )
    return 1;
  v16 = v26;
  v17 = v27;
  v18 = v28[0];
  *(_DWORD *)v15 = v25;
  v19 = v16 & 0x7FFFFFFF | *(_DWORD *)(v15 + 4) & 0x80000000;
  v20 = *(_DWORD *)(v15 + 8);
  *(_DWORD *)(v15 + 4) = v19;
  v21 = v17 & 0x7FFFFFFF | v20 & 0x80000000;
  v22 = *(_DWORD *)(v15 + 12);
  *(_DWORD *)(v15 + 8) = v21;
  *(_DWORD *)(v15 + 12) = v18 & 0x7FFFFFFF | v22 & 0x80000000;
  *(_BYTE *)(v15 + 15) |= 0x80u;
  *(_QWORD *)(v15 + 7) |= 0x8000000080uLL;
  return result;
}
