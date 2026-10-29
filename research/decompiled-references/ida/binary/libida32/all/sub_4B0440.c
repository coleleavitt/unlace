unsigned __int64 __fastcall sub_4B0440(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rsi
  int v5; // r13d
  unsigned int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned int v11; // eax
  int v12; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned int v13; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v12 = -1;
  netnode_check(&v12, a2, 0, 1);
  netnode_check(&v13, a2, 0, 0);
  v14 = v13;
  if ( (unsigned __int8)netnode_exist(&v14)
    && (v5 = (_DWORD)a1 + 20,
        v6 = netnode_altval(v14, 1, 65),
        v7 = v14,
        *(_QWORD *)(a1 + 1) = v6,
        v8 = netnode_altval(v7, 2, 65),
        v9 = v13,
        v10 = a1[1],
        *(_QWORD *)(a1 + 3) = v8,
        *a1 = v9,
        netnode_supval(v9, v10, a1 + 5, 1024, 83) <= 0) )
  {
    *(_QWORD *)(a1 + 5) = -1;
    *(_QWORD *)(a1 + 259) = -1;
    memset(
      (void *)((unsigned __int64)(a1 + 7) & 0xFFFFFFFFFFFFFFF8LL),
      0xFFu,
      8LL * ((v5 - (((_DWORD)a1 + 28) & 0xFFFFFFF8) + 1024) >> 3));
    *(_OWORD *)(a1 + 1) = 0;
    if ( !(unsigned __int8)sub_4B03A0((__int64)a1) )
      goto LABEL_6;
  }
  else if ( !(unsigned __int8)sub_4B03A0((__int64)a1) )
  {
LABEL_6:
    v11 = getinf(19);
    *((_QWORD *)a1 + 131) = 0;
    a1[261] = v11;
    a1[264] = -1;
  }
  netnode_check(&v13, "$ curlocs", 0, 1);
  v3 = *a1;
  v14 = 1;
  netnode_supset(v13, v3, &v14, 4, 65);
  return v15 - __readfsqword(0x28u);
}

