void __fastcall sub_15358C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  int v8; // r12d
  __int16 v9; // r13
  __int16 v10; // r14
  unsigned __int64 v11; // rcx
  bool v12; // al
  __int64 *v13; // rbx
  unsigned int v14; // r15d
  unsigned int v15; // eax
  int v16; // r14d
  __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  int v21; // [rsp+Ch] [rbp-8Ch]
  unsigned __int8 *v22[17]; // [rsp+10h] [rbp-88h] BYREF

  v7 = *a1;
  v8 = *(_DWORD *)(*a1 + 16LL);
  v9 = *(_WORD *)(*a1 + 32LL);
  v10 = *(_WORD *)(*a1 + 34LL);
  v11 = *(_QWORD *)(*(_QWORD *)(*a1 + 96LL) + 264LL);
  if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v11 + 32), 0x867u, (unsigned int)v8, v11, a5, a6) == 1 )
    goto LABEL_5;
  if ( *((_BYTE *)a1 + 24) )
    goto LABEL_5;
  if ( *(_DWORD *)(*(_QWORD *)(v7 + 8) + 2296LL) != *((_DWORD *)a1 + 4) )
    goto LABEL_5;
  if ( v9 == 63 || v9 == 25 )
    goto LABEL_5;
  v12 = sub_10CCDE0(v9);
  v7 = *a1;
  if ( v12 || v8 < 0 || *((int *)a1 + 3) < 0 || *((int *)a1 + 2) < 0 )
    goto LABEL_5;
  if ( *((_DWORD *)a1 + 5) == 1 )
  {
    if ( *(_DWORD *)(v7 + 2544) )
    {
      *(_DWORD *)(v7 + 2544) = 0;
      v7 = *a1;
      goto LABEL_12;
    }
LABEL_5:
    *(_DWORD *)(v7 + 2544) = 0;
    return;
  }
LABEL_12:
  v13 = *(__int64 **)(*(_QWORD *)(v7 + 8) + 88LL);
  v14 = sub_1535650((__int64)v13, *((_DWORD *)a1 + 3));
  v21 = sub_1535650((__int64)v13, v8);
  v15 = sub_1535650((__int64)v13, *((_DWORD *)a1 + 2));
  if ( v21 != 0 && v14 != 0 && v15 && (v14 > v15 && v14 == v21 || (v10 & 1) == 0) )
  {
    v16 = sub_1022B40(v13, *((_DWORD *)a1 + 2), nullptr);
    if ( v16 != (unsigned int)sub_1022B40(v13, v8, nullptr) )
    {
      v17 = *a1;
      if ( v9 != 5 )
      {
LABEL_23:
        sub_1564820(v22, v17, (unsigned int)v8, 2151);
        sub_AE9DF0(v22, *((int *)a1 + 5), 2u);
        sub_AEA040((__int64)v22);
        sub_1564820(v22, *a1, *((unsigned int *)a1 + 2), 2056);
        sub_AEA040((__int64)v22);
        return;
      }
      v18 = *(_QWORD *)(v17 + 8);
      v19 = *(_QWORD *)(v18 + 2944);
      if ( v19 >= *(unsigned int *)(v18 + 2912) )
        v20 = sub_14180A0(v18, 1u);
      else
        v20 = *(_QWORD *)(v18 + 2904) + 24 * v19;
      if ( *(_WORD *)(v20 + 16) != 62 )
      {
        v17 = *a1;
        goto LABEL_23;
      }
    }
  }
}
