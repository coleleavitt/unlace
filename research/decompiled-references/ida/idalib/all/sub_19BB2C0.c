__int64 __fastcall sub_19BB2C0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // r15
  __int64 v9; // rdi
  __int64 v10; // rbp
  unsigned __int64 v11; // r12
  __int64 result; // rax
  bool v13; // al
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v19[12]; // [rsp+18h] [rbp-50h]

  v6 = a4;
  v9 = a1[31];
  v17 = 0;
  v10 = (v9 + 17624) | 6;
  v11 = sub_A7A9D0(v9, a3, a3, a4, a5, a6);
  v18 = v11;
  *(_DWORD *)v19 = sub_183E2F0((__int64)a1);
  *(_QWORD *)&v19[4] = 0;
  if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v18 = sub_6D5440(&v18);
  if ( (unsigned __int8)sub_19BAC90(a1, a2, a3, v10, &v17, v6, v18, *(__int64 *)v19) )
    return 0;
  result = v17;
  if ( !v17 )
  {
    v13 = sub_199F840((__int64)a1, v11);
    *(_DWORD *)&v19[8] = 1;
    *(_DWORD *)&v19[4] = v13;
    return sub_19ADC50(a1, a2, v10, v14, v15, v16, v18);
  }
  return result;
}
