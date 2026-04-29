__int64 __fastcall sub_240460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r12
  int v12; // eax

  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 6) > 1 )
    return 0;
  v7 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(v7 + 8) != 61 )
    return 0;
  if ( sub_250E30(*(_QWORD *)(v7 + 24), v7 + 48, a3, a4, a5) != 1 )
    return 0;
  v8 = *(_QWORD *)(a1 + 24);
  v9 = (unsigned int)(*(_DWORD *)(v8 + 8) - 51);
  if ( (unsigned int)v9 > 0xE )
    return 0;
  v10 = 25473;
  LOBYTE(v5) = _bittest64(&v10, v9);
  if ( !(_BYTE)v5
    || (*(_BYTE *)(a1 + 56) & 1) == 0
    && (get_tinfo_property(*(_QWORD *)(v8 + 48), 2) & 0xF) == 0xA
    && (unsigned int)get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), 14) != 1 )
  {
    return 0;
  }
  v11 = *(_QWORD *)(a1 + 32);
  if ( v11 )
  {
    sub_250A30(*(_QWORD *)(a1 + 32));
    clear_tinfo_t(v11 + 48);
    j__qfree(v11);
  }
  v12 = 56;
  if ( *(_DWORD *)(a1 + 8) == 6 )
    v12 = 55;
  *(_DWORD *)(a1 + 8) = v12;
  return v5;
}
