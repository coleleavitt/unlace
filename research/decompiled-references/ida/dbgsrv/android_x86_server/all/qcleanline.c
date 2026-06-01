/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qcleanline
// Address: 0x000B9F40

//----- (000B9F40) --------------------------------------------------------
unsigned int __cdecl qcleanline(int a1, char a2, char a3)
{
  unsigned int v3; // edi
  unsigned int v4; // esi
  char v5; // al
  int v6; // edx
  char *v7; // eax
  char *v8; // edi
  char *v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // ecx
  int v13; // esi
  char *v14; // eax
  char v15; // al
  unsigned int v16; // esi
  char *v17; // eax
  char *v18; // eax
  unsigned int v19; // edi
  size_t v20; // ecx
  bool v21; // cc
  size_t v22; // edi
  size_t v23; // esi
  size_t v24; // edi
  _BYTE *v25; // eax
  unsigned int result; // eax
  char *v27; // [esp+Ch] [ebp-20h]
  unsigned int v28; // [esp+Ch] [ebp-20h]
  int v29; // [esp+10h] [ebp-1Ch]
  char v30; // [esp+17h] [ebp-15h] BYREF
  unsigned int v31; // [esp+18h] [ebp-14h]

  v31 = __readgsdword(0x14u);
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 < 2 )
    goto LABEL_51;
  v4 = 0;
  if ( a2 || (a3 & 2) != 0 )
  {
    v27 = *(char **)a1;
    v5 = **(_BYTE **)a1;
    if ( v5 >= 0 )
    {
      v4 = 0;
      do
      {
        if ( !isspace((unsigned __int8)v5) )
          break;
        v5 = v27[++v4];
      }
      while ( v5 >= 0 );
    }
  }
  v6 = a1;
  v28 = v4;
  if ( a2 && v4 < v3 - 1 )
  {
    v7 = *(char **)a1;
    if ( *(_BYTE *)(*(_DWORD *)a1 + v4) == a2 )
    {
      if ( !v7 )
        goto LABEL_27;
      goto LABEL_12;
    }
    if ( (a3 & 4) != 0 )
    {
      v8 = *(char **)a1;
      v9 = strchr((const char *)(*(_DWORD *)a1 + v4), a2);
      v6 = a1;
      if ( v9 )
      {
        v10 = v9 - v8;
        if ( v10 != -1 )
        {
          if ( v10 )
          {
            v11 = v10 + 1;
            v12 = *(_DWORD *)(a1 + 4);
            v29 = v10;
            if ( v12 >= v10 + 1 )
            {
              if ( v12 != v10 + 1 )
              {
                v30 = 0;
                sub_44400((char **)a1, v11, &v30);
                v6 = a1;
              }
            }
            else
            {
              if ( *(_DWORD *)(a1 + 8) >= v11 )
              {
                v14 = *(char **)a1;
                v13 = a1;
              }
              else
              {
                v13 = a1;
                v14 = (char *)qvector_reserve(a1, *(void **)a1, v10 + 1, 1u);
                *(_DWORD *)a1 = v14;
                v12 = *(_DWORD *)(a1 + 4);
              }
              memset(&v14[v12], 0, v11 - v12);
              *(_DWORD *)(v13 + 4) = v11;
              v6 = v13;
              v4 = v28;
            }
            *(_BYTE *)(*(_DWORD *)v6 + v29) = 0;
          }
          else
          {
            v7 = *(char **)a1;
            if ( *(_DWORD *)a1 )
            {
LABEL_12:
              *(_DWORD *)(v6 + 4) = 0;
              qfree(v7);
              v6 = a1;
              *(_DWORD *)a1 = 0;
              *(_DWORD *)(a1 + 8) = 0;
            }
          }
        }
      }
    }
  }
LABEL_27:
  v3 = *(_DWORD *)(v6 + 4);
  if ( v3 >= 2 )
  {
    if ( (a3 & 1) != 0 )
    {
      while ( 1 )
      {
        if ( v3 >= 2 )
        {
          v15 = *(_BYTE *)(*(_DWORD *)v6 + v3 - 2);
          if ( v15 < 0 )
            goto LABEL_42;
        }
        else
        {
          v15 = 0;
        }
        if ( !isspace((unsigned __int8)v15) )
          break;
        v16 = v3 - 1;
        v6 = a1;
        if ( (int)(v3 - 1) > 1 )
        {
          v18 = *(char **)a1;
          if ( *(_DWORD *)(a1 + 8) < v16 )
          {
            v18 = (char *)qvector_reserve(a1, v18, v3 - 1, 1u);
            v6 = a1;
            *(_DWORD *)a1 = v18;
          }
          *(_DWORD *)(v6 + 4) = v16;
          v18[v3 - 2] = 0;
        }
        else
        {
          v17 = *(char **)a1;
          if ( *(_DWORD *)a1 )
          {
            *(_DWORD *)(a1 + 4) = 0;
            qfree(v17);
            v6 = a1;
            *(_DWORD *)a1 = 0;
            *(_DWORD *)(a1 + 8) = 0;
          }
        }
        v3 = *(_DWORD *)(v6 + 4);
        v4 = v28;
      }
      v6 = a1;
    }
LABEL_42:
    if ( (a3 & 2) != 0 && v4 && v3 >= 2 )
    {
      v19 = v3 - 1;
      v20 = 0;
      v21 = v19 <= v4;
      v22 = v19 - v4;
      if ( !v21 )
      {
        memmove(*(void **)v6, (const void *)(*(_DWORD *)v6 + v4), v22);
        v6 = a1;
        v20 = v22;
      }
      v23 = v20 + 1;
      if ( *(_DWORD *)(v6 + 8) >= v20 + 1 )
      {
        v25 = *(_BYTE **)v6;
      }
      else
      {
        v24 = v20;
        v25 = qvector_reserve(v6, *(void **)v6, v20 + 1, 1u);
        v20 = v24;
        v6 = a1;
        *(_DWORD *)a1 = v25;
      }
      *(_DWORD *)(v6 + 4) = v23;
      v25[v20] = 0;
      v3 = *(_DWORD *)(v6 + 4);
    }
  }
LABEL_51:
  result = v3 - 1;
  if ( !v3 )
    return 0;
  return result;
}
// B9FC8: conditional instruction was optimized away because edi.4>=2u
// BA025: conditional instruction was optimized away because edi.4>=2u
