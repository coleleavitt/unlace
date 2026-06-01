/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36C90
// Address: 0x00036C90

//----- (00036C90) --------------------------------------------------------
unsigned int __cdecl sub_36C90(int a1, int a2, int *a3)
{
  int v3; // edi
  int v4; // esi
  char *v5; // eax
  char *v6; // eax
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  int v10; // edi
  int v11; // edx
  int v12; // esi
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // esi
  unsigned int v16; // kr00_4
  unsigned int v17; // edi
  unsigned int v18; // ecx
  char *v19; // eax
  int v20; // edi
  int v21; // esi
  int v22; // eax
  int v23; // edx
  int v25; // [esp-10h] [ebp-5Ch]
  __int64 v26; // [esp-10h] [ebp-5Ch]
  unsigned int v27; // [esp+Ch] [ebp-40h]
  size_t v28; // [esp+Ch] [ebp-40h]
  void (__cdecl *v29)(int, int, size_t, int, int, int); // [esp+10h] [ebp-3Ch]
  int v30; // [esp+18h] [ebp-34h] BYREF
  unsigned int v31; // [esp+1Ch] [ebp-30h]
  int v32; // [esp+20h] [ebp-2Ch]
  void *v33; // [esp+28h] [ebp-24h] BYREF
  int v34; // [esp+2Ch] [ebp-20h]
  int v35; // [esp+30h] [ebp-1Ch]
  unsigned int v36; // [esp+38h] [ebp-14h]

  v36 = __readgsdword(0x14u);
  if ( !*(_BYTE *)(a1 + 36) )
  {
    if ( !(_BYTE)under_debugger )
      interr(20100);
    BUG();
  }
  v3 = a3[8];
  v33 = nullptr;
  v34 = 0;
  v35 = 0;
  v4 = *a3;
  v5 = (char *)sub_3D030(a1, *a3);
  sub_1B530((int)&v30, v5);
  if ( v31 > 1 || (sub_1F400((int)&v30, "%08X", v4), v31) )
    v6 = (char *)v30;
  else
    v6 = byte_EF875;
  sub_1F400((int)&v33, "Size of %s", v6);
  v7 = a1;
  if ( v30 )
  {
    v31 = 0;
    qfree((void *)v30);
    v30 = 0;
    v32 = 0;
    v7 = a1;
  }
  v8 = *(_DWORD *)(*(_DWORD *)(v7 + 32) + 360);
  v27 = v3;
  v9 = a3[2];
  v10 = a3[3];
  if ( (v10 & v9) == 0xFFFFFFFF )
  {
    v9 = qlseek(v8, 0, 1);
    v10 = v11;
  }
  v25 = v8;
  v12 = v9;
  LODWORD(v13) = qlsize(v25);
  v16 = v13 - v12;
  v14 = (v13 - __PAIR64__(v10, v12)) >> 32;
  v15 = v13 - v12;
  if ( ((v14 | v10) & 0x80000000) != 0 )
  {
    v15 = 0;
  }
  else
  {
    v17 = v27;
    if ( __SPAIR64__(v14, v16) >= v27 )
      goto LABEL_14;
  }
  v17 = v15;
  if ( sub_44030() != 1 )
    sub_43A00(0);
LABEL_14:
  v18 = *(_DWORD *)(a2 + 4);
  v28 = v17;
  if ( v18 >= v17 )
  {
    if ( v18 != v17 )
    {
      LOBYTE(v30) = 0;
      sub_43860((char **)a2, v17, (char *)&v30);
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 8) >= v17 )
    {
      v19 = *(char **)a2;
    }
    else
    {
      v19 = (char *)qvector_reserve(a2, *(void **)a2, v17, 1u);
      *(_DWORD *)a2 = v19;
      v18 = *(_DWORD *)(a2 + 4);
    }
    memset(&v19[v18], 0, v17 - v18);
    *(_DWORD *)(a2 + 4) = v17;
  }
  qlseek(*(_DWORD *)(*(_DWORD *)(a1 + 32) + 360), *((_QWORD *)a3 + 1) + *(_QWORD *)(*(_DWORD *)(a1 + 32) + 364), 0);
  v20 = *(_DWORD *)(a1 + 32);
  HIDWORD(v26) = *(_DWORD *)a2;
  LODWORD(v26) = *(_DWORD *)(v20 + 360);
  v21 = lreadbytes(v26, v28, 0);
  if ( v21 < 0 )
  {
    v29 = *(void (__cdecl **)(int, int, size_t, int, int, int))(v20 + 380);
    v22 = qlseek(*(_DWORD *)(v20 + 360), 0, 1);
    v29(v20, 19, v28, v21, v22, v23);
  }
  if ( v33 )
  {
    v34 = 0;
    qfree(v33);
    v33 = nullptr;
    v35 = 0;
  }
  return __readgsdword(0x14u);
}
// 36DC3: variable 'v11' is possibly undefined
// 36DD9: variable 'v13' is possibly undefined
// 36F02: variable 'v23' is possibly undefined
// 13E34C: using guessed type int under_debugger;
