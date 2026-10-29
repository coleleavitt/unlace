__int64 __fastcall sub_F6EB80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax

  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v4 + 16) - 43 > 1 )
        break;
      a1 = *(_QWORD *)(v4 + 32);
    }
    v5 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
    if ( (unsigned int)v5 > 1 )
      break;
    v6 = sub_F63050(v4, a2, v5, a4);
    if ( !v6 )
      break;
    a1 = *(_QWORD *)(v6 + 32);
  }
  return a1;
}
