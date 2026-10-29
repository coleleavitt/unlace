__int64 __fastcall sub_C15060(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r15
  char v17; // al
  __int64 v18; // rax
  __int64 v19; // r13
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int8 **v25; // rax
  __int64 v26; // [rsp+8h] [rbp-50h]
  __int64 v27[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
    v5 = *(_QWORD *)v5;
  if ( (*(_BYTE *)(v5 + 8) & 0x7Fu) - 58 > 3 )
    BUG();
  result = 0;
  v7 = v5 - 64;
  if ( *(char *)(v5 - 36) >= 0 )
  {
    v10 = a4;
    v14 = sub_EDE580(*(_QWORD *)(a1 + 16), v7);
    if ( *(char *)(a4 + 29) < 0 )
    {
      v10 = sub_B72720(a4);
      v15 = *(unsigned int *)(v10 + 68);
      if ( (v15 & 0xFFFFFFF0) != 0 )
        goto LABEL_7;
    }
    else
    {
      v15 = *(unsigned int *)(v10 + 68);
      if ( (v15 & 0xFFFFFFF0) != 0 )
        goto LABEL_7;
    }
    sub_B7EAB0(v10, v7, v15, v11, v12, v13);
    LODWORD(v15) = *(_DWORD *)(v10 + 68);
LABEL_7:
    v16 = ((unsigned int)v15 >> 4) - 1;
    v17 = *(_BYTE *)(a3 + 24);
    if ( (v17 & 1) == 0 )
    {
      if ( (*(_BYTE *)(a3 + 128) & 1) != 0 )
      {
        v26 = 2LL * ((*(_BYTE *)(a4 + 28) & 0x7Fu) - 49 < 3);
        v24 = 2461;
      }
      else
      {
        if ( (v17 & 2) == 0
          && (*(_DWORD *)(a3 + 56) == 1 && (v17 & 4) != 0
           || (v17 & 8) == 0
           || *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * ((*(_DWORD *)(a3 + 24) >> 4) - 1)) != *(_QWORD *)(a3 + 32)) )
        {
          sub_A4F680(v27, a4 & 0xFFFFFFFFFFFFFFFBLL);
          v18 = *(unsigned int *)(a3 + 56);
          v19 = v27[0];
          if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 60) )
          {
            sub_2237220(a3 + 48, a3 + 64, v18 + 1, 8);
            v18 = *(unsigned int *)(a3 + 56);
          }
          *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8 * v18) = v19;
          v20 = *(_DWORD *)(a3 + 56) + 1;
          *(_DWORD *)(a3 + 56) = v20;
          if ( (*(_BYTE *)(a4 + 28) & 0x7Fu) - 49 <= 2 )
          {
            v21 = *(_QWORD *)(a4 + 48);
            *(_BYTE *)(a3 + 24) &= ~8u;
            *(_QWORD *)(a3 + 32) = 0;
            *(_QWORD *)(a3 + 40) = v21;
            *(_DWORD *)(a3 + 24) = *(_DWORD *)(a3 + 24) & 0xF | (16 * v20);
          }
          goto LABEL_17;
        }
        v26 = 2LL * ((*(_BYTE *)(a4 + 28) & 0x7Fu) - 49 < 3);
        v24 = 2466;
      }
      v25 = (unsigned __int8 **)sub_E33C90(a1, a2, v24, 0);
      if ( v25 )
        sub_C11320(v25, v26);
      *(_BYTE *)(a3 + 24) |= 1u;
      *(_DWORD *)(a3 + 56) = 0;
    }
LABEL_17:
    v22 = sub_A97FF0(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(v14 + 48) + 8 * v16));
    *(_QWORD *)(a3 + 16) += v22;
    v23 = v22;
    result = 1;
    if ( v23 )
      *(_BYTE *)(a3 + 128) &= ~1u;
  }
  return result;
}
