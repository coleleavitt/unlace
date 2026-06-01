/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437CF0
// Address: 0x00437CF0

//----- (00437CF0) --------------------------------------------------------
int __usercall sub_437CF0@<eax>(int a1@<ecx>, __m128i a2@<xmm0>)
{
  char **v3; // esi
  char *v4; // eax
  char v5; // cl
  _BYTE *v6; // ecx
  char v7; // al
  bool v8; // zf
  char v9; // al
  int v10; // eax
  char v11; // al
  int v12; // ebx
  int v13; // edx
  void **v14; // ebx
  int v15; // eax
  int v17; // [esp+10h] [ebp-10h] BYREF
  int v18; // [esp+1Ch] [ebp-4h]

  v3 = (char **)(a1 + 4);
  while ( 1 )
  {
LABEL_2:
    if ( !*(_BYTE *)(a1 + 80) )
    {
LABEL_12:
      while ( 1 )
      {
        v9 = **v3;
        if ( v9 != 32 && v9 != 9 && v9 != 10 && v9 != 13 && v9 != 11 && v9 != 12 )
          break;
        ++*v3;
      }
      if ( v9 == 59 )
      {
        v10 = *(_DWORD *)(a1 + 324) >> 3;
LABEL_30:
        if ( (v10 & 1) != 0 )
          goto LABEL_32;
        goto LABEL_31;
      }
      if ( v9 == 47 )
      {
        if ( (*(_BYTE *)(a1 + 324) & 1) == 0 )
        {
LABEL_31:
          if ( !**(_BYTE **)(a1 + 4) )
            goto LABEL_32;
          return 0;
        }
      }
      else if ( v9 != 40 || (*(_DWORD *)(a1 + 324) & 2) == 0 )
      {
        goto LABEL_31;
      }
      v11 = *(_BYTE *)(*(_DWORD *)(a1 + 4) + 1);
      if ( v11 == 42 )
      {
        *(_BYTE *)(a1 + 80) = 1;
        continue;
      }
      if ( v11 != 47 )
        goto LABEL_31;
      v10 = *(_DWORD *)(a1 + 324) >> 2;
      goto LABEL_30;
    }
    while ( 1 )
    {
      v4 = *v3;
      v5 = **v3;
      if ( v5 != 42 )
        break;
LABEL_6:
      v6 = v4 + 1;
      *v3 = v4 + 1;
      v7 = v4[1];
      if ( v7 == 47 )
      {
        v8 = (*(_BYTE *)(a1 + 324) & 1) == 0;
LABEL_10:
        if ( !v8 )
        {
          *(_BYTE *)(a1 + 80) = 0;
          *(_DWORD *)(a1 + 4) = v6 + 1;
          v3 = (char **)(a1 + 4);
          goto LABEL_12;
        }
      }
      else if ( v7 == 41 )
      {
        v8 = (*(_DWORD *)(a1 + 324) & 2) == 0;
        goto LABEL_10;
      }
    }
    while ( v5 )
    {
      *v3 = ++v4;
      v5 = *v4;
      if ( *v4 == 42 )
        goto LABEL_6;
    }
LABEL_32:
    v12 = *(_DWORD *)(a1 + 32);
    if ( !v12 )
      break;
    v13 = *(_DWORD *)(a1 + 28);
    v3 = (char **)(a1 + 4);
    *(_DWORD *)a1 = *(_DWORD *)(v13 + 28 * v12 - 16);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(v13 + 28 * v12 - 12);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(v13 + 28 * v12 - 4);
    *(_DWORD *)(a1 + 32) = v12 - 1;
    v14 = (void **)(v13 + 28 * (v12 - 1));
    v8 = *v14 == nullptr;
    v18 = 0;
    if ( !v8 )
    {
      sub_415F90(v14, 0);
      sub_453A20(*v14);
      *v14 = nullptr;
      v14[2] = nullptr;
    }
    v18 = -1;
  }
  *(_BYTE *)(a1 + 176) = 0;
  v15 = sub_435670(a1, a2, &v17);
  if ( v17 == -1 || v17 == 34 )
    return 34;
  if ( !v17 )
  {
    v3 = (char **)(a1 + 4);
    *(_DWORD *)a1 = v15;
    *(_DWORD *)(a1 + 4) = v15;
    *(_DWORD *)(a1 + 8) = v15;
    *(_BYTE *)(a1 + 176) = 1;
    goto LABEL_2;
  }
  return sub_45CC20(v17);
}
