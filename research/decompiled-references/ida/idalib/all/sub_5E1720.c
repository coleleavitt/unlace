__int64 __fastcall sub_5E1720(__int64 a1)
{
  __int64 v1; // rcx
  __int16 v2; // dx
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 128);
  v2 = *(_WORD *)(a1 + 64);
  v3 = *(_QWORD *)(v1 + 40);
  if ( v2 == 192 )
  {
    *(_QWORD *)(v1 + 40) = v3 | 0x100000;
    return 0;
  }
  else if ( (v3 & 0xC0000) != 0 )
  {
    return set_qerrno(1257);
  }
  else if ( v2 == 181 )
  {
    *(_QWORD *)(v1 + 40) = v3 | 0x40000;
    return 0;
  }
  else
  {
    if ( v2 != 190 )
    {
      if ( !under_debugger )
        interr(1554);
      BUG();
    }
    *(_QWORD *)(v1 + 40) = v3 | 0x80000;
    return 0;
  }
}
