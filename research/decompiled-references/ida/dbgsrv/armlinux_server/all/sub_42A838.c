/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A838
// Address: 0x000000000042A838

//----- (000000000042A838) ----------------------------------------------------
__int64 __fastcall sub_42A838(__int64 a1, void **a2, __int64 a3)
{
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x23
  void *v9; // x0
  int v10; // w0
  int v11; // w2
  __int64 v12; // x0
  int v13; // w3
  size_t v14; // x24
  void *v15; // x25
  __int64 v16; // x25
  size_t v17; // x27
  void *v18; // x0
  unsigned __int64 v19; // x26
  unsigned int v20; // w19
  char *v22; // x0
  unsigned __int64 v23; // x19
  char *v24; // x24
  __int64 v25; // x25
  bool v26; // cf
  void *v27; // x0
  _BYTE v28[104]; // [xsp+50h] [xbp-70h] BYREF

  v6 = sub_48C428(*(_QWORD *)(a1 + 472), 0, 1);
  v7 = *(_QWORD *)(a1 + 480);
  v8 = v6 - v7;
  if ( sub_48C428(*(_QWORD *)(a1 + 472), a3 + v7, 0) == -1 )
  {
    sub_40CD68((__int64)a2, "bad offset %08x", a3);
    v20 = 0;
    goto LABEL_15;
  }
  v9 = *a2;
  if ( *a2 )
  {
    a2[1] = nullptr;
    j__free(v9);
    *a2 = nullptr;
    a2[2] = nullptr;
  }
  while ( 1 )
  {
    v10 = sub_48C160(*(_QWORD *)(a1 + 472), v28, 0x64u);
    v11 = v10;
    if ( v10 < 0 )
      break;
    if ( v10 && v28[0] )
    {
      v12 = 1;
      do
      {
        v13 = v12;
        if ( v11 <= (int)v12 )
          break;
        ++v12;
      }
      while ( v28[v12 - 1] );
      v14 = v13;
    }
    else
    {
      v14 = 0;
    }
    v15 = a2[1];
    if ( v15 )
    {
      v16 = (__int64)v15 - 1;
      v17 = v16 + v14;
      v18 = *a2;
      v19 = v16 + v14 + 1;
      if ( v19 > (unsigned __int64)a2[2] )
        goto LABEL_17;
    }
    else
    {
      v17 = v14;
      v19 = v14 + 1;
      v16 = 0;
      v18 = *a2;
      if ( v14 + 1 > (unsigned __int64)a2[2] )
      {
LABEL_17:
        v18 = sub_491288((__int64)a2, v18, v19, 1u);
        *a2 = v18;
      }
    }
    a2[1] = (void *)v19;
    *((_BYTE *)v18 + v17) = 0;
    memmove((char *)*a2 + v16, v28, v14);
    if ( v14 != 100 )
    {
      v20 = 1;
      goto LABEL_15;
    }
  }
  v22 = (char *)a2[1];
  if ( v22 )
  {
    v23 = (unsigned __int64)(v22 + 16);
    v24 = v22 - 1;
    v25 = (__int64)(v22 + 15);
    v26 = a2[2] >= v22 + 16;
    v27 = *a2;
    if ( !v26 )
    {
LABEL_24:
      v27 = sub_491288((__int64)a2, v27, v23, 1u);
      *a2 = v27;
    }
  }
  else
  {
    v23 = 17;
    v25 = 16;
    v24 = nullptr;
    v27 = *a2;
    if ( (unsigned __int64)a2[2] < 0x11 )
      goto LABEL_24;
  }
  a2[1] = (void *)v23;
  *((_BYTE *)v27 + v25) = 0;
  v20 = 0;
  qmemcpy(&v24[(_QWORD)*a2], "{truncated name}", 16);
LABEL_15:
  sub_48C428(*(_QWORD *)(a1 + 472), v8 + *(_QWORD *)(a1 + 480), 0);
  return v20;
}
