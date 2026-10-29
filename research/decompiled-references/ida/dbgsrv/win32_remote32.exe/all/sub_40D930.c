/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D930
// Address: 0x0040D930

//----- (0040D930) --------------------------------------------------------
BOOL __userpurge sub_40D930@<eax>(_DWORD *a1@<ecx>, __m128i a2@<xmm0>, _DWORD *a3)
{
  _DWORD *v4; // ebx
  int v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  BOOL result; // eax
  void **v13; // ebx
  unsigned int v14; // kr00_4
  unsigned int v15; // eax
  unsigned int *v16; // [esp+10h] [ebp-28h]
  _BYTE *v17; // [esp+14h] [ebp-24h]
  char *lpBaseAddress; // [esp+20h] [ebp-18h]
  _DWORD v20[2]; // [esp+38h] [ebp+0h] BYREF
  int v21; // [esp+40h] [ebp+8h]
  CHAR v22[260]; // [esp+5Ch] [ebp+24h] BYREF
  unsigned __int16 Buffer[6]; // [esp+160h] [ebp+128h] BYREF
  __m128i v24[5]; // [esp+16Ch] [ebp+134h] BYREF
  int v25; // [esp+1BCh] [ebp+184h]
  unsigned __int8 v26[260]; // [esp+264h] [ebp+22Ch] BYREF

  v4 = a3;
  sub_45B9B0(a3, 1);
  v5 = a3[4] & 0xFFFFFFF;
  if ( v5 != 1 && v5 != 11 && v5 != 8 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(3295);
  }
  v16 = a3 + 5;
  lpBaseAddress = (char *)a1[157];
  v6 = sub_418F20();
  v7 = v6;
  v8 = -1;
  v17 = v6;
  if ( v6[28] )
  {
    v8 = (*(int (__stdcall **)(int, _DWORD))v6)(2, 0);
    if ( v8 == -1 )
      GetLastError();
  }
  v20[0] = 296;
  if ( v8 == -1 || !(*((int (__stdcall **)(int, _DWORD *))v7 + 1))(v8, v20) )
  {
LABEL_13:
    GetLastError();
    goto LABEL_14;
  }
  v9 = v21;
  if ( !v21 )
  {
    while ( (*((int (__stdcall **)(int, _DWORD *))v7 + 2))(v8, v20) )
    {
      v9 = v21;
      if ( v21 )
      {
LABEL_20:
        v4 = a3;
        goto LABEL_21;
      }
    }
    goto LABEL_13;
  }
LABEL_21:
  if ( v9 != *v4 )
  {
    while ( (*((int (__stdcall **)(int, _DWORD *))v7 + 2))(v8, v20) )
    {
      v9 = v21;
      if ( v21 )
        goto LABEL_20;
    }
    goto LABEL_13;
  }
  sub_4170A0((unsigned int)v26, v22, 260);
  if ( !sub_4567D0(v26) )
  {
    sub_411D20(a1, a2, Buffer, 0x104u, nullptr, 0, (int)lpBaseAddress);
    if ( LOBYTE(Buffer[0]) )
      sub_45ACB0((unsigned int)v26, (char *)Buffer, 260);
  }
  if ( a1[123] <= 1u || sub_4567D0(v26) )
  {
    v13 = (void **)(a1 + 122);
    v14 = strlen((const char *)v26);
    if ( v14 )
    {
      v15 = v14 + 1;
      if ( v14 + 1 > a1[124] )
      {
        *v13 = sub_453B00((int)v13, *v13, v14 + 1, 1u);
        v15 = v14 + 1;
      }
      a1[123] = v15;
      sub_464310((unsigned int)*v13, (unsigned int)v26, v14);
      *((_BYTE *)*v13 + v14) = 0;
    }
    else
    {
      a1[123] = 0;
    }
  }
LABEL_14:
  sub_403330((int)v16, a1 + 122);
  a3[8] = lpBaseAddress;
  v10 = sub_412370((int)a1, a2, lpBaseAddress, v24);
  v11 = v25;
  if ( v10 == -1 )
    v11 = 0;
  a3[10] = -1;
  a3[9] = v11;
  sub_403330((int)(a1 + 143), v16);
  a1[146] = a3[8];
  a1[147] = a3[9];
  a1[148] = a3[10];
  result = (BOOL)v17;
  if ( v17[28] )
  {
    if ( v8 != -1 )
      return CloseHandle((HANDLE)v8);
  }
  return result;
}
// 40DA2E: conditional instruction was optimized away because edi.4!=FFFFFFFF
// 40DAF2: conditional instruction was optimized away because edi.4!=FFFFFFFF
// 40DB13: conditional instruction was optimized away because edi.4!=FFFFFFFF
// 4B70F0: using guessed type char byte_4B70F0;
