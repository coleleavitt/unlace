__int64 __fastcall sub_2B95F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  int v5; // eax
  __int64 v6; // r12
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  __int64 v10; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(_DWORD *)(a2 + 32);
  if ( v4 == 3 )
  {
    sub_67670((__int64 *)a1, (__int64)"stkoff_delta: 0x%a", 0.0);
    return a1;
  }
  if ( v4 > 3 )
  {
    if ( v4 == 4 )
    {
      sub_2AD100((__int64 *)a1, "ulv_flags: ", 0xBu);
      if ( (*(_BYTE *)(a3 + 88) & 1) != 0 )
        sub_F68D0((__int64 *)a1, (__int64)"%s%s", "PRECISE_DEFEA", (const char *)&unk_3FC793);
      return a1;
    }
    goto LABEL_29;
  }
  if ( v4 == 1 )
  {
    sub_2B9540(*(_DWORD **)(*(_QWORD *)(a2 + 24) + 112LL), (__int64 *)a1, a2, 0.0);
    sub_2AD100((__int64 *)a1, " => ", 4u);
    sub_2B9540(*(_DWORD **)(*(_QWORD *)(a2 + 24) + 112LL), (__int64 *)a1, a3, 0.0);
    return a1;
  }
  if ( v4 != 2 )
  {
LABEL_29:
    if ( !under_debugger )
      sub_37E160(52589);
    BUG();
  }
  sub_2B9540(*(_DWORD **)(*(_QWORD *)(a2 + 24) + 112LL), (__int64 *)a1, a2, 0.0);
  sub_2AD100((__int64 *)a1, ":", 1u);
  v5 = *(_DWORD *)(a3 + 88);
  if ( (v5 & 1) != 0 )
  {
    sub_F68D0((__int64 *)a1, (__int64)"%s%s", "keep", " ");
    v5 = *(_DWORD *)(a3 + 88);
  }
  if ( (v5 & 2) != 0 )
  {
    sub_F68D0((__int64 *)a1, (__int64)"%s%s", "split", " ");
    v5 = *(_DWORD *)(a3 + 88);
  }
  if ( (v5 & 4) != 0 )
  {
    sub_F68D0((__int64 *)a1, (__int64)"%s%s", "noptr", " ");
    v5 = *(_DWORD *)(a3 + 88);
  }
  if ( (v5 & 8) != 0 )
  {
    sub_F68D0((__int64 *)a1, (__int64)"%s%s", "nomap", " ");
    v5 = *(_DWORD *)(a3 + 88);
  }
  if ( (v5 & 0x10) != 0 )
  {
    sub_F68D0((__int64 *)a1, (__int64)"%s%s", "unused", " ");
    v5 = *(_DWORD *)(a3 + 88);
  }
  if ( (v5 & 0x20) != 0 )
    sub_F68D0((__int64 *)a1, (__int64)"%s%s", "noprop", " ");
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)a1;
  v8 = v6 - 1;
  if ( v6 - 1 <= 1 )
  {
    if ( v7 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v7);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    return a1;
  }
  if ( *(_QWORD *)(a1 + 16) < v8 )
  {
    v10 = qvector_reserve(a1, v7, v6 - 1, 1);
    *(_QWORD *)a1 = v10;
    v7 = v10;
  }
  *(_QWORD *)(a1 + 8) = v8;
  *(_BYTE *)(v7 + v6 - 2) = 0;
  return a1;
}
