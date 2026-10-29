/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CDE80
// Address: 0x000CDE80

//----- (000CDE80) --------------------------------------------------------
int __fastcall sub_CDE80(int a1)
{
  _BYTE *v1; // edx
  char *v2; // ebx
  int result; // eax
  char *v5; // ecx
  char *v6; // edx
  char *v7; // edi
  char *v8; // edx
  unsigned int v9; // ecx
  char *v10; // edi
  int v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // edx
  _DWORD *v14; // esi
  char *v15; // edx
  char *v16; // edi
  unsigned int v17; // ecx
  char *v18; // edx
  char *v19; // edi
  unsigned int v20; // ecx
  char *v21; // [esp+10h] [ebp-1Ch]
  char *v22; // [esp+10h] [ebp-1Ch]
  int v23; // [esp+14h] [ebp-18h]

  v1 = *(_BYTE **)a1;
  v2 = *(char **)(a1 + 4);
  result = 0;
  if ( (unsigned int)&v2[-*(_DWORD *)a1] < 2 || *v1 != 102 )
    return result;
  if ( v1[1] == 112 )
  {
    v5 = v1 + 2;
    *(_DWORD *)a1 = v1 + 2;
    if ( v1 + 2 == v2 )
      goto LABEL_17;
    if ( *v5 == 114 )
    {
      v6 = v1 + 3;
      *(_DWORD *)a1 = v6;
      v5 = v6;
    }
    if ( v5 == v2 )
      goto LABEL_17;
    if ( *v5 == 86 )
      *(_DWORD *)a1 = ++v5;
    if ( v5 == v2 )
    {
LABEL_17:
      v5 = v2;
    }
    else if ( *v5 == 75 )
    {
      *(_DWORD *)a1 = ++v5;
    }
    result = 0;
    if ( v2 != v5 && (unsigned int)(*v5 - 48) <= 9 )
    {
      v21 = v5;
      v7 = v5 + 1;
      while ( 1 )
      {
        v8 = v7;
        *(_DWORD *)a1 = v7;
        if ( v2 == v7 )
          goto LABEL_58;
        v9 = *v7++ - 48;
        if ( v9 >= 0xA )
          goto LABEL_23;
      }
    }
    v8 = v5;
    v21 = nullptr;
    v10 = nullptr;
    if ( v5 == v2 )
      return result;
    goto LABEL_26;
  }
  if ( *v1 == 102 && v1[1] == 76 )
  {
    *(_DWORD *)a1 = v1 + 2;
    result = 0;
    if ( v2 != v1 + 2 && (unsigned int)((char)v1[2] - 48) <= 9 )
    {
      v22 = v1 + 2;
      v15 = v1 + 3;
      while ( 1 )
      {
        v16 = v15;
        *(_DWORD *)a1 = v15;
        if ( v2 == v15 )
          break;
        v17 = *v15++ - 48;
        if ( v17 >= 0xA )
        {
          v18 = v16;
          goto LABEL_39;
        }
      }
      v18 = v2;
LABEL_39:
      if ( v22 != v18 && v16 != v2 && *v16 == 112 )
      {
        v8 = v16 + 1;
        *(_DWORD *)a1 = v16 + 1;
        if ( v16 + 1 == v2 )
        {
          v8 = v2;
        }
        else
        {
          if ( *v8 == 114 )
          {
            v19 = v16 + 2;
            *(_DWORD *)a1 = v19;
            v8 = v19;
          }
          if ( v8 != v2 )
          {
            if ( *v8 == 86 )
              *(_DWORD *)a1 = ++v8;
            if ( v8 != v2 && *v8 == 75 )
              *(_DWORD *)a1 = ++v8;
          }
        }
        result = 0;
        if ( v2 != v8 && (unsigned int)(*v8 - 48) <= 9 )
        {
          v21 = v8;
          v7 = v8 + 1;
          while ( 1 )
          {
            v8 = v7;
            *(_DWORD *)a1 = v7;
            if ( v2 == v7 )
              break;
            v20 = *v7++ - 48;
            if ( v20 >= 0xA )
            {
LABEL_23:
              v10 = v7 - 1;
              if ( v8 != v2 )
                goto LABEL_26;
              return result;
            }
          }
LABEL_58:
          v10 = v2;
          if ( v8 == v2 )
            return result;
          goto LABEL_26;
        }
        v10 = nullptr;
        v21 = nullptr;
        if ( v8 == v2 )
          return result;
LABEL_26:
        if ( *v8 == 95 )
        {
          *(_DWORD *)a1 = v8 + 1;
          v23 = *(_DWORD *)(a1 + 4464);
          v11 = *(_DWORD *)(v23 + 4);
          if ( (unsigned int)(v11 + 16) < 0xFF8 )
          {
            v14 = *(_DWORD **)(a1 + 4464);
            v13 = (_DWORD *)(v23 + 4);
          }
          else
          {
            v12 = operator new[](0x1000u);
            *v12 = v23;
            v12[1] = 0;
            *(_DWORD *)(a1 + 4464) = v12;
            v11 = 0;
            v13 = v12 + 1;
            v14 = v12;
          }
          *v13 = v11 + 16;
          *(_DWORD *)((char *)v14 + v11 + 12) = 16843050;
          *(_DWORD *)((char *)v14 + v11 + 8) = (char *)&qword_13ACD8 - 3556;
          *(_DWORD *)((char *)v14 + v11 + 16) = v21;
          *(_DWORD *)((char *)v14 + v11 + 20) = v10;
          return (int)v14 + v11 + 8;
        }
      }
    }
  }
  return result;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
