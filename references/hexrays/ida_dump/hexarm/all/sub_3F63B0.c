__int64 __fastcall sub_3F63B0(__int64 a1, unsigned __int8 a2, int a3, int a4, int a5)
{
  __int64 v7; // r12
  int *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 (__fastcall *v13)(__int64, int); // rax
  __int16 v14; // ax
  unsigned int v15; // esi
  __int64 v17; // [rsp+0h] [rbp-58h]
  int v18; // [rsp+1Ch] [rbp-3Ch]

  v7 = a3;
  v10 = *(int **)(a1 + 832);
  v11 = *(unsigned __int16 *)(a1 + 190);
  v12 = v10[157];
  v13 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v10 + 168LL);
  if ( v13 == sub_3EA010 )
    v18 = sub_3EA010((__int64)v10, v11);
  else
    v18 = v13((__int64)v10, v11);
  sub_3F56D0(a1, 0x47u, a2, a4, a5, v12, 0);
  v14 = *(_WORD *)(a1 + 48);
  v15 = 70 - (((v14 - 622) & 0xFFFD) == 0);
  if ( (unsigned __int16)(v14 - 624) <= 1u )
  {
    sub_3F56D0(a1, v15, a2, v18, v12, v12, 0);
    return sub_3F56D0(a1, 0x44u, a2, v12, 0x3BEA45E214ADDC55LL, v7, 0);
  }
  else
  {
    sub_3F56D0(a1, v15, a2, v18, v12, v7, 0);
    return v17;
  }
}
