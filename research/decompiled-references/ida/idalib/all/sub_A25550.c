_QWORD *__fastcall sub_A25550(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r13
  unsigned __int8 v6; // dl
  __int64 v7; // rax
  _QWORD *v9; // rdi
  int v10; // [rsp+Ch] [rbp-2Ch] BYREF
  _BYTE v11[40]; // [rsp+10h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 112);
  sub_A1FEC0(a1, 0, *(_DWORD *)(a1 + 56));
  if ( *(_DWORD *)(a1 + 48) )
  {
    v9 = *(_QWORD **)(a1 + 24);
    v10 = *(_DWORD *)(a1 + 52);
    sub_A1FE50(v9, &v10, v11);
    *(_QWORD *)(a1 + 48) = 0;
  }
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  v4 = ~*(_QWORD *)(v2 - 32) + ((unsigned __int64)(sub_A1F730(a1) + v3) >> 2);
  v5 = 32LL * *(_QWORD *)(v2 - 32);
  sub_A1F830(a1, v5, v4);
  v6 = BYTE1(v4);
  LODWORD(v4) = WORD1(v4);
  sub_A1F830(a1, v5 + 8, v6);
  sub_A1F830(a1, v5 + 16, v4);
  sub_A1F830(a1, v5 + 24, BYTE1(v4));
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(v2 - 40);
  sub_A25240((char **)(a1 + 64), (char **)(v2 - 24));
  v7 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v7 - 40;
  sub_A0AD20(v7 - 40 + 16);
  return sub_A1F7A0(a1, 0);
}
