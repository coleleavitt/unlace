__int64 __fastcall sub_A89CD0(__int64 a1, int *a2, unsigned int a3)
{
  __int64 v4; // r13
  void *v5; // r14
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  void *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v14; // [rsp+8h] [rbp-50h] BYREF
  char v15; // [rsp+Ch] [rbp-4Ch]
  __int64 v16; // [rsp+10h] [rbp-48h]
  int v17; // [rsp+18h] [rbp-40h] BYREF
  char v18; // [rsp+1Ch] [rbp-3Ch]
  __int64 v19; // [rsp+20h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 56);
  sub_A75C40((_QWORD *)v4, a3, (unsigned int **)(v4 + 848));
  v15 &= 0xFCu;
  v18 &= 0xFCu;
  v5 = qword_1C7F2C0;
  v14 = 0;
  v16 = 0;
  v17 = 1;
  v19 = 0;
  if ( (a2[1] & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v14, a2);
  else
    v14 = *a2;
  if ( (a2[5] & 1) != 0 )
  {
    sub_182C690(v5, &v17, a2 + 4);
  }
  else
  {
    v6 = a2[4];
    v18 &= ~1u;
    v17 = v6;
  }
  v7 = *(_QWORD *)(v4 + 816);
  if ( !v7 || (v8 = *(unsigned int *)(v7 - 4), (_DWORD)v8 == *(_DWORD *)(v7 - 8)) )
  {
    sub_83D1D0((__int64 *)(v4 + 816));
    v7 = *(_QWORD *)(v4 + 816);
    v8 = *(unsigned int *)(v7 - 4);
  }
  v9 = qword_1C7F2C0;
  v10 = v7 + 40 * v8;
  *(_DWORD *)v10 = a3;
  *(_DWORD *)(v10 + 8) = v14;
  *(_BYTE *)(v10 + 12) = v15 & 3 | *(_BYTE *)(v10 + 12) & 0xFC;
  v11 = v16;
  v16 = 0;
  *(_QWORD *)(v10 + 16) = v11;
  *(_DWORD *)(v10 + 24) = v17;
  *(_BYTE *)(v10 + 28) = v18 & 3 | *(_BYTE *)(v10 + 28) & 0xFC;
  v12 = v19;
  v19 = 0;
  *(_QWORD *)(v10 + 32) = v12;
  ++*(_DWORD *)(v7 - 4);
  sub_182CBA0(v9, &v14);
  return sub_182CBA0(v9, &v17);
}

