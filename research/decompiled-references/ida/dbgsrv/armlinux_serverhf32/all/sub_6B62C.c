/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B62C
// Address: 0x0006B62C

//----- (0006B62C) --------------------------------------------------------
int __fastcall sub_6B62C(int a1, char *s, int (__fastcall *a3)(void **, char *))
{
  size_t v6; // r7
  _DWORD *v7; // r7
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  size_t v10; // r8
  int v11; // r3
  char *v12; // r0
  const char *v13; // r1
  unsigned int v14; // r3
  char *v15; // r5
  unsigned int v16; // r11
  const char *i; // r0
  _DWORD *v18; // r3
  int v19; // r5
  int v21; // r0
  int v22; // r9
  _DWORD *v23; // r0
  _DWORD *v24; // r8
  int v25; // r3
  char *v26; // r0
  const char *v27; // r1
  _DWORD *v28; // r0
  size_t v29; // r10
  const char **v30; // r11
  _DWORD *v31; // r2
  _DWORD *v32; // r10
  int v33; // r0
  _DWORD *v34; // r0
  int v35; // r3
  _DWORD *v36; // r0
  void *v37; // r0
  void *v38; // r0
  void *v39; // r0
  _DWORD *v40; // r0
  int v41; // r3
  _DWORD *v42; // r0
  int v43; // r2
  unsigned int v44; // r8
  int v45; // r3
  unsigned int v46; // r9
  bool v47; // zf
  const char *v48; // r0
  const char *v49; // r1
  unsigned int v50; // r0
  unsigned int v51; // [sp+8h] [bp-44h]
  _DWORD *v52; // [sp+8h] [bp-44h]
  int v53; // [sp+Ch] [bp-40h]
  int v54; // [sp+10h] [bp-3Ch]
  int v55; // [sp+14h] [bp-38h]
  unsigned int v56[2]; // [sp+1Ch] [bp-30h] BYREF
  char *s1; // [sp+24h] [bp-28h] BYREF
  size_t v58; // [sp+28h] [bp-24h]
  int v59; // [sp+2Ch] [bp-20h]
  void *ptr; // [sp+30h] [bp-1Ch] BYREF
  int v61; // [sp+34h] [bp-18h]
  int v62; // [sp+38h] [bp-14h]
  int v63; // [sp+3Ch] [bp-10h]
  int v64; // [sp+40h] [bp-Ch]

  s1 = nullptr;
  v58 = 0;
  v59 = 0;
  if ( s )
  {
    v6 = strlen(s);
    s1 = (char *)sub_77EB0((int)&s1, nullptr, v6 + 1, 1u);
    v58 = v6 + 1;
    memmove(s1, s, v6);
    s1[v6] = 0;
  }
  v7 = (_DWORD *)(a1 + 152);
  v8 = sub_6B1E0(*(_DWORD **)(a1 + 156), (_DWORD *)(a1 + 152), (int)&s1);
  v9 = v8;
  v10 = v58;
  if ( (_DWORD *)(a1 + 152) == v8 )
    goto LABEL_12;
  if ( v58 )
  {
    v11 = v8[5];
    v12 = s1;
    if ( v11 )
    {
LABEL_6:
      v13 = (const char *)v9[4];
      goto LABEL_7;
    }
  }
  else
  {
    v12 = (char *)&dword_8DA5C;
    if ( v9[5] )
      goto LABEL_6;
  }
  v13 = (const char *)&dword_8DA5C;
LABEL_7:
  if ( strcmp(v12, v13) < 0 )
  {
LABEL_12:
    if ( v10 )
      v15 = s1;
    else
      v15 = (char *)&dword_8DA5C;
    v16 = 1;
    for ( i = "Adlam"; ; i = off_D06C8[v16] )
    {
      if ( !strcmp(i, v15) )
      {
        ptr = nullptr;
        v61 = 0;
        v62 = 0;
        v63 = 0;
        v64 = -1;
        if ( sub_6B46C((int)&ptr, v16) )
        {
          v40 = sub_77E84(20);
          v40[4] = -1;
          v19 = (int)v40;
          *v40 = 0;
          v40[1] = 0;
          v40[2] = 0;
          v40[3] = 0;
          v41 = *(_DWORD *)(a1 + 140);
          if ( (unsigned int)(v41 + 1) > *(_DWORD *)(a1 + 144) )
          {
            v42 = sub_77EB0(a1 + 136, *(void **)(a1 + 136), v41 + 1, 4u);
            v41 = *(_DWORD *)(a1 + 140);
            *(_DWORD *)(a1 + 136) = v42;
          }
          else
          {
            v42 = *(_DWORD **)(a1 + 136);
          }
          v42[v41] = v19;
          v43 = v61;
          v55 = v61;
          ++*(_DWORD *)(a1 + 140);
          v18 = ptr;
          if ( v43 )
          {
            v54 = 0;
            do
            {
              v44 = v18[2 * v54];
              v51 = v18[2 * v54 + 1];
              if ( v44 < v51 )
              {
                do
                {
                  if ( v44 <= 0x7F )
                    v45 = BYTE2(dword_A02E8[v44]);
                  else
                    v45 = (unsigned __int8)((unsigned int)sub_6B0D8(v44) >> 16);
                  v46 = v44 + 1;
                  v47 = v45 == 7;
                  if ( v45 != 7 )
                    v47 = (v45 & 0xFD) == 9;
                  if ( v47 )
                  {
                    v56[0] = v44;
                    v56[1] = v44 + 1;
                    sub_7C01C(v19, v56);
                  }
                  ++v44;
                }
                while ( v46 < v51 );
                v18 = ptr;
              }
              v47 = v55 == ++v54;
            }
            while ( !v47 );
          }
        }
        else
        {
          v18 = ptr;
          v19 = 0;
        }
        if ( v18 )
        {
          v61 = 0;
          sub_77E08(v18);
        }
        goto LABEL_32;
      }
      if ( ++v16 == 328 )
        break;
    }
    if ( !a3 )
    {
      v19 = 0;
      v22 = -1;
      goto LABEL_34;
    }
    ptr = nullptr;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = -1;
    v21 = a3(&ptr, v15);
    v19 = 0;
    if ( !v21 )
    {
      v34 = sub_77E84(20);
      v34[4] = -1;
      v19 = (int)v34;
      *v34 = 0;
      v34[1] = 0;
      v34[2] = 0;
      v34[3] = 0;
      v35 = *(_DWORD *)(a1 + 140);
      if ( (unsigned int)(v35 + 1) > *(_DWORD *)(a1 + 144) )
      {
        v36 = sub_77EB0(a1 + 136, *(void **)(a1 + 136), v35 + 1, 4u);
        v35 = *(_DWORD *)(a1 + 140);
        *(_DWORD *)(a1 + 136) = v36;
      }
      else
      {
        v36 = *(_DWORD **)(a1 + 136);
      }
      v36[v35] = v19;
      ++*(_DWORD *)(a1 + 140);
      sub_7DF34(v19, (int)&ptr);
    }
    if ( ptr )
    {
      v61 = 0;
      sub_77E08(ptr);
    }
LABEL_32:
    v22 = -1;
    if ( v19 )
      v22 = *(_DWORD *)(a1 + 140) - 1;
LABEL_34:
    v23 = sub_6B1E0(*(_DWORD **)(a1 + 156), (_DWORD *)(a1 + 152), (int)&s1);
    v24 = v23;
    if ( v7 == v23 )
      goto LABEL_41;
    if ( v58 )
    {
      v25 = v23[5];
      v26 = s1;
      if ( v25 )
      {
LABEL_37:
        v27 = (const char *)v24[4];
        goto LABEL_38;
      }
    }
    else
    {
      v26 = (char *)&dword_8DA5C;
      if ( v24[5] )
        goto LABEL_37;
    }
    v27 = (const char *)&dword_8DA5C;
LABEL_38:
    if ( strcmp(v26, v27) >= 0 )
    {
LABEL_39:
      v24[7] = v22;
      goto LABEL_25;
    }
LABEL_41:
    v53 = (int)v24;
    v28 = sub_805CC(0x20u);
    v29 = v58;
    v24 = v28;
    v30 = (const char **)(v28 + 4);
    v28[4] = 0;
    v28[5] = 0;
    v28[6] = 0;
    if ( v29 )
    {
      v37 = sub_77E84(v29);
      v24[4] = v37;
      v24[6] = v29;
      memcpy(v37, s1, v29);
      v24[5] = v29;
    }
    v24[7] = 0;
    sub_1D1B4((int *)&ptr, (_DWORD *)(a1 + 148), v53, v30);
    v32 = ptr;
    v31 = (_DWORD *)v61;
    if ( v61 )
    {
      v33 = v7 == (_DWORD *)v61;
      if ( ptr )
        v33 = 1;
      if ( !v33 )
      {
        if ( v24[5] )
          v48 = (const char *)v24[4];
        else
          v48 = (const char *)&dword_8DA5C;
        if ( *(_DWORD *)(v61 + 20) )
          v49 = *(const char **)(v61 + 16);
        else
          v49 = (const char *)&dword_8DA5C;
        v52 = (_DWORD *)v61;
        v50 = strcmp(v48, v49);
        v31 = v52;
        v33 = v50 >> 31;
      }
      sub_8132C((_DWORD *)v33, v24, v31, (_DWORD *)(a1 + 152));
      ++*(_DWORD *)(a1 + 168);
    }
    else
    {
      v38 = (void *)v24[4];
      if ( v38 )
      {
        v24[5] = v61;
        sub_77E08(v38);
      }
      v39 = v24;
      v24 = v32;
      sub_80648(v39);
    }
    goto LABEL_39;
  }
  v14 = v9[7];
  if ( v14 == -1 )
  {
    v19 = 0;
  }
  else
  {
    if ( v14 >= *(_DWORD *)(a1 + 140) )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(1472);
    }
    v19 = *(_DWORD *)(*(_DWORD *)(a1 + 136) + 4 * v14);
  }
LABEL_25:
  if ( s1 )
  {
    v58 = 0;
    sub_77E08(s1);
  }
  return v19;
}
// 8DA5C: using guessed type int dword_8DA5C;
// A02E8: using guessed type int dword_A02E8[157];
// D06C8: using guessed type char *off_D06C8[2];
// D5C00: using guessed type char under_debugger;
