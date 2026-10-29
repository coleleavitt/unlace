/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40C3F0
// Address: 0x0040C3F0

//----- (0040C3F0) --------------------------------------------------------
int __thiscall sub_40C3F0(int this, const char *a2, int a3, char a4, char a5, int a6, int a7)
{
  int v7; // ebx
  unsigned int v8; // edi
  unsigned int v9; // eax
  _DWORD *v10; // edx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // esi
  unsigned int v14; // eax
  int v15; // ecx
  _DWORD *v16; // eax
  int v17; // edi
  const char *v18; // eax
  unsigned int v19; // esi
  unsigned int v20; // eax
  const CHAR *v21; // ecx
  void **v22; // esi
  unsigned int v23; // eax
  int v24; // ecx
  _DWORD *v25; // eax
  int v26; // edi
  unsigned int v27; // esi
  unsigned int v28; // eax
  int v29; // ecx
  int v30; // ecx
  const CHAR *v31; // eax
  unsigned int v33; // [esp-8h] [ebp-34h]
  unsigned int v34; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD *v35; // [esp+14h] [ebp-18h]
  int v36; // [esp+18h] [ebp-14h]
  unsigned int v37; // [esp+1Ch] [ebp-10h]

  v7 = this;
  v36 = this;
  if ( !a6 )
    goto LABEL_37;
  if ( (a3 & 0x100) != 0 )
  {
    v8 = 1;
  }
  else if ( a4 == 1 )
  {
    v8 = 16;
  }
  else
  {
    if ( a4 != 2 )
    {
      v8 = 0;
      if ( a4 == 7 )
        v8 = 64;
      v37 = v8;
      if ( a4 != 7 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(1795);
      }
      goto LABEL_5;
    }
    v8 = 32;
  }
  v37 = v8;
LABEL_5:
  v9 = *(_DWORD *)(this + 40) + 1;
  if ( v9 > *(_DWORD *)(this + 44) )
    *(_DWORD *)(this + 36) = sub_453B00(this + 36, *(void **)(this + 36), v9, 0xCu);
  v10 = (_DWORD *)(*(_DWORD *)(v7 + 36) + 12 * *(_DWORD *)(v7 + 40));
  v35 = v10;
  if ( v10 )
  {
    *v10 = 0;
    v10[1] = 0;
    v10[2] = 0;
  }
  ++*(_DWORD *)(v7 + 40);
  v34 = 0;
  if ( v8 >= v10[1] )
  {
    if ( v8 > v10[1] )
    {
      sub_4160D0((int)v10, v8, (LPVOID *)&v34);
      v10 = v35;
    }
  }
  else
  {
    v10[1] = v8;
  }
  v11 = 0;
  if ( v8 )
  {
    v12 = a6;
    do
    {
      if ( *(_DWORD *)(v12 + 4 * v11) )
      {
        v13 = v36 + 12;
        v14 = *(_DWORD *)(v36 + 16) + 1;
        if ( v14 > *(_DWORD *)(v36 + 20) )
          *(_DWORD *)v13 = sub_453B00(v36 + 12, *(void **)v13, v14, 0xCu);
        v15 = 3 * *(_DWORD *)(v13 + 4);
        v16 = *(_DWORD **)v13;
        v16[v15] = 0;
        v16[v15 + 1] = 0;
        v16[v15 + 2] = 0;
        ++*(_DWORD *)(v13 + 4);
        v17 = (int)&v16[v15];
        v18 = *(const char **)(a6 + 4 * v11);
        v34 = (unsigned int)v18;
        if ( v18 && (v19 = strlen(v18)) != 0 )
        {
          v20 = v19 + 1;
          if ( v19 + 1 > *(_DWORD *)(v17 + 8) )
          {
            *(_DWORD *)v17 = sub_453B00(v17, *(void **)v17, v19 + 1, 1u);
            v20 = v19 + 1;
          }
          v33 = v34;
          *(_DWORD *)(v17 + 4) = v20;
          sub_464310(*(_DWORD *)v17, v33, v19);
          *(_BYTE *)(v19 + *(_DWORD *)v17) = 0;
        }
        else
        {
          *(_DWORD *)(v17 + 4) = 0;
        }
        v21 = MultiByteStr;
        if ( *(_DWORD *)(v17 + 4) )
          v21 = *(const CHAR **)v17;
        v10 = v35;
        v8 = v37;
        *(_DWORD *)(*v35 + 4 * v11) = v21;
        v12 = a6;
      }
      ++v11;
    }
    while ( v11 < v8 );
  }
  v7 = v36;
  a6 = *v10;
LABEL_37:
  v22 = (void **)(v7 + 12);
  v23 = *(_DWORD *)(v7 + 16) + 1;
  if ( v23 > *(_DWORD *)(v7 + 20) )
    *v22 = sub_453B00(v7 + 12, *v22, v23, 0xCu);
  v24 = 3 * *(_DWORD *)(v7 + 16);
  v25 = *v22;
  v25[v24] = 0;
  v25[v24 + 1] = 0;
  v25[v24 + 2] = 0;
  ++*(_DWORD *)(v7 + 16);
  v26 = (int)&v25[v24];
  if ( a2 && (v27 = strlen(a2)) != 0 )
  {
    if ( v27 + 1 > *(_DWORD *)(v26 + 8) )
      *(_DWORD *)v26 = sub_453B00(v26, *(void **)v26, v27 + 1, 1u);
    *(_DWORD *)(v26 + 4) = v27 + 1;
    sub_464310(*(_DWORD *)v26, (unsigned int)a2, v27);
    v7 = v36;
    *(_BYTE *)(v27 + *(_DWORD *)v26) = 0;
  }
  else
  {
    *(_DWORD *)(v26 + 4) = 0;
  }
  v28 = *(_DWORD *)(v7 + 4) + 1;
  if ( v28 > *(_DWORD *)(v7 + 8) )
    *(_DWORD *)v7 = sub_453B00(v7, *(void **)v7, v28, 0x14u);
  v29 = *(_DWORD *)(v7 + 4);
  *(_DWORD *)(v7 + 4) = v29 + 1;
  v30 = *(_DWORD *)v7 + 20 * v29;
  v31 = MultiByteStr;
  if ( *(_DWORD *)(v26 + 4) )
    v31 = *(const CHAR **)v26;
  *(_DWORD *)v30 = v31;
  *(_DWORD *)(v30 + 4) = a3;
  *(_BYTE *)(v30 + 9) = a4;
  *(_BYTE *)(v30 + 8) = a5;
  *(_DWORD *)(v30 + 12) = a6;
  *(_DWORD *)(v30 + 16) = a7;
  return a7;
}
// 4B70F0: using guessed type char byte_4B70F0;
