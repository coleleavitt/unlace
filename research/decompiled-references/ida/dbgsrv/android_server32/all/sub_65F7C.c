/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65F7C
// Address: 0x00065F7C

//----- (00065F7C) --------------------------------------------------------
bool __fastcall sub_65F7C(_DWORD *a1, int *a2, _DWORD *a3, int a4)
{
  int *v4; // r7
  char *v6; // r1
  int v7; // r2
  char *v8; // r0
  char *v9; // r3
  int v10; // r6
  int v11; // r4
  unsigned int v12; // r6
  int v13; // r0
  _DWORD *v14; // r4
  _DWORD *v15; // r3
  unsigned int v16; // r2
  _DWORD *v17; // r0
  unsigned int v18; // r1
  _DWORD *v19; // r4
  unsigned int v20; // r2
  _DWORD *v21; // r2
  bool v22; // zf
  int v23; // r1
  unsigned int v24; // r1
  unsigned int v25; // r2
  char *v26; // r0
  void *v27; // r0
  _DWORD *v28; // r7
  int v29; // r0
  int v30; // r1
  _DWORD *v31; // r0
  int v32; // r4
  _DWORD *v33; // r6
  _DWORD *v34; // r0
  int v35; // r3
  _DWORD *v36; // r1
  int v37; // r2
  _BOOL4 result; // r0
  _DWORD *v39; // r0
  int v40; // r3
  _DWORD *v41; // r1
  int v42; // r2
  int v43; // [sp+Ch] [bp-3Ch]
  _DWORD *v44; // [sp+14h] [bp-34h]
  int v45; // [sp+14h] [bp-34h]
  _DWORD *v46; // [sp+1Ch] [bp-2Ch]
  _DWORD *v47; // [sp+1Ch] [bp-2Ch]
  int v51; // [sp+2Ch] [bp-1Ch] BYREF
  void *v52; // [sp+34h] [bp-14h]
  int v53; // [sp+38h] [bp-10h]
  int v54; // [sp+3Ch] [bp-Ch]
  int v55; // [sp+40h] [bp-8h]

  v4 = a2;
  if ( (a1[88] & 0x10) != 0 )
  {
    if ( a2[4] == 4 )
      goto LABEL_62;
    v45 = a2[63];
    v12 = *a2;
    v13 = (*(int (__fastcall **)(_DWORD *))(*a1 + 248))(a1);
    v14 = a1 + 66;
    v15 = (_DWORD *)a1[66];
    v16 = -v13 & v12;
    v47 = a1 + 66;
    if ( !v15 )
      goto LABEL_17;
    v17 = a1 + 66;
    do
    {
      v18 = v15[4];
      if ( v18 >= v16 )
        v17 = v15;
      v19 = v15 + 1;
      if ( v18 >= v16 )
        v19 = v15;
      v15 = (_DWORD *)*v19;
    }
    while ( *v19 );
    v14 = a1 + 66;
    v4 = a2;
    if ( v17 == v47 || (v20 = v17[4], v14 = v17, v20 >= v45 + v12) )
    {
LABEL_17:
      if ( v14 == (_DWORD *)a1[65] )
        goto LABEL_62;
      v21 = (_DWORD *)*v14;
      if ( *v14 )
      {
        do
        {
          v17 = v21;
          v21 = (_DWORD *)v21[1];
        }
        while ( v21 );
      }
      else
      {
        do
        {
          v17 = (_DWORD *)v14[2];
          v22 = *v17 == (_DWORD)v14;
          v14 = v17;
        }
        while ( v22 );
      }
      v20 = v17[4];
    }
    if ( v45 )
    {
      v23 = v17[8];
      if ( v23 )
      {
        if ( v45 + v12 - 1 >= v20 )
        {
          v24 = v20 + v23 - 1;
          if ( v17 != v47 && v24 >= v12 )
            goto LABEL_2;
        }
      }
    }
LABEL_62:
    result = 1;
    if ( (a4 & 2) == 0 )
      return (*(int (__fastcall **)(_DWORD *, _DWORD *))(*a1 + 84))(a1, a3) > 0;
    return result;
  }
LABEL_2:
  v6 = (char *)a1[46];
  v7 = a1[47];
  v8 = &v6[4 * v7];
  v46 = a1 + 47;
  v44 = a1 + 46;
  v9 = v6;
  if ( 4 * v7 )
  {
    v10 = 4 * v7;
    v11 = *v4;
    v9 = (char *)a1[46];
    while ( v11 != *(_DWORD *)v9 )
    {
      v10 -= 4;
      v9 += 4;
      if ( !v10 )
        goto LABEL_32;
    }
    v4 = a2;
  }
  if ( v9 != v8 )
  {
    if ( !under_debugger )
      interr(616);
    __debugbreak();
  }
  v11 = *v4;
LABEL_32:
  v25 = v7 + 1;
  if ( a1[48] < v25 )
  {
    v26 = (char *)qvector_reserve((int)v44, v6, v25, 4u);
    *v44 = v26;
    v8 = &v26[4 * *v46];
  }
  *(_DWORD *)v8 = v11;
  ++*v46;
  if ( a4 << 31 )
  {
    v28 = a3 + 1;
  }
  else
  {
    v55 = 0;
    v54 = 0;
    v51 = -2;
    v27 = (void *)*a2;
    v53 = 0;
    v52 = v27;
    v28 = a3 + 1;
    if ( (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int *, _DWORD))(*a1 + 116))(a1, a3[1], a1[85], &v51, 0) <= 0 )
    {
      v39 = (_DWORD *)*v44;
      v40 = 4 * *v46;
      v41 = (_DWORD *)(*v44 + v40);
      if ( v40 )
      {
        v42 = 4 * *v46;
        while ( *a2 != *v39 )
        {
          v42 -= 4;
          ++v39;
          if ( !v42 )
            goto LABEL_71;
        }
      }
      if ( v39 != v41 )
      {
        memmove(v39, v39 + 1, ((char *)(v41 - 1) - (char *)v39) & 0xFFFFFFFC);
        --*v46;
      }
LABEL_71:
      if ( v51 >= -1 )
      {
        if ( v52 )
        {
          v53 = 0;
          qfree(v52);
          v54 = 0;
          v52 = nullptr;
        }
        v51 = -2;
      }
      return 0;
    }
    if ( v51 >= -1 )
    {
      if ( v52 )
      {
        v53 = 0;
        qfree(v52);
        v54 = 0;
        v52 = nullptr;
      }
      v51 = -2;
    }
  }
  v29 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 4))(a1, *v28);
  if ( v29 < 1 )
  {
    v32 = v29;
  }
  else
  {
    v30 = a2[4];
    v31 = a2 + 6;
    if ( v30 != 4 )
      v31 = a2 + 63;
    v43 = *v31;
    v32 = (*(int (__fastcall **)(_DWORD *, int, int, int, _DWORD))(*a1 + 160))(a1, v30, *a2, a2[5], *v31);
    if ( v32 < 1 )
    {
      v33 = v28;
    }
    else
    {
      if ( (*(int (__fastcall **)(_DWORD *, _DWORD *, int *))*a1)(a1, a3, a2 + 8) <= 0 )
      {
        sub_1BC48((int)a1, "%a: failed to single step\n", a3[2]);
        v32 = 0;
      }
      v33 = v28;
      if ( (*(int (__fastcall **)(_DWORD *, _DWORD, int, int, int))(*a1 + 156))(a1, 0, a2[4], *a2, v43) <= 0 )
      {
        sub_20D34((int)a1, "%a: could not restore deleted bpt\n", *a2);
        v32 = 0;
      }
    }
    if ( (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 8))(a1, *v33) <= 0 )
    {
      sub_20D34((int)a1, "%d: could not resume suspended threads\n", *v33);
      v32 = 0;
    }
  }
  v34 = (_DWORD *)*v44;
  v35 = 4 * *v46;
  v36 = (_DWORD *)(*v44 + v35);
  if ( v35 )
  {
    v37 = 4 * *v46;
    while ( *a2 != *v34 )
    {
      v37 -= 4;
      ++v34;
      if ( !v37 )
        goto LABEL_60;
    }
  }
  if ( v34 != v36 )
  {
    memmove(v34, v34 + 1, ((char *)(v36 - 1) - (char *)v34) & 0xFFFFFFFC);
    --*v46;
  }
LABEL_60:
  result = 0;
  if ( v32 >= 1 && (a3[4] & 0xFFFFFFF) == 6 )
    goto LABEL_62;
  return result;
}
// E0550: using guessed type char under_debugger;
