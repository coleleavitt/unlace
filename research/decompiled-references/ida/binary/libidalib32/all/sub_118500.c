__int64 __fastcall sub_118500(__int64 a1)
{
  __int64 v1; // r13
  __int64 i; // rbx
  _QWORD *v3; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 192);
  if ( v1 )
  {
    for ( i = 0; i != v1; ++i )
    {
      v3 = (_QWORD *)(*(_QWORD *)(a1 + 184) + 24 * i);
      if ( *v3 )
      {
        v3[1] = 0;
        qfree();
      }
    }
  }
  *(_QWORD *)(a1 + 192) = 0;
  reg_read_strlist();
  result = *(_BYTE *)(a1 + 12) & 1;
  if ( (*(_BYTE *)(a1 + 12) & 1) == 0 )
    return 1;
  if ( !*(_QWORD *)(a1 + 192) )
  {
    sub_92120((__int64)"AUTOHIDE REGISTRY\nThe recent script list is empty.", "RecentScripts");
    return 0;
  }
  return result;
}

