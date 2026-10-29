/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AFD0
// Address: 0x000000000003AFD0

//----- (000000000003AFD0) ----------------------------------------------------
void __fastcall sub_3AFD0(__int64 a1, int a2, int a3)
{
  __int64 v4; // x9
  __int64 v7; // x8
  pthread_mutex_t *v8; // x0
  __int64 v9; // x8
  __int64 v10; // x11
  __int64 v11; // x12
  __int64 v12; // x10
  unsigned __int64 v13; // x9
  __int64 v14; // x0
  __int64 v15; // x8
  __int64 v16; // [xsp+0h] [xbp-80h] BYREF
  __int64 v17; // [xsp+8h] [xbp-78h]
  char v18; // [xsp+10h] [xbp-70h]
  __int64 v19; // [xsp+14h] [xbp-6Ch]
  __int64 v20; // [xsp+1Ch] [xbp-64h]
  __int64 v21; // [xsp+24h] [xbp-5Ch]
  __int64 v22; // [xsp+2Ch] [xbp-54h]
  __int64 v23; // [xsp+34h] [xbp-4Ch]
  __int64 v24; // [xsp+3Ch] [xbp-44h]
  int v25; // [xsp+44h] [xbp-3Ch]
  __int64 v26; // [xsp+48h] [xbp-38h]

  v26 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)(a1 + 1744);
  if ( !v4 )
    goto LABEL_8;
  v7 = a1 + 1744;
  do
  {
    if ( *(_DWORD *)(v4 + 32) >= a2 )
      v7 = v4;
    v4 = *(_QWORD *)(v4 + 8LL * (*(_DWORD *)(v4 + 32) < a2));
  }
  while ( v4 );
  if ( v7 != a1 + 1744 && *(_DWORD *)(v7 + 32) <= a2 )
  {
    *(_DWORD *)(v7 + 60) = a3;
    v16 = 0xFFFFFFFFLL;
    v17 = -1;
    v18 = 0;
    v24 = 0;
    v23 = 0;
    v22 = 0;
    v21 = 0;
    v20 = 0;
    v19 = 0;
    v25 = 0;
    set_debug_event_code((__int64)&v16, 4);
    if ( (v19 & 0xFFFFFFF) != 2 && (v19 & 0xFFFFFFF) != 4 )
    {
      if ( !under_debugger )
        v8 = interr(3296);
      __break(1u);
      sub_39134(v8);
    }
    HIDWORD(v19) = 0;
    LODWORD(v16) = *(_DWORD *)(a1 + 1844);
    HIDWORD(v16) = a2;
    v17 = -1;
    v18 = 1;
    if ( (v19 & 0xFFFFFFF) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 128);
      v10 = *(_QWORD *)(a1 + 152);
      v11 = *(_QWORD *)(a1 + 160);
      if ( *(_QWORD *)(a1 + 136) == v9 )
        v12 = 0;
      else
        v12 = 56 * ((*(_QWORD *)(a1 + 136) - v9) >> 3) - 1;
      v13 = v11 + v10;
      if ( v12 == v11 + v10 )
      {
        sub_4825C(a1 + 120);
        v9 = *(_QWORD *)(a1 + 128);
        v13 = *(_QWORD *)(a1 + 152) + *(_QWORD *)(a1 + 160);
      }
      v14 = *(_QWORD *)(v9 + 8 * (v13 / 0x38)) + 72 * (v13 % 0x38);
      *(_QWORD *)v14 = 0xFFFFFFFFLL;
      *(_QWORD *)(v14 + 8) = -1;
      *(_BYTE *)(v14 + 16) = 0;
      *(_DWORD *)(v14 + 20) = 0;
      copy_debug_event(v14, (__int64)&v16);
      v15 = *(_QWORD *)(a1 + 160);
      *(_BYTE *)(a1 + 1932) = 0;
      *(_QWORD *)(a1 + 160) = v15 + 1;
    }
    if ( a3 == 3 )
      sub_3D1F0((pthread_mutex_t *)a1, (__int64 *)(unsigned int)a2);
    free_debug_event((__int64)&v16);
  }
  else
  {
LABEL_8:
    sub_39FA0((__int64)"unknown thread %d died\n", a2);
  }
}
// 3B1C0: variable 'v8' is possibly undefined
// 168DF0: using guessed type char under_debugger;
