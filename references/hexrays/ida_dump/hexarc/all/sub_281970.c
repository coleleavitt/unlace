__int64 __fastcall sub_281970(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // esi
  int v12; // esi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v21; // [rsp+8h] [rbp-30h]
  unsigned __int64 v22; // [rsp+18h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_QWORD *)(v2 + 72) )
    return 0;
  v4 = *(_QWORD **)(*(_QWORD *)(v2 + 64) + 24LL);
  if ( v4[2] != 1 )
    return 0;
  v5 = *v4;
  if ( *(_DWORD *)(*v4 + 28LL) == -1 )
    return 0;
  if ( *(_DWORD *)(v5 + 24) != 72 )
    return 0;
  v6 = *(_QWORD *)(v5 + 40);
  if ( *(_DWORD *)(v6 + 8) != 2 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(v6 + 24) + 8LL) != 65 )
    return 0;
  sub_27C880(&v20, a1, a2);
  v7 = *v21;
  if ( *v21 == v20 || *(_DWORD *)(v7 + 24) != 80 || sub_252720(*(_QWORD *)(v7 + 40), *(_QWORD *)(v6 + 24)) )
    return 0;
  *(_DWORD *)(v5 + 24) = 80;
  v8 = j__qalloc_or_throw(64);
  *(_QWORD *)(v8 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v8 + 24) = 0;
  *(_QWORD *)v8 = -1;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v8 + 48) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v5 + 40) = v8;
  v9 = *(_QWORD *)(v6 + 32);
  v10 = *(_QWORD *)v8;
  *(_QWORD *)v8 = *(_QWORD *)v9;
  v11 = *(_DWORD *)(v9 + 8);
  *(_QWORD *)v9 = v10;
  LODWORD(v10) = *(_DWORD *)(v8 + 8);
  *(_DWORD *)(v8 + 8) = v11;
  v12 = *(_DWORD *)(v9 + 12);
  *(_DWORD *)(v9 + 8) = v10;
  LODWORD(v10) = *(_DWORD *)(v8 + 12);
  *(_DWORD *)(v8 + 12) = v12;
  v13 = *(_QWORD *)(v9 + 24);
  *(_DWORD *)(v9 + 12) = v10;
  v14 = *(_QWORD *)(v8 + 24);
  *(_QWORD *)(v8 + 24) = v13;
  v15 = *(_QWORD *)(v9 + 32);
  *(_QWORD *)(v9 + 24) = v14;
  v16 = *(_QWORD *)(v8 + 32);
  *(_QWORD *)(v8 + 32) = v15;
  v17 = *(_QWORD *)(v9 + 40);
  *(_QWORD *)(v9 + 32) = v16;
  v18 = *(_QWORD *)(v8 + 40);
  *(_QWORD *)(v8 + 40) = v17;
  *(_QWORD *)(v9 + 40) = v18;
  v19 = *(_QWORD *)(v8 + 48);
  *(_QWORD *)(v8 + 48) = *(_QWORD *)(v9 + 48);
  LODWORD(v17) = *(_DWORD *)(v9 + 56);
  *(_QWORD *)(v9 + 48) = v19;
  LODWORD(v19) = *(_DWORD *)(v8 + 56);
  *(_DWORD *)(v8 + 56) = v17;
  *(_DWORD *)(v9 + 56) = v19;
  if ( v6 )
  {
    sub_24E2B0(v6);
    clear_tinfo_t(v6 + 48);
    j__qfree(v6);
  }
  return 1;
}
