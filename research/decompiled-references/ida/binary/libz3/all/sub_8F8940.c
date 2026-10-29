__int64 __fastcall sub_8F8940(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  __int64 v6; // rdi
  int v8; // esi
  int v9; // eax
  int v10; // edi
  __int64 v11; // [rsp+0h] [rbp-38h]
  __int64 v12[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = sub_180B130(a1);
  sub_1841000(v12, v5 > 0x63, "smt.simplifying", 0);
  v6 = *(_QWORD *)(a1 + 104);
  if ( (*(_DWORD *)(a1 + 8632) != 1 || *(_BYTE *)(v6 + 4)) && (unsigned __int8)sub_18290A0(v6) )
  {
    if ( *(_BYTE *)(a1 + 10320) || (v8 = *(_DWORD *)(a1 + 9464), v9 = *(_DWORD *)(a1 + 9468), v8 == v9) )
    {
      v10 = a1 + 216;
      if ( a3 )
      {
LABEL_9:
        sub_C13430(v10, v11, v12[0], v12[1]);
        return sub_18410E0(v12);
      }
    }
    else
    {
      sub_8F7780(a1, v8 - v9);
      v10 = a1 + 216;
      if ( a3 )
        goto LABEL_9;
    }
    sub_C13740(v10);
    return sub_18410E0(v12);
  }
  *(_DWORD *)(a1 + 10308) = 3;
  return sub_18410E0(v12);
}

