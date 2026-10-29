unsigned __int64 __fastcall sub_1C36DD0(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  _BYTE *v13; // rax
  __int64 v14; // rdx
  unsigned __int8 v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v2 != 43 && v2 != 40 || !sub_9B48E0(a2) )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v20 = sub_B8C3D0(a2, a2, v5, v6, v7, v8);
    v21 = *v20;
    v22 = *v20 + 8LL * *((unsigned int *)v20 + 2);
    if ( *v20 >= v22 )
    {
      if ( v21 != v22 )
      {
        while ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 148 )
        {
          v22 += 8LL;
          if ( v21 == v22 )
            goto LABEL_6;
        }
        return 0;
      }
    }
    else
    {
      v23 = *v20;
      while ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 148 )
      {
        v23 += 8LL;
        if ( v22 == v23 )
          goto LABEL_6;
      }
      if ( v22 != v23 )
        return 0;
    }
  }
LABEL_6:
  v24[0] = *(_QWORD *)(a2 + 48);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(unsigned __int8 *)(v9 + 16);
  v11 = (unsigned int)(v10 - 25);
  if ( (unsigned __int8)(v10 - 25) <= 1u || (v11 = (unsigned int)(unsigned __int8)v10 - 43, (unsigned int)v11 <= 1) )
  {
    if ( (_BYTE)v10 == 44 )
    {
      v12 = sub_C1BEF0((__int64)v24, v24[0] & 0xFFFFFFFFFFFFFFF0LL, v24[0], v11);
      if ( (v12 & 4) == 0 )
      {
        v13 = (_BYTE *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (v13[8] & 4) == 0 )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          v15 = *(_BYTE *)(v14 + 16);
          if ( (unsigned __int8)(v15 - 25) > 1u
            && (unsigned int)v15 - 43 > 1
            && (v15 != 13 || ((*(_WORD *)(v14 + 18) >> 3) & 0x1FF) != 0x1B3) )
          {
            goto LABEL_15;
          }
        }
      }
    }
    return 0;
  }
  if ( (_BYTE)v10 == 13 && ((*(_WORD *)(v9 + 18) >> 3) & 0x1FF) == 0x1B3
    || (v24[0] & 4) != 0
    || (byte_8[v24[0] & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
  {
    return 0;
  }
LABEL_15:
  if ( !sub_B73A10(a2) && !sub_F62670(*(_QWORD *)(v24[0] & 0xFFFFFFFFFFFFFFF0LL), nullptr, v16, v17, v18, v19) )
  {
    sub_A980A0(*(_QWORD *)(a1 + 248), v24[0]);
    sub_AB0BF0(*(_QWORD **)(a1 + 248), a2, 0);
  }
  return a2;
}
