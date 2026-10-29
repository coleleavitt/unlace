__int64 __fastcall sub_5E2070(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 112) + 112LL) )
    return set_qerrno(657);
  v2 = qalloc_or_throw(24);
  *(_QWORD *)v2 = 0;
  *(_OWORD *)(v2 + 8) = 0;
  v3 = *(_QWORD *)(a1 + 112);
  if ( v2 )
  {
    *(_DWORD *)(v3 + 112) = 2;
    *(_QWORD *)(v3 + 120) = v2;
    v3 = *(_QWORD *)(a1 + 112);
  }
  v4 = *(__int64 **)(v3 + 120);
  v5 = v4[1];
  v6 = *v4;
  if ( v4[2] < (unsigned __int64)(v5 + 1) )
  {
    v8 = qvector_reserve(v4, v6, v5 + 1, 24);
    v5 = v4[1];
    *v4 = v8;
    v6 = v8;
  }
  v7 = v6 + 24 * v5;
  *(_QWORD *)v7 = 0;
  *(_QWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 16) = 0xFFFF;
  ++v4[1];
  return 0;
}
