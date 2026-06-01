/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42EC58
// Address: 0x000000000042EC58

//----- (000000000042EC58) ----------------------------------------------------
__int64 __fastcall sub_42EC58(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x23
  char *v7; // x0
  __int64 v8; // x3
  unsigned __int64 v9; // x2
  char *v10; // x21
  __int64 v11; // x25
  __int64 v12; // x1
  char *v13; // x0
  char *v14; // x1
  __int64 v16; // x0
  __int64 v17; // x2
  unsigned __int16 *v18; // x1
  unsigned __int16 v19; // [xsp+4Eh] [xbp-12h] BYREF
  unsigned __int16 *v20[2]; // [xsp+50h] [xbp-10h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 40LL * *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) - 40;
  v7 = *(char **)(v6 + 16);
  v8 = *(_QWORD *)(v6 + 24);
  v9 = v8 + 1;
  if ( (unsigned __int64)(v8 + 1) > *(_QWORD *)(v6 + 32) )
  {
    v7 = (char *)sub_491288(v6 + 16, *(void **)(v6 + 16), v9, 0x18u);
    *(_QWORD *)(v6 + 16) = v7;
    v8 = *(_QWORD *)(v6 + 24);
    v9 = v8 + 1;
  }
  *(_QWORD *)(v6 + 24) = v9;
  v10 = &v7[24 * v8];
  *(_QWORD *)v10 = a3;
  *((_QWORD *)v10 + 1) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL);
  v11 = *(_QWORD *)(a1 + 16);
  v12 = *(_QWORD *)(v11 + 112);
  if ( (unsigned __int64)(v12 + 1) > *(_QWORD *)(v11 + 120) )
  {
    v13 = (char *)sub_491288(v11 + 104, *(void **)(v11 + 104), v12 + 1, 0x18u);
    *(_QWORD *)(v11 + 104) = v13;
    v12 = *(_QWORD *)(v11 + 112);
  }
  else
  {
    v13 = *(char **)(v11 + 104);
  }
  v14 = &v13[24 * v12];
  *(_QWORD *)v14 = 0;
  *((_QWORD *)v14 + 1) = 0;
  *((_QWORD *)v14 + 2) = 0;
  ++*(_QWORD *)(v11 + 112);
  sub_42ABB0(*(_QWORD *)(a1 + 8), (__int64)v14, *(_DWORD *)(a1 + 24), *(_DWORD *)(a2 + 8));
  v19 = *(_WORD *)(a2 + 6) & 0x7FFF;
  if ( v19 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    v17 = *(_QWORD *)(v16 + 144);
    v18 = (unsigned __int16 *)(v16 + 136);
    if ( !v17 )
      goto LABEL_13;
    do
    {
      while ( *(unsigned __int16 *)(v17 + 32) >= (unsigned int)v19 )
      {
        v18 = (unsigned __int16 *)v17;
        v17 = *(_QWORD *)(v17 + 16);
        if ( !v17 )
          goto LABEL_11;
      }
      v17 = *(_QWORD *)(v17 + 24);
    }
    while ( v17 );
LABEL_11:
    if ( (unsigned __int16 *)(v16 + 136) == v18 || v18[16] > (unsigned int)v19 )
    {
LABEL_13:
      v20[0] = &v19;
      v18 = sub_42E950((_QWORD *)(v16 + 128), (__int64)v18, v20);
    }
    *((_QWORD *)v18 + 5) = *(_QWORD *)(v6 + 8);
    *((_QWORD *)v18 + 6) = *((_QWORD *)v10 + 1);
  }
  return (__int64)v20[1] ^ _stack_chk_guard;
}
