__int64 __fastcall sub_1703830(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v4 + 16) == 26 )
    return (*(_BYTE *)(v4 + 18) >> 3) & 3;
  else
    return (*(_BYTE *)(sub_F63050(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4) + 18) >> 3) & 3;
}
