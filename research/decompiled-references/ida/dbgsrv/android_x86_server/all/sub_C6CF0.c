/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C6CF0
// Address: 0x000C6CF0

//----- (000C6CF0) --------------------------------------------------------
_DWORD *__fastcall sub_C6CF0(int a1)
{
  _BYTE *v1; // edx
  _BYTE *v2; // eax
  _BYTE *v3; // esi
  unsigned int v4; // edi
  _DWORD *v5; // esi
  int v6; // edi
  int v7; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // edx
  int v10; // edi
  int v11; // edi
  unsigned __int8 v12; // bl
  _DWORD *v13; // esi
  int v14; // ebx
  _DWORD *v15; // eax
  _DWORD *v16; // edx
  _DWORD *result; // eax
  int v18; // edx
  int v19; // edx
  int *v20; // esi
  int v21; // ebx
  signed int v22; // esi
  int v23; // esi
  int v24; // edi
  char *v25; // eax
  char *v26; // edi
  size_t v27; // [esp+4h] [ebp-38h]
  int v28; // [esp+14h] [ebp-28h]
  int v29; // [esp+14h] [ebp-28h]
  int v30; // [esp+1Ch] [ebp-20h]
  const void *v31; // [esp+20h] [ebp-1Ch]
  int v32; // [esp+28h] [ebp-14h]

  v1 = *(_BYTE **)a1;
  v2 = *(_BYTE **)(a1 + 4);
  if ( *(_BYTE **)a1 == v2 || *v1 != 84 )
    return nullptr;
  v3 = v1 + 1;
  *(_DWORD *)a1 = v1 + 1;
  if ( v1 + 1 == v2 || (v4 = 0, *v3 != 95) )
  {
    if ( v2 != v3 && (unsigned __int8)(*v3 - 48) <= 9u )
    {
      v10 = 0;
      while ( 1 )
      {
        v11 = 10 * v10;
        if ( v2 - 1 == v1 )
          break;
        v3 = v1 + 2;
        *(_DWORD *)a1 = v1 + 2;
        v10 = v11 + (char)v1[1] - 48;
        if ( v2 - 2 != v1 )
        {
          v12 = v1[2] - 48;
          ++v1;
          if ( v12 < 0xAu )
            continue;
        }
        goto LABEL_21;
      }
      v10 = v11 - 48;
      v3 = v1 + 1;
LABEL_21:
      if ( v3 != v2 )
      {
        result = nullptr;
        if ( *v3 != 95 )
          return result;
        v4 = v10 + 1;
        goto LABEL_5;
      }
    }
    return nullptr;
  }
LABEL_5:
  *(_DWORD *)a1 = v3 + 1;
  if ( *(_BYTE *)(a1 + 362) )
  {
    v5 = *(_DWORD **)(a1 + 4464);
    v6 = v5[1];
    if ( (unsigned int)(v6 + 16) < 0xFF8 )
    {
      v9 = v5 + 1;
    }
    else
    {
      v7 = a1;
      v8 = operator new[](0x1000u);
      *v8 = v5;
      v8[1] = 0;
      *(_DWORD *)(v7 + 4464) = v8;
      v6 = 0;
      v9 = v8 + 1;
      v5 = v8;
    }
    *v9 = v6 + 16;
    result = (_DWORD *)((char *)v5 + v6 + 8);
    *(_DWORD *)((char *)v5 + v6 + 12) = 16843015;
    *result = off_139CEC;
    *(_DWORD *)((char *)v5 + v6 + 16) = "auto";
    *(_DWORD *)((char *)v5 + v6 + 20) = "";
  }
  else if ( *(_BYTE *)(a1 + 361) )
  {
    v13 = *(_DWORD **)(a1 + 4464);
    v14 = v13[1];
    if ( (unsigned int)(v14 + 32) < 0xFF8 )
    {
      v16 = v13 + 1;
    }
    else
    {
      v28 = a1;
      v15 = operator new[](0x1000u);
      a1 = v28;
      *v15 = v13;
      v15[1] = 0;
      *(_DWORD *)(v28 + 4464) = v15;
      v14 = 0;
      v16 = v15 + 1;
      v13 = v15;
    }
    *v16 = v14 + 32;
    *(_DWORD *)((char *)v13 + v14 + 12) = 33686047;
    *(_DWORD *)((char *)v13 + v14 + 8) = (char *)&qword_13ACD8 - 4020;
    *(_DWORD *)((char *)v13 + v14 + 16) = v4;
    *(_DWORD *)((char *)v13 + v14 + 20) = 0;
    *((_BYTE *)v13 + v14 + 24) = 0;
    v19 = (int)v13 + v14 + 8;
    v20 = *(int **)(a1 + 336);
    if ( v20 == *(int **)(a1 + 340) )
    {
      v21 = *(_DWORD *)(a1 + 332);
      v22 = (signed int)v20 - v21;
      v30 = v22 >> 1;
      v29 = a1;
      if ( a1 + 344 == v21 )
      {
        v31 = *(const void **)(a1 + 332);
        v32 = v19;
        v26 = (char *)malloc(2 * v22);
        if ( v22 )
          memmove(v26, v31, v22);
        a1 = v29;
        *(_DWORD *)(v29 + 332) = v26;
        v19 = v32;
        v23 = v22 >> 2;
      }
      else
      {
        v27 = 2 * v22;
        v23 = v22 >> 2;
        v24 = v19;
        v25 = (char *)realloc(*(void **)(a1 + 332), v27);
        v19 = v24;
        a1 = v29;
        v26 = v25;
        *(_DWORD *)(v29 + 332) = v25;
      }
      v20 = (int *)&v26[4 * v23];
      *(_DWORD *)(a1 + 336) = v20;
      *(_DWORD *)(a1 + 340) = &v26[4 * v30];
    }
    *(_DWORD *)(a1 + 336) = v20 + 1;
    *v20 = v19;
    return *(_DWORD **)(*(_DWORD *)(a1 + 336) - 4);
  }
  else
  {
    v18 = *(_DWORD *)(a1 + 288);
    result = nullptr;
    if ( v4 < (*(_DWORD *)(a1 + 292) - v18) >> 2 )
      return *(_DWORD **)(v18 + 4 * v4);
  }
  return result;
}
// 139CEC: using guessed type int (*off_139CEC[3])();
// 13ACD8: using guessed type __int64 qword_13ACD8;
