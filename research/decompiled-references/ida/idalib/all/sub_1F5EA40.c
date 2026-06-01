unsigned __int64 __fastcall sub_1F5EA40(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  unsigned __int64 result; // rax
  __int64 v13; // r8
  __int64 v14; // rdi
  unsigned int v15; // r9d
  unsigned int v16; // edx
  __int64 v17; // rsi

  sub_1F58FC0(a1, a2);
  v3 = *a1;
  ++*(_DWORD *)(v3 + 24);
  *(_QWORD *)(a2 + 16) = sub_1EEDED0(
                           *(_QWORD *)(v3 + 8),
                           *(_QWORD *)(v3 + 16),
                           (_QWORD *)(v3 + 32),
                           (_DWORD *)(v3 + 24));
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  *(_BYTE *)(a2 + 2) = (8 * (*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5) & 3)) | *(_BYTE *)(a2 + 2) & 0xE7;
  *(_DWORD *)(a2 + 24) = sub_1EE7490(*a1);
  v6 = *a1;
  v7 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v6 + 24) = v7 + 1;
  *(_BYTE *)(a2 + 2) = (32 * (*(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7) & 1)) | *(_BYTE *)(a2 + 2) & 0xDF;
  v8 = *a1;
  v9 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v8 + 24) = v9 + 1;
  *(_BYTE *)(a2 + 2) = ((*(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v9) & 1) << 6) | *(_BYTE *)(a2 + 2) & 0xBF;
  v10 = sub_1EE7490(*a1);
  v11 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 28) = v10;
  result = a2 + 32;
  v13 = a2 + 8 * v11 + 32;
  if ( v13 != a2 + 32 )
  {
    v14 = *(_QWORD *)(*a1 + 8);
    v15 = *(_DWORD *)(v14 + 13072);
    v16 = v15;
    do
    {
      v17 = v16;
      result += 8LL;
      --v16;
      *(_QWORD *)(result - 8) = *(_QWORD *)(*(_QWORD *)(v14 + 13064) + 8 * v17 - 8);
    }
    while ( result != v13 );
    result = (result - a2 - 40) >> 3;
    *(_DWORD *)(v14 + 13072) = v15 - 1 - result;
  }
  return result;
}
