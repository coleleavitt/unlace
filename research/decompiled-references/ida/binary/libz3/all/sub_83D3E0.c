__int64 __fastcall sub_83D3E0(__int64 *a1, int a2, int *a3)
{
  void *v4; // r14
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rax
  void *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v13; // [rsp+8h] [rbp-50h] BYREF
  char v14; // [rsp+Ch] [rbp-4Ch]
  __int64 v15; // [rsp+10h] [rbp-48h]
  int v16; // [rsp+18h] [rbp-40h] BYREF
  char v17; // [rsp+1Ch] [rbp-3Ch]
  __int64 v18; // [rsp+20h] [rbp-38h]

  v14 &= 0xFCu;
  v17 &= 0xFCu;
  v4 = qword_1C7F2C0;
  v13 = 0;
  v15 = 0;
  v16 = 1;
  v18 = 0;
  if ( (a3[1] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v13, a3);
  else
    v13 = *a3;
  if ( (a3[5] & 1) != 0 )
  {
    sub_182C690(v4, &v16, a3 + 4);
  }
  else
  {
    v5 = a3[4];
    v17 &= ~1u;
    v16 = v5;
  }
  v6 = *a1;
  if ( !*a1 || (v7 = *(unsigned int *)(v6 - 4), (_DWORD)v7 == *(_DWORD *)(v6 - 8)) )
  {
    sub_83D1D0(a1);
    v6 = *a1;
    v7 = *(unsigned int *)(*a1 - 4);
  }
  v8 = qword_1C7F2C0;
  v9 = v6 + 40 * v7;
  *(_DWORD *)v9 = a2;
  *(_DWORD *)(v9 + 8) = v13;
  *(_BYTE *)(v9 + 12) = v14 & 3 | *(_BYTE *)(v9 + 12) & 0xFC;
  v10 = v15;
  v15 = 0;
  *(_QWORD *)(v9 + 16) = v10;
  *(_DWORD *)(v9 + 24) = v16;
  *(_BYTE *)(v9 + 28) = v17 & 3 | *(_BYTE *)(v9 + 28) & 0xFC;
  v11 = v18;
  v18 = 0;
  *(_QWORD *)(v9 + 32) = v11;
  ++*(_DWORD *)(v6 - 4);
  sub_182CBA0(v8, &v13);
  return sub_182CBA0(v8, &v16);
}

