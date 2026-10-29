/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_421B0
// Address: 0x000421B0

//----- (000421B0) --------------------------------------------------------
int __cdecl sub_421B0(_DWORD *a1, unsigned int *a2, int a3, int a4)
{
  _DWORD *v4; // esi
  int *v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  bool v10; // cf
  int v11; // edi
  _DWORD *v12; // eax
  int v13; // edx
  int v14; // edi
  int v15; // ecx
  _DWORD *v16; // eax
  int v17; // edx
  int *v18; // ecx
  int v19; // esi
  _QWORD *v20; // edi
  int v21; // edi
  int v22; // ecx
  _DWORD *v23; // eax
  int v24; // edx
  int *v25; // ecx
  int v26; // esi
  _QWORD *v27; // esi
  int result; // eax
  unsigned __int16 v29; // cx
  int v30; // eax
  int *v31; // esi
  _DWORD *v32; // edi
  int v33; // edx
  unsigned __int16 v34; // ax
  int *v35; // eax
  _DWORD *v36; // eax
  _DWORD *v37; // ecx
  _WORD *v38; // edx
  int v39; // eax
  _WORD *v40; // edx
  int v41; // eax
  _DWORD *v42; // [esp+4h] [ebp-28h]
  _DWORD *v43; // [esp+4h] [ebp-28h]
  int v44; // [esp+8h] [ebp-24h]
  _WORD *v45; // [esp+8h] [ebp-24h]
  int v46; // [esp+Ch] [ebp-20h]
  int v47; // [esp+Ch] [ebp-20h]
  int v48; // [esp+10h] [ebp-1Ch]
  __int16 v49; // [esp+10h] [ebp-1Ch]
  int v50; // [esp+18h] [ebp-14h]

  v4 = a1;
  v5 = (int *)a1[2];
  v6 = *v5;
  v7 = 3 * (v5[1] - 1);
  v8 = *(_DWORD *)(v6 + 8 * v7 + 12);
  v9 = v8 + 1;
  v10 = *(_DWORD *)(v6 + 8 * v7 + 16) < (unsigned int)(v8 + 1);
  v48 = v6;
  v46 = v7;
  v11 = v6 + 8 * v7 + 8;
  if ( v10 )
  {
    v12 = qvector_reserve(v11, *(void **)v11, v8 + 1, 0xCu);
    *(_DWORD *)v11 = v12;
    v8 = *(_DWORD *)(v11 + 4);
    v9 = v8 + 1;
  }
  else
  {
    v12 = *(_DWORD **)v11;
  }
  v50 = v11;
  *(_DWORD *)(v11 + 4) = v9;
  v13 = 3 * v8;
  v12[v13 + 1] = a4;
  v12[v13] = a3;
  v42 = v12;
  v44 = 3 * v8;
  if ( (*(_BYTE *)(v48 + 8 * v46 + 20) & 1) != 0 )
  {
    *(_DWORD *)(a1[2] + 36) = *(_DWORD *)(a1[2] + 44);
    v14 = a1[2];
    v15 = *(_DWORD *)(v14 + 44);
    if ( *(_DWORD *)(v14 + 48) >= (unsigned int)(v15 + 1) )
    {
      v16 = *(_DWORD **)(v14 + 40);
    }
    else
    {
      v16 = qvector_reserve(v14 + 40, *(void **)(v14 + 40), v15 + 1, 0xCu);
      *(_DWORD *)(v14 + 40) = v16;
      v15 = *(_DWORD *)(v14 + 44);
    }
    v17 = 3 * v15;
    v16[v17] = 0;
    v16[v17 + 1] = 0;
    v16[v17 + 2] = 0;
    ++*(_DWORD *)(v14 + 44);
    v18 = (int *)a1[1];
    v19 = a1[3];
    if ( v19 == 2 )
    {
      v20 = v18 + 65;
    }
    else
    {
      if ( v19 != 1 )
        goto LABEL_40;
      v20 = v18 + 57;
    }
    v4 = a1;
    sub_3C8A0(v18, (void **)&v16[v17], v20, *a2);
    v12 = v42;
    v13 = v44;
  }
  v12[v13 + 2] = *(_DWORD *)(v4[2] + 56);
  v21 = v4[2];
  v22 = *(_DWORD *)(v21 + 56);
  if ( *(_DWORD *)(v21 + 60) >= (unsigned int)(v22 + 1) )
  {
    v23 = *(_DWORD **)(v21 + 52);
  }
  else
  {
    v23 = qvector_reserve(v21 + 52, *(void **)(v21 + 52), v22 + 1, 0xCu);
    *(_DWORD *)(v21 + 52) = v23;
    v22 = *(_DWORD *)(v21 + 56);
  }
  v24 = 3 * v22;
  v23[v24] = 0;
  v23[v24 + 1] = 0;
  v23[v24 + 2] = 0;
  ++*(_DWORD *)(v21 + 56);
  v25 = (int *)v4[1];
  v26 = v4[3];
  if ( v26 != 2 )
  {
    if ( v26 == 1 )
    {
      v27 = v25 + 57;
      goto LABEL_20;
    }
LABEL_40:
    if ( !(_BYTE)under_debugger )
      interr(20086);
    BUG();
  }
  v27 = v25 + 65;
LABEL_20:
  sub_3C8A0(v25, (void **)&v23[v24], v27, *a2);
  result = v48;
  v29 = *(_WORD *)(v48 + 8 * v46 + 22);
  if ( !v29 )
    return result;
  result = v50;
  if ( *(_DWORD *)(v50 + 4) != 1 )
    return result;
  v49 = *(_WORD *)(v48 + 8 * v46 + 22);
  v30 = a1[2];
  v31 = *(int **)(v30 + 68);
  v47 = v30;
  if ( !v31 )
  {
    v31 = (int *)(v30 + 68);
    v32 = (_DWORD *)(v30 + 68);
    v36 = v42;
    v33 = v44;
    goto LABEL_33;
  }
  v32 = (_DWORD *)(v30 + 68);
  v33 = v44;
  while ( 1 )
  {
    v34 = *((_WORD *)v31 + 8);
    if ( v29 < v34 )
      break;
    if ( v34 >= v29 )
      goto LABEL_32;
    v32 = v31 + 1;
    v35 = (int *)v31[1];
    if ( !v35 )
      goto LABEL_32;
LABEL_24:
    v31 = v35;
  }
  v35 = (int *)*v31;
  v32 = v31;
  if ( *v31 )
    goto LABEL_24;
  v32 = v31;
LABEL_32:
  v36 = v42;
LABEL_33:
  v37 = &v36[v33 + 2];
  v38 = (_WORD *)*v32;
  if ( *v32 )
  {
    v39 = a1[2];
  }
  else
  {
    v43 = v37;
    v40 = operator new(0x1Cu);
    v40[8] = v49;
    *((_DWORD *)v40 + 6) = 0;
    *((_DWORD *)v40 + 5) = 0;
    *(_DWORD *)v40 = 0;
    *((_DWORD *)v40 + 1) = 0;
    *((_DWORD *)v40 + 2) = v31;
    *v32 = v40;
    v41 = **(_DWORD **)(v47 + 64);
    v45 = v40;
    if ( v41 )
    {
      *(_DWORD *)(v47 + 64) = v41;
      v40 = (_WORD *)*v32;
    }
    sub_2D500(*(_DWORD *)(v47 + 68), (int)v40);
    ++*(_DWORD *)(v47 + 72);
    v39 = a1[2];
    v37 = v43;
    v38 = v45;
  }
  *((_DWORD *)v38 + 5) = *(_DWORD *)(v39 + 36);
  result = *v37;
  *((_DWORD *)v38 + 6) = *v37;
  return result;
}
// 13E34C: using guessed type int under_debugger;
