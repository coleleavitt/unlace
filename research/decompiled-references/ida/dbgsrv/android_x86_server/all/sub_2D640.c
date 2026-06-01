/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2D640
// Address: 0x0002D640

//----- (0002D640) --------------------------------------------------------
int __cdecl sub_2D640(int a1, int a2, char *s)
{
  int v3; // esi
  unsigned int v4; // ebx
  int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  char *v8; // eax
  unsigned int v9; // edi
  int v10; // ebx
  unsigned int v11; // edx
  void *v12; // edx
  int v13; // ecx
  int v14; // edx
  _DWORD *v15; // esi
  _DWORD *v16; // edi
  unsigned int v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // ebx
  _DWORD *v20; // eax
  int v21; // edx
  size_t v22; // eax
  size_t v23; // edi
  void **v24; // eax
  void *v25; // eax
  void *v27; // [esp+Ch] [ebp-20h]
  _DWORD *v28; // [esp+Ch] [ebp-20h]
  unsigned int v29; // [esp+10h] [ebp-1Ch]
  int v30; // [esp+14h] [ebp-18h]
  int v31; // [esp+14h] [ebp-18h]
  _DWORD v32[5]; // [esp+18h] [ebp-14h] BYREF

  v3 = *(_DWORD *)(a1 + 16);
  v4 = a2 + **(_DWORD **)(a1 + 12);
  v5 = *(_DWORD *)(v3 + 4);
  v29 = v4;
  if ( *(_DWORD *)(v3 + 8) >= (unsigned int)(v5 + 1) )
  {
    v6 = *(_DWORD **)v3;
  }
  else
  {
    v6 = qvector_reserve(v3, *(void **)v3, v5 + 1, 4u);
    *(_DWORD *)v3 = v6;
    v5 = *(_DWORD *)(v3 + 4);
  }
  v6[v5] = v4;
  ++*(_DWORD *)(v3 + 4);
  v7 = *(_DWORD **)(a1 + 16);
  v30 = (int)(v7 + 3);
  v27 = qstrdup(s);
  v32[0] = v27;
  v8 = (char *)v7[3];
  v9 = v7[5];
  v10 = v7[4];
  v11 = v10 + 1;
  if ( v8 > (char *)v32 || &v8[4 * v9] <= (char *)v32 )
  {
    if ( v9 < v11 )
    {
      v8 = (char *)qvector_reserve(v30, v8, v11, 4u);
      v7[3] = v8;
      v10 = v7[4];
      v12 = (void *)v32[0];
      v13 = a1;
      goto LABEL_11;
    }
  }
  else if ( v9 < v11 )
  {
    v8 = (char *)qvector_reserve(v30, v8, v11, 4u);
    v7[3] = v8;
    v10 = v7[4];
  }
  v13 = a1;
  v12 = v27;
LABEL_11:
  *(_DWORD *)&v8[4 * v10] = v12;
  ++v7[4];
  v14 = *(_DWORD *)(v13 + 12);
  v15 = *(_DWORD **)(v14 + 36);
  if ( v15 )
  {
    v16 = (_DWORD *)(v14 + 36);
    while ( 1 )
    {
      v17 = v15[4];
      if ( v29 >= v17 )
      {
        if ( v17 >= v29 )
          goto LABEL_22;
        v16 = v15 + 1;
        v18 = (_DWORD *)v15[1];
        if ( !v18 )
          goto LABEL_22;
      }
      else
      {
        v18 = (_DWORD *)*v15;
        v16 = v15;
        if ( !*v15 )
          goto LABEL_21;
      }
      v15 = v18;
    }
  }
  v15 = (_DWORD *)(v14 + 36);
LABEL_21:
  v16 = v15;
LABEL_22:
  v19 = (_DWORD *)*v16;
  if ( !*v16 )
  {
    v31 = *(_DWORD *)(v13 + 12);
    v20 = operator new(0x20u);
    v20[4] = v29;
    v20[5] = 0;
    v20[6] = 0;
    v20[7] = 0;
    *v20 = 0;
    v20[1] = 0;
    v20[2] = v15;
    *v16 = v20;
    v21 = **(_DWORD **)(v31 + 32);
    v28 = v20;
    if ( v21 )
    {
      *(_DWORD *)(v31 + 32) = v21;
      v20 = (_DWORD *)*v16;
    }
    sub_2D500(*(_DWORD *)(v31 + 36), (int)v20);
    ++*(_DWORD *)(v31 + 40);
    v19 = v28;
  }
  if ( s && (v22 = strlen(s)) != 0 )
  {
    v23 = v22;
    v24 = (void **)(v19 + 5);
    if ( v19[7] >= v23 + 1 )
    {
      v25 = *v24;
    }
    else
    {
      v25 = qvector_reserve((int)v24, *v24, v23 + 1, 1u);
      v19[5] = v25;
    }
    v19[6] = v23 + 1;
    memmove(v25, s, v23);
    *(_BYTE *)(v19[5] + v23) = 0;
  }
  else
  {
    v19[6] = 0;
  }
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4) == 10000 * (*(_DWORD *)(*(_DWORD *)(a1 + 16) + 4) / 0x2710u) )
    sub_1C9D0(*(_DWORD *)(a1 + 8), (char *)&qword_13ACD8 - 384502);
  return 0;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
