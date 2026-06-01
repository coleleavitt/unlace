__int64 __fastcall sub_5889F0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64 *); // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdi
  _QWORD *v11; // [rsp+8h] [rbp-30h]
  __int64 v12; // [rsp+10h] [rbp-28h] BYREF
  __int64 v13; // [rsp+18h] [rbp-20h]

  v4 = *(_QWORD *)(a2 + 40);
  v12 = 0;
  v13 = v4;
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*a3 + 144LL);
  if ( v5 == sub_586990 )
  {
    v6 = a3[6];
    if ( v6 )
    {
      ++*(_DWORD *)(v6 + 8);
      v12 = v6;
    }
  }
  else
  {
    v11 = a3;
    v5((__int64)a3, &v12);
    LODWORD(v6) = v12;
    a3 = v11;
  }
  sub_588670(a1, a2, (__int64)a3, v6);
  v7 = v12;
  if ( !v12 )
    return a1;
  v8 = v13;
  if ( (*(_DWORD *)(v12 + 8))-- != 1 )
    return a1;
  sub_15D7BC0(v8, v7);
  return a1;
}

