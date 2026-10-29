void __fastcall sub_16F5360(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4, __m128i a5, double a6)
{
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int16 v12; // ax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // r12
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-50h]
  _BYTE v23[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v10 = *(unsigned int *)(a2 + 16);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x80 )
    v11 = *(_QWORD *)(a2 + 24);
  else
    v11 = *(_QWORD *)(a2 + 32);
  sub_16F5530(a1, v11, v10);
  v12 = *(_WORD *)a2 & 0x1FF;
  if ( v12 == 128 )
  {
    v13 = *(_QWORD *)(a2 + 32);
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 40);
    if ( v12 == 129 )
      v13 = *(_QWORD *)(a2 + 24);
  }
  v23[0] = 0;
  sub_16F5290(a1, v13, a4, a3, v23, a5, a6);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x80 )
    v14 = *(_QWORD *)(a2 + 40);
  else
    v14 = *(_QWORD *)(a2 + 48);
  sub_16F5290(a1, v14, a4, a3, v23, a5, a6);
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v17 + 16) == 13 && ((*(_WORD *)(v17 + 18) >> 3) & 0x1FF) == 0x1B4 )
    sub_16D6F70(a1, a2, a5, a6);
  if ( v23[0] )
  {
    if ( (unsigned __int8)sub_FD3830(
                            *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
                            0x1B60u,
                            a3,
                            *(_QWORD *)(a1 + 264),
                            v15,
                            v16) == 1 )
    {
      v22 = *(_QWORD *)(a2 + 8);
      if ( v22 != a4 )
      {
        v23[0] = 0;
        v18 = sub_BFBAE0(v13);
        sub_16F1980(a1, v18, v22, a3, v23, 0, a5, a6);
        if ( !v23[0] )
        {
          v19 = *(_QWORD *)(a2 + 8);
          if ( (*(_WORD *)a2 & 0x1FF) == 0x80 )
            v20 = *(_QWORD *)(a2 + 40);
          else
            v20 = *(_QWORD *)(a2 + 48);
          v21 = sub_BFBAE0(v20);
          sub_16F1980(a1, v21, v19, a3, v23, 0, a5, a6);
        }
      }
    }
  }
}
