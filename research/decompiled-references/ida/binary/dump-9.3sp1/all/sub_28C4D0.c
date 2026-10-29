__int64 __fastcall sub_28C4D0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 *v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx

  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 57 )
    return 0;
  v3 = *(_QWORD *)(v2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 68 || strcmp(*(const char **)(v3 + 24), "__eh34_throw") )
    return 0;
  v7 = j__qalloc_or_throw(64, (__int64)"__eh34_throw", v5, v6);
  *(_QWORD *)v7 = -1;
  v8 = v7;
  *(_QWORD *)(v7 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 56) = 0;
  *(_OWORD *)(v7 + 24) = 0;
  v9 = *(__int64 **)(v2 + 32);
  if ( v9[1] )
  {
    v10 = *v9;
    *(_QWORD *)v8 = *(_QWORD *)v10;
    v11 = *(_DWORD *)(v10 + 8);
    *(_QWORD *)v10 = -1;
    v12 = *(_DWORD *)(v8 + 8);
    *(_DWORD *)(v8 + 8) = v11;
    v13 = *(_DWORD *)(v10 + 12);
    *(_DWORD *)(v10 + 8) = v12;
    v14 = *(_DWORD *)(v8 + 12);
    *(_DWORD *)(v8 + 12) = v13;
    v15 = *(_QWORD *)(v10 + 24);
    *(_DWORD *)(v10 + 12) = v14;
    v16 = *(_QWORD *)(v8 + 24);
    *(_QWORD *)(v8 + 24) = v15;
    v17 = *(_QWORD *)(v10 + 32);
    *(_QWORD *)(v10 + 24) = v16;
    v18 = *(_QWORD *)(v8 + 32);
    *(_QWORD *)(v8 + 32) = v17;
    v19 = *(_QWORD *)(v10 + 40);
    *(_QWORD *)(v10 + 32) = v18;
    v20 = *(_QWORD *)(v8 + 40);
    *(_QWORD *)(v8 + 40) = v19;
    v21 = *(_QWORD *)(v10 + 48);
    *(_QWORD *)(v10 + 40) = v20;
    v22 = *(_QWORD *)(v8 + 48);
    *(_QWORD *)(v8 + 48) = v21;
    LODWORD(v21) = *(_DWORD *)(v10 + 56);
    *(_QWORD *)(v10 + 48) = v22;
    LODWORD(v22) = *(_DWORD *)(v8 + 56);
    *(_DWORD *)(v8 + 56) = v21;
    *(_DWORD *)(v10 + 56) = v22;
  }
  if ( v2 )
  {
    sub_255630(v2);
    clear_tinfo_t();
    j__qfree(v2);
  }
  *(_QWORD *)(a2 + 24) = v8;
  *(_DWORD *)(a2 + 8) = 84;
  return 1;
}
