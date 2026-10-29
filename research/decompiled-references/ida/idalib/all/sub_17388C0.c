__int64 __fastcall sub_17388C0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rax

  v7 = *(_QWORD *)(a2[3] & 0xFFFFFFFFFFFFFFF0LL);
  v8 = (*a2 >> 19) & 1LL;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 && (*a2 & 0x80000LL) != 0 )
  {
    v11 = sub_F68450(v7, (__int64)a2, a3, v8, a5);
    LOBYTE(v8) = 0;
    v7 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v9 = a1[3];
  if ( !v7 || !v9 || *(_QWORD *)(v7 + 8) != *(_QWORD *)(v9 + 8) )
    return 1;
  sub_1738480(a1, (__int64)a2, a2[6], ((unsigned __int8)v8 ^ 1u) + 1, a5, a6);
  return 1;
}
