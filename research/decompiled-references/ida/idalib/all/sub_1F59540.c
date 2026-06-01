__int64 __fastcall sub_1F59540(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx

  sub_1F58FC0(a1, a2);
  v2 = *a1;
  v3 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3);
  *(_BYTE *)(a2 + 2) = ((v4 != 0) << 7) | *(_BYTE *)(a2 + 2) & 0x7F;
  v5 = *a1;
  v6 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v5 + 24) = v6 + 1;
  *(_BYTE *)(a2 + 2) = (8 * (*(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v6) & 0xF)) | *(_BYTE *)(a2 + 2) & 0x87;
  v7 = *a1;
  v8 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v7 + 24) = v8 + 1;
  *(_BYTE *)(a2 + 3) = *(_BYTE *)(*(_QWORD *)(v7 + 32) + 8 * v8) & 1 | *(_BYTE *)(a2 + 3) & 0xFE;
  result = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 4) = result;
  if ( v4 )
  {
    v10 = *(_QWORD *)(*a1 + 8);
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 13064) + 8LL * *(unsigned int *)(v10 + 13072) - 8);
    result = (unsigned int)(*(_DWORD *)(v10 + 13072) - 1);
    *(_DWORD *)(v10 + 13072) = result;
    *(_QWORD *)(a2 + 16) = v11;
  }
  return result;
}
