/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58D64
// Address: 0x00058D64

//----- (00058D64) --------------------------------------------------------
_BYTE *__fastcall sub_58D64(_DWORD *a1, __int64 a2, char *s, int a4)
{
  _BYTE *v6; // r6
  int v7; // r3
  unsigned int v8; // r4
  char *v9; // r10
  char *v10; // r4
  size_t v11; // r0
  size_t v12; // r5
  char *v14; // r0
  __int64 v15; // kr08_8
  char *v16; // r0
  int v17; // r8
  char *v18; // r4
  char *v19; // r11
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  void *v26; // r0
  void *v27; // r0
  unsigned int v28; // r8
  void *v29; // r0

  v6 = sub_77D94(a4 + 1);
  if ( v6 )
  {
    v8 = a1[37];
    v7 = a1[36];
    if ( v7 + 1 > v8 )
    {
      v14 = (char *)sub_77EB0((int)(a1 + 35), nullptr, v7 + 1, 0x28u);
      v15 = *((_QWORD *)a1 + 18);
      v9 = v14;
      a1[37] = v8;
      v16 = (char *)a1[35];
      v17 = v15 - 1;
      if ( (int)v15 - 1 >= 0 )
      {
        v18 = v16 + 40;
        v19 = v9;
        do
        {
          *(_DWORD *)v19 = *((_DWORD *)v18 - 10);
          v20 = *((_DWORD *)v18 - 9);
          *((_DWORD *)v18 - 10) = 0;
          *((_DWORD *)v19 + 1) = v20;
          v21 = *((_DWORD *)v18 - 8);
          *((_DWORD *)v18 - 9) = 0;
          *((_DWORD *)v19 + 2) = v21;
          v22 = *((_DWORD *)v18 - 7);
          *((_DWORD *)v18 - 8) = 0;
          *((_DWORD *)v19 + 3) = v22;
          v23 = *((_DWORD *)v18 - 6);
          *((_DWORD *)v18 - 7) = 0;
          *((_DWORD *)v19 + 4) = v23;
          v24 = *((_DWORD *)v18 - 5);
          *((_DWORD *)v18 - 6) = 0;
          *((_DWORD *)v19 + 5) = v24;
          v25 = *((_DWORD *)v18 - 4);
          *((_DWORD *)v18 - 5) = 0;
          *((_DWORD *)v19 + 6) = v25;
          *((_DWORD *)v19 + 7) = *((_DWORD *)v18 - 3);
          *((_QWORD *)v19 + 4) = *((_QWORD *)v18 - 1);
          v26 = *((void **)v18 - 7);
          if ( v26 )
          {
            *((_DWORD *)v18 - 6) = 0;
            sub_77E08(v26);
          }
          v27 = *((void **)v18 - 10);
          if ( v27 )
          {
            *((_DWORD *)v18 - 9) = 0;
            sub_77E08(v27);
          }
          --v17;
          v19 += 40;
          v18 += 40;
        }
        while ( v17 != -1 );
        v16 = (char *)a1[35];
      }
      sub_77E08(v16);
      v7 = a1[36];
      a1[35] = v9;
      a1[37] = HIDWORD(v15);
    }
    else
    {
      v9 = (char *)a1[35];
    }
    v10 = &v9[40 * v7];
    *(_DWORD *)v10 = 0;
    *((_DWORD *)v10 + 1) = 0;
    *((_DWORD *)v10 + 2) = 0;
    *((_DWORD *)v10 + 3) = 0;
    *((_DWORD *)v10 + 4) = 0;
    *((_DWORD *)v10 + 5) = 0;
    ++a1[36];
    *((_QWORD *)v10 + 4) = a2;
    if ( s && (v11 = strlen(s), (v12 = v11) != 0) )
    {
      v28 = v11 + 1;
      v29 = *((void **)v10 + 3);
      if ( v28 > *((_DWORD *)v10 + 5) )
      {
        v29 = sub_77EB0((int)(v10 + 12), *((void **)v10 + 3), v28, 1u);
        *((_DWORD *)v10 + 3) = v29;
      }
      *((_DWORD *)v10 + 4) = v28;
      memmove(v29, s, v12);
      *(_BYTE *)(*((_DWORD *)v10 + 3) + v12) = 0;
    }
    else
    {
      *((_DWORD *)v10 + 4) = 0;
    }
    *((_DWORD *)v10 + 6) = a4;
    *((_DWORD *)v10 + 7) = v6;
    v6[a4] = 0;
  }
  return v6;
}
