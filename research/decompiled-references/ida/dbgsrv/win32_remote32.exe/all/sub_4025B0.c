/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4025B0
// Address: 0x004025B0

//----- (004025B0) --------------------------------------------------------
bool __userpurge sub_4025B0@<al>(int a1@<ecx>, __m128i a2@<xmm0>, int a3)
{
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  bool v6; // zf
  int v7; // eax
  void *v8; // ecx
  unsigned int v9; // esi
  char v10; // al
  signed int v11; // eax
  unsigned int v13; // [esp-4h] [ebp-44h]
  void *v14; // [esp+10h] [ebp-30h] BYREF
  unsigned int v15; // [esp+14h] [ebp-2Ch]
  int v16; // [esp+18h] [ebp-28h]
  unsigned int v17; // [esp+1Ch] [ebp-24h] BYREF
  void *v18; // [esp+20h] [ebp-20h] BYREF
  _BYTE v19[4]; // [esp+24h] [ebp-1Ch] BYREF
  _BYTE v20[5]; // [esp+28h] [ebp-18h] BYREF
  char v21; // [esp+2Dh] [ebp-13h] BYREF
  _BYTE v22[2]; // [esp+2Eh] [ebp-12h] BYREF
  int v23; // [esp+3Ch] [ebp-4h]

  if ( *(_DWORD *)a3 == 1 )
  {
    v14 = nullptr;
    v15 = 0;
    v16 = 0;
    v13 = *(_DWORD *)(a3 + 12);
    v23 = 0;
    v4 = sub_454140(v19, (unsigned int)v22, *(_DWORD *)(a3 + 8), v13);
    sub_401600((int)&v14, (unsigned int)v19, v4 - v19);
    v5 = sub_4540B0(v20, (unsigned int)&v21, *(_DWORD *)(a3 + 20));
    sub_401600((int)&v14, (unsigned int)v20, v5 - v20);
    v6 = *(_DWORD *)(a1 + 20) == 1;
    v18 = nullptr;
    v17 = 0;
    if ( v6 )
      v7 = sub_44BE70(*(void **)(a1 + 200), 2u, (unsigned int)v14, v15, &v18, &v17);
    else
      v7 = (*(int (__stdcall **)(int, int, void *, unsigned int, void **, unsigned int *))(*(_DWORD *)a1 + 196))(
             a1,
             2,
             v14,
             v15,
             &v18,
             &v17);
    v8 = v18;
    if ( v7 == 1 && v18 )
    {
      v9 = v17;
      if ( *(_DWORD *)(a3 + 20) < v17 )
        v9 = *(_DWORD *)(a3 + 20);
      sub_464310(*(_DWORD *)(a3 + 16), (unsigned int)v18, v9);
      v8 = v18;
      *(_DWORD *)(a3 + 20) = v9;
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    *(_BYTE *)(a3 + 24) = v10;
    if ( v8 )
      sub_453A20(v8);
    v23 = 1;
    if ( v14 )
    {
      v15 = 0;
      sub_453A20(v14);
      v14 = nullptr;
      v16 = 0;
    }
    v23 = -1;
  }
  else if ( *(_DWORD *)a3 == 2 )
  {
    v11 = sub_40C170(a1, a2, *(LPVOID *)(a3 + 8), *(void **)(a3 + 16), *(_DWORD *)(a3 + 20), 0);
    if ( v11 >= 0 )
      *(_DWORD *)(a3 + 20) = v11;
    *(_BYTE *)(a3 + 24) = v11 >= 0;
  }
  else
  {
    *(_BYTE *)(a3 + 24) = 0;
  }
  return sub_456350(*(HANDLE *)(a3 + 32));
}
