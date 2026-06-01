__int64 __fastcall sub_1F63580(__int64 *a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rdx
  int v20[26]; // [rsp+0h] [rbp-68h] BYREF

  sub_1F58FC0(a1, a2);
  v4 = *(_QWORD *)(*a1 + 32);
  v5 = *(_DWORD *)(*a1 + 24);
  v6 = *(_QWORD *)(v4 + 8LL * v5);
  v7 = v5 + 2;
  v8 = *(_QWORD *)(v4 + 8LL * (v5 + 1));
  *(_DWORD *)(*a1 + 24) = v7;
  *(_WORD *)(a2 + 2) = (32 * (v8 & 0xF)) | *(_WORD *)(a2 + 2) & 0xFE1F;
  v9 = *a1;
  v10 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v9 + 24) = v10 + 1;
  *(_BYTE *)(a2 + 3) = (2 * (*(_QWORD *)(*(_QWORD *)(v9 + 32) + 8 * v10) & 1)) | *(_BYTE *)(a2 + 3) & 0xFD;
  v11 = *a1;
  v12 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v11 + 24) = v12 + 1;
  *(_BYTE *)(a2 + 4) = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 8 * v12) & 0x7F;
  v13 = *a1;
  v14 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v13 + 24) = v14 + 1;
  *(_BYTE *)(a2 + 5) = *(_BYTE *)(*(_QWORD *)(v13 + 32) + 8 * v14) & 1 | *(_BYTE *)(a2 + 5) & 0xFE;
  if ( (_DWORD)v6 == 1 )
  {
    v15 = *a1;
    v19 = *(unsigned int *)(*a1 + 24);
    *(_DWORD *)(v15 + 24) = v19 + 1;
    *(_QWORD *)(a2 + 56LL * (((*(_BYTE *)(a2 + 2) >> 3) & 3) == 2) + 24) = *(_QWORD *)(*(_QWORD *)(v15 + 32) + 8 * v19);
    goto LABEL_6;
  }
  if ( (_DWORD)v6 == 2 )
  {
    sub_1F0A560((__int64)v20, *a1);
    sub_A4FD20(a2 + 24, (__int64)v20);
    if ( v20[0] > 1u )
    {
      sub_A4F8E0(v20);
      if ( !sub_A4FD90(a2 + 24) )
        goto LABEL_5;
    }
    else if ( !sub_A4FD90(a2 + 24) )
    {
      goto LABEL_5;
    }
    *(_BYTE *)(a2 + 4) |= 0x80u;
    sub_A5F590(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 144LL), (__int64)sub_B70CC0, a2 + 24);
  }
LABEL_5:
  v15 = *a1;
LABEL_6:
  v16 = *(_QWORD *)(v15 + 8);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 13064) + 8LL * *(unsigned int *)(v16 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v16 + 13072) - 1);
  *(_DWORD *)(v16 + 13072) = result;
  *(_QWORD *)(a2 + 16) = v17;
  return result;
}
