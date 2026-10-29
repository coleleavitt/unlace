__int64 __fastcall sub_C919E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 v7; // rdx

  v4 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *v4;
  if ( *(_BYTE *)(*v4 + 16) != 14 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v7 + 16) != 14 )
      BUG();
    v5 = sub_F3F310(*v4, v4, v7, a4);
  }
  return sub_CC2440(*(_QWORD *)(a1 + 1264), *(_QWORD *)(v5 + 32));
}

