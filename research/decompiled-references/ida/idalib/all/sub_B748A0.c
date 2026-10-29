char __fastcall sub_B748A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v4 + 16) == 26 )
    return (unsigned __int8)BYTE3(*(_QWORD *)(v4 + 16)) >> 7;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) != 26 )
    return 0;
  v7 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v6, a4);
  if ( v7 )
    return (unsigned __int8)BYTE3(*(_QWORD *)(v7 + 16)) >> 7;
  else
    return 0;
}
