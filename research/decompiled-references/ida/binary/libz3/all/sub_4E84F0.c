__int64 __fastcall sub_4E84F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+8h] [rbp-20h]

  v4 = a1;
  v9 = sub_4D6490(*(_QWORD *)(a1[1] + 24LL));
  v8 = 0;
  v2 = v9;
  sub_4E82B0(v4, 11, v4 + 6, a2, 0, &v8);
  v3 = v8;
  LOBYTE(v4) = *(_QWORD *)(v2 + 864) != v8;
  if ( !v8 )
    return (unsigned int)v4;
  v5 = v9;
  if ( (*(_DWORD *)(v8 + 8))-- != 1 )
    return (unsigned int)v4;
  sub_15D7BC0(v5, v3);
  return (unsigned int)v4;
}

