/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3CA3C
// Address: 0x0003CA3C

//----- (0003CA3C) --------------------------------------------------------
int __fastcall sub_3CA3C(int a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r7
  int v11; // r1
  int v12; // r0
  const char *v13; // r1
  int v14; // r0
  const char *v15; // r1
  _BYTE *v16; // r7
  int v17; // r5
  int v18; // r1
  _BYTE *v19; // r0
  size_t v20; // r2
  char v21; // r6
  char v22; // r1
  int v23; // r5
  int v24; // r1
  _BYTE *v25; // r0
  int v26; // r2
  size_t v27; // r5
  _DWORD *v28; // r5
  int v29; // r0
  int v30; // r6
  int v31; // r1
  int v32; // r0
  const char *v33; // r1
  int v34; // r6
  int v35; // r5
  int v36; // r1
  _BYTE *v37; // r0
  const char *v38; // r1
  int v39; // r2
  size_t v40; // r5
  char v41; // r7
  char v42; // r1
  int v43; // r5
  int v44; // r1
  _BYTE *v45; // r0
  size_t v46; // r2
  int v47; // r1
  _BYTE *v48; // r0
  char *v50; // r1
  int v51; // [sp+8h] [bp-8h]

  switch ( *a2 )
  {
    case 1:
      v14 = a2[2];
      if ( *(_DWORD *)(v14 + 4) )
        v15 = *(const char **)v14;
      else
        v15 = &byte_B3CBE;
      return sub_3C3E4(a1, v15, a3, a4);
    case 2:
      *(_BYTE *)(a1 + 120) = -86;
      v16 = (_BYTE *)(a1 + 120);
      v17 = *(_DWORD *)(a1 + 112);
      v18 = *(_DWORD *)(v17 + 4);
      if ( *(_DWORD *)(v17 + 8) >= (unsigned int)(v18 + 1) )
      {
        v19 = *(_BYTE **)v17;
      }
      else
      {
        v19 = qvector_reserve(v17, *(void **)v17, v18 + 1, 1u);
        v16 = (_BYTE *)(a1 + 120);
        *(_DWORD *)v17 = v19;
        v18 = *(_DWORD *)(v17 + 4);
      }
      v19[v18] = -86;
      ++*(_DWORD *)(v17 + 4);
      ++*(_DWORD *)(a1 + 116);
      v26 = a2[1];
      v27 = *(_DWORD *)(v26 + 4);
      sub_40150(*(_DWORD *)(a1 + 112), *(const void **)v26, v27);
      *(_DWORD *)(a1 + 116) += v27;
      v28 = (_DWORD *)a2[2];
      if ( *v28 == 5 )
      {
        v30 = sub_3CA3C(a1, v28[2], 0, 0);
        v31 = v28[1];
        v32 = *(_DWORD *)(v31 + 4);
        if ( v32 )
          v33 = *(const char **)v31;
        else
          v33 = &byte_B3CBE;
        v46 = v32 - 1;
        if ( !v32 )
          v46 = 0;
        sub_39160(a1, v33, v46);
        *v16 = -9;
        v23 = *(_DWORD *)(a1 + 112);
        v47 = *(_DWORD *)(v23 + 4);
        if ( *(_DWORD *)(v23 + 8) >= (unsigned int)(v47 + 1) )
        {
          v48 = *(_BYTE **)v23;
        }
        else
        {
          v48 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v23, v47 + 1, 1u);
          *(_DWORD *)v23 = v48;
          v47 = *(_DWORD *)(v23 + 4);
        }
        v10 = v30;
        v48[v47] = -9;
LABEL_57:
        ++*(_DWORD *)(v23 + 4);
        ++*(_DWORD *)(a1 + 116);
      }
      else if ( *v28 == 1 )
      {
        v29 = v28[2];
        if ( *(_DWORD *)(v29 + 4) )
          v50 = *(char **)v29;
        else
          v50 = &byte_B3CBE;
        return sub_3C6F4(a1, v50, a2[3]);
      }
      else
      {
        v34 = sub_3CA3C(a1, a2[2], 0, 0);
        *v16 = -92;
        v35 = *(_DWORD *)(a1 + 112);
        v36 = *(_DWORD *)(v35 + 4);
        if ( *(_DWORD *)(v35 + 8) >= (unsigned int)(v36 + 1) )
        {
          v37 = *(_BYTE **)v35;
        }
        else
        {
          v37 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v35, v36 + 1, 1u);
          *(_DWORD *)v35 = v37;
          v36 = *(_DWORD *)(v35 + 4);
        }
        v37[v36] = -92;
        ++*(_DWORD *)(v35 + 4);
        ++*(_DWORD *)(a1 + 116);
        return v34;
      }
      return v10;
    case 3:
    case 4:
      v7 = (_DWORD *)a2[2];
      if ( a3 && *v7 == 1 )
      {
        v8 = v7[2];
        if ( *(_DWORD *)(v8 + 4) )
          v38 = *(const char **)v8;
        else
          v38 = &byte_B3CBE;
        v9 = sub_3CCFC((_DWORD *)a1, v38);
      }
      else
      {
        v9 = sub_3CA3C(a1, v7, 0, 0);
      }
      v51 = v9;
      v39 = a2[1];
      v40 = *(_DWORD *)(v39 + 4);
      sub_40150(*(_DWORD *)(a1 + 112), *(const void **)v39, v40);
      *(_DWORD *)(a1 + 116) += v40;
      v41 = -5;
      if ( !a3 )
        v41 = -4;
      v42 = -1;
      if ( !a3 )
        v42 = -2;
      if ( *a2 != 3 )
        v41 = v42;
      *(_BYTE *)(a1 + 120) = v41;
      v43 = *(_DWORD *)(a1 + 112);
      v44 = *(_DWORD *)(v43 + 4);
      if ( *(_DWORD *)(v43 + 8) >= (unsigned int)(v44 + 1) )
      {
        v45 = *(_BYTE **)v43;
      }
      else
      {
        v45 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v43, v44 + 1, 1u);
        *(_DWORD *)v43 = v45;
        v44 = *(_DWORD *)(v43 + 4);
      }
      v45[v44] = v41;
      ++*(_DWORD *)(v43 + 4);
      ++*(_DWORD *)(a1 + 116);
      return v51;
    case 5:
      v10 = sub_3CA3C(a1, a2[2], 0, 0);
      v11 = a2[1];
      v12 = *(_DWORD *)(v11 + 4);
      if ( v12 )
        v13 = *(const char **)v11;
      else
        v13 = &byte_B3CBE;
      v20 = v12 - 1;
      if ( !v12 )
        v20 = 0;
      sub_39160(a1, v13, v20);
      v21 = -13;
      if ( !a3 )
        v21 = -14;
      v22 = -11;
      if ( a4 <= 0 )
        v22 = -10;
      if ( a4 )
        v21 = v22;
      *(_BYTE *)(a1 + 120) = v21;
      v23 = *(_DWORD *)(a1 + 112);
      v24 = *(_DWORD *)(v23 + 4);
      if ( *(_DWORD *)(v23 + 8) >= (unsigned int)(v24 + 1) )
      {
        v25 = *(_BYTE **)v23;
      }
      else
      {
        v25 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v23, v24 + 1, 1u);
        *(_DWORD *)v23 = v25;
        v24 = *(_DWORD *)(v23 + 4);
      }
      v25[v24] = v21;
      goto LABEL_57;
    default:
      if ( !under_debugger )
        interr(273);
      __debugbreak();
  }
}
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
