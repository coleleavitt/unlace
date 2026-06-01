__int64 __fastcall sub_CB20E0(__int64 a1, __int64 a2, __int64 *a3)
{
  int v4; // r8d
  int v5; // r9d
  _DWORD *v6; // rdx
  unsigned int v7; // r13d
  void *v8; // rbx
  __int64 v10; // rsi
  __int64 v11; // rbx
  char v12; // [rsp+4h] [rbp-54h] BYREF
  __int64 v13; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v14[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  v14[0] = 0;
  v14[1] = 0;
  v15[0] = 1;
  v15[1] = 0;
  if ( (unsigned __int8)sub_1674410(a1 + 16, a2, &v13)
    && !*(_WORD *)(v13 + 4)
    && (v6 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL)) != nullptr
    && *(_DWORD *)(a1 + 16) == *v6
    && v6[1] == 45
    && *(_DWORD *)(v13 + 24) == 2
    && (v10 = *(_QWORD *)(v13 + 32),
        v13 = *(_QWORD *)(v13 + 40),
        (unsigned __int8)sub_1673B50((int)a1 + 16, v10, (unsigned int)v14, (unsigned int)&v12, v4, v5))
    && (v14[0] & 0x100000000LL) == 0
    && LODWORD(v14[0]) == 1
    && (v7 = ~BYTE4(v15[0]), LOBYTE(v7) = (v15[0] & 0x100000000LL) == 0, (v15[0] & 0x100000000LL) == 0)
    && LODWORD(v15[0]) == 1 )
  {
    v11 = v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    sub_CB1660(*a3, a3[1]);
    *a3 = v11;
  }
  else
  {
    v7 = 0;
  }
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v14);
  sub_182CBA0(v8, v15);
  return v7;
}

