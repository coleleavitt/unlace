/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100026780
// Address: 0x0000000100026780

//----- (0000000100026780) ----------------------------------------------------
__int64 __fastcall sub_100026780(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int128 v4; // [rsp+0h] [rbp-30h] BYREF
  __int64 v5; // [rsp+10h] [rbp-20h]

  if ( *(_QWORD *)(a1 + 120) )
  {
    v4 = 0;
    v5 = 0;
    sub_10002E340(a1 + 112, 0, (unsigned __int64)&v4);
    if ( (_QWORD)v4 )
    {
      *((_QWORD *)&v4 + 1) = 0;
      qfree((void *)v4);
    }
  }
  if ( *(_QWORD *)(a1 + 144) )
  {
    v4 = 0;
    v5 = 0;
    sub_10002E340(a1 + 136, 0, (unsigned __int64)&v4);
    if ( (_QWORD)v4 )
    {
      *((_QWORD *)&v4 + 1) = 0;
      qfree((void *)v4);
    }
  }
  v1 = *(_QWORD *)(a1 + 200);
  if ( v1 && *(_QWORD *)(v1 + 8) )
  {
    if ( *(_QWORD *)(a1 + 168) )
    {
      if ( under_debugger != 1 )
        interr(0x106u);
      goto LABEL_39;
    }
    if ( *(_QWORD *)(a1 + 232) )
    {
      if ( under_debugger != 1 )
        interr(0x107u);
      goto LABEL_39;
    }
    if ( *(_QWORD *)(a1 + 256) )
    {
      if ( under_debugger != 1 )
        interr(0x108u);
      goto LABEL_39;
    }
    if ( *(_QWORD *)(a1 + 280) )
    {
      if ( under_debugger != 1 )
        interr(0x109u);
      goto LABEL_39;
    }
    if ( *(_QWORD *)(a1 + 304) )
    {
      if ( under_debugger != 1 )
        interr(0x10Au);
      goto LABEL_39;
    }
    if ( *(_QWORD *)(a1 + 328) )
    {
      if ( under_debugger != 1 )
        interr(0x10Bu);
      goto LABEL_39;
    }
    if ( *(_QWORD *)(a1 + 352) )
    {
      if ( under_debugger != 1 )
        interr(0x10Cu);
      goto LABEL_39;
    }
    if ( *(_QWORD *)(a1 + 376) )
    {
      if ( under_debugger != 1 )
        interr(0x10Du);
      goto LABEL_39;
    }
  }
  v2 = *(_QWORD *)(a1 + 192);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 136) == -1 )
    {
      *(_DWORD *)(v2 + 136) = 0;
      *(_QWORD *)(a1 + 192) = 0;
      goto LABEL_20;
    }
    if ( under_debugger != 1 )
      interr(0x1E5u);
LABEL_39:
    BUG();
  }
LABEL_20:
  *(_QWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 208) = -1;
  *(_QWORD *)(a1 + 416) = 0;
  return __stack_chk_guard;
}
// 1000AE23D: using guessed type char under_debugger;
