__int64 __fastcall sub_5C5A60(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int16 v3; // dx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 120);
  v3 = *(_WORD *)(a1 + 64);
  v4 = *(_QWORD *)(v2 + 40);
  if ( v3 == 192 )
  {
    *(_QWORD *)(v2 + 40) = v4 | 0x100000;
    return 0;
  }
  else if ( (v4 & 0xC0000) != 0 )
  {
    return set_qerrno(1257, a2);
  }
  else if ( v3 == 181 )
  {
    *(_QWORD *)(v2 + 40) = v4 | 0x40000;
    return 0;
  }
  else
  {
    if ( v3 != 190 )
    {
      if ( !under_debugger )
        interr(1554);
      BUG();
    }
    *(_QWORD *)(v2 + 40) = v4 | 0x80000;
    return 0;
  }
}

