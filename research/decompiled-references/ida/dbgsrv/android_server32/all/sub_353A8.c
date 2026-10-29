/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_353A8
// Address: 0x000353A8

//----- (000353A8) --------------------------------------------------------
int __fastcall sub_353A8(int a1, int a2, int a3)
{
  int v3; // r6
  int v4; // r2
  _DWORD **v5; // r5
  _DWORD *v6; // r4
  unsigned int v7; // r0
  _DWORD *v8; // r7
  _DWORD *v9; // r1
  unsigned int v10; // r2
  _DWORD *v11; // r3
  unsigned int v12; // r0
  unsigned int v13; // r1
  _DWORD *v14; // r1
  _DWORD *v15; // r7
  int v16; // r0
  int *v17; // r1
  _DWORD *v18; // r6
  _DWORD *v19; // r1
  int v20; // r2
  _DWORD *v21; // r7
  _DWORD *v22; // r1
  unsigned int v23; // r0
  unsigned int v24; // r2
  _DWORD *v25; // r3
  int **v26; // r4
  int **v27; // r5
  int *v28; // r6
  unsigned __int64 v29; // r0
  int *v30; // r3
  int *v31; // r2
  int *v32; // r2
  int *v33; // r6
  int v34; // r1
  int v35; // r0
  int *v36; // r1
  _DWORD *v38; // [sp+Ch] [bp-24h]
  int v41; // [sp+1Ch] [bp-14h]
  int *v42; // [sp+1Ch] [bp-14h]
  _DWORD *v43; // [sp+20h] [bp-10h] BYREF
  _DWORD *v44; // [sp+24h] [bp-Ch] BYREF
  int v45; // [sp+28h] [bp-8h]
  int v46; // [sp+2Ch] [bp-4h]

  v3 = a2;
  v4 = a1;
  v5 = (_DWORD **)(a1 + 8);
  v6 = *(_DWORD **)(a1 + 8);
  if ( !v6 )
    goto LABEL_10;
  v7 = *(_DWORD *)(a2 + 60);
  v8 = (_DWORD *)(v4 + 8);
  v9 = v6;
  do
  {
    v10 = v9[4];
    if ( v10 >= v7 )
      v8 = v9;
    v11 = v9 + 1;
    if ( v10 >= v7 )
      v11 = v9;
    v9 = (_DWORD *)*v11;
  }
  while ( *v11 );
  v4 = a1;
  if ( v8 == v5 || v7 < v8[4] )
  {
LABEL_10:
    v41 = v3;
    v45 = 0;
    v44 = nullptr;
    v43 = &v44;
    v38 = v5;
    if ( v6 )
    {
      v12 = *(_DWORD *)(v3 + 60);
      v5 = (_DWORD **)(v4 + 8);
      while ( 1 )
      {
        v13 = v6[4];
        if ( v12 >= v13 )
        {
          if ( v13 >= v12 )
            goto LABEL_20;
          v14 = (_DWORD *)v6[1];
          v5 = (_DWORD **)(v6 + 1);
          if ( !v14 )
            goto LABEL_20;
          ++v6;
        }
        else
        {
          v14 = (_DWORD *)*v6;
          if ( !*v6 )
          {
            v5 = (_DWORD **)v6;
            goto LABEL_20;
          }
        }
        v5 = (_DWORD **)v6;
        v6 = v14;
      }
    }
    v6 = v5;
LABEL_20:
    v15 = *v5;
    if ( !*v5 )
    {
      v15 = operator new(0x20u);
      v15[4] = *(_DWORD *)(v3 + 60);
      v15[5] = v15 + 6;
      v15[6] = 0;
      v15[7] = 0;
      *v15 = 0;
      v15[1] = 0;
      v15[2] = v6;
      *v5 = v15;
      v16 = **(_DWORD **)(a1 + 4);
      if ( v16 )
      {
        *(_DWORD *)(a1 + 4) = v16;
        v17 = *v5;
      }
      else
      {
        v17 = v15;
      }
      sub_261FA(*(int **)(a1 + 8), v17);
      ++*(_DWORD *)(a1 + 12);
    }
    v18 = v15 + 5;
    sub_369A8((int)(v15 + 5), (_DWORD *)v15[6]);
    v19 = v44;
    v20 = v45;
    v15[5] = v43;
    v15[6] = v19;
    v15[7] = v20;
    v21 = v15 + 6;
    if ( v20 )
    {
      v19[2] = v21;
      v19 = nullptr;
      v44 = nullptr;
      v43 = &v44;
      v45 = 0;
    }
    else
    {
      *v18 = v21;
    }
    v3 = v41;
    sub_369A8((int)&v43, v19);
    v22 = (_DWORD *)*v38;
    if ( !*v38 )
      goto LABEL_37;
    v23 = *(_DWORD *)(v41 + 60);
    v8 = v38;
    do
    {
      v24 = v22[4];
      if ( v24 >= v23 )
        v8 = v22;
      v25 = v22 + 1;
      if ( v24 >= v23 )
        v25 = v22;
      v22 = (_DWORD *)*v25;
    }
    while ( *v25 );
    if ( v8 == v38 || v23 < v8[4] )
LABEL_37:
      v8 = v38;
  }
  v26 = (int **)v8[6];
  v27 = (int **)(v8 + 6);
  v28 = (int *)(v3 + 32);
  v42 = v28;
  if ( v26 )
  {
    v29 = *(_QWORD *)v28;
    v27 = (int **)(v8 + 6);
    while ( 1 )
    {
      v30 = v26[4];
      v31 = v26[5];
      if ( v29 >= __PAIR64__((unsigned int)v31, (unsigned int)v30) )
      {
        if ( __PAIR64__((unsigned int)v31, (unsigned int)v30) >= v29 )
          goto LABEL_48;
        v32 = v26[1];
        v27 = v26 + 1;
        if ( !v32 )
          goto LABEL_48;
        ++v26;
      }
      else
      {
        v32 = *v26;
        if ( !*v26 )
        {
          v27 = v26;
          goto LABEL_48;
        }
      }
      v27 = v26;
      v26 = (int **)v32;
    }
  }
  v26 = (int **)(v8 + 6);
LABEL_48:
  v33 = *v27;
  if ( !*v27 )
  {
    v33 = (int *)operator new(0x20u);
    v34 = v42[1];
    v33[4] = *v42;
    v33[5] = v34;
    v33[6] = 0;
    *v33 = 0;
    v33[1] = 0;
    v33[2] = (int)v26;
    *v27 = v33;
    v35 = *(_DWORD *)v8[5];
    if ( v35 )
    {
      v8[5] = v35;
      v36 = *v27;
    }
    else
    {
      v36 = v33;
    }
    sub_261FA((int *)v8[6], v36);
    ++v8[7];
  }
  v33[6] = a3;
  return _stack_chk_guard - v46;
}
