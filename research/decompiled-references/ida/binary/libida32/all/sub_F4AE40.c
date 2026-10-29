__int64 __fastcall sub_F4AE40(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  while ( 1 )
  {
    while ( 1 )
    {
      v1 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v1 + 16) - 43 > 1 )
        break;
      a1 = *(_QWORD *)(v1 + 32);
    }
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
      break;
    v2 = sub_F3F310(v1);
    if ( !v2 )
      break;
    a1 = *(_QWORD *)(v2 + 32);
  }
  return a1;
}

