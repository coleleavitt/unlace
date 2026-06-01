void __fastcall sub_1FCAAE0(__int64 a1, __int64 a2)
{
  bool v4; // r12
  unsigned int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rsi
  int v8; // edx
  __int64 v9; // rdi
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r9d
  int v15; // edx
  _QWORD *v16; // rdi
  char v17; // si
  __int64 v18; // rsi
  __int64 v19; // rdx
  char v20; // si
  __int64 v21; // rbx
  int v22; // ecx
  char v23; // [rsp+6h] [rbp-52h]
  char v24; // [rsp+7h] [rbp-51h]

  sub_1FC2690(a1, a2);
  v24 = WORD1(*(_QWORD *)a2) & 0x10;
  v4 = (*(_QWORD *)a2 & 0x200000LL) != 0;
  v5 = WORD1(*(_QWORD *)a2) & 0x40;
  v23 = WORD1(*(_QWORD *)a2) & 0x20;
  if ( (*(_QWORD *)a2 & 0x400000LL) != 0
    && (v6 = a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0),
        *(_DWORD *)(v6 + 48)) )
  {
    v7 = *(unsigned int *)(v6 + 60);
  }
  else
  {
    v7 = 0;
  }
  sub_1FC23C0((unsigned int *)(a1 + 232));
  v8 = *(_DWORD *)(a1 + 236);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_DWORD *)(a1 + 232) | ((v24 != 0) << v8) | (v4 << (v8 + 1));
  *(_DWORD *)(a1 + 236) = v8 + 3;
  *(_DWORD *)(a1 + 232) = ((v5 != 0) << (v8 + 2)) | v10;
  sub_9B9C90(v9, v7);
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  sub_1F9E180(a1 + 8, (__int64 *)(a2 + 32), *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL), v11, v12, v13);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 40), *(_QWORD *)(a1 + 24));
  v14 = *(_DWORD *)(a1 + 236);
  LODWORD(v9) = (((*(_QWORD *)a2 >> 19) & 1) << v14) | *(_DWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 236) = v14 + 1;
  *(_DWORD *)(a1 + 232) = v9;
  v15 = v9 | ((unsigned __int8)BYTE2(*(_QWORD *)a2) >> 7 << (v14 + 1));
  *(_DWORD *)(a1 + 236) = v14 + 2;
  v16 = *(_QWORD **)(a1 + 16);
  *(_DWORD *)(a1 + 232) = v15;
  v17 = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 236) = v14 + 4;
  *(_DWORD *)(a1 + 232) = ((v17 & 3) << (v14 + 2)) | v15;
  sub_1F6F570(v16, *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 24));
  if ( v24 )
  {
    if ( (*(_QWORD *)a2 & 0x100000LL) != 0 )
    {
      v18 = *(_QWORD *)(a2 + 48);
      v19 = *(_QWORD *)(a2 + 56);
    }
    else
    {
      v19 = 0;
      v18 = 0;
    }
    sub_1F9A420((__int64 *)(a1 + 8), v18, v19);
  }
  if ( v23 )
  {
    if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
      v21 = *(_QWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 48);
    else
      v21 = (*(_BYTE *)(*(_QWORD *)(a2 + 24) + 29LL) >> 5) & 3 | *(_QWORD *)(a2 + 24);
    sub_1F92A90(*(_QWORD *)(a1 + 16), v21 & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
    v22 = *(_DWORD *)(a1 + 236);
    *(_DWORD *)(a1 + 232) |= (v21 & 3) << v22;
    *(_DWORD *)(a1 + 236) = v22 + 2;
  }
  if ( (_BYTE)v5 )
  {
    v20 = BYTE2(*(_QWORD *)a2);
    sub_1FC2440(
      a1,
      a2 + 8LL * ((v20 & 0x20) != 0) + 16LL * ((v20 & 0x10) != 0) + 48,
      a2 + 16 * (((v20 & 0x10) != 0) + (unsigned __int64)((v20 & 0x40) != 0)) + 8LL * ((v20 & 0x20) != 0) + 48);
  }
  *(_DWORD *)(a1 + 224) = 187;
}
