/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_460DD0
// Address: 0x00460DD0

//----- (00460DD0) --------------------------------------------------------
int __userpurge sub_460DD0@<eax>(int a1@<ebx>, int a2, _DWORD *a3, char *a4, unsigned int a5)
{
  char *v6; // ebx
  char v7; // cl
  char v8; // ch
  unsigned int v9; // eax
  char **v10; // edi
  char *v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // esi
  char *v14; // eax
  unsigned int v15; // eax
  char **v16; // edi
  char *v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // esi
  int i; // eax
  int v21; // esi
  char *v22; // eax
  int v23; // esi
  char *v24; // ecx
  unsigned int v25; // eax
  char **v26; // esi
  char *v27; // ebx
  unsigned int v28; // ecx
  unsigned int v29; // edx
  int v30; // esi
  char *v31; // [esp+10h] [ebp-20h] BYREF
  unsigned int v32; // [esp+14h] [ebp-1Ch]
  unsigned int v33; // [esp+18h] [ebp-18h]
  int v34; // [esp+1Ch] [ebp-14h]
  char v35; // [esp+21h] [ebp-Fh]
  char v36; // [esp+22h] [ebp-Eh]
  char v37; // [esp+23h] [ebp-Dh]
  int v38; // [esp+2Ch] [ebp-4h]
  unsigned int v39; // [esp+44h] [ebp+14h]

  if ( !a4 )
    return 0;
  v31 = nullptr;
  v32 = 0;
  v33 = 0;
  v38 = 0;
  v37 = 0;
  v39 = (a5 >> 2) & 0xFFFFFF01;
  v6 = sub_462220(a1, a4);
  v7 = *v6;
  v36 = v7;
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = v37;
      ++v6;
      if ( v7 != 34 )
        break;
      if ( v37 )
      {
        if ( v37 == 34 )
        {
          v37 = 0;
          if ( *v6 >= 0 && sub_46B7F0((int)v6, (unsigned __int8)*v6) || !*v6 )
          {
            v9 = *(_DWORD *)(a2 + 4) + 1;
            if ( v9 > *(_DWORD *)(a2 + 8) )
              *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v9, 0xCu);
            LOBYTE(v39) = 0;
            v10 = (char **)(*(_DWORD *)a2 + 12 * *(_DWORD *)(a2 + 4));
            *v10 = nullptr;
            v10[1] = nullptr;
            v10[2] = nullptr;
            ++*(_DWORD *)(a2 + 4);
            v11 = *v10;
            v12 = (unsigned int)v10[1];
            v13 = (unsigned int)v10[2];
            *v10 = v31;
            v10[1] = (char *)v32;
            v10[2] = (char *)v33;
            v31 = v11;
            v32 = v12;
            v33 = v13;
          }
          v14 = sub_462220((int)v6, v6);
LABEL_50:
          v6 = v14;
          goto LABEL_51;
        }
        goto LABEL_22;
      }
      v37 = 34;
LABEL_51:
      v7 = *v6;
      v36 = v7;
      if ( !v7 )
        goto LABEL_52;
    }
    if ( !v37 && v7 >= 0 )
    {
      if ( sub_46B7F0((int)v6, (unsigned __int8)v7) )
      {
        v15 = *(_DWORD *)(a2 + 4) + 1;
        if ( v15 > *(_DWORD *)(a2 + 8) )
          *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v15, 0xCu);
        v16 = (char **)(*(_DWORD *)a2 + 12 * *(_DWORD *)(a2 + 4));
        *v16 = nullptr;
        v16[1] = nullptr;
        v16[2] = nullptr;
        ++*(_DWORD *)(a2 + 4);
        v17 = *v16;
        v18 = (unsigned int)v16[1];
        v19 = (unsigned int)v16[2];
        *v16 = v31;
        v16[1] = (char *)v32;
        v16[2] = (char *)v33;
        v31 = v17;
        v32 = v18;
        v33 = v19;
        v14 = sub_462220((int)v6, v6);
        LOBYTE(v39) = 0;
        goto LABEL_50;
      }
      v7 = v36;
      v8 = v37;
    }
LABEL_22:
    v35 = 1;
    if ( (_BYTE)v39 )
      goto LABEL_38;
    for ( i = 0; v7 == 92; v36 = v7 )
    {
      v7 = *v6;
      ++i;
      ++v6;
    }
    if ( v7 == 34 )
    {
      if ( (i & 1) != 0 )
      {
        v35 = 0;
        v37 = v8 != 0 ? 0 : 0x22;
      }
      else if ( v8 && *v6 == 34 )
      {
        v36 = 34;
        ++v6;
      }
      i /= 2;
    }
    if ( i )
    {
      do
      {
        v34 = i - 1;
        v21 = v32 != 0 ? v32 - 1 : 0;
        if ( v21 + 2 <= v33 )
        {
          v22 = v31;
        }
        else
        {
          v22 = (char *)sub_453B00((int)&v31, v31, v21 + 2, 1u);
          v31 = v22;
        }
        v32 = v21 + 2;
        v22[v21] = 92;
        v31[v21 + 1] = 0;
        i = v34;
      }
      while ( v34 );
    }
    if ( v35 )
    {
LABEL_38:
      v23 = v32 != 0 ? v32 - 1 : 0;
      if ( v23 + 2 <= v33 )
      {
        v24 = v31;
      }
      else
      {
        v24 = (char *)sub_453B00((int)&v31, v31, v23 + 2, 1u);
        v31 = v24;
      }
      v32 = v23 + 2;
      v24[v23] = v36;
      v31[v23 + 1] = 0;
    }
    if ( v36 != 62 && v36 != 60 )
      goto LABEL_51;
    if ( v37 )
      goto LABEL_51;
    if ( (_BYTE)v39 )
      goto LABEL_51;
    if ( (v32 != 0 ? v32 - 1 : 0) > 2 )
      goto LABEL_51;
    if ( !a3 )
      goto LABEL_51;
    v14 = sub_4605B0((int *)v6, &v31, (int)a4, v6, a3);
    if ( !v14 )
      goto LABEL_51;
    v32 = 0;
    goto LABEL_50;
  }
LABEL_52:
  if ( v32 <= 1 )
  {
    v27 = v31;
  }
  else
  {
    v25 = *(_DWORD *)(a2 + 4) + 1;
    if ( v25 > *(_DWORD *)(a2 + 8) )
      *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v25, 0xCu);
    v26 = (char **)(*(_DWORD *)a2 + 12 * *(_DWORD *)(a2 + 4));
    *v26 = nullptr;
    v26[1] = nullptr;
    v26[2] = nullptr;
    ++*(_DWORD *)(a2 + 4);
    v27 = *v26;
    v28 = (unsigned int)v26[1];
    v29 = (unsigned int)v26[2];
    *v26 = v31;
    v26[1] = (char *)v32;
    v26[2] = (char *)v33;
    v31 = v27;
    v32 = v28;
    v33 = v29;
  }
  v30 = *(_DWORD *)(a2 + 4);
  v38 = 4;
  if ( v27 )
  {
    v32 = 0;
    sub_453A20(v27);
  }
  return v30;
}
