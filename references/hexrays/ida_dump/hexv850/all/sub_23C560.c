__int64 __fastcall sub_23C560(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax

  if ( *(_DWORD *)(a1 + 8) != 71 )
  {
    if ( !under_debugger )
      sub_37CFE0(50379);
    BUG();
  }
  v2 = *(_DWORD *)(a2 + 8);
  v3 = a1;
  if ( v2 != 1 && (unsigned int)(v2 - 17) > 1
    || ((v5 = *(_QWORD *)(a2 + 32), v6 = *(_DWORD *)(v5 + 8), v6 != 1) && (unsigned int)(v6 - 17) > 1
     || ((v7 = *(_QWORD *)(v5 + 32), v8 = *(_DWORD *)(v7 + 8), v8 != 1) && (unsigned int)(v8 - 17) > 1
      || (v9 = sub_23C4F0(*(_QWORD *)(v7 + 32)), v9 == -1))
     && (v9 = *(_QWORD *)v7, *(_QWORD *)v7 == -1))
    && (v9 = *(_QWORD *)v5, *(_QWORD *)v5 == -1) )
  {
    v9 = *(_QWORD *)a2;
  }
  v10 = sub_23C000(v3, v9);
  *((_DWORD *)v10 + 2) = 73;
  v11 = v10;
  v12 = j__qalloc_or_throw(80);
  *(_QWORD *)v12 = -1;
  v13 = v12;
  *(_QWORD *)(v12 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v12 + 24) = 0;
  *(_QWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v12 + 48) = 0;
  *(_QWORD *)(v12 + 56) = 0;
  *(_OWORD *)(v12 + 64) = 0;
  v11[3] = v12;
  v14 = *(_QWORD *)v12;
  v15 = *(_QWORD *)a2;
  *(_QWORD *)a2 = v14;
  LODWORD(v14) = *(_DWORD *)(v13 + 8);
  *(_QWORD *)v13 = v15;
  LODWORD(v15) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v14;
  LODWORD(v14) = *(_DWORD *)(v13 + 12);
  *(_DWORD *)(v13 + 8) = v15;
  LODWORD(v15) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v14;
  v16 = *(_QWORD *)(v13 + 24);
  *(_DWORD *)(v13 + 12) = v15;
  v17 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v16;
  v18 = *(_QWORD *)(v13 + 32);
  *(_QWORD *)(v13 + 24) = v17;
  v19 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = v18;
  v20 = *(_QWORD *)(v13 + 40);
  *(_QWORD *)(v13 + 32) = v19;
  v21 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = v20;
  *(_QWORD *)(v13 + 40) = v21;
  v22 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(v13 + 48);
  LODWORD(v20) = *(_DWORD *)(v13 + 56);
  *(_QWORD *)(v13 + 48) = v22;
  LODWORD(v22) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 56) = v20;
  *(_DWORD *)(v13 + 56) = v22;
  if ( a2 )
  {
    sub_250270(a2);
    clear_tinfo_t(a2 + 48);
    j__qfree(a2);
  }
  return v13;
}
