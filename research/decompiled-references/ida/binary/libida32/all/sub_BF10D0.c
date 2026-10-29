__int64 __fastcall sub_BF10D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v8; // r12
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r13
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // r12
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 result; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int8 **v23; // rax
  __int64 v24; // [rsp+8h] [rbp-50h]
  __int64 v25[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = a5;
  v8 = a2;
  if ( a5 )
  {
LABEL_2:
    v10 = a4;
    if ( *(char *)(a4 + 29) < 0 )
    {
      v10 = sub_B4E9E0(a4);
      v11 = *(unsigned int *)(v10 + 68);
      if ( (v11 & 0xFFFFFFF0) != 0 )
        goto LABEL_4;
    }
    else
    {
      v11 = *(unsigned int *)(a4 + 68);
      if ( (v11 & 0xFFFFFFF0) != 0 )
        goto LABEL_4;
    }
    sub_B5AD70(v10, a2, v11, a4, a5, a6);
    LODWORD(v11) = *(_DWORD *)(v10 + 68);
LABEL_4:
    v12 = ((unsigned int)v11 >> 4) - 1;
    v13 = *(_BYTE *)(a3 + 24);
    if ( (v13 & 1) == 0 )
    {
      if ( (*(_BYTE *)(a3 + 128) & 1) != 0 )
      {
        v24 = 2LL * ((*(_BYTE *)(a4 + 28) & 0x7Fu) - 49 < 3);
        v22 = 2461;
      }
      else
      {
        if ( (v13 & 2) == 0
          && (*(_DWORD *)(a3 + 56) == 1 && (v13 & 4) != 0
           || (v13 & 8) == 0
           || *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * ((*(_DWORD *)(a3 + 24) >> 4) - 1)) != *(_QWORD *)(a3 + 32)) )
        {
          sub_A2B940(v25, a4 & 0xFFFFFFFFFFFFFFFBLL);
          v14 = *(unsigned int *)(a3 + 56);
          v15 = v25[0];
          if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 60) )
          {
            sub_22134E0(a3 + 48, a3 + 64, v14 + 1, 8);
            v14 = *(unsigned int *)(a3 + 56);
          }
          *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8 * v14) = v15;
          v16 = *(_DWORD *)(a3 + 56) + 1;
          *(_DWORD *)(a3 + 56) = v16;
          if ( (*(_BYTE *)(a4 + 28) & 0x7Fu) - 49 <= 2 )
          {
            v17 = *(_QWORD *)(a4 + 48);
            *(_BYTE *)(a3 + 24) &= ~8u;
            *(_QWORD *)(a3 + 32) = 0;
            *(_QWORD *)(a3 + 40) = v17;
            *(_DWORD *)(a3 + 24) = *(_DWORD *)(a3 + 24) & 0xF | (16 * v16);
          }
          goto LABEL_14;
        }
        v24 = 2LL * ((*(_BYTE *)(a4 + 28) & 0x7Fu) - 49 < 3);
        v22 = 2466;
      }
      v23 = (unsigned __int8 **)sub_E0FF50(a1, v8, v22, 0);
      if ( v23 )
        sub_BED5E0(v23, v24);
      *(_BYTE *)(a3 + 24) |= 1u;
      *(_DWORD *)(a3 + 56) = 0;
    }
LABEL_14:
    v18 = sub_A742B0(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(v6 + 48) + 8 * v12));
    *(_QWORD *)(a3 + 16) += v18;
    v19 = v18;
    result = 1;
    if ( v19 )
      *(_BYTE *)(a3 + 128) &= ~1u;
    return result;
  }
  v21 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
    v21 = *(_QWORD *)v21;
  if ( (*(_BYTE *)(v21 + 8) & 0x7Fu) - 58 > 3 )
    BUG();
  result = 0;
  a2 = v21 - 64;
  if ( *(char *)(v21 - 36) >= 0 )
  {
    v6 = sub_EBA840(*(_QWORD *)(a1 + 16), a2);
    goto LABEL_2;
  }
  return result;
}

