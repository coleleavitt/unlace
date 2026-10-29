__int64 __fastcall sub_A3F1B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  int v7; // eax
  unsigned __int8 *v8; // rdi
  __int64 (__fastcall *v9)(__int64); // rax

  v5 = 1;
  if ( a3 )
  {
    v6 = sub_B685F0(a3);
    v7 = sub_B5A010(a3, v6);
    v5 = 0;
    if ( v7 )
      v5 = (unsigned __int8)sub_B559C0(a3, v6, 0) ^ 1u;
  }
  v8 = *(unsigned __int8 **)(a1 + 17448);
  v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 160LL);
  if ( v9 == sub_A32150 )
    return v8[61];
  else
    return ((__int64 (__fastcall *)(unsigned __int8 *, __int64, __int64))v9)(v8, a2, v5);
}

