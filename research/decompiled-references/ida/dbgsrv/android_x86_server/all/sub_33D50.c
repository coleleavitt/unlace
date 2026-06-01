/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_33D50
// Address: 0x00033D50

//----- (00033D50) --------------------------------------------------------
int __cdecl sub_33D50(int a1, char *dest)
{
  char *v2; // edi
  int v3; // esi
  int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // edx
  int v17; // esi
  int v18; // edi
  int v19; // eax
  int v20; // edx
  int v21; // esi
  int v22; // eax
  int v23; // edx
  int v24; // esi
  int v25; // eax
  int v26; // edx
  int v27; // esi
  int v28; // eax
  int v29; // edx
  int v30; // [esp-18h] [ebp-34h]
  int v31; // [esp-14h] [ebp-30h]
  __int64 v32; // [esp-10h] [ebp-2Ch]
  __int64 v33; // [esp-10h] [ebp-2Ch]
  __int64 v34; // [esp-10h] [ebp-2Ch]
  __int64 v35; // [esp-10h] [ebp-2Ch]
  __int64 v36; // [esp-10h] [ebp-2Ch]
  __int64 v37; // [esp-10h] [ebp-2Ch]
  __int64 v38; // [esp-10h] [ebp-2Ch]
  __int64 v39; // [esp-10h] [ebp-2Ch]
  __int64 v40; // [esp-10h] [ebp-2Ch]
  __int64 v41; // [esp-10h] [ebp-2Ch]
  __int64 v42; // [esp-10h] [ebp-2Ch]
  int v43; // [esp-10h] [ebp-2Ch]
  int v44; // [esp-Ch] [ebp-28h]
  char v45; // [esp+4h] [ebp-18h]
  size_t v46; // [esp+4h] [ebp-18h]
  size_t v47; // [esp+4h] [ebp-18h]
  void (__cdecl *v48)(int, int, int, int, int, int); // [esp+4h] [ebp-18h]
  void (__cdecl *v49)(int, int, int, int, int, int); // [esp+4h] [ebp-18h]
  void (__cdecl *v50)(int, int, size_t, int, int, int); // [esp+8h] [ebp-14h]
  void (__cdecl *v51)(int, int, int, int, int, int); // [esp+8h] [ebp-14h]
  void (__cdecl *v52)(int, int, size_t, int, int, int); // [esp+8h] [ebp-14h]

  v2 = dest;
  v45 = *(_BYTE *)(a1 + 477);
  HIDWORD(v32) = dest;
  LODWORD(v32) = *(_DWORD *)(a1 + 360);
  v3 = lreadbytes(v32, 4u, *(_BYTE *)(a1 + 476));
  if ( v3 < 0 )
  {
    v51 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
    v11 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
    v2 = dest;
    v51(a1, 19, 4, v3, v11, v12);
    if ( v45 )
    {
LABEL_3:
      result = -1;
      if ( v3 < 0 )
        return result;
      HIDWORD(v33) = v2 + 4;
      LODWORD(v33) = *(_DWORD *)(a1 + 360);
      v5 = lreadbytes(v33, 1u, *(_BYTE *)(a1 + 476));
      if ( v5 >= 0 )
      {
        HIDWORD(v34) = v2 + 5;
        LODWORD(v34) = *(_DWORD *)(a1 + 360);
        v5 = lreadbytes(v34, 1u, *(_BYTE *)(a1 + 476));
        if ( v5 >= 0 )
        {
          HIDWORD(v35) = v2 + 6;
          LODWORD(v35) = *(_DWORD *)(a1 + 360);
          v6 = lreadbytes(v35, 2u, *(_BYTE *)(a1 + 476));
          if ( v6 >= 0 )
          {
            v46 = *(_DWORD *)(a1 + 332);
            HIDWORD(v36) = v2 + 8;
            LODWORD(v36) = *(_DWORD *)(a1 + 360);
            v7 = lreadbytes(v36, v46, *(_BYTE *)(a1 + 476));
            if ( v7 >= 0 )
            {
              v47 = *(_DWORD *)(a1 + 340);
              HIDWORD(v37) = v2 + 16;
              LODWORD(v37) = *(_DWORD *)(a1 + 360);
              v8 = lreadbytes(v37, v47, *(_BYTE *)(a1 + 476));
              result = 0;
              if ( v8 >= 0 )
                return result;
              v50 = *(void (__cdecl **)(int, int, size_t, int, int, int))(a1 + 380);
              v9 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
              v50(a1, 19, v47, v8, v9, v10);
              return -1;
            }
            goto LABEL_21;
          }
          v24 = v6;
          v18 = a1;
          v49 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
          v25 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
          v44 = v26;
          v43 = v25;
          v31 = v24;
          v30 = 2;
LABEL_19:
          v49(v18, 19, v30, v31, v43, v44);
          return -1;
        }
      }
LABEL_18:
      v17 = v5;
      v18 = a1;
      v49 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
      v19 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
      v44 = v20;
      v43 = v19;
      v31 = v17;
      v30 = 1;
      goto LABEL_19;
    }
  }
  else if ( v45 )
  {
    goto LABEL_3;
  }
  result = -1;
  if ( v3 < 0 )
    return result;
  v46 = *(_DWORD *)(a1 + 332);
  HIDWORD(v38) = v2 + 8;
  LODWORD(v38) = *(_DWORD *)(a1 + 360);
  v7 = lreadbytes(v38, v46, *(_BYTE *)(a1 + 476));
  if ( v7 < 0 )
  {
LABEL_21:
    v21 = v7;
    v52 = *(void (__cdecl **)(int, int, size_t, int, int, int))(a1 + 380);
    v22 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
    v52(a1, 19, v46, v21, v22, v23);
    return -1;
  }
  HIDWORD(v39) = v2 + 16;
  LODWORD(v39) = *(_DWORD *)(a1 + 360);
  v13 = lreadbytes(v39, 4u, *(_BYTE *)(a1 + 476));
  if ( v13 < 0 )
  {
    v27 = v13;
    v18 = a1;
    v49 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
    v28 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
    v44 = v29;
    v43 = v28;
    v31 = v27;
    v30 = 4;
    goto LABEL_19;
  }
  HIDWORD(v40) = v2 + 4;
  LODWORD(v40) = *(_DWORD *)(a1 + 360);
  v5 = lreadbytes(v40, 1u, *(_BYTE *)(a1 + 476));
  if ( v5 < 0 )
    goto LABEL_18;
  HIDWORD(v41) = v2 + 5;
  LODWORD(v41) = *(_DWORD *)(a1 + 360);
  v5 = lreadbytes(v41, 1u, *(_BYTE *)(a1 + 476));
  if ( v5 < 0 )
    goto LABEL_18;
  HIDWORD(v42) = v2 + 6;
  LODWORD(v42) = *(_DWORD *)(a1 + 360);
  v14 = lreadbytes(v42, 2u, *(_BYTE *)(a1 + 476));
  result = 0;
  if ( v14 >= 0 )
    return result;
  v48 = *(void (__cdecl **)(int, int, int, int, int, int))(a1 + 380);
  v15 = qlseek(*(_DWORD *)(a1 + 360), 0, 1);
  v48(a1, 19, 2, v14, v15, v16);
  return -1;
}
// 33EBC: variable 'v10' is possibly undefined
// 33EED: variable 'v12' is possibly undefined
// 34002: variable 'v16' is possibly undefined
// 34027: variable 'v20' is possibly undefined
// 34062: variable 'v23' is possibly undefined
// 34099: variable 'v26' is possibly undefined
// 340C3: variable 'v29' is possibly undefined
