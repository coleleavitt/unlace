/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62484
// Address: 0x00062484

//----- (00062484) --------------------------------------------------------
char *__fastcall sub_62484(int a1, __int64 *a2)
{
  int v4; // r7
  size_t v5; // r0
  _DWORD *v6; // r0
  int v7; // r1
  char *v8; // r8
  _DWORD *v9; // r3
  int v10; // r5
  char *v11; // r7
  __int64 v12; // kr00_8
  unsigned __int8 *v13; // r3
  __int64 v15; // kr08_8
  unsigned __int8 *v16; // r3
  size_t v19; // r0
  size_t v20; // r10
  unsigned int v21; // r11
  void *v22; // r0
  size_t v23; // r0
  size_t v24; // r10
  unsigned int v25; // r11
  void *v26; // r0

  if ( a1 > 0 )
  {
    if ( (unsigned int)a1 >> 27 )
    {
      v4 = 32 * a1;
      v8 = (char *)sub_77E84(0x7FFFFFFF);
    }
    else
    {
      v4 = 32 * a1;
      if ( a1 < 0x4000000 )
        v5 = 32 * a1 + 8;
      else
        v5 = -1;
      v6 = sub_80B00(v5);
      v7 = 0;
      v8 = (char *)(v6 + 2);
      v9 = v6 + 2;
      v6[1] = a1;
      *v6 = 32;
      do
      {
        ++v7;
        *v9 = 0;
        v9[1] = 0;
        v9[2] = 0;
        v9[3] = 0;
        v9[4] = 0;
        v9[5] = 0;
        v9[6] = 0;
        v9[7] = 0;
        v9 += 8;
      }
      while ( a1 != v7 );
    }
    v10 = (int)(v8 + 8);
    v11 = &v8[v4 + 8];
    while ( 1 )
    {
      *(_DWORD *)(v10 - 8) = sub_7617C((unsigned __int8 **)a2, *((_DWORD *)a2 + 1));
      *(_DWORD *)(v10 - 4) = sub_7617C((unsigned __int8 **)a2, *((_DWORD *)a2 + 1));
      v12 = *a2;
      if ( HIDWORD(v12) <= (unsigned int)v12 )
        goto LABEL_14;
      v13 = (unsigned __int8 *)(v12 + 1);
      if ( *(_BYTE *)v12 )
        break;
LABEL_23:
      *(_DWORD *)a2 = v13;
      if ( !(_DWORD)v12 )
        goto LABEL_14;
      v19 = strlen((const char *)v12);
      v20 = v19;
      if ( !v19 )
        goto LABEL_14;
      v21 = v19 + 1;
      v22 = *(void **)v10;
      if ( v21 > *(_DWORD *)(v10 + 8) )
      {
        v22 = sub_77EB0(v10, *(void **)v10, v21, 1u);
        *(_DWORD *)v10 = v22;
      }
      *(_DWORD *)(v10 + 4) = v21;
      memmove(v22, (const void *)v12, v20);
      *(_BYTE *)(*(_DWORD *)v10 + v20) = 0;
LABEL_15:
      v15 = *a2;
      if ( HIDWORD(v15) > (unsigned int)v15 )
      {
        v16 = (unsigned __int8 *)(v15 + 1);
        if ( *(_BYTE *)v15 )
        {
          while ( v16 != (unsigned __int8 *)HIDWORD(v15) )
          {
            if ( !*v16++ )
              goto LABEL_28;
          }
        }
        else
        {
LABEL_28:
          *(_DWORD *)a2 = v16;
          if ( (_DWORD)v15 )
          {
            v23 = strlen((const char *)v15);
            v24 = v23;
            if ( v23 )
            {
              v25 = v23 + 1;
              v26 = *(void **)(v10 + 12);
              if ( v25 > *(_DWORD *)(v10 + 20) )
              {
                v26 = sub_77EB0(v10 + 12, *(void **)(v10 + 12), v25, 1u);
                *(_DWORD *)(v10 + 12) = v26;
              }
              *(_DWORD *)(v10 + 16) = v25;
              memmove(v26, (const void *)v15, v24);
              *(_BYTE *)(*(_DWORD *)(v10 + 12) + v24) = 0;
              goto LABEL_21;
            }
          }
        }
      }
      *(_DWORD *)(v10 + 16) = 0;
LABEL_21:
      v10 += 32;
      if ( (char *)v10 == v11 )
        return v8;
    }
    while ( (unsigned __int8 *)HIDWORD(v12) != v13 )
    {
      if ( !*v13++ )
        goto LABEL_23;
    }
LABEL_14:
    *(_DWORD *)(v10 + 4) = 0;
    goto LABEL_15;
  }
  return nullptr;
}
