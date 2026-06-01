__int64 __fastcall sub_CACE70(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // r15d
  char v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  char v21; // dl
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v26; // r15d
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  char v30; // r13
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = *(_QWORD *)(a2 + 16);
  v8 = *(_QWORD *)(a1 + 488);
  if ( (*(_BYTE *)(v7 + 1) & 6) != 0 )
  {
    if ( (*(_BYTE *)(a2 + 1) & 6) != 0 )
    {
LABEL_3:
      v9 = a2 | 4;
      goto LABEL_4;
    }
    v26 = 13;
    v27 = sub_CC2440(v8, *(_QWORD *)(a2 + 8));
    a3 = HIDWORD(v27);
  }
  else
  {
    v28 = sub_CC2440(v8, *(_QWORD *)(v7 + 8));
    v26 = v28;
    v29 = HIDWORD(v28);
    v30 = v29;
    if ( (*(_BYTE *)(a2 + 1) & 6) != 0 )
    {
      if ( (_BYTE)v29 )
        goto LABEL_3;
LABEL_16:
      v33[0] = a2 | 4;
      return sub_C85F80(a1, 0, 1, v33);
    }
    v27 = sub_CC2440(*(_QWORD *)(a1 + 488), *(_QWORD *)(a2 + 8));
    a3 = HIDWORD(v27);
    if ( !v30 )
      goto LABEL_16;
  }
  if ( !(_BYTE)a3 )
    goto LABEL_16;
  v9 = a2 | 4;
  if ( v26 != 13 && (_DWORD)v27 != 13 )
  {
    v33[0] = a2 | 4;
    if ( (unsigned __int8)sub_C85F80(a1, 0, v26 != (_DWORD)v27, v33) )
      return sub_CA8BA0(a1, a2, v22, v23, v24);
    return 0;
  }
LABEL_4:
  v10 = *(_QWORD *)(v7 + 8);
  v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42) <= 2u )
  {
    v31 = sub_F44710(v11, v10, a3, a4, a5);
    v12 = sub_CC2440(*(_QWORD *)(a1 + 488), v31);
  }
  else
  {
    v12 = sub_CC2440(*(_QWORD *)(a1 + 488), v10);
  }
  v16 = v12;
  v17 = BYTE4(v12);
  v18 = *(_QWORD *)(a2 + 8);
  v19 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42) <= 2u )
  {
    v32 = sub_F44710(v19, v18, v13, v14, v15);
    v20 = sub_CC2440(*(_QWORD *)(a1 + 488), v32);
  }
  else
  {
    v20 = sub_CC2440(*(_QWORD *)(a1 + 488), v18);
  }
  if ( BYTE4(v20) && v17 )
    v21 = v16 > 0xB || (unsigned int)v20 > 0xB;
  else
    v21 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(v7 + 8)
                                                                               & 0xFFFFFFFFFFFFFFF0LL);
  v33[0] = v9;
  if ( !(unsigned __int8)sub_C85F80(a1, 0, v21, v33) )
    return 0;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) != 2 )
    return sub_CA8BA0(a1, a2, v22, v23, v24);
  return sub_CA89D0(a1, v7, v22, v23, v24);
}

