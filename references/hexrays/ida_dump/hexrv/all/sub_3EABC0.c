void __fastcall sub_3EABC0(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // r12d
  __int64 v9; // rbx
  __int64 v10; // r14
  int v11; // edx
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // r15d
  __int64 v17; // [rsp-10h] [rbp-48h]

  v6 = *(_QWORD *)(a1 + 832);
  v7 = *(_QWORD *)(v6 + 712);
  if ( !v7 )
    goto LABEL_10;
  v8 = a2;
  v9 = a1;
  v10 = *(int *)(*(_QWORD *)(v6 + 704) + 4 * v7 - 4);
  *(_QWORD *)(v6 + 712) = v7 - 1;
  v11 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
  if ( v11 <= 4
    || (v12 = *(unsigned __int16 *)(a1 + 48), LOWORD(v12) = v12 - 476, (unsigned __int16)v12 > 0x17u)
    || (v13 = 13371391, !_bittest64(&v13, v12)) )
  {
    a2 = 4;
    sub_3E8D60(a1, 4u, v11, a4, 0x3BEA45E214ADDC55LL, v10, 0);
    a1 = v17;
    if ( !*(_QWORD *)(v9 + 192) )
      goto LABEL_9;
LABEL_6:
    v14 = *(_QWORD *)(v9 + 832);
    v15 = *(_QWORD *)(v14 + 712);
    if ( v15 )
    {
      v16 = *(_DWORD *)(*(_QWORD *)(v14 + 704) + 4 * v15 - 4);
      *(_QWORD *)(v14 + 712) = v15 - 1;
      sub_3E9B00(v9, *(_QWORD *)(v9 + 192), *(unsigned __int8 *)(v9 + 184), v16, 1);
      sub_3E8D60(v9, 0x16u, *(_DWORD *)(*(_QWORD *)(v9 + 832) + 84LL), v10, v16, v10, 0);
      sub_3E6F70(*(_QWORD *)(v9 + 832), v16);
      goto LABEL_9;
    }
LABEL_10:
    sub_3E4E50(a5, a1, a2);
  }
  sub_3E8D60(a1, 4u, v11, a4, 0x3BEA45E214ADDC55LL, v10, 0);
  a2 = 4;
  sub_3EA150(a1, 4, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL), v10, v10, 0, a5);
  if ( *(_QWORD *)(a1 + 192) )
    goto LABEL_6;
LABEL_9:
  sub_3E8D60(v9, 0xCu, *(_DWORD *)(*(_QWORD *)(v9 + 832) + 84LL), v10, a3, v10, 0);
  sub_3E9170(v9, v8, v10);
  sub_3E6F70(*(_QWORD *)(v9 + 832), v10);
}
