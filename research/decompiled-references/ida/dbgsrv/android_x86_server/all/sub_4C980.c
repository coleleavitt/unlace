/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C980
// Address: 0x0004C980

//----- (0004C980) --------------------------------------------------------
int __cdecl sub_4C980(int a1, _DWORD *a2, char a3, int a4)
{
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // eax
  char *v7; // eax
  int v8; // eax
  char v9; // dl
  int v10; // ecx
  char *v11; // ecx
  int v12; // edi
  int v13; // ecx
  _BYTE *v14; // eax
  int v15; // eax
  int v16; // ecx
  size_t v17; // edx
  char *v18; // ecx
  char v19; // al
  int v20; // eax
  size_t v21; // edi
  _DWORD *v22; // edi
  int v23; // eax
  char *v24; // eax
  int v26; // eax
  int v27; // ecx
  size_t v28; // edx
  char *v29; // ecx
  int v30; // edx
  int v31; // esi
  int v32; // ecx
  _BYTE *v33; // eax
  int v34; // eax
  size_t v35; // esi
  int v36; // ecx
  _BYTE *v37; // eax
  int v38; // ecx
  _BYTE *v39; // eax
  char v40; // [esp+7h] [ebp-15h]
  int v41; // [esp+8h] [ebp-14h]
  int v42; // [esp+8h] [ebp-14h]
  int v43; // [esp+8h] [ebp-14h]

  v4 = a1;
  switch ( *a2 )
  {
    case 1:
      v10 = a2[2];
      if ( *(_DWORD *)(v10 + 4) )
        v11 = *(char **)v10;
      else
        v11 = byte_EF875;
      return sub_4C1F0(a1, v11, a3, a4);
    case 2:
      *(_BYTE *)(a1 + 116) = -86;
      v12 = *(_DWORD *)(a1 + 108);
      v13 = *(_DWORD *)(v12 + 4);
      if ( *(_DWORD *)(v12 + 8) >= (unsigned int)(v13 + 1) )
      {
        v14 = *(_BYTE **)v12;
      }
      else
      {
        v14 = qvector_reserve(v12, *(void **)v12, v13 + 1, 1u);
        *(_DWORD *)v12 = v14;
        v13 = *(_DWORD *)(v12 + 4);
      }
      v14[v13] = -86;
      ++*(_DWORD *)(v12 + 4);
      ++*(_DWORD *)(a1 + 112);
      v20 = a2[1];
      v21 = *(_DWORD *)(v20 + 4);
      sub_51F00(*(_DWORD *)(a1 + 108), *(void **)v20, v21);
      *(_DWORD *)(a1 + 112) += v21;
      v22 = (_DWORD *)a2[2];
      if ( *v22 == 5 )
      {
        v26 = sub_4C980(a1, v22[2], 0, 0);
        v27 = v22[1];
        v28 = *(_DWORD *)(v27 + 4);
        v42 = v26;
        if ( v28 )
        {
          --v28;
          v29 = *(char **)v27;
        }
        else
        {
          v29 = byte_EF875;
        }
        v4 = a1;
        sub_47000(a1, v29, v28);
        *(_BYTE *)(a1 + 116) = -9;
        v31 = *(_DWORD *)(a1 + 108);
        v38 = *(_DWORD *)(v31 + 4);
        if ( *(_DWORD *)(v31 + 8) >= (unsigned int)(v38 + 1) )
        {
          v39 = *(_BYTE **)v31;
        }
        else
        {
          v39 = qvector_reserve(v31, *(void **)v31, v38 + 1, 1u);
          *(_DWORD *)v31 = v39;
          v38 = *(_DWORD *)(v31 + 4);
        }
        v30 = v42;
        v39[v38] = -9;
        goto LABEL_39;
      }
      if ( *v22 != 1 )
      {
        v4 = a1;
        v30 = sub_4C980(a1, a2[2], 0, 0);
        *(_BYTE *)(a1 + 116) = -92;
        v31 = *(_DWORD *)(a1 + 108);
        v32 = *(_DWORD *)(v31 + 4);
        if ( *(_DWORD *)(v31 + 8) >= (unsigned int)(v32 + 1) )
        {
          v33 = *(_BYTE **)v31;
        }
        else
        {
          v43 = v30;
          v33 = qvector_reserve(v31, *(void **)v31, v32 + 1, 1u);
          v30 = v43;
          *(_DWORD *)v31 = v33;
          v32 = *(_DWORD *)(v31 + 4);
        }
        v33[v32] = -92;
LABEL_39:
        ++*(_DWORD *)(v31 + 4);
        ++*(_DWORD *)(v4 + 112);
        return v30;
      }
      v23 = v22[2];
      if ( *(_DWORD *)(v23 + 4) )
        v24 = *(char **)v23;
      else
        v24 = byte_EF875;
      return sub_4C5A0(a1, v24, a2[3]);
    case 3:
    case 4:
      v5 = (_DWORD *)a2[2];
      if ( a3 && *v5 == 1 )
      {
        v6 = v5[2];
        if ( *(_DWORD *)(v6 + 4) )
          v7 = *(char **)v6;
        else
          v7 = byte_EF875;
        v8 = sub_4CC80((_DWORD *)a1, v7);
      }
      else
      {
        v8 = sub_4C980(a1, v5, 0, 0);
      }
      v41 = v8;
      v34 = a2[1];
      v35 = *(_DWORD *)(v34 + 4);
      sub_51F00(*(_DWORD *)(a1 + 108), *(void **)v34, v35);
      *(_DWORD *)(a1 + 112) += v35;
      if ( *a2 == 3 )
        v19 = -4 - a3;
      else
        v19 = a3 | 0xFE;
      v40 = v19;
      goto LABEL_35;
    case 5:
      if ( a4 )
        v9 = -10 - (a4 > 0);
      else
        v9 = a3 | 0xF2;
      v40 = v9;
      v15 = sub_4C980(a1, a2[2], 0, 0);
      v16 = a2[1];
      v17 = *(_DWORD *)(v16 + 4);
      v41 = v15;
      if ( v17 )
      {
        --v17;
        v18 = *(char **)v16;
      }
      else
      {
        v18 = byte_EF875;
      }
      sub_47000(a1, v18, v17);
      v19 = v40;
LABEL_35:
      *(_BYTE *)(a1 + 116) = v19;
      v31 = *(_DWORD *)(a1 + 108);
      v36 = *(_DWORD *)(v31 + 4);
      if ( *(_DWORD *)(v31 + 8) >= (unsigned int)(v36 + 1) )
      {
        v37 = *(_BYTE **)v31;
      }
      else
      {
        v37 = qvector_reserve(v31, *(void **)v31, v36 + 1, 1u);
        *(_DWORD *)v31 = v37;
        v36 = *(_DWORD *)(v31 + 4);
      }
      v30 = v41;
      v37[v36] = v40;
      goto LABEL_39;
    default:
      if ( !(_BYTE)under_debugger )
        interr(273);
      BUG();
  }
}
// 13E34C: using guessed type int under_debugger;
