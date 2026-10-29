/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_435D18
// Address: 0x0000000000435D18

//----- (0000000000435D18) ----------------------------------------------------
__int64 __fastcall sub_435D18(__int64 a1)
{
  __int64 v2; // x22
  __int64 v3; // x20
  __int64 i; // x21
  __int64 v5; // x1
  void *v6; // x0
  __int64 v7; // x22
  __int64 v8; // x20
  __int64 j; // x21
  __int64 v10; // x1
  void *v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0

  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
  {
    v3 = 0;
    for ( i = 0; i != v2; ++i )
    {
      v5 = *(_QWORD *)(a1 + 112) + v3;
      v6 = *(void **)v5;
      if ( *(_QWORD *)v5 )
      {
        *(_QWORD *)(v5 + 8) = 0;
        j__free(v6);
      }
      v3 += 24;
    }
    *(_QWORD *)(a1 + 120) = 0;
  }
  v7 = *(_QWORD *)(a1 + 144);
  if ( v7 )
  {
    v8 = 0;
    for ( j = 0; j != v7; ++j )
    {
      v10 = *(_QWORD *)(a1 + 136) + v8;
      v11 = *(void **)v10;
      if ( *(_QWORD *)v10 )
      {
        *(_QWORD *)(v10 + 8) = 0;
        j__free(v11);
      }
      v8 += 24;
    }
    *(_QWORD *)(a1 + 144) = 0;
  }
  v12 = *(_QWORD *)(a1 + 200);
  if ( v12 && *(_QWORD *)(v12 + 8) )
  {
    if ( *(_QWORD *)(a1 + 168) )
    {
      v13 = (unsigned __int8)under_debugger;
      if ( !under_debugger )
        sub_492270(262);
      goto LABEL_21;
    }
    if ( *(_QWORD *)(a1 + 232) )
    {
      v13 = (unsigned __int8)under_debugger;
      if ( !under_debugger )
        sub_492270(263);
      goto LABEL_21;
    }
    if ( *(_QWORD *)(a1 + 256) )
    {
      v13 = (unsigned __int8)under_debugger;
      if ( !under_debugger )
        sub_492270(264);
      goto LABEL_21;
    }
    if ( *(_QWORD *)(a1 + 280) )
    {
      v13 = (unsigned __int8)under_debugger;
      if ( !under_debugger )
        sub_492270(265);
      goto LABEL_21;
    }
    if ( *(_QWORD *)(a1 + 304) )
    {
      v13 = (unsigned __int8)under_debugger;
      if ( !under_debugger )
        sub_492270(266);
      goto LABEL_21;
    }
    if ( *(_QWORD *)(a1 + 328) )
    {
      v13 = (unsigned __int8)under_debugger;
      if ( !under_debugger )
        sub_492270(267);
      goto LABEL_21;
    }
    if ( *(_QWORD *)(a1 + 352) )
    {
      v13 = (unsigned __int8)under_debugger;
      if ( !under_debugger )
        sub_492270(268);
      goto LABEL_21;
    }
    if ( *(_QWORD *)(a1 + 376) )
    {
      v13 = (unsigned __int8)under_debugger;
      if ( !under_debugger )
        sub_492270(269);
      goto LABEL_21;
    }
  }
  v13 = *(_QWORD *)(a1 + 192);
  if ( v13 )
  {
    if ( *(_DWORD *)(v13 + 136) == -1 )
    {
LABEL_22:
      *(_DWORD *)(v13 + 136) = 0;
      *(_QWORD *)(a1 + 192) = 0;
      goto LABEL_23;
    }
    v13 = (unsigned __int8)under_debugger;
    if ( !under_debugger )
      sub_492270(485);
LABEL_21:
    __break(0x3E8u);
    goto LABEL_22;
  }
LABEL_23:
  *(_QWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 208) = -1;
  *(_QWORD *)(a1 + 416) = 0;
  return 0xFFFFFFFFLL;
}
// 52451C: using guessed type char under_debugger;
