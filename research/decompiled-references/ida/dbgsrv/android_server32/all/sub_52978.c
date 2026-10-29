/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52978
// Address: 0x00052978

//----- (00052978) --------------------------------------------------------
int __fastcall sub_52978(_DWORD *a1, char *a2)
{
  char *v2; // r7
  _DWORD *v3; // r6
  int *v4; // r4
  FILE **v5; // r5
  int v6; // r0
  int v7; // r6
  _BYTE *v8; // r1
  _DWORD *v9; // r2
  _DWORD *v10; // r3
  int v11; // r4
  int v12; // r0
  const char *v13; // r0
  FILE *v14; // r0
  _DWORD *v17; // [sp+4h] [bp-20h]
  _DWORD *v19; // [sp+Ch] [bp-18h]
  _DWORD *v20; // [sp+10h] [bp-14h]
  _BYTE *v21; // [sp+14h] [bp-10h]
  int v23; // [sp+1Ch] [bp-8h]
  void **v24; // [sp+20h] [bp-4h]

  v2 = a2;
  v3 = a1;
  v4 = a1 + 33;
  if ( a1[33] )
  {
    v17 = a1 + 27;
    v21 = a1 + 17;
    v20 = a1 + 37;
    v19 = a1 + 32;
    v24 = (void **)(a1 + 36);
    v5 = (FILE **)(a1 + 35);
    do
    {
      if ( *v5 )
        qfclose(*v5);
      qfree(*v24);
      *v24 = nullptr;
      v23 = *v4;
      v6 = *v4 - 1;
      v7 = *v19 + 24 * v6;
      *v5 = *(FILE **)(v7 + 4);
      *v20 = *(_DWORD *)(v7 + 16);
      *v24 = *(void **)v7;
      *v21 = *(_BYTE *)(v7 + 20);
      a1[26] = *(_DWORD *)(v7 + 8);
      a1[27] = *(_DWORD *)(v7 + 12);
      if ( !v23 )
        break;
      *v4 = v6;
    }
    while ( v6 );
    v3 = a1;
    v2 = a2;
    v8 = v21;
    v9 = v20;
    v10 = v17;
  }
  else
  {
    v8 = a1 + 17;
    v9 = a1 + 37;
    v10 = a1 + 27;
  }
  v3[26] = sub_4E3E0;
  *v10 = v3;
  v11 = 0;
  *v9 = 0;
  *((_BYTE *)v3 + 164) = 0;
  *v8 = 0;
  v3[43] = 0;
  v3[44] = 0;
  v3[42] = 0;
  if ( !v2 )
  {
    v12 = set_qerrno(1);
    *(_DWORD *)_errno(v12) = 2;
  }
  qfree((void *)v3[36]);
  v13 = (const char *)qstrdup(v2);
  v3[36] = v13;
  if ( !v13 )
    return get_qerrno();
  v14 = fopenRT(v13);
  v3[35] = v14;
  if ( !v14 )
    return get_qerrno();
  if ( *((_BYTE *)v3 + 488) )
    return sub_4E710((int)v3, 0, 0);
  return v11;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
