__int64 __fastcall sub_1FCB200(__int64 a1, __int64 a2)
{
  int v3; // esi
  int v4; // eax
  unsigned int v5; // edx
  unsigned __int8 v6; // al
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax

  sub_1FC7210(a1, a2);
  v3 = *(_DWORD *)(a1 + 236);
  v4 = *(_DWORD *)(a1 + 232) | (((*(_DWORD *)a2 >> 20) & 1) << v3);
  *(_DWORD *)(a1 + 232) = v4;
  *(_DWORD *)(a1 + 236) = v3 + 1;
  v5 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 236) = v3 + 2;
  *(_DWORD *)(a1 + 232) = (((v5 >> 21) & 1) << (v3 + 1)) | v4;
  v6 = sub_C95850(a2);
  v7 = *(_DWORD *)(a1 + 236);
  *(_DWORD *)(a1 + 232) |= (v6 ^ 1) << v7;
  *(_DWORD *)(a1 + 236) = v7 + 1;
  if ( !(unsigned __int8)sub_C95850(a2) )
    sub_183F100(a1 + 32, *(_QWORD *)(a2 + 56));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 72), *(_QWORD *)(a1 + 24));
  result = sub_1F85840(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 64), *(_QWORD **)(a1 + 24), v8, v9);
  *(_DWORD *)(a1 + 224) = 275;
  return result;
}
