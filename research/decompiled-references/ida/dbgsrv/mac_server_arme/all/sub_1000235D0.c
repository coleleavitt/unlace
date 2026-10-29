/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000235D0
// Address: 0x00000001000235D0

//----- (00000001000235D0) ----------------------------------------------------
void __fastcall sub_1000235D0(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x8
  void *v4; // [xsp+0h] [xbp-30h] BYREF
  __int64 v5; // [xsp+8h] [xbp-28h]
  __int64 v6; // [xsp+10h] [xbp-20h]

  if ( *(_QWORD *)(a1 + 120) )
  {
    v4 = nullptr;
    v5 = 0;
    v6 = 0;
    sub_10002B6D4((void **)(a1 + 112), 0, (unsigned __int64)&v4);
    if ( v4 )
    {
      v5 = 0;
      qfree(v4);
    }
  }
  if ( *(_QWORD *)(a1 + 144) )
  {
    v4 = nullptr;
    v5 = 0;
    v6 = 0;
    sub_10002B6D4((void **)(a1 + 136), 0, (unsigned __int64)&v4);
    if ( v4 )
    {
      v5 = 0;
      qfree(v4);
    }
  }
  v2 = *(_QWORD *)(a1 + 200);
  if ( v2 && *(_QWORD *)(v2 + 8) )
  {
    if ( *(_QWORD *)(a1 + 168) )
    {
      if ( under_debugger != 1 )
        interr(262);
      goto LABEL_38;
    }
    if ( *(_QWORD *)(a1 + 232) )
    {
      if ( under_debugger != 1 )
        interr(263);
      goto LABEL_38;
    }
    if ( *(_QWORD *)(a1 + 256) )
    {
      if ( under_debugger != 1 )
        interr(264);
      goto LABEL_38;
    }
    if ( *(_QWORD *)(a1 + 280) )
    {
      if ( under_debugger != 1 )
        interr(265);
      goto LABEL_38;
    }
    if ( *(_QWORD *)(a1 + 304) )
    {
      if ( under_debugger != 1 )
        interr(266);
      goto LABEL_38;
    }
    if ( *(_QWORD *)(a1 + 328) )
    {
      if ( under_debugger != 1 )
        interr(267);
      goto LABEL_38;
    }
    if ( *(_QWORD *)(a1 + 352) )
    {
      if ( under_debugger != 1 )
        interr(268);
      goto LABEL_38;
    }
    if ( *(_QWORD *)(a1 + 376) )
    {
      if ( under_debugger != 1 )
        goto LABEL_39;
      goto LABEL_38;
    }
  }
  v3 = *(_QWORD *)(a1 + 192);
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 136) == -1 )
    {
      *(_DWORD *)(v3 + 136) = 0;
      *(_QWORD *)(a1 + 192) = 0;
      goto LABEL_20;
    }
    if ( under_debugger != 1 )
      interr(485);
    while ( 1 )
    {
LABEL_38:
      __break(1u);
LABEL_39:
      interr(269);
    }
  }
LABEL_20:
  *(_QWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 208) = -1;
  *(_QWORD *)(a1 + 416) = 0;
}
// 1000A590D: using guessed type char under_debugger;
