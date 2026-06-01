__int64 __fastcall sub_7F72B0(__int64 *a1, __int64 a2)
{
  unsigned int v3; // r12d
  __int64 v5; // r9
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // r14
  __int64 *v11; // rax
  __int64 *v12; // rbp
  __int64 v13; // r9
  __int64 v14[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !(unsigned __int8)sub_7ECC20(a1, *(_QWORD *)(a2 + 56)) )
    return 0;
  v5 = *a1;
  v14[0] = *(_QWORD *)(a2 + 48);
  if ( !(unsigned __int8)sub_7E09C0((__int64)a1, v14[0], v14[0], v14, a1, v5) )
    return 0;
  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  v7 = v6 == sub_67A590 ? *(_QWORD *)(a2 + 72) : v6(a2);
  if ( v7 == a2 && !(unsigned __int8)sub_7E1AB0(a1, a2) )
    return 0;
  v8 = 0;
  if ( (unsigned __int8)sub_79B790(a2) )
    v8 = sub_79AC10(a2);
  v3 = sub_7E1600(a1, v8);
  if ( !(_BYTE)v3 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v9 = sub_79A2B0(a2);
    v10 = *v9 + 8LL * *((unsigned int *)v9 + 2);
    v11 = nullptr;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v11 = (__int64 *)*sub_79A2B0(a2);
    if ( (__int64 *)v10 != v11 )
    {
      v12 = v11;
      while ( 1 )
      {
        v13 = *a1;
        v14[0] = *v12;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v14[0], v14[0], v14, a1, v13) )
          break;
        if ( (__int64 *)v10 == ++v12 )
          return v3;
      }
      return 0;
    }
  }
  return v3;
}

