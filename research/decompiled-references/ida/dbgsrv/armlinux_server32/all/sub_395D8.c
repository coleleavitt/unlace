/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_395D8
// Address: 0x000395D8

//----- (000395D8) --------------------------------------------------------
int __fastcall sub_395D8(int a1, char *s2)
{
  int v4; // r10
  int v5; // r7
  int i; // r9
  int v7; // r3
  void *v8; // r0
  int v9; // r3
  int v10; // r10
  int v11; // r7
  int j; // r9
  int v13; // r3
  void *v14; // r0
  int v15; // r3
  int v16; // r10
  int v17; // r7
  int k; // r9
  int v19; // r3
  void *v20; // r0
  int v21; // r3
  int v22; // r10
  int v23; // r7
  int v24; // r9
  unsigned __int8 *v25; // r0
  int v26; // r9
  size_t v27; // r9
  int v28; // r0
  int v29; // r3
  int v30; // r0
  int v31; // r7
  void *v32; // r10
  void **v33; // r1
  unsigned int v34; // r0
  int v35; // r3
  unsigned int v36; // r12
  int v37; // r11
  int v38; // r3
  void **v39; // r1
  void *v40; // r0
  int v41; // r2
  int v42; // r0
  int v43; // r4
  int v45; // r3
  void **v46; // r3
  void *v47; // r1
  unsigned int v48; // r10
  size_t v49; // r9
  void *v50; // [sp+4h] [bp-40h]
  void *src; // [sp+8h] [bp-3Ch] BYREF
  int v52; // [sp+Ch] [bp-38h]
  unsigned int v53; // [sp+10h] [bp-34h]
  void *ptr; // [sp+14h] [bp-30h] BYREF
  int v55; // [sp+18h] [bp-2Ch]
  void *v56; // [sp+1Ch] [bp-28h]
  unsigned __int8 v57[8]; // [sp+20h] [bp-24h] BYREF
  int v58; // [sp+28h] [bp-1Ch]
  int v59; // [sp+2Ch] [bp-18h]
  int v60; // [sp+30h] [bp-14h]
  int v61; // [sp+34h] [bp-10h]

  v4 = *(_DWORD *)(a1 + 72);
  if ( v4 )
  {
    v5 = 0;
    for ( i = 0; i != v4; ++i )
    {
      v7 = *(_DWORD *)(a1 + 68);
      v8 = *(void **)(v7 + v5);
      v9 = v7 + v5;
      if ( v8 )
      {
        *(_DWORD *)(v9 + 4) = 0;
        sub_77F70(v8);
      }
      v5 += 12;
    }
    *(_DWORD *)(a1 + 72) = 0;
  }
  v10 = *(_DWORD *)(a1 + 84);
  if ( v10 )
  {
    v11 = 0;
    for ( j = 0; j != v10; ++j )
    {
      v13 = *(_DWORD *)(a1 + 80);
      v14 = *(void **)(v13 + v11);
      v15 = v13 + v11;
      if ( v14 )
      {
        *(_DWORD *)(v15 + 4) = 0;
        sub_77F70(v14);
      }
      v11 += 12;
    }
    *(_DWORD *)(a1 + 84) = 0;
  }
  v16 = *(_DWORD *)(a1 + 96);
  if ( v16 )
  {
    v17 = 0;
    for ( k = 0; k != v16; ++k )
    {
      v19 = *(_DWORD *)(a1 + 92);
      v20 = *(void **)(v19 + v17);
      v21 = v19 + v17;
      if ( v20 )
      {
        *(_DWORD *)(v21 + 4) = 0;
        sub_77F70(v20);
      }
      v17 += 12;
    }
    *(_DWORD *)(a1 + 96) = 0;
  }
  v22 = *(_DWORD *)(a1 + 236);
  if ( v22 )
  {
    v23 = 0;
    v24 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v57[0] = 2;
    do
    {
      ++v24;
      v25 = (unsigned __int8 *)(*(_DWORD *)(a1 + 232) + v23);
      v23 += 24;
      sub_45758(v25);
    }
    while ( v22 != v24 );
    *(_DWORD *)(a1 + 236) = 0;
    sub_45758(v57);
  }
  if ( *(_DWORD *)(a1 + 136) )
    *(_DWORD *)(a1 + 136) = 0;
  if ( *(_DWORD *)(a1 + 148) )
    *(_DWORD *)(a1 + 148) = 0;
  if ( *(_DWORD *)(a1 + 160) )
    *(_DWORD *)(a1 + 160) = 0;
  if ( *(_DWORD *)(a1 + 172) )
    *(_DWORD *)(a1 + 172) = 0;
  if ( *(_DWORD *)(a1 + 184) )
    *(_DWORD *)(a1 + 184) = 0;
  if ( *(_DWORD *)(a1 + 196) )
    *(_DWORD *)(a1 + 196) = 0;
  if ( *(_DWORD *)(a1 + 208) )
    *(_DWORD *)(a1 + 208) = 0;
  if ( *(_DWORD *)(a1 + 220) )
    *(_DWORD *)(a1 + 220) = 0;
  v26 = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 244) = -1;
  if ( !v26 )
  {
    v31 = sub_3EF50(*(void ***)(a1 + 64), s2);
    if ( v31 != -1 )
    {
LABEL_59:
      v41 = *(_DWORD *)(**(_DWORD **)(a1 + 64) + 4 * v31);
      *(_BYTE *)(a1 + 120) = -90;
      *(_DWORD *)(a1 + 116) = 0;
      *(_DWORD *)(a1 + 108) = v41;
      *(_DWORD *)(a1 + 112) = v41 + 16;
      if ( *(_DWORD *)(v41 + 68) != -1 )
      {
        if ( under_debugger )
          __und(0xFFu);
        sub_78C64(484);
      }
      return 0;
    }
LABEL_67:
    sub_70C04(0, s2);
    return sub_70B98(40);
  }
  src = nullptr;
  v52 = 0;
  v53 = 0;
  if ( s2 )
  {
    v27 = strlen(s2);
    src = sub_78018((int)&src, nullptr, v27 + 1, 1u);
    v52 = v27 + 1;
    memmove(src, s2, v27);
    *((_BYTE *)src + v27) = 0;
    v26 = *(_DWORD *)(a1 + 104);
  }
  if ( *(_DWORD *)(v26 + 36) )
  {
    v42 = strcmp(*(const char **)(v26 + 32), s2);
    v29 = *(unsigned __int8 *)(a1 + 128);
    if ( !v42 )
    {
LABEL_44:
      if ( !v29 )
      {
        *(_DWORD *)(a1 + 124) = 1;
LABEL_46:
        v30 = sub_4131C(v26, *(void ***)(a1 + 64), (int)&src);
        v31 = v30;
        if ( v30 != -1 )
        {
          if ( *(_DWORD *)(a1 + 124) == 2 )
            *(_DWORD *)(*(_DWORD *)(a1 + 104) + 52) = v30;
          if ( sub_3928C((int *)(a1 + 80), "this") == -1 )
          {
            ptr = nullptr;
            v55 = 0;
            v56 = nullptr;
            ptr = sub_78018((int)&ptr, nullptr, 5u, 1u);
            v55 = 5;
            strcpy((char *)ptr, "this");
            v32 = ptr;
            v33 = *(void ***)(a1 + 80);
            if ( v33 > &ptr )
            {
              v34 = *(_DWORD *)(a1 + 88);
              v35 = *(_DWORD *)(a1 + 84);
              v36 = v35 + 1;
            }
            else
            {
              v34 = *(_DWORD *)(a1 + 88);
              v35 = *(_DWORD *)(a1 + 84);
              v36 = v35 + 1;
              if ( &ptr < &v33[3 * v34] )
              {
                ptr = nullptr;
                v37 = v55;
                v50 = v56;
                v55 = 0;
                v56 = nullptr;
                if ( v34 < v36 )
                {
                  v33 = (void **)sub_78018(a1 + 80, v33, v35 + 1, 0xCu);
                  v35 = *(_DWORD *)(a1 + 84);
                  *(_DWORD *)(a1 + 80) = v33;
                }
                v38 = 3 * v35;
                v33[v38] = v32;
                v39 = &v33[v38];
                v39[1] = (void *)v37;
                v40 = ptr;
                v39[2] = v50;
                ++*(_DWORD *)(a1 + 84);
                if ( v40 )
                {
                  v55 = 0;
                  sub_77F70(v40);
                }
                goto LABEL_56;
              }
            }
            if ( v36 > v34 )
            {
              v33 = (void **)sub_78018(a1 + 80, v33, v36, 0xCu);
              v35 = *(_DWORD *)(a1 + 84);
              *(_DWORD *)(a1 + 80) = v33;
            }
            v45 = 3 * v35;
            v33[v45] = ptr;
            v46 = &v33[v45];
            v46[1] = (void *)v55;
            v46[2] = v56;
            ++*(_DWORD *)(a1 + 84);
          }
        }
LABEL_56:
        if ( src )
        {
          v52 = 0;
          sub_77F70(src);
        }
        if ( v31 != -1 )
          goto LABEL_59;
        goto LABEL_67;
      }
      v47 = src;
      if ( v52 )
      {
        v48 = v52 + 1;
        v49 = v52 - 1;
        if ( v52 + 1 <= v53 )
          goto LABEL_77;
      }
      else
      {
        if ( v53 > 1 )
        {
          v52 = 2;
          *((_BYTE *)src + 1) = 0;
LABEL_79:
          *(_BYTE *)src = 126;
          *(_DWORD *)(a1 + 124) = 2;
          v26 = *(_DWORD *)(a1 + 104);
          goto LABEL_46;
        }
        v49 = v52;
        v48 = 2;
      }
      v47 = sub_78018((int)&src, src, v48, 1u);
      src = v47;
LABEL_77:
      v52 = v48;
      *((_BYTE *)v47 + v49 + 1) = 0;
      if ( v49 )
        memmove((char *)src + 1, src, v49);
      goto LABEL_79;
    }
  }
  else
  {
    v28 = strcmp((const char *)&dword_8DB98, s2);
    v29 = *(unsigned __int8 *)(a1 + 128);
    if ( !v28 )
      goto LABEL_44;
  }
  if ( !v29 )
    goto LABEL_46;
  v43 = sub_70B98(1584);
  if ( src )
  {
    v52 = 0;
    sub_77F70(src);
  }
  return v43;
}
// 8DB98: using guessed type int dword_8DB98;
// D6C20: using guessed type char under_debugger;
