__int64 __fastcall sub_1FC85B0(__int64 a1, __int64 a2)
{
  int v3; // ecx
  __int64 v4; // rbp
  int v5; // ecx
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  int v8; // ecx
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  v3 = *(_DWORD *)(a1 + 236);
  v4 = (*(_QWORD *)a2 >> 24) & 2LL;
  *(_DWORD *)(a1 + 232) |= (((*(_QWORD *)a2 >> 24) & 2) != 0) << v3;
  *(_DWORD *)(a1 + 236) = v3 + 1;
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  v5 = *(_DWORD *)(a1 + 236);
  v6 = *(_QWORD **)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 232) |= *(_BYTE *)(a2 + 2) >> 3 << v5;
  *(_DWORD *)(a1 + 236) = v5 + 5;
  sub_1F6F570(v6, *(_DWORD *)(a2 + 4), v7);
  v8 = *(_DWORD *)(a1 + 236);
  result = ((unsigned int)(*(_QWORD *)a2 >> 24) & 1) << v8;
  *(_DWORD *)(a1 + 232) |= result;
  *(_DWORD *)(a1 + 236) = v8 + 1;
  if ( (_BYTE)v4 )
    result = sub_9B9C90(
               *(_QWORD *)(a1 + 24),
               *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned int *)(a2 + 24) << 32));
  *(_DWORD *)(a1 + 224) = 181;
  return result;
}
