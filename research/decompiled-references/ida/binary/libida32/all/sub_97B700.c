__int64 __fastcall sub_97B700(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( !v6 )
  {
    v6 = sub_975DE0(a1, a2, a3, a4, a5, a6);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = v6;
  }
  if ( *(_BYTE *)(a1 + 320) )
    return 0;
  v7 = sub_975DE0(a1, a2, a3, a4, a5, a6);
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(v7 + 32) = a2 & 0xFFFFFFFFFFFFFFF9LL;
  sub_975B20(*(_QWORD *)(a1 + 16), v6, 2LL * (v6 == 0), (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v8, v9);
  return sub_979740(a1, *(_QWORD *)(a2 + 16), 1, 0, v10, v11);
}

