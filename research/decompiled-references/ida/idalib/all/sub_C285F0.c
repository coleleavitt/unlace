char __fastcall sub_C285F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  char result; // al

  for ( i = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL); ; i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v5 = sub_F63050(i, a2, a3, a4);
    if ( !v5 )
      break;
    i = v5;
  }
  v6 = sub_F63270(i);
  v11 = v6;
  if ( !v6 )
    return 1;
  if ( *(_BYTE *)(v6 + 73) >> 5 == 2 )
    return sub_B7E900(v6, a2, v7, v8, v9, v10) != 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(v6 + 104) + 96LL), *(_QWORD *)(v6 + 104), v7, v8, v9, v10);
  result = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(v11 + 128) + 1LL) & 2) == 0 )
    return sub_C286B0(v11);
  return result;
}
