unsigned __int64 __fastcall sub_7A5B80(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  _QWORD *v4; // rbp
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rsi

  if ( *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) + 81) >> 5 == 2
    || (*(_DWORD *)(a1 + 40) & 7) == 6
    && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL) - 1) <= 3
    || !sub_780450(a1) )
  {
    v3 = sub_79A2E0(a1 + 72);
    v4 = (_QWORD *)sub_798D40(v3);
    v5 = (__int64 *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v6 = *v5;
    if ( *(_BYTE *)(*v5 + 16) != 26 )
      v6 = sub_B0D320(*v5);
    v7 = *(_QWORD *)(sub_79A2E0(a1 + 72) + 16);
    v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v7 & 4) != 0 )
      v8 = (_QWORD *)*v8;
    if ( v8 )
      v8 -= 8;
    v9 = sub_7A2260(v4, v6, (__int64)v8);
    if ( (*(_BYTE *)(v6 + 20) & 3) == 2 )
      return sub_6C5080((__int64)v4, v9);
    else
      return sub_6C4DA0((__int64)v4, v9, 1u);
  }
  else
  {
    v1 = *(_QWORD *)(a1 + 120);
    sub_77F620(a1);
    return *(_QWORD *)(*(_QWORD *)v1 + 48LL);
  }
}

