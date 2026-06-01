__int64 __fastcall sub_18C7FE0(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // r14
  _BYTE *v6; // r12
  bool v7; // al
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  int *v14; // r14
  int v15; // eax

  if ( !a3 )
  {
    sub_18C79E0(a1, a2, 4);
    result = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624);
    *(_BYTE *)(result - 44) = 0;
    return result;
  }
  if ( (*(_BYTE *)(a3 + 84) & 3) == 2 )
    a2 = 5;
  sub_18C79E0(a1, a2, 4);
  v4 = *(unsigned int *)(a1 + 4624);
  v5 = *(_QWORD *)(a1 + 4616);
  v6 = (_BYTE *)(v5 + 640 * v4 - 640);
  v6[596] = 0;
  v7 = *(char *)(*(_QWORD *)(a1 + 232) + 1LL) < 0 && sub_B749D0(a3);
  v6[598] = v7;
  if ( (*(_BYTE *)(a3 + 80) & 0x7Fu) - 35 > 3 )
  {
    result = *(_BYTE *)(a3 + 84) & 3;
LABEL_22:
    v6[597] = (_BYTE)result == 2;
    return result;
  }
  v8 = *(_QWORD *)(sub_B8C1B0(a3 + 72) + 16);
  if ( (v8 & 4) != 0 )
    v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v9 )
    BUG();
  v10 = *(_QWORD *)(v9 + 64);
  result = *(_BYTE *)(a3 + 84) & 3;
  if ( !v10 || (*(_BYTE *)(v10 + 10) & 0x20) == 0 )
    goto LABEL_22;
  if ( (_BYTE)result == 2 )
    goto LABEL_28;
  if ( (*(_BYTE *)(a3 + 80) & 0x7Fu) - 35 > 3 )
    goto LABEL_25;
  v12 = sub_B72690(a3 + 72);
  if ( !v12 )
    BUG();
  v13 = *(_QWORD *)(v12 + 64);
  if ( !v13 || (*(_BYTE *)(v13 + 10) & 0x20) == 0 )
    goto LABEL_25;
  v14 = (int *)(((5 * v4 - 10) << 7) + v5);
  v15 = *v14;
  if ( (unsigned int)(*v14 - 4) <= 1 )
  {
LABEL_28:
    result = 1;
    goto LABEL_26;
  }
  if ( v15 != 2 && v15 != 6 )
  {
LABEL_25:
    result = 0;
    goto LABEL_26;
  }
  result = *((unsigned __int8 *)v14 + 597);
LABEL_26:
  v6[597] = result;
  return result;
}
