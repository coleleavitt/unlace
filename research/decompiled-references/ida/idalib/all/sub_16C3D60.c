__int64 __fastcall sub_16C3D60(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  int v4; // r13d
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 *v9; // r15
  unsigned __int64 *i; // rbx
  unsigned __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rax
  int v14; // r14d
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // r12d
  __int64 v18; // [rsp+0h] [rbp-B8h] BYREF
  _QWORD v19[2]; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v20[20]; // [rsp+18h] [rbp-A0h] BYREF

  v2 = *a1;
  v3 = *(unsigned int *)(*a1 + 1096);
  v4 = *(_DWORD *)(*a1 + 1096);
  v5 = v3;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 232LL) + 1LL) & 0x40) != 0 )
  {
    v13 = *(unsigned int *)(v2 + 24);
    v14 = v3 & 0x7FFFFFFF;
    if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(v2 + 28) )
    {
      sub_2237220(v2 + 16, v2 + 32, v13 + 1, 4);
      v13 = *(unsigned int *)(v2 + 24);
    }
    *(_DWORD *)(*(_QWORD *)(v2 + 16) + 4 * v13) = v14;
    v3 = *(unsigned int *)(v2 + 24);
    *(_DWORD *)(v2 + 24) = v3 + 1;
    v15 = *a1;
    v16 = *(unsigned int *)(*a1 + 24);
    v17 = *(_DWORD *)(*a1 + 1096) & 0x7FFFFFFF;
    if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 28) )
    {
      sub_2237220(v15 + 16, v15 + 32, v16 + 1, 4);
      v16 = *(unsigned int *)(v15 + 24);
    }
    *(_DWORD *)(*(_QWORD *)(v15 + 16) + 4 * v16) = v17;
    v5 = *(unsigned int *)(v15 + 24);
    *(_DWORD *)(v15 + 24) = v5 + 1;
    v2 = *a1;
    v4 = *(_DWORD *)(*a1 + 1096);
  }
  *(_DWORD *)(v2 + 1096) = v3;
  v6 = *a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 232LL) + 1LL) & 0x40) != 0 )
  {
    v18 = *a1;
    v19[0] = v20;
    v19[1] = 0x400000000LL;
    v20[12] = *(_QWORD *)(v6 + 1104);
    *(_QWORD *)(v6 + 1104) = v19;
    sub_16C1900(*a1, *(_QWORD *)(*(_QWORD *)a1[1] + 32LL));
    sub_16BB4C0(&v18);
  }
  else
  {
    sub_16C1900(v6, *(_QWORD *)(*(_QWORD *)a1[1] + 32LL));
  }
  *(_DWORD *)(*a1 + 1096) = v5;
  v7 = *(_QWORD *)a1[1];
  v8 = 8 * (((*(_BYTE *)(v7 + 2) & 8) != 0) + 1LL) + 32;
  v9 = (unsigned __int64 *)(v7 + v8 + 8LL * *(unsigned int *)(v7 + 16));
  for ( i = (unsigned __int64 *)(v8 + v7); v9 != i; ++i )
  {
    v11 = *i;
    sub_16C1900(*a1, v11);
  }
  *(_DWORD *)(*a1 + 1096) = v4;
  result = *a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 232LL) + 1LL) & 0x40) != 0 )
  {
    result = *(_QWORD *)(result + 16);
    *(_BYTE *)(result + 4 * v3 + 3) |= 0x80u;
    *(_BYTE *)(result + 4 * v5 + 3) |= 0x80u;
  }
  return result;
}
