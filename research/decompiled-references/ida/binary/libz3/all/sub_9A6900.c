__int64 __fastcall sub_9A6900(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // eax
  __int64 v5; // rsi

  v4 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  if ( v4 == -1 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * v4);
  if ( !v5 )
    return 0;
  else
    return sub_9A66B0(a1, v5 + 16, (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * v4 + 3) & 0x40) != 0, a3);
}

