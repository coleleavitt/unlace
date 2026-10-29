char __fastcall sub_831200(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 v3; // rax
  __int64 v4; // rax

  for ( i = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL); ; i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v3 = sub_B0D320(i);
    if ( !v3 )
      break;
    i = v3;
  }
  v4 = sub_B0E910(i);
  if ( !v4 )
    return 1;
  if ( *(_BYTE *)(v4 + 73) >> 5 == 2 )
    return sub_7868A0(v4) != 0;
  return sub_830C00(v4, a2);
}

