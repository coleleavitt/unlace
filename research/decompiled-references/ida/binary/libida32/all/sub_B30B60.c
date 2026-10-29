unsigned __int64 __fastcall sub_B30B60(__int64 **a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int v6; // r15d
  __int64 *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // edx
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-48h]
  __int64 v17; // [rsp+8h] [rbp-40h]

  v6 = a4 + a6;
  v10 = *a1;
  v11 = *v10;
  v10[10] += 64;
  v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v10[1] >= v12 + 64 && v11 )
  {
    *v10 = v12 + 64;
  }
  else
  {
    v17 = a5;
    v16 = a6;
    v15 = sub_962430((__int64)v10, 64, 64, 4, a5, a6);
    a5 = v17;
    a6 = v16;
    v12 = v15;
  }
  v13 = *(_DWORD *)(v12 + 12);
  *(_DWORD *)(v12 + 4) = a2;
  *(_DWORD *)(v12 + 8) = v6;
  *(_DWORD *)v12 = a2 + 1;
  *(_QWORD *)(v12 + 40) = a5;
  *(_QWORD *)(v12 + 48) = a6;
  *(_DWORD *)(v12 + 12) = ((a3 & 0xFFFFF) << 8) | v13 & 0xE0000000 | 0x10000009;
  *(_DWORD *)(v12 + 56) = a4;
  *(_QWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 0;
  *(_QWORD *)(v12 + 32) = 0;
  sub_B2DD40(a1, (unsigned int *)v12);
  sub_B2ED00(a1, (unsigned int *)v12);
  return v12;
}

