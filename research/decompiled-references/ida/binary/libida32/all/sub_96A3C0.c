__int64 __fastcall sub_96A3C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r9
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r14
  __int64 v11; // rbp
  int v12; // r13d
  __int64 v13; // r10
  __int64 v14; // rsi
  void (*v15)(); // r15
  __int64 v16; // r14
  _BOOL8 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-50h]
  __int64 v24[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a2 + 32);
  LOBYTE(v24[0]) = 0;
  result = sub_969060(v24, v3);
  if ( !result )
    return result;
  v5 = *(_QWORD *)(result + 16);
  result = *(_BYTE *)(v5 + 28) & 0x7F;
  if ( (_BYTE)result != 43 )
    return result;
  v6 = *(_QWORD **)(a1 + 80);
  v7 = *(unsigned int *)(a1 + 88);
  v24[0] = v5;
  result = (__int64)sub_966D20(v6, (__int64)&v6[v7], v24);
  if ( v9 == result )
    return result;
  result = (unsigned int)((result - v8) >> 3);
  v10 = 16 * result;
  v11 = 16 * result + *(_QWORD *)(a1 + 32);
  v12 = *(_DWORD *)v11;
  if ( (*(_DWORD *)v11 & 3) != 3 || v12 == 15 )
  {
    if ( v12 != 15 )
    {
      *(_DWORD *)v11 = 3;
      *(_QWORD *)(v11 + 8) = a2;
    }
    return result;
  }
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(_QWORD *)(v8 + 8 * result);
  v15 = *(void (**)())(*(_QWORD *)v13 + 16LL);
  if ( (*(_BYTE *)(v14 + 29) & 1) != 0 )
  {
    v23 = *(_QWORD *)(a1 + 16);
    v18 = sub_B68690(v14);
    v13 = v23;
    v19 = *(_QWORD *)v18;
    v20 = *(_QWORD *)v18 + 8LL * *(unsigned int *)(v18 + 8);
    if ( *(_QWORD *)v18 < v20 )
    {
      v21 = *(_QWORD *)v18;
      while ( 1 )
      {
        v19 = v21;
        if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) == 414 )
          break;
        v21 += 8;
        if ( v20 == v21 )
        {
          v16 = *(_QWORD *)(a1 + 32) + v10;
          v17 = 1;
          goto LABEL_11;
        }
      }
      v16 = *(_QWORD *)(a1 + 32) + v10;
      goto LABEL_26;
    }
    v16 = *(_QWORD *)(a1 + 32) + v10;
    if ( v19 != v20 )
    {
      if ( *(_WORD *)(*(_QWORD *)v20 + 36LL) == 414 )
      {
LABEL_26:
        v17 = v19 == v20;
        goto LABEL_11;
      }
      v22 = v20 + 8;
      while ( 1 )
      {
        v20 = v22;
        if ( v19 == v22 )
          break;
        v22 += 8LL;
        if ( *(_WORD *)(*(_QWORD *)v20 + 36LL) == 414 )
          goto LABEL_26;
      }
    }
    v17 = 1;
    goto LABEL_11;
  }
  v16 = 16 * result + *(_QWORD *)(a1 + 32);
  v17 = 1;
LABEL_11:
  result = (__int64)nullsub_311;
  if ( v15 != nullsub_311 )
    result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _BOOL8, bool))v15)(
               v13,
               v14,
               *(_QWORD *)(v16 + 8),
               a2,
               v17,
               v12 == 3);
  *(_DWORD *)v11 = 15;
  *(_QWORD *)(v11 + 8) = 0;
  return result;
}

