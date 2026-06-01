char __fastcall sub_179FAD0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 i; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rax

  for ( i = *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL); ; i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v7 = sub_F63050(i, a2, a3, a4);
    if ( !v7 )
      break;
    i = v7;
  }
  v8 = sub_F63240(i, a2, a3, a4, a5, a6);
  if ( v8 )
    return sub_F58550((__int64)v8);
  else
    return 0;
}
