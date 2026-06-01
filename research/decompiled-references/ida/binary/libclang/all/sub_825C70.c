__int64 __fastcall sub_825C70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // r13
  __int64 v9; // r15
  char v10; // dl
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r12
  int v14; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int8 **v18; // rax
  unsigned int v19; // [rsp+Ch] [rbp-4Ch]
  __int64 v20[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
    v6 = *(_QWORD *)v6;
  if ( (*(_BYTE *)(v6 + 8) & 0x7Fu) - 56 > 3 )
    BUG();
  result = 0;
  if ( *(char *)(v6 - 36) >= 0 )
  {
    v8 = a4;
    v9 = sub_AB4240(*(_QWORD *)(a1 + 16), v6 - 64);
    if ( *(char *)(a4 + 29) < 0 )
    {
      v8 = sub_77A0C0(a4);
      if ( *(_DWORD *)(v8 + 68) > 0xFu )
        goto LABEL_7;
    }
    else if ( *(_DWORD *)(a4 + 68) > 0xFu )
    {
      goto LABEL_7;
    }
    sub_78B660(v8);
LABEL_7:
    v10 = *(_BYTE *)(a3 + 24);
    v11 = (unsigned int)((*(_DWORD *)(v8 + 68) >> 4) - 1);
    if ( (v10 & 1) == 0 )
    {
      if ( (*(_BYTE *)(a3 + 128) & 1) != 0 )
      {
        v19 = 2 * ((*(_BYTE *)(a4 + 28) & 0x7Fu) - 47 <= 2);
        v17 = 2259;
      }
      else
      {
        if ( (v10 & 2) == 0
          && (*(_DWORD *)(a3 + 56) == 1 && (v10 & 4) != 0
           || (*(_BYTE *)(a3 + 24) & 8) == 0
           || *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * ((*(_DWORD *)(a3 + 24) >> 4) - 1)) != *(_QWORD *)(a3 + 32)) )
        {
          sub_69F580(v20, a4 & 0xFFFFFFFFFFFFFFFBLL);
          v12 = *(unsigned int *)(a3 + 56);
          v13 = v20[0];
          if ( *(unsigned int *)(a3 + 60) < (unsigned __int64)(v12 + 1) )
          {
            sub_25D6060(a3 + 48, a3 + 64, v12 + 1, 8);
            v12 = *(unsigned int *)(a3 + 56);
          }
          *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8 * v12) = v13;
          v14 = *(_DWORD *)(a3 + 56) + 1;
          *(_DWORD *)(a3 + 56) = v14;
          if ( (*(_BYTE *)(a4 + 28) & 0x7Fu) - 47 <= 2 )
          {
            v15 = *(_QWORD *)(a4 + 48);
            *(_QWORD *)(a3 + 32) = 0;
            *(_QWORD *)(a3 + 40) = v15;
            *(_DWORD *)(a3 + 24) = *(_DWORD *)(a3 + 24) & 7 | (16 * v14);
          }
          goto LABEL_17;
        }
        v19 = 2 * ((*(_BYTE *)(a4 + 28) & 0x7Fu) - 47 <= 2);
        v17 = 2264;
      }
      v18 = (unsigned __int8 **)sub_A2E240(a1, a2, v17, 0);
      if ( v18 )
        sub_823450(v18, v19);
      *(_BYTE *)(a3 + 24) |= 1u;
      *(_DWORD *)(a3 + 56) = 0;
    }
LABEL_17:
    v16 = sub_70CF80(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(v9 + 48) + 8 * v11));
    *(_QWORD *)(a3 + 16) += v16;
    if ( v16 )
      *(_BYTE *)(a3 + 128) &= ~1u;
    return 1;
  }
  return result;
}

