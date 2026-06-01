__int64 __fastcall sub_A08E70(__int64 a1, unsigned int a2, unsigned int a3, int *a4, char a5)
{
  int *v5; // rax
  __int64 v7; // r15
  void *v8; // rdi
  int v9; // eax
  int *v10; // r14
  int *i; // r12
  void *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // ecx
  bool v18; // dl
  int *v19; // rbp
  int *j; // r12
  unsigned int v21; // [rsp+14h] [rbp-74h]
  void *v24; // [rsp+20h] [rbp-68h]
  __int64 v26; // [rsp+30h] [rbp-58h] BYREF
  __int64 v27; // [rsp+38h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-48h] BYREF
  __int64 v29; // [rsp+48h] [rbp-40h]

  v5 = a4;
  ++*(_DWORD *)(a1 + 200);
  v21 = *(_DWORD *)(*(_QWORD *)(a1 + 592) + 4LL * a2) & 0xFFFFFFF;
  v7 = *(_QWORD *)(a1 + 568) + 24LL * v21;
  if ( (a4[1] & 1) != 0 )
  {
    v26 = 0;
    v27 = 0;
    v28 = 1;
    v24 = qword_1C7F2C0;
    v29 = 0;
    sub_182C690(qword_1C7F2C0, &v26, a4);
    v5 = a4;
    v8 = v24;
    if ( (a4[5] & 1) == 0 )
    {
LABEL_3:
      v9 = v5[4];
      BYTE4(v28) &= ~1u;
      LODWORD(v28) = v9;
      goto LABEL_4;
    }
LABEL_14:
    sub_182C690(v8, &v28, v5 + 4);
LABEL_4:
    v10 = *(int **)v7;
    if ( *(_QWORD *)v7 )
    {
      for ( i = &v10[10 * *(v10 - 1)]; v10 != i; v10 += 10 )
      {
        if ( v10[8] != -1 )
          sub_3ED4D0((__int64)qword_1C7F2C0, v10, (__int64)&v26, (__int64)v10);
      }
    }
    v12 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v26);
    sub_182CBA0(v12, &v28);
    goto LABEL_10;
  }
  v17 = *a4;
  v18 = (v5[5] & 1) == 0;
  if ( *v5 != -1 )
  {
    if ( v17 == 1 && (v5[5] & 1) == 0 && v5[4] == 1 )
      goto LABEL_10;
LABEL_13:
    BYTE4(v26) &= 0xFCu;
    v27 = 0;
    v28 = 1;
    v8 = qword_1C7F2C0;
    v29 = 0;
    LODWORD(v26) = v17;
    if ( v18 )
      goto LABEL_3;
    goto LABEL_14;
  }
  if ( (v5[5] & 1) != 0 || v5[4] != 1 )
    goto LABEL_13;
  v19 = *(int **)v7;
  if ( *(_QWORD *)v7 )
  {
    for ( j = &v19[10 * *(v19 - 1)]; v19 != j; v19 += 10 )
    {
      if ( v19[8] != -1 )
        sub_1831620(qword_1C7F2C0, v19);
    }
  }
LABEL_10:
  sub_18290D0(*(_QWORD *)(a1 + 24), *(unsigned int *)(v7 + 8));
  v13 = *(_QWORD *)(a1 + 592);
  v14 = v13 + 4LL * a3;
  v15 = v13 + 4LL * a2;
  *(_DWORD *)v15 |= 0xFFFFFFFu;
  *(_DWORD *)v14 = v21 | *(_DWORD *)v14 & 0xF0000000;
  *(_DWORD *)(v7 + 12) = a3;
  *(_BYTE *)(v15 + 3) &= 0xCFu;
  *(_BYTE *)(v14 + 3) = *(_BYTE *)(v14 + 3) & 0xCF | 0x10;
  return sub_A08A40((_QWORD *)a1, a3, a5);
}

