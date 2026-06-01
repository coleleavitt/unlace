/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32868
// Address: 0x00032868

//----- (00032868) --------------------------------------------------------
bool __fastcall sub_32868(int a1, int a2, int *a3)
{
  unsigned int *v5; // r2
  _BOOL4 result; // r0
  int v7; // r2
  int v8; // r2
  int v9; // r4
  int v10; // r7
  void *v11; // r0
  char v12; // r6
  int v13; // r0
  int v14; // r5
  int v15; // r3
  void *v16; // r1
  _DWORD *v17; // r4
  _BOOL4 v18; // [sp+Ch] [bp-24h]
  unsigned int v20; // [sp+1Ch] [bp-14h]
  char *v21; // [sp+20h] [bp-10h] BYREF
  unsigned int v22; // [sp+24h] [bp-Ch]
  int v23; // [sp+28h] [bp-8h]

  v5 = sub_31EE4(a1, 1, ".gnu_debuglink");
  result = 0;
  if ( !v5 )
    return result;
  v22 = 0;
  v21 = nullptr;
  v23 = 0;
  sub_2DCFC(a1, (int)&v21, v5);
  v7 = a2;
  v18 = v22 > 4;
  if ( v22 < 5 )
    goto LABEL_18;
  if ( a3 )
  {
    v20 = v22 - 4;
    v8 = (*(_DWORD *)&v21[v22 - 4] << 24)
       + ((*(_DWORD *)&v21[v22 - 4] << 8) & 0xFF0000)
       + ((*(_DWORD *)&v21[v22 - 4] >> 8) & 0xFF00)
       + HIBYTE(*(_DWORD *)&v21[v22 - 4]);
    if ( *(_BYTE *)(*(_DWORD *)(a1 + 132) + 393) != 2 )
      v8 = *(_DWORD *)&v21[v22 - 4];
    *a3 = v8;
    v7 = a2;
    if ( !a2 )
      goto LABEL_18;
LABEL_9:
    if ( *(_DWORD *)(v7 + 8) < v20 )
    {
      v9 = v7;
      *(_DWORD *)v7 = qvector_reserve(v7, *(void **)v7, v20, 1u);
      v7 = v9;
    }
    v10 = 0;
    while ( 1 )
    {
      v11 = v21;
      v12 = v21[v10];
      if ( !v12 )
        goto LABEL_19;
      v13 = *(_DWORD *)(v7 + 4);
      v14 = v13 - 1;
      if ( !v13 )
        v14 = 0;
      v15 = v14 + 2;
      v16 = *(void **)v7;
      if ( *(_DWORD *)(v7 + 8) < (unsigned int)(v14 + 2) )
      {
        v17 = (_DWORD *)v7;
        v16 = qvector_reserve(v7, v16, v14 + 2, 1u);
        *v17 = v16;
        v7 = (int)v17;
        v15 = v14 + 2;
      }
      *(_DWORD *)(v7 + 4) = v15;
      *((_BYTE *)v16 + v14) = v12;
      *(_BYTE *)(*(_DWORD *)v7 + v14 + 1) = 0;
      if ( ++v10 >= v20 )
        goto LABEL_18;
    }
  }
  v20 = v22 - 4;
  if ( a2 )
    goto LABEL_9;
LABEL_18:
  v11 = v21;
LABEL_19:
  if ( v11 )
  {
    v22 = 0;
    qfree(v11);
    v23 = 0;
    v21 = nullptr;
  }
  return v18;
}
