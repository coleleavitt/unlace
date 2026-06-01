__int64 __fastcall sub_5E5420(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // rax
  __int64 v4; // rdx

  v1 = *(_WORD *)(a1 + 64);
  if ( v1 == 181 )
  {
    v3 = *(_QWORD *)(a1 + 128);
    if ( !v3 )
    {
      v3 = *(_QWORD *)(a1 + 136);
      if ( !v3 )
        v3 = *(_QWORD *)(a1 + 112);
    }
    v4 = *(_QWORD *)(v3 + 40);
    if ( (v4 & 0x1000000000LL) != 0 )
    {
      return set_qerrno(66);
    }
    else
    {
      *(_QWORD *)(v3 + 40) = v4 | 0x1000000000LL;
      return 0;
    }
  }
  else
  {
    if ( v1 != 190 && v1 != 200 )
    {
      if ( !under_debugger )
        interr(3288);
      BUG();
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 152) + 40LL) |= 0x800000uLL;
    return 0;
  }
}
