/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_33290
// Address: 0x00033290

//----- (00033290) --------------------------------------------------------
int __cdecl sub_33290(int a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // edi
  unsigned int v5; // edx
  unsigned int v6; // ecx
  unsigned __int64 v7; // kr00_8
  int v8; // eax
  int v9; // edx
  int v10; // esi
  int v11; // eax
  int v12; // edx
  bool v13; // sf
  int v14; // esi
  __int64 v16; // [esp-10h] [ebp-3Ch]
  void (__cdecl *v17)(int, int, int, int, int, int); // [esp+10h] [ebp-1Ch]
  _DWORD dest[6]; // [esp+14h] [ebp-18h] BYREF

  dest[1] = __readgsdword(0x14u);
  v2 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
  v4 = v3;
  v5 = *(_DWORD *)(a1 + 368);
  v6 = *(_DWORD *)(a1 + 364);
  v7 = __PAIR64__(v4, v2) - __PAIR64__(v5, v6);
  v8 = qlseek(*(_DWORD *)(a1 + 360), a2 + __PAIR64__(v5, v6), 0);
  if ( (v9 & v8) == 0xFFFFFFFF )
  {
    v14 = 0;
  }
  else
  {
    HIDWORD(v16) = dest;
    LODWORD(v16) = *(_DWORD *)(a1 + 360);
    v10 = lreadbytes(v16, 4u, *(_BYTE *)(a1 + 476));
    if ( v10 < 0 )
    {
      v17 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
      v11 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
      v17(a1, 19, 4, v10, v11, v12);
    }
    v13 = v10 < 0;
    v14 = 0;
    if ( !v13 )
      v14 = dest[0];
  }
  qlseek(*(_DWORD *)(a1 + 360), *(_QWORD *)(a1 + 364) + v7, 0);
  return v14;
}
// 332C9: variable 'v3' is possibly undefined
// 332F7: variable 'v9' is possibly undefined
// 33354: variable 'v12' is possibly undefined
