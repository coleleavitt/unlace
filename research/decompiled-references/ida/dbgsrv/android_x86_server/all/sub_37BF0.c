/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37BF0
// Address: 0x00037BF0

//----- (00037BF0) --------------------------------------------------------
int __cdecl sub_37BF0(int a1, void *a2)
{
  __int64 v2; // kr08_8
  int v3; // edi
  unsigned int v4; // edx
  int v5; // eax
  int v6; // edx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edi
  int (__cdecl *v12)(int, int, int, int, int, int); // esi
  int v13; // eax
  int v14; // edx
  __int64 v15; // [esp-10h] [ebp-3Ch]
  __int64 v16; // [esp-10h] [ebp-3Ch]
  int v17; // [esp+8h] [ebp-24h]
  unsigned __int64 v18; // [esp+Ch] [ebp-20h]
  _DWORD dest[6]; // [esp+14h] [ebp-18h] BYREF

  dest[1] = __readgsdword(0x14u);
  v2 = *(_QWORD *)(a1 + 372) - *(_QWORD *)(a1 + 364);
  v3 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
  v18 = __PAIR64__(v4, v3) - *(_QWORD *)(a1 + 364);
  v5 = qlseek(*(_DWORD *)(a1 + 360), v2 + *(_QWORD *)(a1 + 364) - 4, 0);
  if ( (v6 & v5) == 0xFFFFFFFF
    || (HIDWORD(v15) = dest, LODWORD(v15) = *(_DWORD *)(a1 + 360), qlread(v15, 4u) != 4)
    || dest[0] != 541413968
    || (v8 = qlseek(*(_DWORD *)(a1 + 360), v2 - 8, 0), (v9 & v8) == 0xFFFFFFFF) )
  {
    v17 = 0;
  }
  else
  {
    HIDWORD(v16) = a2;
    LODWORD(v16) = *(_DWORD *)(a1 + 360);
    v10 = lreadbytes(v16, 4u, *(_BYTE *)(a1 + 476));
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = *(int (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
      v13 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
      v10 = v12(a1, 19, 4, v11, v13, v14);
    }
    LOBYTE(v10) = v11 >= 0;
    v17 = v10;
  }
  qlseek(*(_DWORD *)(a1 + 360), *(_QWORD *)(a1 + 364) + v18, 0);
  return v17;
}
// 37C58: variable 'v4' is possibly undefined
// 37C8B: variable 'v6' is possibly undefined
// 37D30: variable 'v9' is possibly undefined
// 37D93: variable 'v14' is possibly undefined
