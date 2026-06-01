/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8092F40
// Address: 0x08092F40

//----- (08092F40) --------------------------------------------------------
int __cdecl sub_8092F40(int a1)
{
  int v1; // esi
  char *v2; // ebx
  char v3; // bp
  char *v4; // edi
  char *v5; // ebx
  char v6; // al
  char v7; // si
  unsigned int v8; // ecx
  char v9; // dl
  char *v10; // ebp
  char *v11; // edi
  unsigned int v12; // esi
  char v13; // dl
  unsigned int v14; // ecx
  int v15; // esi
  char v16; // dl
  char i; // al
  char v19; // dl
  char *v20; // eax
  char *v21; // eax
  char v22; // dl
  bool v23; // zf
  _BYTE *v24; // eax
  char *v25; // edx
  char v26; // al
  char v27; // bl
  char v28; // cl
  size_t v29; // eax
  char v30; // dl
  char v31; // al
  int v32; // [esp+4h] [ebp-230h]
  char src; // [esp+8h] [ebp-22Ch]
  char srca; // [esp+8h] [ebp-22Ch]
  char *dest; // [esp+Ch] [ebp-228h]
  char v36; // [esp+10h] [ebp-224h]
  unsigned int v37; // [esp+14h] [ebp-220h]
  _DWORD v38[127]; // [esp+18h] [ebp-21Ch]
  unsigned int v39; // [esp+214h] [ebp-20h]

  v1 = 0;
  v39 = __readgsdword(0x14u);
  v2 = *(char **)(a1 + 4);
  if ( *(_BYTE *)(a1 + 368) == 40 )
  {
    if ( *v2 == 41 )
    {
      *(_DWORD *)(a1 + 4) = ++v2;
      goto LABEL_2;
    }
    while ( 1 )
    {
      v21 = sub_8092E00(a1);
      v22 = *(_BYTE *)(a1 + 368);
      v23 = *v21 == 0;
      v38[v1] = v21;
      if ( v23 )
        break;
      ++v1;
      if ( (unsigned __int8)(v22 - 9) <= 4u || v22 == 32 )
      {
        v25 = *(char **)(a1 + 4);
        v26 = *v25;
        *(_BYTE *)(a1 + 368) = *v25;
        if ( !v26 )
          goto LABEL_26;
        *v25 = 0;
        v22 = *(_BYTE *)(a1 + 368);
        ++*(_DWORD *)(a1 + 4);
      }
      if ( v22 == 41 )
      {
        v2 = *(char **)(a1 + 4);
        goto LABEL_2;
      }
      if ( v22 == 46 )
      {
        v24 = *(_BYTE **)(a1 + 4);
        if ( *v24 != 46 )
          goto LABEL_26;
        goto LABEL_46;
      }
      if ( v22 != 44 || v1 == 127 )
        goto LABEL_26;
    }
    if ( v22 != 46 )
      goto LABEL_26;
    v24 = *(_BYTE **)(a1 + 4);
    if ( *v24 != 46 )
      goto LABEL_26;
LABEL_46:
    v1 = -2;
    if ( v24[1] != 46 )
      goto LABEL_26;
  }
  else
  {
LABEL_2:
    v3 = *v2;
    if ( *v2 )
    {
      v32 = v1;
      v4 = v2;
      v5 = v2 + 1;
LABEL_4:
      v6 = v3;
      v7 = *v5;
      if ( v3 == 34 )
        goto LABEL_22;
      while ( v6 != 39 )
      {
        v8 = v6;
        if ( !v32 )
        {
          v30 = v7;
          ++v5;
          if ( !v7 )
          {
LABEL_70:
            v1 = v32;
            goto LABEL_27;
          }
          while ( 1 )
          {
            v31 = *v5;
            if ( v30 == 34 || v30 == 39 )
              break;
            v30 = *v5++;
            if ( !v31 )
              goto LABEL_70;
          }
          v3 = v30;
          v7 = *v5;
          break;
        }
        v9 = v3;
        dest = v5;
        v10 = v4;
        src = v9;
        if ( (unsigned int)v6 <= 0x7F )
        {
          while ( !isalpha(v8) )
          {
            v11 = dest;
            if ( src == 95 || src == 36 )
              goto LABEL_10;
            if ( !v7 )
              goto LABEL_70;
            v27 = v7;
            v28 = dest[1];
            if ( v7 == 34 || v7 == 39 )
            {
              v3 = v7;
              v5 = dest + 1;
              v7 = dest[1];
              goto LABEL_22;
            }
            v16 = v7;
            ++dest;
            v7 = v28;
            v10 = v11;
            v8 = v27;
LABEL_19:
            src = v16;
            if ( v8 > 0x7F )
              goto LABEL_20;
          }
          v11 = dest;
LABEL_10:
          while ( 1 )
          {
            v12 = *v11;
            v13 = *v11;
            if ( v12 > 0x7F )
              break;
            srca = *v11;
            if ( !isalnum(v12) )
            {
              v13 = srca;
              if ( srca != 95 && srca != 36 )
                break;
            }
            ++v11;
          }
          v14 = v12;
          v36 = v13;
          v15 = 0;
          v37 = v14;
          *v11 = 0;
          while ( strcmp((const char *)v38[v15], v10) )
          {
            if ( v32 == ++v15 )
            {
              v16 = v36;
              v8 = v37;
              goto LABEL_15;
            }
          }
          v16 = v36;
          v8 = v37;
          if ( v32 > v15 )
          {
            *v10 = v15 + 0x80;
            if ( v11 != dest )
            {
              v29 = strlen(v11 + 1);
              memmove(dest, v11, v29 + 2);
              v16 = v36;
              v8 = v37;
            }
            v11 = dest;
          }
LABEL_15:
          *v11 = v16;
          dest = v11 + 1;
          if ( !v16 )
            goto LABEL_70;
          v7 = v11[1];
          if ( v16 == 34 )
          {
            v5 = v11 + 1;
            v3 = 34;
            break;
          }
          if ( v16 == 39 )
          {
            v3 = 39;
            v5 = v11 + 1;
            break;
          }
          v10 = v11;
          goto LABEL_19;
        }
LABEL_20:
        if ( !v7 )
          goto LABEL_70;
        v3 = v7;
        v4 = dest;
        v5 = dest + 1;
        v6 = v7;
        v7 = dest[1];
        if ( v6 == 34 )
          break;
      }
LABEL_22:
      v4 = v5 + 1;
      if ( v7 )
      {
        for ( i = v7; ; i = v19 )
        {
          if ( i == 92 )
          {
            if ( !v5[1] )
              break;
            v19 = v5[2];
            v4 = v5 + 2;
            v20 = v5 + 3;
            if ( !v19 )
            {
LABEL_51:
              v1 = v32;
              if ( !v3 )
                goto LABEL_27;
              break;
            }
          }
          else
          {
            v19 = *v4;
            if ( i == v3 )
            {
              v5 = v4 + 1;
              if ( !v19 )
                goto LABEL_70;
              v3 = *v4;
              goto LABEL_4;
            }
            v20 = v4 + 1;
            if ( !v19 )
              goto LABEL_51;
          }
          v5 = v4;
          v4 = v20;
        }
      }
LABEL_26:
      v1 = -1;
    }
  }
LABEL_27:
  if ( v39 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v1;
}
