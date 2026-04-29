__int64 __fastcall sub_2643B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned int tinfo_property; // eax
  __int64 v8; // rax

  v2 = a2;
  if ( !*(_DWORD *)(a1 + 440) && !*(_BYTE *)(a1 + 453) )
  {
    if ( !under_debugger )
      sub_37B760(50193);
    goto LABEL_16;
  }
  *(_DWORD *)(a1 + 440) = 0;
  v3 = (unsigned int)(*(_DWORD *)(a2 + 8) - 51);
  if ( (unsigned int)v3 > 0xE || (v4 = 25473, !_bittest64(&v4, v3)) )
  {
    if ( (*(_BYTE *)(a2 + 56) & 2) == 0 )
    {
      if ( (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0x2F) != 0xD
        || (tinfo_property = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL), 20),
            !(unsigned __int8)sub_323080(a2 + 48, tinfo_property)) )
      {
        if ( (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0x2F) == 0xD )
        {
          v8 = j__qalloc_or_throw(64);
          *(_QWORD *)(v8 + 24) = a2;
          *(_QWORD *)v8 = -1;
          v2 = v8;
          *(_DWORD *)(v8 + 8) = 59;
          *(_QWORD *)(v8 + 12) = -1;
          *(_QWORD *)(v8 + 32) = 0;
          *(_QWORD *)(v8 + 40) = 0;
          *(_QWORD *)(v8 + 48) = 0;
          *(_DWORD *)(v8 + 56) = 0;
          sub_23CE40(v8, *(_QWORD *)(*(_QWORD *)a1 + 112LL), 0);
          goto LABEL_5;
        }
        if ( !under_debugger )
          sub_37B760(50194);
LABEL_16:
        BUG();
      }
    }
  }
LABEL_5:
  v5 = j__qalloc_or_throw(64);
  *(_QWORD *)(v5 + 12) = -1;
  *(_QWORD *)(v5 + 24) = v2;
  *(_QWORD *)v5 = -1;
  *(_DWORD *)(v5 + 8) = 52;
  *(_QWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  sub_23CE40(v5, *(_QWORD *)(*(_QWORD *)a1 + 112LL), 0);
  *(_DWORD *)(v5 + 56) |= 1u;
  return v5;
}
