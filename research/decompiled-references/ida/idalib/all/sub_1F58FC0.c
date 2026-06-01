unsigned __int64 __fastcall sub_1F58FC0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // rsi

  v2 = *a1;
  v4 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v2 + 24) = v4 + 1;
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v4);
  *((_DWORD *)a1 + 5) = 5;
  *((_BYTE *)a1 + 24) = 1;
  *((_DWORD *)a1 + 4) = v5;
  *(_BYTE *)(a2 + 1) = ((_BYTE)v5 << 6) | *(_BYTE *)(a2 + 1) & 0x3F;
  *(_BYTE *)(a2 + 2) = *(_BYTE *)(a2 + 2) & 0xF8 | (v5 >> 2) & 7;
  v6 = *((_DWORD *)a1 + 5);
  LODWORD(v5) = *((_DWORD *)a1 + 4) >> v6;
  *((_DWORD *)a1 + 5) = v6 + 2;
  *(_BYTE *)(a2 + 1) = *(_BYTE *)(a2 + 1) & 0xF9 | (2 * (v5 & 3));
  v7 = *((_DWORD *)a1 + 5);
  LODWORD(v5) = *((_DWORD *)a1 + 4) >> v7;
  *((_DWORD *)a1 + 5) = v7 + 3;
  *(_BYTE *)(a2 + 1) = *(_BYTE *)(a2 + 1) & 0xC7 | (8 * (v5 & 7));
  v8 = *a1;
  result = 0;
  v10 = *(unsigned int *)(*a1 + 24);
  if ( (unsigned int)v10 < *(_DWORD *)(*a1 + 40) )
  {
    v11 = *(_QWORD **)(v8 + 8);
    v12 = *(_QWORD *)(v8 + 16);
    *(_DWORD *)(v8 + 24) = v10 + 1;
    result = sub_1F15160(v11, v12, *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v10));
    *(_QWORD *)(a2 + 8) = result;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0;
  }
  return result;
}
