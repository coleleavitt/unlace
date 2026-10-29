__int64 __fastcall sub_241920(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // rdx
  int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax

  if ( *(_DWORD *)(a1 + 8) != 71 )
  {
    if ( !under_debugger )
      sub_383060(50379);
    BUG();
  }
  v4 = *(_DWORD *)(a2 + 8);
  v5 = a1;
  if ( v4 != 1 && (unsigned int)(v4 - 17) > 1
    || ((a4 = *(_QWORD *)(a2 + 32), v7 = *(_DWORD *)(a4 + 8), v7 != 1) && (unsigned int)(v7 - 17) > 1
     || ((v8 = *(_QWORD *)(a4 + 32), v9 = *(_DWORD *)(v8 + 8), v9 != 1) && (unsigned int)(v9 - 17) > 1
      || (v10 = sub_2418B0(*(_QWORD *)(v8 + 32)), v10 == -1))
     && (v10 = *(_QWORD *)v8, *(_QWORD *)v8 == -1))
    && (v10 = *(_QWORD *)a4, *(_QWORD *)a4 == -1) )
  {
    v10 = *(_QWORD *)a2;
  }
  v11 = sub_2413C0(v5, v10, v5, a4);
  *((_DWORD *)v11 + 2) = 73;
  v12 = v11;
  v15 = j__qalloc_or_throw(80, v10, v13, v14);
  *(_QWORD *)v15 = -1;
  v16 = v15;
  *(_QWORD *)(v15 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v15 + 24) = 0;
  *(_QWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v15 + 48) = 0;
  *(_QWORD *)(v15 + 56) = 0;
  *(_OWORD *)(v15 + 64) = 0;
  v12[3] = v15;
  v17 = *(_QWORD *)v15;
  v18 = *(_QWORD *)a2;
  *(_QWORD *)a2 = v17;
  LODWORD(v17) = *(_DWORD *)(v16 + 8);
  *(_QWORD *)v16 = v18;
  LODWORD(v18) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v17;
  LODWORD(v17) = *(_DWORD *)(v16 + 12);
  *(_DWORD *)(v16 + 8) = v18;
  LODWORD(v18) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v17;
  v19 = *(_QWORD *)(v16 + 24);
  *(_DWORD *)(v16 + 12) = v18;
  v20 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v19;
  v21 = *(_QWORD *)(v16 + 32);
  *(_QWORD *)(v16 + 24) = v20;
  v22 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = v21;
  v23 = *(_QWORD *)(v16 + 40);
  *(_QWORD *)(v16 + 32) = v22;
  v24 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = v23;
  *(_QWORD *)(v16 + 40) = v24;
  v25 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(v16 + 48);
  LODWORD(v23) = *(_DWORD *)(v16 + 56);
  *(_QWORD *)(v16 + 48) = v25;
  LODWORD(v25) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 56) = v23;
  *(_DWORD *)(v16 + 56) = v25;
  if ( a2 )
  {
    sub_255630(a2);
    clear_tinfo_t();
    j__qfree(a2);
  }
  return v16;
}
