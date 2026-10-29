void __fastcall sub_9B6FE0(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rdi
  __int64 v6; // rbp
  int v7[8]; // [rsp+10h] [rbp-98h] BYREF
  char v8[32]; // [rsp+30h] [rbp-78h] BYREF
  char v9[88]; // [rsp+50h] [rbp-58h] BYREF

  v5 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1
    || (*(_BYTE *)(a3 + 20) & 1) != 0
    || *(_DWORD *)(a3 + 16) != 1 )
  {
    if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, a2, a3) )
      return;
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 4) & 1) == 0 && (*(_BYTE *)(a3 + 4) & 1) == 0 )
    {
      if ( *(_DWORD *)a2 >= *(_DWORD *)a3 )
        return;
      goto LABEL_7;
    }
    if ( (int)sub_182C7B0(qword_1C7F2C0, a2, a3) >= 0 )
      return;
  }
  v5 = qword_1C7F2C0;
LABEL_7:
  if ( sub_3ED700((__int64)v5, a3 + 32, a2 + 32) )
  {
    sub_3EBB80((__int64)v9, a2 + 32, a3 + 32);
    sub_3EBB80((__int64)v8, a3, a2);
    sub_27B620((__int64)v7, (__int64)v8, (__int64)v9);
    v6 = a1 + 1504;
    sub_25A130(v8);
    sub_25A130(v9);
    if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v7, v6) )
      sub_27B950((__int64)qword_1C7F2C0, v6, v7);
    sub_25A130((char *)v7);
  }
}

