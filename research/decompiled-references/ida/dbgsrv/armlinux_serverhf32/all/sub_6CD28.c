/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6CD28
// Address: 0x0006CD28

//----- (0006CD28) --------------------------------------------------------
int __fastcall sub_6CD28(const char **a1)
{
  unsigned __int8 *v1; // r6
  const char *v3; // r5
  int v4; // r4
  char *v5; // r0
  const char *v6; // r3
  unsigned int v7; // r2
  void *v8; // r0
  unsigned int v9; // r4
  unsigned int v10; // r6
  int v11; // r3
  unsigned int v12; // r6
  unsigned int v13; // r4
  void *v14; // r1
  bool v15; // zf
  unsigned int v16; // r4
  int v17; // r2
  unsigned int v19; // r6
  unsigned int v20; // r4
  _BYTE *v21; // r1
  char v22; // r8
  char v23; // t1
  bool v24; // zf
  int result; // r0
  int v26; // t1
  unsigned int v27; // r5
  unsigned int v28; // r4
  void *v29; // r1
  char *v30; // r0
  unsigned __int8 *v31; // r5
  unsigned __int8 *v32; // r4
  unsigned __int8 *v33; // r1
  unsigned __int8 *v34; // r3
  char *v35; // [sp+8h] [bp-14h] BYREF
  unsigned int v36; // [sp+Ch] [bp-10h]
  unsigned int v37; // [sp+10h] [bp-Ch]

  v1 = (unsigned __int8 *)a1[1];
  if ( v1 )
  {
    v3 = *a1;
    v4 = *(unsigned __int8 *)*a1;
    if ( **a1 )
    {
      v5 = strpbrk(*a1, " \t?*[]()<>;&$|^#");
      v6 = v3;
      if ( !v5 )
      {
        while ( 1 )
        {
          v24 = v4 == 39;
          if ( v4 != 39 )
            v24 = v4 == 34;
          result = v24;
          if ( v24 )
            break;
          v26 = *(unsigned __int8 *)++v6;
          v4 = v26;
          if ( !v26 )
            return result;
        }
      }
    }
    v7 = (unsigned int)(v1 + 1);
    v35 = nullptr;
    v36 = 0;
    v37 = 0;
    if ( v1 == (unsigned __int8 *)-1 )
    {
      v8 = nullptr;
      v9 = 2;
      v10 = 0;
LABEL_6:
      v8 = sub_77EB0((int)&v35, v8, v9, 1u);
      v35 = (char *)v8;
      goto LABEL_11;
    }
  }
  else
  {
    v7 = 2;
    v35 = nullptr;
    v36 = 0;
    v37 = 0;
    v3 = (const char *)&dword_8DA5C;
  }
  v8 = sub_77EB0((int)&v35, nullptr, v7, 1u);
  v35 = (char *)v8;
  if ( v36 )
  {
    v10 = v36 - 1;
    v9 = v36 + 1;
  }
  else
  {
    v10 = 0;
    v9 = 2;
  }
  if ( v9 > v37 )
    goto LABEL_6;
LABEL_11:
  v36 = v9;
  *((_BYTE *)v8 + v10) = 39;
  v35[v10 + 1] = 0;
  v11 = *(unsigned __int8 *)v3;
  if ( *v3 )
  {
    while ( 1 )
    {
      v15 = v11 == 39;
      if ( v11 != 39 )
        v15 = v11 == 34;
      v16 = v36;
      v17 = v15;
      if ( v11 == 92 ? v17 | 1 : v17 )
        break;
LABEL_27:
      v23 = *v3++;
      v22 = v23;
      if ( v16 )
      {
        v12 = v16 - 1;
        v13 = v16 + 1;
        v14 = v35;
        if ( v37 < v13 )
          goto LABEL_29;
      }
      else
      {
        v12 = 0;
        v13 = 2;
        v14 = v35;
        if ( v37 < 2 )
        {
LABEL_29:
          v14 = sub_77EB0((int)&v35, v14, v13, 1u);
          v35 = (char *)v14;
        }
      }
      v36 = v13;
      *((_BYTE *)v14 + v12) = v22;
      v35[v12 + 1] = 0;
      v11 = *(unsigned __int8 *)v3;
      if ( !*v3 )
        goto LABEL_40;
    }
    if ( v36 )
    {
      v19 = v36 - 1;
      v20 = v36 + 1;
      v21 = v35;
      if ( v37 >= v36 + 1 )
      {
LABEL_26:
        v36 = v20;
        v21[v19] = 92;
        v35[v19 + 1] = 0;
        v16 = v36;
        goto LABEL_27;
      }
    }
    else
    {
      v19 = 0;
      v20 = 2;
      v21 = v35;
      if ( v37 >= 2 )
        goto LABEL_26;
    }
    v21 = sub_77EB0((int)&v35, v21, v20, 1u);
    v35 = v21;
    goto LABEL_26;
  }
LABEL_40:
  if ( !v36 )
  {
    v27 = 0;
    v28 = 2;
    v29 = v35;
    if ( v37 >= 2 )
      goto LABEL_42;
LABEL_46:
    v29 = sub_77EB0((int)&v35, v29, v28, 1u);
    v35 = (char *)v29;
    goto LABEL_42;
  }
  v27 = v36 - 1;
  v28 = v36 + 1;
  v29 = v35;
  if ( v37 < v36 + 1 )
    goto LABEL_46;
LABEL_42:
  v36 = v28;
  *((_BYTE *)v29 + v27) = 39;
  v35[v27 + 1] = 0;
  v30 = (char *)*a1;
  v31 = (unsigned __int8 *)a1[1];
  v32 = (unsigned __int8 *)v36;
  v33 = (unsigned __int8 *)a1[2];
  *a1 = v35;
  v34 = (unsigned __int8 *)v37;
  v35 = v30;
  v36 = (unsigned int)v31;
  a1[1] = (const char *)v32;
  v37 = (unsigned int)v33;
  a1[2] = (const char *)v34;
  if ( v30 )
  {
    v36 = 0;
    sub_77E08(v30);
  }
  return 1;
}
// 8DA5C: using guessed type int dword_8DA5C;
