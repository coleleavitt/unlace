/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6CB34
// Address: 0x0006CB34

//----- (0006CB34) --------------------------------------------------------
void *__fastcall sub_6CB34(_DWORD *a1, int a2, char **a3)
{
  int v4; // r6
  char *v5; // r0
  char **v6; // r8
  char *v7; // t1
  _BYTE *v8; // r0
  int v9; // r3
  _BYTE *v10; // r5
  void *v11; // r1
  const void *v12; // r5
  FILE *v13; // r9
  void *v14; // r5
  bool v15; // zf
  void *v16; // r1
  int v17; // r3
  void *v18; // r1
  int v19; // r3
  unsigned int v20; // r0
  unsigned int v21; // r2
  void *result; // r0
  int v23; // r1
  void *v25; // r0
  bool v26; // zf
  const char *v27; // r0
  void *v29; // [sp+14h] [bp-20h] BYREF
  int v30; // [sp+18h] [bp-1Ch]
  unsigned int v31; // [sp+1Ch] [bp-18h]
  void *ptr; // [sp+20h] [bp-14h] BYREF
  unsigned int v33; // [sp+24h] [bp-10h]
  unsigned int v34; // [sp+28h] [bp-Ch]

  v4 = 0;
  v29 = nullptr;
  v30 = 0;
  v31 = 0;
  if ( a2 > 0 )
  {
    v5 = *a3;
    if ( *a3 )
    {
      v6 = a3;
      while ( *v5 == 64 )
      {
        v12 = v5 + 1;
        v13 = sub_75BE8((int)(v5 + 1), (unsigned __int8 *)"r");
        if ( !v13 )
        {
          v27 = (const char *)sub_70CE8(v12, -1);
          sub_16FE4("indirect file %s", v27);
        }
        ptr = nullptr;
        v33 = 0;
        v34 = 0;
        while ( sub_77C2C((int *)&ptr, v13) >= 0 )
        {
          while ( (int)sub_7ECC4(&ptr, 59, 3u) > 0 )
          {
            v14 = ptr;
            if ( v34 > v33 )
            {
              v15 = ptr == nullptr;
              if ( ptr )
                v15 = v33 == 0;
              if ( !v15 )
              {
                v25 = sub_77E0C(ptr, v33);
                v14 = v25;
                if ( !v25 )
                  v14 = ptr;
              }
            }
            v16 = v29;
            v17 = v30;
            v33 = 0;
            v34 = 0;
            ptr = nullptr;
            if ( v31 < v30 + 1 )
            {
              v16 = sub_77EB0((int)&v29, v29, v30 + 1, 4u);
              v17 = v30;
              v29 = v16;
            }
            *((_DWORD *)v16 + v17) = v14;
            ++v30;
            if ( sub_77C2C((int *)&ptr, v13) < 0 )
              goto LABEL_22;
          }
        }
LABEL_22:
        sub_77754(v13);
        if ( !ptr )
          goto LABEL_5;
        ++v4;
        v33 = 0;
        sub_77E08(ptr);
        if ( a2 == v4 )
        {
LABEL_24:
          v18 = v29;
          v19 = v30;
          v20 = v31;
          v21 = v30 + 1;
          if ( a1 )
            goto LABEL_25;
          goto LABEL_26;
        }
LABEL_6:
        v7 = v6[1];
        ++v6;
        v5 = v7;
        if ( !v7 )
          goto LABEL_24;
      }
      v8 = sub_77E44(v5);
      v9 = v30;
      v10 = v8;
      ptr = v8;
      v11 = v29;
      if ( v31 < v30 + 1 )
      {
        v11 = sub_77EB0((int)&v29, v29, v30 + 1, 4u);
        v9 = v30;
        v29 = v11;
      }
      *((_DWORD *)v11 + v9) = v10;
      ++v30;
LABEL_5:
      if ( a2 == ++v4 )
        goto LABEL_24;
      goto LABEL_6;
    }
  }
  if ( a1 )
  {
    v20 = 0;
    v21 = 1;
    v18 = nullptr;
    v19 = 0;
LABEL_25:
    *a1 = v19;
LABEL_26:
    ptr = nullptr;
  }
  else
  {
    v19 = 0;
    v21 = 1;
    v20 = 0;
    ptr = nullptr;
    v18 = nullptr;
  }
  if ( v21 > v20 )
  {
    v18 = sub_77EB0((int)&v29, v18, v21, 4u);
    v19 = v30;
    v29 = v18;
  }
  *((_DWORD *)v18 + v19) = 0;
  result = v29;
  v23 = v30 + 1;
  if ( v31 > ++v30 )
  {
    v26 = v23 == 0;
    if ( v23 )
      v26 = v29 == nullptr;
    if ( !v26 )
    {
      result = sub_77E0C(v29, 4 * v23);
      if ( !result )
        return v29;
    }
  }
  return result;
}
