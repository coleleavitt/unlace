unsigned __int64 __fastcall sub_1F17810(__int64 **a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 *v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // r10
  __int64 v12; // rsi
  unsigned __int16 v13; // dx
  unsigned int v14; // ecx
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // cx
  unsigned __int16 v19[21]; // [rsp+Eh] [rbp-2Ah] BYREF

  v1 = **a1;
  v2 = sub_1F16500((_QWORD *)(*a1)[1], (*a1)[2], *a1 + 4, (_DWORD *)*a1 + 6);
  v3 = *a1;
  v4 = (*a1)[4];
  v14 = *((_DWORD *)v3 + 6);
  v5 = *(_QWORD *)(v4 + 8LL * v14);
  v6 = *(_QWORD *)(v4 + 8LL * (v14 + 1));
  v7 = *(_QWORD *)(v4 + 8LL * (v14 + 2));
  v8 = *(_QWORD *)(v4 + 8LL * (v14 + 3));
  v9 = *(_QWORD *)(v4 + 8LL * (v14 + 4));
  v10 = *(_QWORD *)(v4 + 8LL * (v14 + 5));
  v11 = *(_QWORD *)(v4 + 8LL * (v14 + 6));
  *((_DWORD *)v3 + 6) = v14 + 8;
  v12 = *(_QWORD *)(v4 + 8LL * (v14 + 7));
  v13 = v8 | ((v5 != 0) << 6);
  BYTE1(v14) = HIBYTE(v13);
  if ( v9 )
  {
    LOBYTE(v14) = v13 | 0x80;
    v13 = v14;
  }
  LOBYTE(v15) = v13;
  if ( v10 )
  {
    HIBYTE(v15) = HIBYTE(v13) | 1;
    v13 = v15;
  }
  if ( v6 )
    v13 |= ((_WORD)v7 + 1) << 9;
  LOBYTE(v16) = v13;
  if ( v11 )
  {
    HIBYTE(v16) = HIBYTE(v13) | 0x10;
    v13 = v16;
  }
  LOBYTE(v17) = v13;
  if ( v12 )
  {
    HIBYTE(v17) = HIBYTE(v13) | 0x20;
    v13 = v17;
  }
  v19[0] = v13;
  return sub_A71610(v1, v2, v19);
}
