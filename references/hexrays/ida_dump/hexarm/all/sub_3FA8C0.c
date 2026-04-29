unsigned __int64 __fastcall sub_3FA8C0(
        __int64 a1,
        double a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // r15
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  unsigned __int64 v14; // rax
  int v15; // eax
  char v16; // al
  char v17; // [rsp+Ch] [rbp-34Ch]
  _DWORD v18[92]; // [rsp+10h] [rbp-348h] BYREF
  _QWORD v19[59]; // [rsp+180h] [rbp-1D8h] BYREF

  v19[51] = __readfsqword(0x28u);
  v7 = *(_BYTE *)(a1 + 56);
  qmemcpy(v19, (const void *)(a1 + 392), 0x198u);
  qmemcpy(v18, (const void *)(a1 + 24), 0x168u);
  v8 = v7 & 0xF;
  while ( 1 )
  {
    v9 = v18[7];
    v10 = LOWORD(v18[6]);
    v11 = v19[1];
    if ( LOWORD(v18[6]) > 0x50u )
      break;
    if ( LOWORD(v18[6]) <= 0x11u )
    {
      if ( LOWORD(v18[6]) == 4 )
        goto LABEL_6;
    }
    else
    {
      v10 = (unsigned int)LOWORD(v18[6]) - 18;
      if ( ((1LL << (LOBYTE(v18[6]) - 18)) & 0x3000000F) != 0 )
        goto LABEL_7;
      if ( ((1LL << (LOBYTE(v18[6]) - 18)) & 0x4000000000002020LL) != 0 )
      {
LABEL_6:
        if ( (v18[7] & 1) != 0 )
          goto LABEL_7;
        v17 = v18[7];
        v16 = is_call_insn(v18, v18[7] & 1, v18[7], v10, a6, a7);
        LOBYTE(v9) = v17;
        if ( v16 )
          goto LABEL_7;
        goto LABEL_18;
      }
    }
    if ( (v18[7] & 1) != 0 )
      goto LABEL_13;
LABEL_18:
    v9 &= 1u;
    if ( (_DWORD)v9 )
      goto LABEL_7;
    v14 = v19[1];
LABEL_20:
    if ( v14 >= v19[2] || (unsigned int)sub_1D5710(v19, (__int64)v18, v9, v10, a6, a7, a2) )
      goto LABEL_7;
    v15 = v18[8] & 0xF;
    if ( v8 != v15 )
    {
      v12 = *(_QWORD *)(a1 + 848);
      if ( *(_QWORD *)(a1 + 856) < v12 )
        goto LABEL_8;
      v8 ^= 1u;
      if ( v15 != v8 )
        goto LABEL_8;
      *(_QWORD *)(a1 + 848) = v11;
    }
  }
  LOWORD(v10) = LOWORD(v18[6]) - 521;
  if ( (unsigned __int16)(LOWORD(v18[6]) - 521) <= 1u )
    goto LABEL_7;
  if ( (v18[7] & 1) == 0 )
    goto LABEL_18;
LABEL_13:
  if ( BYTE1(v18[10]) == 1 && HIWORD(v18[11]) == 15 )
  {
    v14 = v19[1];
    goto LABEL_20;
  }
LABEL_7:
  v12 = *(_QWORD *)(a1 + 848);
LABEL_8:
  *(_QWORD *)(a1 + 856) = v11;
  if ( *(_QWORD *)(a1 + 40) < v12 )
    return v12;
  return v11;
}
