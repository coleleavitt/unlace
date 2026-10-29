__int64 __fastcall sub_5C6370(__int64 a1, const char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 104) + 112LL) )
    return set_qerrno(657, a2);
  v3 = qalloc_or_throw(24, a2);
  *(_QWORD *)v3 = 0;
  *(_OWORD *)(v3 + 8) = 0;
  v4 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    *(_DWORD *)(v4 + 112) = 2;
    *(_QWORD *)(v4 + 120) = v3;
    v4 = *(_QWORD *)(a1 + 104);
  }
  v5 = *(__int64 **)(v4 + 120);
  v6 = v5[1];
  v7 = *v5;
  if ( v5[2] < (unsigned __int64)(v6 + 1) )
  {
    v9 = qvector_reserve(v5, v7, v6 + 1, 24);
    v6 = v5[1];
    *v5 = v9;
    v7 = v9;
  }
  v8 = v7 + 24 * v6;
  *(_QWORD *)v8 = 0;
  *(_QWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 16) = 0xFFFF;
  ++v5[1];
  return 0;
}

