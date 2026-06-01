__int64 __fastcall sub_9C78C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  bool v6; // al
  _BYTE *v7; // rdi
  unsigned int v9; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  unsigned __int8 **v14; // r12
  __int64 v15; // rax
  _QWORD *v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  char v23; // r15
  unsigned __int8 **v24; // rax
  unsigned __int8 **v25; // r12
  __int64 (__fastcall *v26)(_QWORD *); // rax
  unsigned __int64 v28[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( sub_97DA60(a3) && *(char *)(sub_A2CB40(a1) + 1) >= 0 )
  {
    v17 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
    sub_A2E050(a1, v17, 2303, 0);
    return 0;
  }
  if ( !*(_BYTE *)(a3 + 496) )
  {
    v18 = *(_QWORD *)(a3 + 8);
    if ( (v18 & 4) != 0 )
      goto LABEL_10;
    v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v19 || (*(_BYTE *)(v19 + 28) & 0x7Fu) - 33 > 3 )
      goto LABEL_10;
    if ( !(unsigned __int8)sub_7A5D20(v19) )
      goto LABEL_42;
  }
  v5 = *(_QWORD *)(a3 + 8);
  v6 = ((v5 >> 2) & 1) == 0;
  if ( !*(_BYTE *)(a3 + 500) )
  {
LABEL_4:
    if ( !v6 )
      goto LABEL_10;
    v7 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v7 )
      goto LABEL_10;
    goto LABEL_6;
  }
  if ( ((*(__int64 *)(a3 + 8) >> 2) & 1) != 0 )
    goto LABEL_10;
  v7 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v7[84] & 3) != 0 )
    return 1;
  if ( (v7[29] & 1) != 0 )
  {
    v20 = sub_79A2B0((__int64)v7);
    v21 = *v20;
    v22 = *v20 + 8LL * *((unsigned int *)v20 + 2);
    if ( v21 < v22 )
    {
      while ( *(_WORD *)(*(_QWORD *)v21 + 32LL) != 239 )
      {
        v21 += 8LL;
        if ( v22 == v21 )
          goto LABEL_42;
      }
    }
    else
    {
      if ( v21 == v22 )
        goto LABEL_42;
      while ( *(_WORD *)(*(_QWORD *)v22 + 32LL) != 239 )
      {
        v22 += 8LL;
        if ( v21 == v22 )
          goto LABEL_42;
      }
    }
    if ( v21 == v22 )
    {
LABEL_42:
      v5 = *(_QWORD *)(a3 + 8);
      v6 = ((v5 >> 2) & 1) == 0;
      goto LABEL_4;
    }
    return 1;
  }
LABEL_6:
  if ( (v7[28] & 0x7Fu) - 33 <= 3 && (unsigned __int8)sub_7A5D20((__int64)v7) )
    return 1;
LABEL_10:
  v9 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0 )
  {
    sub_A2E1A0(a1, v9, 110, 0);
    return 0;
  }
  v10 = *(_QWORD *)(a3 + 8);
  v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v10 & 4) != 0 )
    v11 = 0;
  if ( *(char *)(v11 + 28) < 0 )
    return 0;
  if ( (*(_BYTE *)(v11 + 28) & 0x7F) != 0x24 )
  {
    v12 = 0;
    goto LABEL_48;
  }
  if ( (*(_BYTE *)(v11 + 87) & 0x20) == 0 )
  {
    v12 = v11;
    goto LABEL_48;
  }
  v12 = *(_QWORD *)(v11 + 184);
  if ( (*(_BYTE *)(v12 + 84) & 3) == 0 )
  {
    v11 = *(_QWORD *)(v11 + 184);
    if ( (*(_BYTE *)(v12 + 87) & 0x20) == 0 )
    {
LABEL_48:
      v23 = *(_BYTE *)(v11 + 81) >> 5;
      if ( (unsigned __int8)sub_788920((_QWORD *)v11, (__int64)v28, 0) != 1
        && v23 != 1
        && (*(_BYTE *)(v11 + 84) & 3) != 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24)) )
      {
        return 0;
      }
      if ( (unsigned __int8)sub_788920((_QWORD *)v11, (__int64)v28, 0) && (*(_BYTE *)(v11 + 84) & 3) != 0 )
      {
        v26 = *(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)v11 + 72LL);
        if ( v26 == sub_78BB30 ? sub_78B990((_QWORD *)v11, v28) : (unsigned __int8)v26((_QWORD *)v11) )
          return 0;
      }
      v24 = (unsigned __int8 **)sub_A2E1A0(a1, v9, 2217, 1);
      v25 = v24;
      if ( v24 )
      {
        sub_9B5410(v24, (*(_BYTE *)(v11 + 84) & 3) != 0);
        sub_9B5410(v25, v12 != 0);
        sub_8356A0(v25, v11, 0xAu);
      }
      if ( (unsigned __int8)sub_788920((_QWORD *)v11, (__int64)v28, 0) && v28[0] )
      {
        if ( !(unsigned __int8)sub_788920((_QWORD *)v11, (__int64)v28, 0) )
          BUG();
        sub_A2DD70(a1, *(unsigned int *)(v28[0] + 24), 105);
        return 0;
      }
      goto LABEL_25;
    }
  }
  v13 = 0;
  v14 = (unsigned __int8 **)sub_A2E1A0(a1, v9, 2218, 1);
  if ( (*(_BYTE *)(v11 + 87) & 0x20) != 0 )
    v13 = *(_QWORD *)(v11 + 184);
  v15 = *(_QWORD *)(sub_79A2E0(v13 + 72) + 16);
  v16 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v15 & 4) != 0 )
    v16 = (_QWORD *)*v16;
  if ( v16 )
    v16 -= 8;
  if ( v14 )
    sub_8356A0(v14, (__int64)v16, 0xAu);
LABEL_25:
  sub_A2DD70(a1, *(unsigned int *)(v11 + 24), 105);
  return 0;
}

