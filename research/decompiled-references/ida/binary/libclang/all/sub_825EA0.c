__int64 __fastcall sub_825EA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 v8; // r12
  char v9; // dl
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 result; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned __int8 **v19; // rax
  unsigned int v20; // [rsp+Ch] [rbp-4Ch]
  __int64 v21[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = a5;
  if ( a5 )
  {
LABEL_2:
    v8 = a4;
    if ( *(char *)(a4 + 29) < 0 )
    {
      v8 = sub_77A0C0(a4);
      if ( *(_DWORD *)(v8 + 68) > 0xFu )
        goto LABEL_4;
    }
    else if ( *(_DWORD *)(a4 + 68) > 0xFu )
    {
      goto LABEL_4;
    }
    sub_78B660(v8);
LABEL_4:
    v9 = *(_BYTE *)(a3 + 24);
    v10 = (unsigned int)((*(_DWORD *)(v8 + 68) >> 4) - 1);
    if ( (v9 & 1) == 0 )
    {
      if ( (*(_BYTE *)(a3 + 128) & 1) != 0 )
      {
        v20 = 2 * ((*(_BYTE *)(a4 + 28) & 0x7Fu) - 47 <= 2);
        v18 = 2259;
      }
      else
      {
        if ( (v9 & 2) == 0
          && (*(_DWORD *)(a3 + 56) == 1 && (v9 & 4) != 0
           || (*(_BYTE *)(a3 + 24) & 8) == 0
           || *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * ((*(_DWORD *)(a3 + 24) >> 4) - 1)) != *(_QWORD *)(a3 + 32)) )
        {
          sub_69F580(v21, a4 & 0xFFFFFFFFFFFFFFFBLL);
          v11 = *(unsigned int *)(a3 + 56);
          v12 = v21[0];
          if ( *(unsigned int *)(a3 + 60) < (unsigned __int64)(v11 + 1) )
          {
            sub_25D6060(a3 + 48, a3 + 64, v11 + 1, 8);
            v11 = *(unsigned int *)(a3 + 56);
          }
          *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8 * v11) = v12;
          v13 = *(_DWORD *)(a3 + 56) + 1;
          *(_DWORD *)(a3 + 56) = v13;
          if ( (*(_BYTE *)(a4 + 28) & 0x7Fu) - 47 <= 2 )
          {
            v14 = *(_QWORD *)(a4 + 48);
            *(_QWORD *)(a3 + 32) = 0;
            *(_QWORD *)(a3 + 40) = v14;
            *(_DWORD *)(a3 + 24) = *(_DWORD *)(a3 + 24) & 7 | (16 * v13);
          }
          goto LABEL_14;
        }
        v20 = 2 * ((*(_BYTE *)(a4 + 28) & 0x7Fu) - 47 <= 2);
        v18 = 2264;
      }
      v19 = (unsigned __int8 **)sub_A2E240(a1, a2, v18, 0);
      if ( v19 )
        sub_823450(v19, v20);
      *(_BYTE *)(a3 + 24) |= 1u;
      *(_DWORD *)(a3 + 56) = 0;
    }
LABEL_14:
    v15 = sub_70CF80(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(v5 + 48) + 8 * v10));
    *(_QWORD *)(a3 + 16) += v15;
    if ( v15 )
      *(_BYTE *)(a3 + 128) &= ~1u;
    return 1;
  }
  v17 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
    v17 = *(_QWORD *)v17;
  if ( (*(_BYTE *)(v17 + 8) & 0x7Fu) - 56 > 3 )
    BUG();
  result = 0;
  if ( *(char *)(v17 - 36) >= 0 )
  {
    v5 = sub_AB4240(*(_QWORD *)(a1 + 16), v17 - 64);
    goto LABEL_2;
  }
  return result;
}

