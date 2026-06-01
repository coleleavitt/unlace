/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_653B4
// Address: 0x000653B4

//----- (000653B4) --------------------------------------------------------
int __fastcall sub_653B4(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r4
  _DWORD *v6; // r9
  int v7; // r11
  int v8; // r1
  _DWORD *v9; // r5
  int v10; // r3
  _DWORD *v11; // r0
  void *v12; // r1
  _DWORD *v13; // r7
  char *v14; // r12
  int v15; // r2
  _DWORD *v16; // r0
  __int64 v17; // r2
  char *v18; // r12
  unsigned int v19; // r4
  void *v21; // r3
  _DWORD *v22; // r0
  int v23; // r1
  __int64 v24; // r2
  _DWORD *v25; // r0
  void *ptr; // [sp+8h] [bp-24h]
  void *ptra; // [sp+8h] [bp-24h]
  void *ptrb; // [sp+8h] [bp-24h]
  char *v29; // [sp+Ch] [bp-20h]
  char *v30; // [sp+Ch] [bp-20h]
  void *v31; // [sp+10h] [bp-1Ch]
  int v32; // [sp+14h] [bp-18h]
  _DWORD *v33; // [sp+1Ch] [bp-10h] BYREF
  _DWORD *v34; // [sp+20h] [bp-Ch]

  v5 = (_DWORD *)a3[2];
  v6 = a3 + 1;
  v7 = *(_DWORD *)(a2 + 16);
  if ( !v5 )
  {
    v22 = sub_805CC(0x30u);
    v23 = *(_DWORD *)(a1 + 848);
    v22[6] = -2;
    v9 = v22;
    LODWORD(v24) = v22 + 4;
    HIDWORD(v24) = -1;
    v22[10] = 0;
    v22[11] = 0;
    v22[8] = -1;
    v22[9] = -1;
    v22[4] = v23;
LABEL_34:
    if ( a3[5] && (v16 = (_DWORD *)a3[4], v16[4] < v23) )
    {
      v5 = nullptr;
    }
    else
    {
      sub_558AC(&v33, (int)a3, v24);
      v5 = v33;
      v16 = v34;
    }
    goto LABEL_17;
  }
  v8 = *(_DWORD *)(a1 + 848);
  v9 = a3 + 1;
  do
  {
    v10 = v5[4];
    if ( v10 < v8 )
      v5 = (_DWORD *)v5[3];
    else
      v9 = v5;
    if ( v10 >= v8 )
      v5 = (_DWORD *)v5[2];
  }
  while ( v5 );
  if ( v6 == v9 )
  {
    v25 = sub_805CC(0x30u);
    v23 = *(_DWORD *)(a1 + 848);
    v25[10] = 0;
    HIDWORD(v24) = -1;
    v25[11] = 0;
    v25[6] = -2;
    v9 = v25;
    v25[8] = -1;
    v25[9] = -1;
    LODWORD(v24) = v25 + 4;
    v25[4] = v23;
    goto LABEL_34;
  }
  if ( v8 < v9[4] )
  {
    v11 = sub_805CC(0x30u);
    v12 = *(void **)(a1 + 848);
    v11[6] = -2;
    v11[10] = 0;
    v11[11] = 0;
    v13 = v11;
    *((_QWORD *)v11 + 4) = -1;
    v14 = (char *)(v11 + 4);
    v11[4] = v12;
    v15 = v9[4];
    ptr = v11;
    if ( v15 <= (int)v12 )
    {
      v30 = (char *)(v11 + 4);
      if ( v15 >= (int)v12 )
        goto LABEL_31;
      if ( (_DWORD *)a3[4] == v9 )
        goto LABEL_42;
      v31 = v12;
      v32 = v9[4];
      v16 = (_DWORD *)sub_81290((int)v9);
      v12 = v31;
      v5 = v16;
      v18 = v30;
      if ( v16[4] <= (int)v31 )
      {
LABEL_38:
        LODWORD(v17) = v18;
        v9 = v13;
        sub_558AC(&v33, (int)a3, v17);
        v5 = v33;
        v16 = v34;
        goto LABEL_17;
      }
      v15 = v32;
      if ( !v9[3] )
      {
LABEL_42:
        if ( v9 )
        {
          v16 = v9;
          v9 = v13;
          goto LABEL_40;
        }
LABEL_31:
        sub_80648(ptr);
        goto LABEL_22;
      }
      v9 = v13;
    }
    else
    {
      v16 = v9;
      ptra = v12;
      v29 = v14;
      if ( (_DWORD *)a3[3] != v9 )
      {
        v16 = (_DWORD *)sub_812CC(v9);
        HIDWORD(v17) = v16[4];
        v18 = v29;
        if ( SHIDWORD(v17) < (int)ptra )
        {
          if ( v16[3] )
          {
            v16 = v9;
            v5 = v9;
          }
          v9 = v13;
          goto LABEL_17;
        }
        goto LABEL_38;
      }
      v5 = v9;
      v9 = v13;
    }
LABEL_17:
    if ( v16 )
    {
      v19 = v5 != nullptr;
      if ( v6 == v16 )
        v19 |= 1u;
      if ( v19 )
        goto LABEL_21;
      v12 = (void *)v9[4];
      v15 = v16[4];
LABEL_40:
      v19 = (int)v12 < v15;
LABEL_21:
      sub_8132C((_DWORD *)v19, v9, v16, v6);
      ++a3[5];
      goto LABEL_22;
    }
    if ( (int)v9[6] < -1 || (v21 = (void *)v9[8]) == nullptr )
    {
      ptrb = v9;
      v9 = v5;
      sub_80648(ptrb);
      goto LABEL_22;
    }
    v9[9] = 0;
    sub_77E08(v21);
    ptr = v9;
    v9 = v5;
    goto LABEL_31;
  }
LABEL_22:
  v9[8] = v7;
  v9[9] = 0;
  return *(_DWORD *)(a1 + 144);
}
// 6554A: variable 'v17' is possibly undefined
// 812CC: using guessed type int __fastcall sub_812CC(_DWORD);
