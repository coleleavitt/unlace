__int64 __fastcall sub_16B6DF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rdx

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v5 + 16) == 7 )
    return *(_QWORD *)(v5 + 32);
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) == 7 )
  {
    v5 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v7, a4);
    if ( v5 )
      return *(_QWORD *)(v5 + 32);
  }
  return v4;
}
