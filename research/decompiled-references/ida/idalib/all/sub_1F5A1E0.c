__int64 __fastcall sub_1F5A1E0(__int64 a1, __int64 a2)
{
  int v2; // ecx
  int v3; // r13d
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // eax
  int v7; // ecx
  bool v8; // zf
  int v9; // edx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rax

  sub_1F58FC0((__int64 *)a1, a2);
  v2 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 16) & (1 << v2);
  *(_DWORD *)(a1 + 20) = v2 + 1;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v4 + 13072))-- - 8);
  v6 = *(_DWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 16) = v5;
  LODWORD(v5) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = v5 + 5;
  *(_BYTE *)(a2 + 2) = (8 * (v6 >> v5)) | *(_BYTE *)(a2 + 2) & 7;
  *(_DWORD *)(a2 + 4) = sub_1EE7490(*(_QWORD *)a1);
  v7 = *(_DWORD *)(a1 + 20);
  v8 = ((1 << v7) & *(_DWORD *)(a1 + 16)) == 0;
  *(_DWORD *)(a1 + 20) = v7 + 1;
  LOBYTE(v9) = !v8;
  result = v9 | *(_BYTE *)(a2 + 3) & 0xFEu;
  *(_BYTE *)(a2 + 3) = !v8 | *(_BYTE *)(a2 + 3) & 0xFE;
  if ( v3 )
  {
    v11 = *(_QWORD *)a1;
    v12 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
    *(_DWORD *)(v11 + 24) = v12 + 1;
    result = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 8 * v12);
    *(_DWORD *)(a2 + 28) = result;
    *(_DWORD *)(a2 + 24) = HIDWORD(result);
  }
  return result;
}
