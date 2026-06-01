__int64 __fastcall sub_559D40(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax

  if ( !*(_BYTE *)(a1 + 72) )
  {
    if ( !(unsigned __int8)hook_event_listener(3, a1, 0, 0) || !(unsigned __int8)hook_event_listener(0, a1 + 40, 0, 0) )
    {
      if ( !under_debugger )
        interr(2961);
      BUG();
    }
    *(_BYTE *)(a1 + 72) = 1;
  }
  v2 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 16))(a2);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = v3 + 8LL * *(_QWORD *)(a1 + 24);
  if ( v3 != v4 )
  {
    while ( v2 != *(_QWORD *)(*(_QWORD *)v3 + 48LL) )
    {
      v3 += 8;
      if ( v4 == v3 )
        goto LABEL_11;
    }
    if ( *(_QWORD *)v3 )
      return *(_QWORD *)v3;
  }
LABEL_11:
  v6 = operator new(0x58u);
  v7 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 64))(a2);
  *(_QWORD *)(v6 + 24) = v6 + 8;
  *(_QWORD *)(v6 + 32) = v6 + 8;
  v8 = *a2;
  *(_DWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = v2;
  *(_QWORD *)(v6 + 56) = 0;
  *(_OWORD *)(v6 + 64) = 0;
  *(_BYTE *)(v6 + 80) = v7 != 0;
  (*(void (__fastcall **)(__int64 *, __int64))(v8 + 24))(a2, v6);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v9 + 1) )
  {
    v11 = qvector_reserve(a1 + 16, v10, v9 + 1, 8);
    *(_QWORD *)(a1 + 16) = v11;
    v10 = v11;
    v9 = *(_QWORD *)(a1 + 24);
  }
  *(_QWORD *)(v10 + 8 * v9) = v6;
  ++*(_QWORD *)(a1 + 24);
  return v6;
}
