__int64 *__fastcall sub_1F63730(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // edx
  __int64 *result; // rax
  char *v12; // rbx
  __int64 v13; // r12
  int v14[22]; // [rsp+0h] [rbp-58h] BYREF

  sub_1F58FC0(a1, a2);
  v2 = *a1;
  v3 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  *(_BYTE *)(a2 + 3) = (8 * (*(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3) & 1)) | *(_BYTE *)(a2 + 3) & 0xF7;
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  *(_DWORD *)(a2 + 4) = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  v6 = *a1;
  v7 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v6 + 24) = v7 + 1;
  LOWORD(v7) = (8 * *(unsigned __int8 *)(*(_QWORD *)(v6 + 32) + 8 * v7)) | *(_WORD *)(a2 + 2) & 0xF807;
  *(_WORD *)(a2 + 2) = v7;
  if ( (v7 & 0x800) != 0 )
  {
    v8 = *a1;
    v9 = *(unsigned int *)(*a1 + 24);
    *(_DWORD *)(v8 + 24) = v9 + 1;
    *(_BYTE *)(a2 + 3) = (16 * (*(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v9) & 1)) | *(_BYTE *)(a2 + 3) & 0xEF;
  }
  else
  {
    sub_1F0A560((__int64)v14, *a1);
    sub_A4FD20(a2 + 24, (__int64)v14);
    if ( v14[0] > 1u )
      sub_A4F8E0(v14);
  }
  *(_QWORD *)(a2 + 16) = sub_1EEDED0(
                           *(_QWORD *)(*a1 + 8),
                           *(_QWORD *)(*a1 + 16),
                           (_QWORD *)(*a1 + 32),
                           (_DWORD *)(*a1 + 24));
  v10 = *(_DWORD *)(a2 + 4);
  result = (__int64 *)(56LL * ((((unsigned __int8)BYTE3(*(_QWORD *)a2) >> 3) ^ 1) & 1));
  if ( v10 )
  {
    v12 = (char *)result + a2 + 24;
    v13 = (__int64)&result[(unsigned int)(v10 - 1) + 4] + a2;
    do
    {
      v12 += 8;
      result = sub_1F19370(*a1);
      *((_QWORD *)v12 - 1) = result;
    }
    while ( (char *)v13 != v12 );
  }
  return result;
}
