_QWORD *__fastcall sub_A8AC70(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rax

  v3 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  sub_A8A610((__int64)a1, a2, *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 1LL) & 8) == 0 )
    return a1;
  v7 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *v7;
  if ( *(_BYTE *)(*v7 + 16LL) != 48 || *(char *)(sub_F3D1D0(*v7, a2, v4, v5, v6) + 28) < 0 )
    return a1;
  v13 = sub_F3D1D0(v8, a2, v9, v10, v11);
  *a1 = *(_QWORD *)(sub_EBA840(a2, v13) + 8);
  return a1;
}

