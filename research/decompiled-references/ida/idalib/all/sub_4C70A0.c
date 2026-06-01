unsigned __int64 __fastcall sub_4C70A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r9
  int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+8h] [rbp-40h] BYREF
  __int64 v15; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v13 = -1;
  netnode_check(&v13, a2, 0, 1);
  netnode_check(&v14, a2, 0, 0);
  v15 = v14;
  if ( (unsigned __int8)netnode_exist(&v15)
    && (v6 = a1 + 24,
        v7 = netnode_altval(v15, 1, 65),
        v8 = v15,
        *(_QWORD *)(a1 + 8) = v7,
        v9 = netnode_altval(v8, 2, 65),
        v10 = v14,
        v11 = *(_QWORD *)(a1 + 8),
        *(_QWORD *)(a1 + 16) = v9,
        *(_QWORD *)a1 = v10,
        netnode_supval(v10, v11, a1 + 24, 1024, 83) <= 0) )
  {
    *(_QWORD *)(a1 + 24) = -1;
    *(_QWORD *)(a1 + 1040) = -1;
    memset(
      (void *)((a1 + 32) & 0xFFFFFFFFFFFFFFF8LL),
      0xFFu,
      8LL * ((v6 - (((_DWORD)a1 + 32) & 0xFFFFFFF8) + 1024) >> 3));
    *(_OWORD *)(a1 + 8) = 0;
    if ( !(unsigned __int8)sub_4C6FF0(a1) )
      goto LABEL_6;
  }
  else if ( !(unsigned __int8)sub_4C6FF0(a1) )
  {
LABEL_6:
    v12 = getinf(19);
    *(_QWORD *)(a1 + 1056) = 0;
    *(_QWORD *)(a1 + 1048) = v12;
    *(_QWORD *)(a1 + 1064) = -1;
  }
  netnode_check(&v14, "$ curlocs", 0, 1);
  v3 = *(_QWORD *)a1;
  v15 = 1;
  netnode_supset(v14, v3, &v15, 8, 65, v4);
  return v16 - __readfsqword(0x28u);
}
