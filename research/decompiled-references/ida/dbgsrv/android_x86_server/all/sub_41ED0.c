/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41ED0
// Address: 0x00041ED0

//----- (00041ED0) --------------------------------------------------------
__int16 __cdecl sub_41ED0(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // esi
  int v9; // edi
  char *v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // edi
  int v14; // ecx
  _DWORD *v15; // eax
  int v16; // edx
  int *v17; // ecx
  int v18; // edi
  _QWORD *v19; // edi
  int v20; // eax
  int v21; // eax
  int *v22; // esi
  _DWORD *v23; // edi
  int v24; // ecx
  char *v25; // edx
  unsigned __int16 v26; // ax
  int *v27; // eax
  char *v28; // edx
  _WORD *v29; // ebx
  _WORD *v30; // edx
  int v31; // eax
  int v33; // [esp+4h] [ebp-28h]
  int v34; // [esp+4h] [ebp-28h]
  char *v35; // [esp+4h] [ebp-28h]
  unsigned __int16 v36; // [esp+Ah] [ebp-22h]
  char *v37; // [esp+Ch] [ebp-20h]
  _WORD *v38; // [esp+Ch] [ebp-20h]
  int v39; // [esp+10h] [ebp-1Ch]
  int v40; // [esp+14h] [ebp-18h]
  int v41; // [esp+18h] [ebp-14h]

  v4 = a1[2];
  v5 = *(_DWORD *)(v4 + 12);
  v6 = 3 * (*(_DWORD *)(v4 + 16) - 1);
  v7 = *(_DWORD *)(v5 + 24 * (*(_DWORD *)(v4 + 16) - 1) + 16);
  v33 = v7;
  v8 = v7 + 1;
  v41 = v5;
  v40 = v6;
  v9 = v5 + 8 * v6 + 12;
  if ( *(_DWORD *)(v5 + 8 * v6 + 20) >= (unsigned int)(v7 + 1) )
  {
    v10 = *(char **)v9;
    v11 = v33;
  }
  else
  {
    v10 = (char *)qvector_reserve(v5 + 8 * v6 + 12, *(void **)v9, v7 + 1, 0x10u);
    *(_DWORD *)v9 = v10;
    v11 = *(_DWORD *)(v9 + 4);
    v8 = v11 + 1;
  }
  *(_DWORD *)(v9 + 4) = v8;
  v12 = 16 * v11;
  *(_DWORD *)&v10[v12 + 4] = a4;
  *(_DWORD *)&v10[v12] = a3;
  v34 = v12;
  v37 = v10;
  *(_DWORD *)&v10[v12 + 8] = *(_DWORD *)(a1[2] + 56);
  v13 = a1[2];
  v14 = *(_DWORD *)(v13 + 56);
  if ( *(_DWORD *)(v13 + 60) >= (unsigned int)(v14 + 1) )
  {
    v15 = *(_DWORD **)(v13 + 52);
  }
  else
  {
    v15 = qvector_reserve(v13 + 52, *(void **)(v13 + 52), v14 + 1, 0xCu);
    *(_DWORD *)(v13 + 52) = v15;
    v14 = *(_DWORD *)(v13 + 56);
  }
  v16 = 3 * v14;
  v15[v16] = 0;
  v15[v16 + 1] = 0;
  v15[v16 + 2] = 0;
  ++*(_DWORD *)(v13 + 56);
  v17 = (int *)a1[1];
  v18 = a1[3];
  if ( v18 == 2 )
  {
    v19 = v17 + 65;
  }
  else
  {
    if ( v18 != 1 )
    {
      if ( !(_BYTE)under_debugger )
        interr(20086);
      BUG();
    }
    v19 = v17 + 57;
  }
  sub_3C8A0(v17, (void **)&v15[v16], v19, *(_DWORD *)(a2 + 8));
  LOWORD(v20) = *(_WORD *)(a2 + 6) & 0x7FFF;
  if ( (_WORD)v20 )
  {
    v36 = *(_WORD *)(a2 + 6) & 0x7FFF;
    v21 = a1[2];
    v22 = *(int **)(v21 + 68);
    v39 = v21;
    if ( v22 )
    {
      v23 = (_DWORD *)(v21 + 68);
      v24 = v34;
      v25 = v37;
      while ( 1 )
      {
        v26 = *((_WORD *)v22 + 8);
        if ( v36 >= v26 )
        {
          if ( v26 >= v36 )
            goto LABEL_22;
          v23 = v22 + 1;
          v27 = (int *)v22[1];
          if ( !v27 )
            goto LABEL_22;
        }
        else
        {
          v27 = (int *)*v22;
          v23 = v22;
          if ( !*v22 )
          {
            v23 = v22;
            goto LABEL_22;
          }
        }
        v22 = v27;
      }
    }
    v22 = (int *)(v21 + 68);
    v23 = (_DWORD *)(v21 + 68);
    v24 = v34;
    v25 = v37;
LABEL_22:
    v28 = &v25[v24 + 8];
    v29 = (_WORD *)*v23;
    if ( !*v23 )
    {
      v35 = v28;
      v30 = operator new(0x1Cu);
      v30[8] = v36;
      *((_DWORD *)v30 + 6) = 0;
      *((_DWORD *)v30 + 5) = 0;
      *(_DWORD *)v30 = 0;
      *((_DWORD *)v30 + 1) = 0;
      *((_DWORD *)v30 + 2) = v22;
      *v23 = v30;
      v31 = **(_DWORD **)(v39 + 64);
      v38 = v30;
      if ( v31 )
      {
        *(_DWORD *)(v39 + 64) = v31;
        v30 = (_WORD *)*v23;
      }
      sub_2D500(*(_DWORD *)(v39 + 68), (int)v30);
      ++*(_DWORD *)(v39 + 72);
      v28 = v35;
      v29 = v38;
    }
    *((_DWORD *)v29 + 5) = *(_DWORD *)(v41 + 8 * v40 + 8);
    v20 = *(_DWORD *)v28;
    *((_DWORD *)v29 + 6) = *(_DWORD *)v28;
  }
  return v20;
}
// 13E34C: using guessed type int under_debugger;
