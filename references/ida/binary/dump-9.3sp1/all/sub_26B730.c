__int64 __fastcall sub_26B730(__int64 a1, __int64 tinfo_property, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax

  v4 = tinfo_property;
  if ( !*(_DWORD *)(a1 + 440) && !*(_BYTE *)(a1 + 453) )
  {
    if ( !under_debugger )
      sub_383060(50193);
    goto LABEL_16;
  }
  *(_DWORD *)(a1 + 440) = 0;
  v5 = (unsigned int)(*(_DWORD *)(tinfo_property + 8) - 51);
  if ( (unsigned int)v5 > 0xE || (a3 = 25473, !_bittest64(&a3, v5)) )
  {
    if ( (*(_BYTE *)(tinfo_property + 56) & 2) == 0 )
    {
      if ( (get_tinfo_property() & 0x2F) != 0xD
        || (tinfo_property = (unsigned int)get_tinfo_property(), !(unsigned __int8)sub_32A490(v4 + 48, tinfo_property)) )
      {
        if ( (get_tinfo_property() & 0x2F) == 0xD )
        {
          v10 = j__qalloc_or_throw(64, 2, v8, v9);
          *(_QWORD *)(v10 + 24) = v4;
          *(_QWORD *)v10 = -1;
          v4 = v10;
          *(_DWORD *)(v10 + 8) = 59;
          *(_QWORD *)(v10 + 12) = -1;
          *(_QWORD *)(v10 + 32) = 0;
          *(_QWORD *)(v10 + 40) = 0;
          *(_QWORD *)(v10 + 48) = 0;
          *(_DWORD *)(v10 + 56) = 0;
          tinfo_property = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
          sub_2441C0(v10, tinfo_property, 0);
          goto LABEL_5;
        }
        if ( !under_debugger )
          sub_383060(50194);
LABEL_16:
        BUG();
      }
    }
  }
LABEL_5:
  v6 = j__qalloc_or_throw(64, tinfo_property, a3, a4);
  *(_QWORD *)(v6 + 12) = -1;
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)v6 = -1;
  *(_DWORD *)(v6 + 8) = 52;
  *(_QWORD *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = 0;
  *(_DWORD *)(v6 + 56) = 0;
  sub_2441C0(v6, *(_QWORD *)(*(_QWORD *)a1 + 112LL), 0);
  *(_DWORD *)(v6 + 56) |= 1u;
  return v6;
}
