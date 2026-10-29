/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_366F0
// Address: 0x000366F0

//----- (000366F0) --------------------------------------------------------
unsigned int __cdecl sub_366F0(int a1, int a2, unsigned int *a3)
{
  unsigned int v3; // edi
  char *v4; // eax
  int v5; // esi
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // edx
  int v9; // esi
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // esi
  unsigned int v13; // kr00_4
  unsigned int v14; // edi
  unsigned int v15; // ecx
  char *v16; // eax
  int v17; // edi
  int v18; // esi
  int v19; // eax
  int v20; // edx
  int v22; // [esp-10h] [ebp-5Ch]
  __int64 v23; // [esp-10h] [ebp-5Ch]
  unsigned int v24; // [esp+Ch] [ebp-40h]
  size_t v25; // [esp+Ch] [ebp-40h]
  void (__cdecl *v26)(int, int, size_t, int, int, int); // [esp+10h] [ebp-3Ch]
  void *v27; // [esp+18h] [ebp-34h] BYREF
  int v28; // [esp+1Ch] [ebp-30h]
  int v29; // [esp+20h] [ebp-2Ch]
  int v30; // [esp+28h] [ebp-24h] BYREF
  int v31; // [esp+2Ch] [ebp-20h]
  int v32; // [esp+30h] [ebp-1Ch]
  char v33; // [esp+37h] [ebp-15h] BYREF
  unsigned int v34; // [esp+38h] [ebp-14h]

  v34 = __readgsdword(0x14u);
  v3 = a3[8];
  sub_1B530((int)&v30, "?");
  if ( *(__int64 *)(a1 + 140) >= 1 && *(_QWORD *)(a1 + 156) )
    sub_3C8A0(*(int **)(a1 + 132), (void **)&v30, (_QWORD *)(a1 + 140), *a3);
  v27 = nullptr;
  v28 = 0;
  v29 = 0;
  v24 = v3;
  if ( v31 )
    v4 = (char *)v30;
  else
    v4 = byte_EF875;
  sub_1F400((int)&v27, "Size of %s", v4);
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 132) + 360);
  v6 = a3[6];
  v7 = a3[7];
  if ( (v7 & v6) == 0xFFFFFFFF )
  {
    v6 = qlseek(v5, 0, 1);
    v7 = v8;
  }
  v22 = v5;
  v9 = v6;
  LODWORD(v10) = qlsize(v22);
  v13 = v10 - v9;
  v11 = (v10 - __PAIR64__(v7, v9)) >> 32;
  v12 = v10 - v9;
  if ( ((v11 | v7) & 0x80000000) != 0 )
  {
    v12 = 0;
  }
  else
  {
    v14 = v24;
    if ( __SPAIR64__(v11, v13) >= v24 )
      goto LABEL_14;
  }
  v14 = v12;
  if ( sub_44030() != 1 )
    sub_43A00(0);
LABEL_14:
  v15 = *(_DWORD *)(a2 + 4);
  v25 = v14;
  if ( v15 >= v14 )
  {
    if ( v15 != v14 )
    {
      v33 = 0;
      sub_43860((char **)a2, v14, &v33);
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 8) >= v14 )
    {
      v16 = *(char **)a2;
    }
    else
    {
      v16 = (char *)qvector_reserve(a2, *(void **)a2, v14, 1u);
      *(_DWORD *)a2 = v16;
      v15 = *(_DWORD *)(a2 + 4);
    }
    memset(&v16[v15], 0, v14 - v15);
    *(_DWORD *)(a2 + 4) = v14;
  }
  qlseek(*(_DWORD *)(*(_DWORD *)(a1 + 132) + 360), *((_QWORD *)a3 + 3) + *(_QWORD *)(*(_DWORD *)(a1 + 132) + 364), 0);
  v17 = *(_DWORD *)(a1 + 132);
  HIDWORD(v23) = *(_DWORD *)a2;
  LODWORD(v23) = *(_DWORD *)(v17 + 360);
  v18 = lreadbytes(v23, v25, 0);
  if ( v18 < 0 )
  {
    v26 = *(void (__cdecl **)(int, int, size_t, int, int, int))(v17 + 380);
    v19 = qlseek(*(_DWORD *)(v17 + 360), 0, 1);
    v26(v17, 19, v25, v18, v19, v20);
  }
  if ( v27 )
  {
    v28 = 0;
    qfree(v27);
    v27 = nullptr;
    v29 = 0;
  }
  if ( v30 )
  {
    v31 = 0;
    qfree((void *)v30);
    v30 = 0;
    v32 = 0;
  }
  return __readgsdword(0x14u);
}
// 36808: variable 'v8' is possibly undefined
// 3681E: variable 'v10' is possibly undefined
// 3694D: variable 'v20' is possibly undefined
