/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40540
// Address: 0x00040540

//----- (00040540) --------------------------------------------------------
unsigned int __cdecl sub_40540(int a1, _DWORD *a2, int a3)
{
  int v3; // ecx
  int *v4; // esi
  unsigned int v5; // eax
  int v6; // edi
  int v7; // ecx
  int *v8; // edi
  unsigned int v9; // eax
  unsigned int v10; // ecx
  int *v11; // ecx
  int v12; // ecx
  _DWORD *v13; // ecx
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // esi
  _DWORD *v17; // edi
  int v18; // eax
  int v19; // edx
  _DWORD *v20; // ecx
  int v21; // ecx
  unsigned int v22; // eax
  int *v23; // esi
  unsigned int v24; // ecx
  unsigned __int64 v25; // rax
  int *v26; // edx
  _DWORD *v27; // eax
  int v28; // ecx
  _QWORD *v29; // edx
  _QWORD *v30; // edx
  int v31; // eax
  _QWORD *v32; // esi
  int *v34; // [esp+Ch] [ebp-30h]
  _DWORD *v35; // [esp+Ch] [ebp-30h]
  _DWORD *v36; // [esp+Ch] [ebp-30h]
  _DWORD *v37; // [esp+10h] [ebp-2Ch]
  int v38; // [esp+18h] [ebp-24h] BYREF
  int v39; // [esp+1Ch] [ebp-20h] BYREF
  int v40; // [esp+20h] [ebp-1Ch]
  unsigned int v41; // [esp+28h] [ebp-14h]

  v3 = a1;
  v41 = __readgsdword(0x14u);
  v4 = *(int **)(a1 + 8);
  if ( !v4 )
    goto LABEL_8;
  v5 = a2[15];
  v6 = a1 + 8;
  v7 = *(_DWORD *)(a1 + 8);
  do
  {
    if ( *(_DWORD *)(v7 + 16) >= v5 )
      v6 = v7;
    v7 = *(_DWORD *)(v7 + 4 * (*(_DWORD *)(v7 + 16) < v5));
  }
  while ( v7 );
  v3 = a1;
  if ( v6 == a1 + 8 || v5 < *(_DWORD *)(v6 + 16) )
  {
LABEL_8:
    v39 = 0;
    v40 = 0;
    v38 = (int)&v39;
    v34 = (int *)(a1 + 8);
    if ( v4 )
    {
      v8 = (int *)(v3 + 8);
      v9 = a2[15];
      while ( 1 )
      {
        v10 = v4[4];
        if ( v9 >= v10 )
        {
          if ( v10 >= v9 )
            goto LABEL_18;
          v8 = v4 + 1;
          v11 = (int *)v4[1];
          if ( !v11 )
            goto LABEL_18;
        }
        else
        {
          v11 = (int *)*v4;
          v8 = v4;
          if ( !*v4 )
          {
            v8 = v4;
            goto LABEL_18;
          }
        }
        v4 = v11;
      }
    }
    v4 = (int *)(a1 + 8);
    v8 = (int *)(a1 + 8);
LABEL_18:
    v12 = *v8;
    if ( !*v8 )
    {
      v13 = operator new(0x20u);
      v13[4] = a2[15];
      v13[6] = 0;
      v13[7] = 0;
      v13[5] = v13 + 6;
      *v13 = 0;
      v13[1] = 0;
      v13[2] = v4;
      *v8 = (int)v13;
      v14 = **(_DWORD **)(a1 + 4);
      v37 = v13;
      if ( v14 )
      {
        *(_DWORD *)(a1 + 4) = v14;
        v15 = *v8;
      }
      else
      {
        v15 = (int)v13;
      }
      sub_2D500(*(_DWORD *)(a1 + 8), v15);
      ++*(_DWORD *)(a1 + 12);
      v12 = (int)v37;
    }
    v16 = (_DWORD *)(v12 + 20);
    v17 = (_DWORD *)v12;
    sub_42C40(v12 + 20, *(void ***)(v12 + 24));
    v17[5] = v38;
    v18 = v39;
    v17[6] = v39;
    v19 = v40;
    v17[7] = v40;
    v20 = v17 + 6;
    if ( v19 )
    {
      *(_DWORD *)(v18 + 8) = v20;
      v38 = (int)&v39;
      v39 = 0;
      v40 = 0;
      v18 = 0;
    }
    else
    {
      *v16 = v20;
    }
    sub_42C40((int)&v38, (void **)v18);
    v21 = *v34;
    if ( !*v34 )
      goto LABEL_33;
    v22 = a2[15];
    v6 = a1 + 8;
    do
    {
      if ( *(_DWORD *)(v21 + 16) >= v22 )
        v6 = v21;
      v21 = *(_DWORD *)(v21 + 4 * (*(_DWORD *)(v21 + 16) < v22));
    }
    while ( v21 );
    if ( (int *)v6 == v34 || v22 < *(_DWORD *)(v6 + 16) )
LABEL_33:
      v6 = a1 + 8;
  }
  v23 = *(int **)(v6 + 24);
  if ( v23 )
  {
    v35 = (_DWORD *)(v6 + 24);
    v24 = a2[8];
    while ( 1 )
    {
      v25 = *((_QWORD *)v23 + 2);
      if ( __PAIR64__(a2[9], v24) >= v25 )
      {
        v24 = a2[8];
        if ( v25 >= *((_QWORD *)a2 + 4) )
        {
          v27 = v35;
          goto LABEL_46;
        }
        v27 = v23 + 1;
        v26 = (int *)v23[1];
        if ( !v26 )
          goto LABEL_46;
      }
      else
      {
        v26 = (int *)*v23;
        v27 = v23;
        v24 = a2[8];
        if ( !*v23 )
          goto LABEL_44;
      }
      v35 = v27;
      v23 = v26;
    }
  }
  v23 = (int *)(v6 + 24);
LABEL_44:
  v27 = v23;
LABEL_46:
  v28 = a3;
  v29 = (_QWORD *)*v27;
  if ( !*v27 )
  {
    v36 = v27;
    v30 = operator new(0x1Cu);
    v30[2] = *((_QWORD *)a2 + 4);
    *((_DWORD *)v30 + 6) = 0;
    *(_DWORD *)v30 = 0;
    *((_DWORD *)v30 + 1) = 0;
    *((_DWORD *)v30 + 2) = v23;
    *v36 = v30;
    v31 = **(_DWORD **)(v6 + 20);
    v32 = v30;
    if ( v31 )
    {
      *(_DWORD *)(v6 + 20) = v31;
      v30 = (_QWORD *)*v36;
    }
    sub_2D500(*(_DWORD *)(v6 + 24), (int)v30);
    ++*(_DWORD *)(v6 + 28);
    v28 = a3;
    v29 = v32;
  }
  *((_DWORD *)v29 + 6) = v28;
  return __readgsdword(0x14u);
}
