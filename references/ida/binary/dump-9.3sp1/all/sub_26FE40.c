__int64 __fastcall sub_26FE40(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // edx
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 *v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx

  v2 = *(unsigned __int8 *)(a1 + 136);
  if ( (_BYTE)v2 )
  {
    v3 = sub_254FE0(a2);
    v6 = j__qalloc_or_throw(64, a2, v4, v5);
    v7 = sub_240F50(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL), *(_QWORD *)(a1 + 72), 0, -1, 0, 0, 0);
    *(_DWORD *)(v6 + 8) = 37;
    *(_QWORD *)(v6 + 12) = -1;
    *(_QWORD *)(v6 + 24) = 0;
    *(_QWORD *)(v6 + 32) = v7;
    *(_QWORD *)v6 = -1;
    *(_QWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 48) = 0;
    *(_DWORD *)(v6 + 56) = 0;
    *(_QWORD *)v6 = *(_QWORD *)v3;
    v8 = *(_DWORD *)(v3 + 8);
    *(_QWORD *)v3 = -1;
    LODWORD(v7) = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(v6 + 8) = v8;
    v9 = *(_DWORD *)(v3 + 12);
    *(_DWORD *)(v3 + 8) = v7;
    LODWORD(v7) = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v6 + 12) = v9;
    v10 = *(_QWORD *)(v3 + 24);
    *(_DWORD *)(v3 + 12) = v7;
    v11 = *(_QWORD *)(v6 + 24);
    *(_QWORD *)(v6 + 24) = v10;
    v12 = *(_QWORD *)(v3 + 32);
    *(_QWORD *)(v3 + 24) = v11;
    v13 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 32) = v12;
    *(_QWORD *)(v3 + 32) = v13;
    v14 = *(_QWORD *)(v6 + 40);
    *(_QWORD *)(v6 + 40) = *(_QWORD *)(v3 + 40);
    v15 = *(_QWORD *)(v3 + 48);
    *(_QWORD *)(v3 + 40) = v14;
    v16 = *(_QWORD *)(v6 + 48);
    *(_QWORD *)(v6 + 48) = v15;
    LODWORD(v15) = *(_DWORD *)(v3 + 56);
    *(_QWORD *)(v3 + 48) = v16;
    LODWORD(v16) = *(_DWORD *)(v6 + 56);
    *(_DWORD *)(v6 + 56) = v15;
    *(_DWORD *)(v3 + 56) = v16;
    *(_QWORD *)(v3 + 24) = v6;
    sub_2441C0(v3, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL) + 112LL), 0);
    v17 = *(_QWORD *)(a1 + 104);
    v18 = *(_QWORD *)(a1 + 112);
    v19 = (__int64 *)(v17 + 8 * v18);
    if ( (__int64 *)v17 == v19 )
      goto LABEL_7;
    v20 = *(__int64 **)(a1 + 104);
    while ( v6 != *v20 )
    {
      if ( v19 == ++v20 )
        goto LABEL_7;
    }
    if ( v19 == v20 )
    {
LABEL_7:
      v21 = v18 + 1;
      if ( *(_QWORD *)(a1 + 120) < v21 )
      {
        v23 = qvector_reserve(a1 + 104, v17, v21, 8);
        v24 = *(_QWORD *)(a1 + 112);
        *(_QWORD *)(a1 + 104) = v23;
        v19 = (__int64 *)(v23 + 8 * v24);
      }
      *v19 = v6;
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
