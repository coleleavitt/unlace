/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42FE28
// Address: 0x000000000042FE28

//----- (000000000042FE28) ----------------------------------------------------
__int64 __fastcall sub_42FE28(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v4; // x25
  char *v7; // x1
  char *v8; // x20
  unsigned int v9; // w3
  char *v10; // x19
  __int64 v11; // x0
  _QWORD *v12; // x0
  _QWORD *v13; // x24
  unsigned __int64 v14; // x2
  _QWORD *v15; // x20
  __int64 v16; // x25
  _QWORD *v17; // x19
  _QWORD *v18; // x1
  _QWORD *v19; // x2
  _BOOL4 v20; // w0
  char *v22; // x19
  __int64 v23; // x28
  _QWORD *v24; // x27
  __int64 v25; // x1
  char *v26; // x28
  __int64 v27; // x0
  char *v28; // x1
  __int64 v29; // x2
  _BOOL4 v30; // w0
  __int64 v31; // x4
  __int64 v32; // x1
  int *v33; // x2
  int *v34; // x0
  __int64 v35; // x0
  unsigned int v36; // w2
  void *v37; // x0
  void *v38; // x0
  __int64 v39; // [xsp+60h] [xbp-50h]
  char *v40; // [xsp+68h] [xbp-48h]
  __int64 v41; // [xsp+78h] [xbp-38h] BYREF
  int v42; // [xsp+80h] [xbp-30h] BYREF
  __int64 v43; // [xsp+88h] [xbp-28h]
  int *v44; // [xsp+90h] [xbp-20h]
  int *v45; // [xsp+98h] [xbp-18h]
  __int64 v46; // [xsp+A0h] [xbp-10h]
  __int64 v47; // [xsp+A8h] [xbp-8h]

  v4 = a1 + 1;
  v7 = (char *)a1[3];
  v8 = (char *)(a1 + 2);
  if ( v7 )
  {
    v9 = *(_DWORD *)(a2 + 88);
    v10 = (char *)(a1 + 2);
    v11 = a1[3];
    do
    {
      while ( *(_DWORD *)(v11 + 32) >= v9 )
      {
        v10 = (char *)v11;
        v11 = *(_QWORD *)(v11 + 16);
        if ( !v11 )
          goto LABEL_5;
      }
      v11 = *(_QWORD *)(v11 + 24);
    }
    while ( v11 );
LABEL_5:
    if ( v8 != v10 && v9 >= *((_DWORD *)v10 + 8) )
      goto LABEL_7;
    v22 = (char *)(v4 + 1);
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = &v42;
    v45 = &v42;
    v46 = 0;
    do
    {
      while ( *((_DWORD *)v7 + 8) >= v9 )
      {
        v22 = v7;
        v7 = *((char **)v7 + 2);
        if ( !v7 )
          goto LABEL_23;
      }
      v7 = *((char **)v7 + 3);
    }
    while ( v7 );
LABEL_23:
    if ( v8 != v22 && v9 >= *((_DWORD *)v22 + 8) )
    {
      v24 = v22 + 48;
      v31 = (__int64)(v22 + 40);
      v26 = v22 + 48;
      goto LABEL_31;
    }
  }
  else
  {
    v22 = (char *)(a1 + 2);
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = &v42;
    v45 = &v42;
    v46 = 0;
  }
  v23 = (__int64)v22;
  v22 = (char *)sub_49E050(0x58u);
  v24 = v22 + 48;
  *((_DWORD *)v22 + 8) = *(_DWORD *)(a2 + 88);
  *((_QWORD *)v22 + 5) = 0;
  *((_QWORD *)v22 + 6) = 0;
  v25 = v23;
  *((_QWORD *)v22 + 7) = 0;
  *((_QWORD *)v22 + 8) = v22 + 48;
  v26 = v22 + 48;
  *((_QWORD *)v22 + 9) = v22 + 48;
  *((_QWORD *)v22 + 10) = 0;
  v27 = sub_42FAE0(v4, v25, (unsigned int *)v22 + 8);
  v29 = v27;
  if ( v28 )
  {
    v30 = v8 == v28;
    if ( v29 )
      v30 = 1;
    if ( !v30 )
      LOBYTE(v30) = *((_DWORD *)v22 + 8) < *((_DWORD *)v28 + 8);
    sub_49F830(v30, (__int64)v22, v28, v4 + 1);
    v31 = (__int64)(v22 + 40);
    ++v4[5];
  }
  else
  {
    v26 = (char *)(v27 + 48);
    v39 = v27 + 40;
    v40 = (char *)v27;
    v24 = (_QWORD *)(v27 + 48);
    sub_42E4C8((__int64)(v22 + 40), *((_QWORD **)v22 + 7));
    v38 = v22;
    v22 = v40;
    j__free_0(v38);
    v31 = v39;
  }
LABEL_31:
  sub_42E4C8(v31, *((_QWORD **)v22 + 7));
  v24[1] = 0;
  v24[2] = v26;
  v32 = v43;
  v24[3] = v26;
  v24[4] = 0;
  if ( v32 )
  {
    *((_DWORD *)v22 + 12) = v42;
    v33 = v44;
    v34 = v45;
    v24[1] = v32;
    v24[2] = v33;
    v24[3] = v34;
    *(_QWORD *)(v32 + 8) = v26;
    v43 = 0;
    v44 = &v42;
    v24[4] = v46;
    v45 = &v42;
    v46 = 0;
  }
  sub_42E4C8((__int64)&v41, nullptr);
  v35 = a1[3];
  if ( v35 )
  {
    v36 = *(_DWORD *)(a2 + 88);
    v10 = (char *)(v4 + 1);
    do
    {
      if ( *(_DWORD *)(v35 + 32) < v36 )
      {
        v35 = *(_QWORD *)(v35 + 24);
      }
      else
      {
        v10 = (char *)v35;
        v35 = *(_QWORD *)(v35 + 16);
      }
    }
    while ( v35 );
    if ( v8 != v10 )
    {
      if ( v36 < *((_DWORD *)v10 + 8) )
        v10 = (char *)(v4 + 1);
      v13 = v10 + 48;
      v12 = *((_QWORD **)v10 + 7);
      if ( v12 )
        goto LABEL_8;
LABEL_42:
      v15 = v13;
LABEL_13:
      v16 = (__int64)v15;
      v15 = sub_49E050(0x30u);
      v17 = v10 + 40;
      v15[4] = *(_QWORD *)(a2 + 56);
      *((_DWORD *)v15 + 10) = 0;
      v19 = sub_42FCE0(v17, v16, v15 + 4);
      if ( v18 )
      {
        v20 = v13 == v18;
        if ( v19 )
          v20 = 1;
        if ( !v20 )
          LOBYTE(v20) = v15[4] < v18[4];
        sub_49F830(v20, (__int64)v15, v18, v13);
        ++v17[5];
      }
      else
      {
        v37 = v15;
        v15 = v19;
        j__free_0(v37);
      }
      goto LABEL_19;
    }
  }
  else
  {
    v10 = (char *)(v4 + 1);
  }
LABEL_7:
  v12 = *((_QWORD **)v10 + 7);
  v13 = v10 + 48;
  if ( !v12 )
    goto LABEL_42;
LABEL_8:
  v14 = *(_QWORD *)(a2 + 56);
  v15 = v13;
  do
  {
    while ( v12[4] >= v14 )
    {
      v15 = v12;
      v12 = (_QWORD *)v12[2];
      if ( !v12 )
        goto LABEL_11;
    }
    v12 = (_QWORD *)v12[3];
  }
  while ( v12 );
LABEL_11:
  if ( v15 == v13 || v14 < v15[4] )
    goto LABEL_13;
LABEL_19:
  *((_DWORD *)v15 + 10) = a3;
  return v47 ^ _stack_chk_guard;
}
// 42FE28: could not find valid save-restore pair for x28
// 42FF18: variable 'v18' is possibly undefined
// 430018: variable 'v28' is possibly undefined
