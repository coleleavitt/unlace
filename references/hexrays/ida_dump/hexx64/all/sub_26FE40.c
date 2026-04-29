__int64 __fastcall sub_26FE40(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // edx
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 *v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx

  v2 = *(unsigned __int8 *)(a1 + 136);
  if ( (_BYTE)v2 )
  {
    v3 = sub_254FE0(a2);
    v4 = j__qalloc_or_throw(64);
    v5 = sub_240F50(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL), *(_QWORD *)(a1 + 72), 0, -1, 0, 0, 0);
    *(_DWORD *)(v4 + 8) = 37;
    *(_QWORD *)(v4 + 12) = -1;
    *(_QWORD *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 32) = v5;
    *(_QWORD *)v4 = -1;
    *(_QWORD *)(v4 + 40) = 0;
    *(_QWORD *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 56) = 0;
    *(_QWORD *)v4 = *(_QWORD *)v3;
    v6 = *(_DWORD *)(v3 + 8);
    *(_QWORD *)v3 = -1;
    LODWORD(v5) = *(_DWORD *)(v4 + 8);
    *(_DWORD *)(v4 + 8) = v6;
    v7 = *(_DWORD *)(v3 + 12);
    *(_DWORD *)(v3 + 8) = v5;
    LODWORD(v5) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v4 + 12) = v7;
    v8 = *(_QWORD *)(v3 + 24);
    *(_DWORD *)(v3 + 12) = v5;
    v9 = *(_QWORD *)(v4 + 24);
    *(_QWORD *)(v4 + 24) = v8;
    v10 = *(_QWORD *)(v3 + 32);
    *(_QWORD *)(v3 + 24) = v9;
    v11 = *(_QWORD *)(v4 + 32);
    *(_QWORD *)(v4 + 32) = v10;
    *(_QWORD *)(v3 + 32) = v11;
    v12 = *(_QWORD *)(v4 + 40);
    *(_QWORD *)(v4 + 40) = *(_QWORD *)(v3 + 40);
    v13 = *(_QWORD *)(v3 + 48);
    *(_QWORD *)(v3 + 40) = v12;
    v14 = *(_QWORD *)(v4 + 48);
    *(_QWORD *)(v4 + 48) = v13;
    LODWORD(v13) = *(_DWORD *)(v3 + 56);
    *(_QWORD *)(v3 + 48) = v14;
    LODWORD(v14) = *(_DWORD *)(v4 + 56);
    *(_DWORD *)(v4 + 56) = v13;
    *(_DWORD *)(v3 + 56) = v14;
    *(_QWORD *)(v3 + 24) = v4;
    sub_2441C0(v3, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL) + 112LL), 0);
    v15 = *(__int64 **)(a1 + 104);
    v16 = *(_QWORD *)(a1 + 112);
    v17 = &v15[v16];
    if ( v15 == v17 )
      goto LABEL_7;
    v18 = *(__int64 **)(a1 + 104);
    while ( v4 != *v18 )
    {
      if ( v17 == ++v18 )
        goto LABEL_7;
    }
    if ( v17 == v18 )
    {
LABEL_7:
      v19 = v16 + 1;
      if ( *(_QWORD *)(a1 + 120) < v19 )
      {
        v21 = qvector_reserve(a1 + 104, v15, v19, 8);
        v22 = *(_QWORD *)(a1 + 112);
        *(_QWORD *)(a1 + 104) = v21;
        v17 = (__int64 *)(v21 + 8 * v22);
      }
      *v17 = v4;
      v2 = 1;
      ++*(_QWORD *)(a1 + 112);
      return v2;
    }
  }
  else
  {
    if ( (unsigned __int8)sub_245010(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8), a2) )
      return v2;
    ++*(_DWORD *)(a1 + 132);
  }
  return 1;
}
