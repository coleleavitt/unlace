/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2CE84
// Address: 0x0002CE84

//----- (0002CE84) --------------------------------------------------------
void __fastcall sub_2CE84(_DWORD *a1, _DWORD *a2)
{
  unsigned int v4; // r3
  int v5; // r9
  _DWORD *v6; // r6
  _DWORD *v7; // r7
  int v8; // r1
  unsigned int v9; // r7
  _DWORD *v10; // r0
  __int64 v11; // kr08_8
  char *v12; // r0
  int v13; // r10
  char *v14; // r7
  _DWORD *v15; // r11
  int v16; // r1
  int v17; // r1
  int v18; // r1
  int v19; // r1
  int v20; // r1
  int v21; // r1
  void *v22; // r0
  void *v23; // r0
  int v24; // r3
  int v25; // r3
  int v26; // r6
  int v27; // r4
  _DWORD *v28; // r5
  void *v29; // r3
  void *v30; // r0
  int v31; // [sp+8h] [bp-14h]
  unsigned int v32; // [sp+10h] [bp-Ch] BYREF

  v31 = (int)(a1 + 1);
  v4 = 0;
  v5 = *(unsigned __int8 *)(*a1 + 480);
  v32 = 0;
  while ( a2[1] > v4 )
  {
    v9 = a1[3];
    v8 = a1[2];
    if ( v8 + 1 <= v9 )
    {
      v6 = (_DWORD *)a1[1];
    }
    else
    {
      v10 = sub_78018(v31, nullptr, v8 + 1, 0x1Cu);
      v11 = *((_QWORD *)a1 + 1);
      v6 = v10;
      a1[3] = v9;
      v12 = (char *)a1[1];
      v13 = v11 - 1;
      if ( (int)v11 - 1 >= 0 )
      {
        v14 = v12 + 28;
        v15 = v6;
        do
        {
          *v15 = *((_DWORD *)v14 - 7);
          v16 = *((_DWORD *)v14 - 6);
          *((_DWORD *)v14 - 7) = 0;
          v15[1] = v16;
          v17 = *((_DWORD *)v14 - 5);
          *((_DWORD *)v14 - 6) = 0;
          v15[2] = v17;
          v18 = *((_DWORD *)v14 - 4);
          *((_DWORD *)v14 - 5) = 0;
          v15[3] = v18;
          v19 = *((_DWORD *)v14 - 3);
          *((_DWORD *)v14 - 4) = 0;
          v15[4] = v19;
          v20 = *((_DWORD *)v14 - 2);
          *((_DWORD *)v14 - 3) = 0;
          v15[5] = v20;
          v21 = *((_DWORD *)v14 - 1);
          *((_DWORD *)v14 - 2) = 0;
          v15[6] = v21;
          v22 = *((void **)v14 - 4);
          if ( v22 )
          {
            *((_DWORD *)v14 - 3) = 0;
            sub_77F70(v22);
          }
          v23 = *((void **)v14 - 7);
          if ( v23 )
          {
            *((_DWORD *)v14 - 6) = 0;
            sub_77F70(v23);
          }
          --v13;
          v15 += 7;
          v14 += 28;
        }
        while ( v13 != -1 );
        v12 = (char *)a1[1];
      }
      sub_77F70(v12);
      v8 = a1[2];
      a1[1] = v6;
      a1[3] = HIDWORD(v11);
    }
    v7 = &v6[7 * v8];
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    v7[4] = 0;
    v7[5] = 0;
    ++a1[2];
    if ( !sub_2CCE0((int)v7, (int *)&v32, a2, v5) )
    {
      v24 = a1[2];
      if ( v24 )
      {
        v25 = v24 - 1;
        v26 = a1[1];
        a1[2] = v25;
        v27 = 28 * v25;
        v28 = (_DWORD *)(v26 + 28 * v25);
        v29 = (void *)v28[3];
        if ( v29 )
        {
          v28[4] = 0;
          sub_77F70(v29);
        }
        v30 = *(void **)(v26 + v27);
        if ( v30 )
        {
          v28[1] = 0;
          sub_77F70(v30);
        }
      }
      return;
    }
    v4 = v32;
  }
}
