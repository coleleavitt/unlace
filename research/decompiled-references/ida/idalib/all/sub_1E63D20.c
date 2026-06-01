__int64 __fastcall sub_1E63D20(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // r13d
  __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // r9

  v6 = a3;
  v7 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5 )
  {
    sub_1E5F3D0(a1, a2);
    v7 = *(_QWORD *)(a2 + 8);
  }
  v8 = sub_C00A40(a2, a2, a3, a4, a5);
  return sub_1E63C20(a1, v8, v7, (__int64 *)v6, a4, v9);
}
