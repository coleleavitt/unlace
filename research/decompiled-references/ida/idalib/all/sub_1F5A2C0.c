__int64 __fastcall sub_1F5A2C0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 *v12; // rax

  sub_1F58FC0(a1, a2);
  v3 = *a1;
  v4 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  *(_BYTE *)(a2 + 2) = (8 * (*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4) & 0xF)) | *(_BYTE *)(a2 + 2) & 0x87;
  v5 = *a1;
  if ( *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 8LL * *(unsigned int *)(*a1 + 24)) )
  {
    v12 = sub_1F19370(v5);
    *(_BYTE *)(a2 + 2) |= 0x80u;
    *(_QWORD *)(a2 + 16) = v12;
    v8 = *a1;
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 8);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v6 + 13072))-- - 8);
    *(_QWORD *)(a2 + 16) = v7;
    *(_BYTE *)(a2 + 2) &= ~0x80u;
    v8 = *a1;
    ++*(_DWORD *)(*a1 + 24);
  }
  v9 = sub_1EE7490(v8);
  v10 = *a1;
  *(_DWORD *)(a2 + 24) = v9;
  result = sub_1EE7490(v10);
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
