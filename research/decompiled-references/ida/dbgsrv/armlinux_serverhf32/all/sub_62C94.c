/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62C94
// Address: 0x00062C94

//----- (00062C94) --------------------------------------------------------
void __fastcall sub_62C94(char **a1, int a2, int a3)
{
  unsigned int v6; // r0
  unsigned int v7; // r8
  unsigned int v8; // r5
  char *v9; // r1
  unsigned int v10; // r3
  int v11; // r10
  char *v12; // r9
  int v13; // r3
  size_t v14; // r11
  void *v15; // r0
  int v16; // r8
  unsigned int v17; // r10
  int i; // r11
  char *v19; // r9
  unsigned int v20; // r0
  unsigned int v21; // r2
  unsigned int v22; // r5
  unsigned __int8 *v23; // r1
  void *v24; // r12
  unsigned int v25; // r2
  _BOOL4 v26; // r3
  char *v27; // r0
  unsigned int v28; // r11
  int v29; // r10
  int v30; // r3
  void *v31; // r0
  int v32; // r2
  char *v33; // r1
  char *v34; // r0
  char *v35; // r0
  int v36; // [sp+8h] [bp-1Ch] BYREF
  int v37; // [sp+Ch] [bp-18h]
  void *src; // [sp+10h] [bp-14h]
  size_t v39; // [sp+14h] [bp-10h]
  int v40; // [sp+18h] [bp-Ch]

  v6 = sub_7617C((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
  v7 = (unsigned int)a1[1];
  v8 = v6;
  if ( v6 != v7 )
  {
    v37 = 0;
    v40 = 0;
    v36 = 0;
    src = nullptr;
    v39 = 0;
    if ( v6 >= v7 )
    {
      if ( v6 <= v7 )
        goto LABEL_15;
      v9 = *a1;
      v10 = (unsigned int)a1[2];
      if ( *a1 <= (char *)&v36 && &v36 < (int *)&v9[20 * v10] )
      {
        if ( v6 <= v10
          || (v34 = (char *)sub_77EB0((int)a1, v9, v6, 0x14u), v7 = (unsigned int)a1[1], v9 = v34, *a1 = v34, v8 > v7) )
        {
          v32 = 20 * v7;
          while ( 1 )
          {
            ++v7;
            *(_DWORD *)&v9[v32] = 0;
            v33 = &v9[v32];
            *((_DWORD *)v33 + 1) = 0;
            v32 += 20;
            *((_DWORD *)v33 + 2) = 0;
            *((_DWORD *)v33 + 3) = 0;
            *((_DWORD *)v33 + 4) = 0;
            if ( v8 <= v7 )
              break;
            v9 = *a1;
          }
        }
      }
      else if ( v6 <= v10
             || (v35 = (char *)sub_77EB0((int)a1, v9, v6, 0x14u), v7 = (unsigned int)a1[1], v9 = v35, *a1 = v35, v8 > v7) )
      {
        v11 = 20 * v7;
        while ( 1 )
        {
          v12 = &v9[v11];
          *(_DWORD *)&v9[v11] = v36;
          v13 = v37;
          *((_DWORD *)v12 + 2) = 0;
          *((_DWORD *)v12 + 3) = 0;
          *((_DWORD *)v12 + 4) = 0;
          *((_DWORD *)v12 + 1) = v13;
          v14 = v39;
          if ( v39 )
          {
            v15 = sub_77E84(v39);
            *((_DWORD *)v12 + 2) = v15;
            *((_DWORD *)v12 + 4) = v14;
            ++v7;
            v11 += 20;
            memcpy(v15, src, v14);
            *((_DWORD *)v12 + 3) = v14;
            if ( v8 <= v7 )
              break;
          }
          else
          {
            ++v7;
            v11 += 20;
            if ( v8 <= v7 )
              break;
          }
          v9 = *a1;
        }
      }
    }
    else
    {
      v28 = v6;
      v29 = 20 * v6;
      do
      {
        v30 = (int)&(*a1)[v29];
        v31 = *(void **)(v30 + 8);
        if ( v31 )
        {
          *(_DWORD *)(v30 + 12) = 0;
          sub_77E08(v31);
        }
        ++v28;
        v29 += 20;
      }
      while ( v7 != v28 );
    }
    a1[1] = (char *)v8;
    if ( src )
    {
      v39 = 0;
      sub_77E08(src);
    }
  }
LABEL_15:
  if ( (int)v8 > 0 )
  {
    v16 = 0;
    v17 = v8;
    for ( i = 0; i != v17; ++i )
    {
      v19 = &(*a1)[v16];
      *(_DWORD *)v19 = sub_7617C((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
      v20 = sub_7617C((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
      v21 = *((_DWORD *)v19 + 3);
      v22 = v20;
      if ( v21 < v20 )
      {
        v27 = *((char **)v19 + 2);
        if ( v22 > *((_DWORD *)v19 + 4) )
        {
          v27 = (char *)sub_77EB0((int)(v19 + 8), *((void **)v19 + 2), v22, 1u);
          v21 = *((_DWORD *)v19 + 3);
          *((_DWORD *)v19 + 2) = v27;
        }
        memset(&v27[v21], 0, v22 - v21);
        *((_DWORD *)v19 + 3) = v22;
      }
      else if ( v21 > v20 )
      {
        *((_DWORD *)v19 + 3) = v20;
      }
      if ( a2 )
      {
        *((_DWORD *)v19 + 1) = sub_7617C((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
        v23 = *(unsigned __int8 **)a3;
        v24 = *((void **)v19 + 2);
        v25 = *(_DWORD *)a3 + v22;
        v26 = *(_DWORD *)a3 > v25;
        if ( *(_DWORD *)(a3 + 4) < v25 )
          v26 = 1;
        if ( !v26 )
        {
          *(_DWORD *)a3 = v25;
          memcpy(v24, v23, v22);
        }
      }
      v16 += 20;
    }
  }
}
