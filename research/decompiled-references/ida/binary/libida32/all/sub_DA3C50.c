__int64 __fastcall sub_DA3C50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v4 + 16) == 42 )
    return *(_QWORD *)(v4 + 32);
  else
    return *(_QWORD *)(sub_F3F310(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4) + 32);
}

