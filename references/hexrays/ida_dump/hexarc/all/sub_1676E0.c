__int64 __fastcall sub_1676E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // [rsp+8h] [rbp-50h]
  _QWORD v13[9]; // [rsp+10h] [rbp-48h] BYREF

  v13[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 56);
  if ( *(_DWORD *)v2 != 43 )
    return 0;
  if ( *(_BYTE *)(v2 + 32) != 4 )
    return 0;
  v5 = *(_QWORD *)(v2 + 40);
  if ( *(_DWORD *)v5 != 56 )
    return 0;
  if ( !v5 )
    return 0;
  if ( *(_BYTE *)(v5 + 64) != 8 )
    return 0;
  v6 = *(_QWORD *)(v5 + 72);
  if ( *(_DWORD *)(v6 + 284) != 17 )
    return 0;
  v7 = *(_QWORD *)(a2 + 48);
  if ( *(_DWORD *)v7 != 4 )
    return 0;
  if ( !(unsigned __int8)sub_1196C0((char *)(v7 + 32), v13, 1u) )
    return 0;
  if ( v13[0] != -1 )
    return 0;
  if ( *(_DWORD *)(v7 + 36) != *(_DWORD *)(*(_QWORD *)(v6 + 24) + 4LL) )
    return 0;
  if ( *(_QWORD *)(v7 + 8) )
    return 0;
  v12 = sub_1617B0(*(_QWORD *)(a1 + 64), *(_DWORD *)(*(_QWORD *)(a1 + 56) + 72LL));
  v8 = *(_QWORD *)(v12 + 48);
  if ( !v8 )
    return 0;
  if ( *(_DWORD *)v8 == 4 )
  {
    if ( *(_BYTE *)(v8 + 32) != 4 )
      return 0;
    v8 = *(_QWORD *)(v8 + 40);
  }
  if ( *(_DWORD *)v8 == 56 && *(_BYTE *)(v8 + 32) == 6 && *(_BYTE *)(v8 + 64) == 8 )
  {
    v9 = *(_QWORD *)(v8 + 72);
    if ( *(_QWORD *)(v9 + 32) == 1 )
    {
      LOBYTE(v10) = sub_11F4A0(*(unsigned __int8 **)(v9 + 24), v7 + 64, 0);
      v3 = v10;
      if ( (_BYTE)v10 )
      {
        copy_tinfo_t(v6 + 72, *(_QWORD *)(v6 + 24) + 24LL);
        *(_DWORD *)(v6 + 284) = 18;
        qfree(*(_QWORD *)(v5 + 40));
        *(_QWORD *)(v5 + 40) = qstrdup("saturated_mul");
        v11 = *(_DWORD *)(v7 + 68);
        *(_DWORD *)(v5 + 68) = v11;
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 36LL) = v11;
        sub_1166E0(*(_QWORD *)(a1 + 56) + 48LL);
        sub_116350((char *)(*(_QWORD *)(a1 + 56) + 64LL), (char *)(v7 + 64));
        **(_DWORD **)(a1 + 56) = 4;
        sub_116EE0(v7);
        sub_10BE90(a1, a2, v12);
        sub_60A20(*(_QWORD *)(a1 + 64), 1u, (__int64)"REMOVE_MUL_OVERFLOW_CHECK");
        return v3;
      }
    }
  }
  return 0;
}
