__int64 __fastcall sub_1FCA260(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // esi
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  int v14; // eax
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rdi
  int v17; // eax
  int v18; // ecx
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  v4 = 0;
  if ( (*(_QWORD *)a2 & 0x100000LL) != 0 && *(_DWORD *)(a2 + 72) )
    v4 = *(unsigned int *)(a2 + 84);
  sub_9B9C90(*(_QWORD *)(a1 + 24), v4);
  sub_1FC23C0((unsigned int *)(a1 + 232));
  v7 = *(_DWORD *)(a1 + 236);
  v8 = *(_DWORD *)(a1 + 232) | (((*(_QWORD *)a2 >> 20) & 1) << v7);
  *(_DWORD *)(a1 + 232) = v8;
  *(_DWORD *)(a1 + 236) = v7 + 1;
  v9 = v7 + 2;
  v10 = (((*(_QWORD *)a2 >> 21) & 1) << ((unsigned __int8)v7 + 1)) | v8;
  *(_DWORD *)(a1 + 236) = v7 + 2;
  *(_DWORD *)(a1 + 232) = v10;
  v11 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x100000LL) != 0 )
  {
    sub_1FC2440(a1, a2 + 72, a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 72);
    v10 = *(_DWORD *)(a1 + 232);
    v9 = *(_DWORD *)(a1 + 236);
    v11 = *(_QWORD *)a2;
  }
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(_QWORD *)(a1 + 16);
  v14 = v10 | (((v11 >> 19) & 1) << v9);
  *(_DWORD *)(a1 + 236) = v9 + 1;
  v15 = *(_QWORD **)(a1 + 24);
  *(_DWORD *)(a1 + 232) = v14;
  sub_1F85840(v13, v12, *(_QWORD *)(a2 + 24), v15, v5, v6);
  sub_1F9A420((__int64 *)(a1 + 8), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
  v16 = *(_QWORD *)(a2 + 16);
  v17 = 0;
  if ( v16 )
    v17 = (unsigned __int8)sub_BFE300(v16) ^ 1;
  v18 = *(_DWORD *)(a1 + 236);
  *(_DWORD *)(a1 + 232) |= v17 << v18;
  *(_DWORD *)(a1 + 236) = v18 + 1;
  v19 = *(_QWORD *)(a2 + 16);
  if ( v19 && !(unsigned __int8)sub_BFE300(v19) )
    sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 24));
  if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
  {
    v20 = 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 72;
    if ( (*(_QWORD *)a2 & 0x100000LL) != 0 && *(_DWORD *)(a2 + 72) )
      v20 += 32LL * *(unsigned int *)(a2 + 84);
    sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + v20), *(_QWORD *)(a1 + 24));
  }
  result = sub_1F9E200(a1 + 8, a2 + 48);
  *(_DWORD *)(a1 + 224) = 272;
  return result;
}
