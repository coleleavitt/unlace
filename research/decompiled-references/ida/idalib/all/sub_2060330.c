__int64 __fastcall sub_2060330(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( *(_BYTE *)a2 != 5 )
    return 0;
  v6 = *(_DWORD *)(a2 + 32);
  if ( v6 <= 0x40 )
    return sub_2060180(a1, *(_QWORD *)(a2 + 24), a3, a4, a5, a6);
  if ( v6 - (unsigned int)sub_2206780(a2 + 24) > 0x40 )
    return 0;
  return sub_2060180(a1, **(_QWORD **)(a2 + 24), v7, v8, v9, v10);
}
