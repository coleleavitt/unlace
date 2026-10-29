/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54848
// Address: 0x00054848

//----- (00054848) --------------------------------------------------------
bool __fastcall sub_54848(_DWORD *a1, unsigned int *a2, _DWORD *a3, char a4)
{
  __int64 v9; // kr00_8
  unsigned int v10; // r5
  unsigned int *v11; // r6
  unsigned int *v12; // r3
  int v13; // r0
  int (*v14)(); // r2
  int v15; // r5
  char *v16; // r0
  char *v17; // r2
  char *v18; // r3
  int v19; // r6
  void *v20; // r5
  int v21; // r2
  int v22; // r1
  int (__fastcall *v23)(_DWORD *, int, int, int *, _DWORD); // r6
  char *v24; // r0
  int v25; // r6
  int v26; // r0
  unsigned int v27; // r1
  unsigned int v28; // r6
  int v29; // r2
  int (*v30)(); // r6
  char *v31; // r0
  char *v32; // r2
  char *v33; // r3
  int v34; // [sp+10h] [bp-24h] BYREF
  void *ptr; // [sp+18h] [bp-1Ch]
  int v36; // [sp+1Ch] [bp-18h]
  int v37; // [sp+20h] [bp-14h]
  int v38; // [sp+24h] [bp-10h]

  if ( (a1[104] & 0x10) != 0 && (a2[4] == 4 || a1 + 79 == (_DWORD *)sub_547B4(a1, *a2, a2[63])) )
    return (a4 & 2) != 0 || (*(int (__fastcall **)(_DWORD *, _DWORD *))(*a1 + 84))(a1, a3) > 0;
  v9 = *((_QWORD *)a1 + 28);
  v10 = *a2;
  v11 = (unsigned int *)(v9 + 4 * HIDWORD(v9));
  if ( (unsigned int *)v9 != v11 )
  {
    if ( *(_DWORD *)v9 == v10 )
    {
LABEL_26:
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(616);
    }
    v12 = (unsigned int *)(v9 + 4);
    while ( v11 != v12 )
    {
      v13 = *v12++;
      if ( v13 == v10 )
        goto LABEL_26;
    }
  }
  if ( (unsigned int)(HIDWORD(v9) + 1) > a1[58] )
  {
    v24 = (char *)sub_77EB0((int)(a1 + 56), (void *)v9, HIDWORD(v9), 4u);
    v25 = a1[57];
    a1[56] = v24;
    v11 = (unsigned int *)&v24[4 * v25];
  }
  *v11 = v10;
  ++a1[57];
  if ( (a4 & 1) == 0 )
  {
    v19 = *a1;
    v20 = (void *)*a2;
    v21 = a1[101];
    v22 = a3[1];
    v37 = 0;
    v38 = 0;
    v36 = 0;
    v34 = -2;
    v23 = *(int (__fastcall **)(_DWORD *, int, int, int *, _DWORD))(v19 + 116);
    ptr = v20;
    if ( v23(a1, v22, v21, &v34, 0) <= 0 )
    {
      v31 = (char *)a1[56];
      v32 = &v31[4 * a1[57]];
      if ( v31 != v32 )
      {
        if ( *(_DWORD *)v31 == *a2 )
        {
LABEL_56:
          memmove(v31, v31 + 4, ((v32 - v31) & 0xFFFFFFFC) - 4);
          --a1[57];
        }
        else
        {
          v33 = v31 + 4;
          while ( 1 )
          {
            v31 = v33;
            if ( v32 == v33 )
              break;
            v33 += 4;
            if ( *(_DWORD *)v31 == *a2 )
              goto LABEL_56;
          }
        }
      }
      if ( v34 >= -1 && ptr )
      {
        v36 = 0;
        sub_77E08(ptr);
      }
      return 0;
    }
    if ( v34 >= -1 && ptr )
    {
      v36 = 0;
      sub_77E08(ptr);
    }
  }
  v14 = *(int (**)())(*a1 + 4);
  if ( v14 == sub_14EA4 )
  {
    v15 = 0;
  }
  else
  {
    v26 = ((int (__fastcall *)(_DWORD *, _DWORD))v14)(a1, a3[1]);
    v15 = v26;
    if ( v26 > 0 )
    {
      v27 = a2[4];
      if ( v27 == 4 )
        v28 = a2[6];
      else
        v28 = a2[63];
      v15 = (*(int (__fastcall **)(_DWORD *, unsigned int, unsigned int, unsigned int, unsigned int))(*a1 + 160))(
              a1,
              v27,
              *a2,
              a2[5],
              v28);
      if ( v15 > 0 )
      {
        if ( (*(int (__fastcall **)(_DWORD *, _DWORD *, unsigned int *))*a1)(a1, a3, a2 + 8) <= 0 )
        {
          v15 = 0;
          sub_172DC((int)a1, "%a: failed to single step\n", a3[2]);
        }
        if ( (*(int (__fastcall **)(_DWORD *, _DWORD, unsigned int, unsigned int, unsigned int))(*a1 + 156))(
               a1,
               0,
               a2[4],
               *a2,
               v28) <= 0 )
        {
          v15 = 0;
          sub_17320((int)a1, "%a: could not restore deleted bpt\n", *a2);
        }
      }
      v29 = a3[1];
      v30 = *(int (**)())(*a1 + 8);
      if ( v30 != sub_14EA8 )
      {
        if ( ((int (__fastcall *)(_DWORD *, int))v30)(a1, v29) > 0 )
        {
          v16 = (char *)a1[56];
          v17 = &v16[4 * a1[57]];
          if ( v16 == v17 )
            goto LABEL_23;
          goto LABEL_19;
        }
        v29 = a3[1];
      }
      v15 = 0;
      sub_17320((int)a1, "%d: could not resume suspended threads\n", v29);
    }
  }
  v16 = (char *)a1[56];
  v17 = &v16[4 * a1[57]];
  if ( v17 == v16 )
    return 0;
LABEL_19:
  if ( *(_DWORD *)v16 == *a2 )
  {
LABEL_29:
    memmove(v16, v16 + 4, ((v17 - v16) & 0xFFFFFFFC) - 4);
    --a1[57];
  }
  else
  {
    v18 = v16 + 4;
    while ( 1 )
    {
      v16 = v18;
      if ( v18 == v17 )
        break;
      v18 += 4;
      if ( *(_DWORD *)v16 == *a2 )
        goto LABEL_29;
    }
  }
LABEL_23:
  if ( v15 <= 0 || (a3[4] & 0xFFFFFFF) != 6 )
    return 0;
  return (a4 & 2) != 0 || (*(int (__fastcall **)(_DWORD *, _DWORD *))(*a1 + 84))(a1, a3) > 0;
}
// D5C00: using guessed type char under_debugger;
