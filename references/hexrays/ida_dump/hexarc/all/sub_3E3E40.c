unsigned __int64 __fastcall sub_3E3E40(
        _QWORD *a1,
        int a2,
        _DWORD *a3,
        double a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7)
{
  __int64 v9; // rsi
  __int16 v10; // ax
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // r14
  int v14; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  _DWORD v18[92]; // [rsp+0h] [rbp-348h] BYREF
  _QWORD v19[59]; // [rsp+170h] [rbp-1D8h] BYREF

  v19[51] = __readfsqword(0x28u);
  qmemcpy(v19, a1 + 49, 0x198u);
  qmemcpy(v18, a1 + 3, 0x168u);
  v9 = (__int64)(a1 + 48);
  v10 = v18[7];
  v11 = LOWORD(v18[6]);
  while ( 1 )
  {
    v12 = (unsigned int)(v11 - 15);
    v13 = v19[1];
    v14 = v10 & 0x100;
    if ( (unsigned __int16)v12 <= 0x38u )
    {
      a3 = (_DWORD *)(1LL << v12);
      if ( ((1LL << v12) & 0x101014000000000LL) != 0 )
        goto LABEL_6;
      v12 = (1LL << v12) & 9;
      if ( (_DWORD)v12 )
        break;
    }
    if ( v14 )
      goto LABEL_6;
    v16 = v19[1];
LABEL_12:
    if ( v16 >= v19[2] )
      goto LABEL_6;
    if ( (unsigned int)sub_1CEBD0(v19, (__int64)v18, (__int64)a3, v12, a6, a7, a4) )
      goto LABEL_6;
    v11 = LOWORD(v18[6]);
    if ( LOWORD(v18[6]) == 16 || v19[3] != -1 )
      goto LABEL_6;
    v10 = v18[7];
    if ( LOWORD(v18[6]) == 43 || LOWORD(v18[6]) <= 4u )
    {
      v9 = 0;
    }
    else
    {
      v9 = v18[7] & 0x1F;
      if ( (v18[7] & 0x10) != 0 )
        v9 = 16;
    }
    if ( a2 != (_DWORD)v9 )
    {
      a7 = a1[106];
      if ( a1[107] < a7 )
        goto LABEL_7;
      v17 = (unsigned int)(a2 - 1);
      a2 = 16;
      if ( (unsigned int)v17 <= 0xD )
      {
        a3 = dword_407800;
        a2 = dword_407800[v17];
      }
      if ( a2 != (_DWORD)v9 )
        goto LABEL_7;
      a1[106] = v13;
    }
  }
  if ( !v14 && !(unsigned __int8)is_call_insn(v18, v9, a3, v12, a6, a7) )
  {
    v16 = v19[1];
    goto LABEL_12;
  }
LABEL_6:
  a7 = a1[106];
LABEL_7:
  a1[107] = v13;
  if ( a1[5] < a7 )
    return a7;
  return v13;
}
