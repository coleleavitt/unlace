__int64 __fastcall sub_5C9690(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v4; // rax
  __int64 v5; // rdx

  v2 = *(_WORD *)(a1 + 64);
  if ( v2 == 181 )
  {
    v4 = *(_QWORD *)(a1 + 120);
    if ( !v4 )
    {
      v4 = *(_QWORD *)(a1 + 128);
      if ( !v4 )
        v4 = *(_QWORD *)(a1 + 104);
    }
    v5 = *(_QWORD *)(v4 + 40);
    if ( (v5 & 0x1000000000LL) != 0 )
    {
      return set_qerrno(66, a2);
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v5 | 0x1000000000LL;
      return 0;
    }
  }
  else
  {
    if ( v2 != 190 && v2 != 200 )
    {
      if ( !under_debugger )
        interr(3288);
      BUG();
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 144) + 40LL) |= 0x800000uLL;
    return 0;
  }
}

