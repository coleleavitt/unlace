__int64 __fastcall sub_28C890(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 *v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx

  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 57 )
    return 0;
  v3 = *(_QWORD *)(v2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 68 || strcmp(*(const char **)(v3 + 24), "__eh34_throw") )
    return 0;
  v5 = j__qalloc_or_throw(64);
  *(_QWORD *)v5 = -1;
  v6 = v5;
  *(_QWORD *)(v5 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v5 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  *(_OWORD *)(v5 + 24) = 0;
  v7 = *(__int64 **)(v2 + 32);
  if ( v7[1] )
  {
    v8 = *v7;
    *(_QWORD *)v6 = *(_QWORD *)v8;
    v9 = *(_DWORD *)(v8 + 8);
    *(_QWORD *)v8 = -1;
    v10 = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(v6 + 8) = v9;
    v11 = *(_DWORD *)(v8 + 12);
    *(_DWORD *)(v8 + 8) = v10;
    v12 = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v6 + 12) = v11;
    v13 = *(_QWORD *)(v8 + 24);
    *(_DWORD *)(v8 + 12) = v12;
    v14 = *(_QWORD *)(v6 + 24);
    *(_QWORD *)(v6 + 24) = v13;
    v15 = *(_QWORD *)(v8 + 32);
    *(_QWORD *)(v8 + 24) = v14;
    v16 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 32) = v15;
    v17 = *(_QWORD *)(v8 + 40);
    *(_QWORD *)(v8 + 32) = v16;
    v18 = *(_QWORD *)(v6 + 40);
    *(_QWORD *)(v6 + 40) = v17;
    v19 = *(_QWORD *)(v8 + 48);
    *(_QWORD *)(v8 + 40) = v18;
    v20 = *(_QWORD *)(v6 + 48);
    *(_QWORD *)(v6 + 48) = v19;
    LODWORD(v19) = *(_DWORD *)(v8 + 56);
    *(_QWORD *)(v8 + 48) = v20;
    LODWORD(v20) = *(_DWORD *)(v6 + 56);
    *(_DWORD *)(v6 + 56) = v19;
    *(_DWORD *)(v8 + 56) = v20;
  }
  if ( v2 )
  {
    sub_2559F0(v2);
    clear_tinfo_t(v2 + 48);
    j__qfree(v2);
  }
  *(_QWORD *)(a2 + 24) = v6;
  *(_DWORD *)(a2 + 8) = 84;
  return 1;
}
