void __fastcall sub_9B8240(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  void *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r12
  int v9[8]; // [rsp+10h] [rbp-98h] BYREF
  char v10[32]; // [rsp+30h] [rbp-78h] BYREF
  char v11[88]; // [rsp+50h] [rbp-58h] BYREF

  v3 = a3 + 32;
  v6 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a2 + 52) & 1) != 0
    || *(_DWORD *)(a2 + 48) != 1
    || (*(_BYTE *)(a3 + 52) & 1) != 0
    || *(_DWORD *)(a3 + 48) != 1 )
  {
    if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, a2 + 32, a3 + 32) )
      return;
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 36) & 1) == 0 && (*(_BYTE *)(a3 + 36) & 1) == 0 )
    {
      if ( *(_DWORD *)(a2 + 32) >= *(_DWORD *)(a3 + 32) )
        return;
      goto LABEL_7;
    }
    if ( (int)sub_182C7B0(qword_1C7F2C0, a2 + 32, a3 + 32) >= 0 )
      return;
  }
  v6 = qword_1C7F2C0;
LABEL_7:
  v7 = a3 + 64;
  if ( sub_3ED700((__int64)v6, v7, a2 + 64) )
  {
    sub_3EBB80((__int64)v11, a2 + 64, v7);
    sub_3EBB80((__int64)v10, v3, a2 + 32);
    sub_27B620((__int64)v9, (__int64)v10, (__int64)v11);
    v8 = a1 + 1600;
    sub_25A130(v10);
    sub_25A130(v11);
    if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v9, v8) )
      sub_27B950((__int64)qword_1C7F2C0, v8, v9);
    sub_25A130((char *)v9);
  }
}

