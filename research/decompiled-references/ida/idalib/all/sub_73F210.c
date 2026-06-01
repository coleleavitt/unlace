__int64 __fastcall sub_73F210(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = 0;
  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 8 * v1 + 16);
    if ( v2 )
      break;
    if ( ++v1 == 5 )
    {
      if ( !under_debugger )
        interr(845);
      BUG();
    }
  }
  *(_QWORD *)(a1 + 8 * v1 + 16) = 0;
  return v2;
}
