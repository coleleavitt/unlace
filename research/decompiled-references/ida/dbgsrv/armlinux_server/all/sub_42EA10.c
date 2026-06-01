/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42EA10
// Address: 0x000000000042EA10

//----- (000000000042EA10) ----------------------------------------------------
__int64 __fastcall sub_42EA10(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v6; // x19
  char *v7; // x0
  __int64 v8; // x3
  unsigned __int64 v9; // x2
  char *v10; // x24
  __int64 v11; // x25
  __int64 v12; // x1
  char *v13; // x0
  char *v14; // x1
  __int64 v16; // x25
  __int64 v17; // x1
  char *v18; // x0
  char *v19; // x1
  _QWORD *v20; // x0
  __int64 v21; // x3
  unsigned __int16 *v22; // x1
  unsigned __int16 v23; // [xsp+4Eh] [xbp-12h] BYREF
  unsigned __int16 *v24[2]; // [xsp+50h] [xbp-10h] BYREF

  v6 = **(_QWORD **)(a1 + 16) + 40LL * *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) - 40;
  v7 = *(char **)(v6 + 8);
  v8 = *(_QWORD *)(v6 + 16);
  v9 = v8 + 1;
  if ( (unsigned __int64)(v8 + 1) > *(_QWORD *)(v6 + 24) )
  {
    v7 = (char *)sub_491288(v6 + 8, *(void **)(v6 + 8), v9, 0x10u);
    *(_QWORD *)(v6 + 8) = v7;
    v8 = *(_QWORD *)(v6 + 16);
    v9 = v8 + 1;
  }
  *(_QWORD *)(v6 + 16) = v9;
  v10 = &v7[16 * v8];
  *(_QWORD *)v10 = a3;
  if ( (*(_WORD *)(v6 + 32) & 1) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL);
    v16 = *(_QWORD *)(a1 + 16);
    v17 = *(_QWORD *)(v16 + 88);
    if ( (unsigned __int64)(v17 + 1) > *(_QWORD *)(v16 + 96) )
    {
      v18 = (char *)sub_491288(v16 + 80, *(void **)(v16 + 80), v17 + 1, 0x18u);
      *(_QWORD *)(v16 + 80) = v18;
      v17 = *(_QWORD *)(v16 + 88);
    }
    else
    {
      v18 = *(char **)(v16 + 80);
    }
    v19 = &v18[24 * v17];
    *(_QWORD *)v19 = 0;
    *((_QWORD *)v19 + 1) = 0;
    *((_QWORD *)v19 + 2) = 0;
    ++*(_QWORD *)(v16 + 88);
    sub_42ABB0(*(_QWORD *)(a1 + 8), (__int64)v19, *(_DWORD *)(a1 + 24), *a2);
  }
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
  sub_42ABB0(*(_QWORD *)(a1 + 8), (__int64)v14, *(_DWORD *)(a1 + 24), *a2);
  v23 = *(_WORD *)(v6 + 34);
  if ( v23 && *(_QWORD *)(v6 + 16) == 1 )
  {
    v20 = *(_QWORD **)(a1 + 16);
    v21 = v20[18];
    v22 = (unsigned __int16 *)(v20 + 17);
    if ( !v21 )
      goto LABEL_19;
    do
    {
      if ( *(unsigned __int16 *)(v21 + 32) < (unsigned int)v23 )
      {
        v21 = *(_QWORD *)(v21 + 24);
      }
      else
      {
        v22 = (unsigned __int16 *)v21;
        v21 = *(_QWORD *)(v21 + 16);
      }
    }
    while ( v21 );
    if ( v20 + 17 == (_QWORD *)v22 || v22[16] > (unsigned int)v23 )
    {
LABEL_19:
      v24[0] = &v23;
      v22 = sub_42E950(v20 + 16, (__int64)v22, v24);
      v20 = *(_QWORD **)(a1 + 16);
    }
    *((_QWORD *)v22 + 5) = v20[9];
    *((_QWORD *)v22 + 6) = *((_QWORD *)v10 + 1);
  }
  return (__int64)v24[1] ^ _stack_chk_guard;
}
