__int64 __fastcall sub_1C73F00(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // r13d
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // esi

  v4 = a4;
  v6 = *a2;
  v7 = *(_QWORD *)(*a2 + 3032);
  if ( !v7 )
    v7 = *(_QWORD *)(v6 + 544);
  if ( (*(_BYTE *)(v7 + 8) & 0x7Fu) - 34 > 5 )
  {
    v8 = 0;
    v10 = 0;
  }
  else
  {
    v8 = v7 - 72;
    if ( v7 == 72 )
    {
      v10 = 0;
    }
    else
    {
      v9 = sub_17A6B10((_QWORD *)*a2, (_BYTE *)(v7 - 72), 0, a4, v7, v6);
      v6 = *a2;
      v10 = 3;
      if ( !v9 )
        v10 = 2;
    }
  }
  sub_1606AE0(a1, v10, a3, v4, v8, v6);
  return a1;
}
