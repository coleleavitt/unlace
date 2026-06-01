__int64 __fastcall sub_175C980(__int64 *a1, __int64 a2, unsigned __int8 a3, double a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int16 v6; // ax
  __int64 v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int16 **v11; // rsi
  int v12; // edx
  _BYTE *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // r14
  unsigned int v18; // r15d
  unsigned int v19; // eax
  __int64 v20; // [rsp+0h] [rbp-B0h]
  __int64 v21; // [rsp+0h] [rbp-B0h]
  char v22; // [rsp+17h] [rbp-99h] BYREF
  __int64 v23; // [rsp+18h] [rbp-98h] BYREF
  char v24; // [rsp+20h] [rbp-90h]
  void *ptr; // [rsp+28h] [rbp-88h] BYREF
  __int64 v26; // [rsp+30h] [rbp-80h]
  _BYTE v27[120]; // [rsp+38h] [rbp-78h] BYREF

  if ( !a2 )
    return 0;
  v5 = a2;
  v6 = *(_WORD *)a2 & 0x1FF;
  if ( ((v6 + 452) & 0x1FFu) <= 1 )
  {
    v5 = *(_QWORD *)(a2 + 16);
    v6 = *(_WORD *)v5 & 0x1FF;
  }
  if ( v6 == 125 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 16LL);
    v6 = *(_WORD *)v5 & 0x1FF;
  }
  if ( v6 != 48 )
    goto LABEL_11;
  v7 = *(_QWORD *)(v5 + 16);
  v5 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v7 & 4) != 0 )
    v5 = *(_QWORD *)(v5 + 40);
  while ( 1 )
  {
    v6 = *(_WORD *)v5 & 0x1FF;
LABEL_11:
    if ( v6 != 116 )
      break;
    v5 = *(_QWORD *)(v5 + 24);
  }
  if ( v6 == 79 )
  {
    v5 = sub_BFA3B0(v5);
    v6 = *(_WORD *)v5 & 0x1FF;
  }
  if ( v6 == 99 )
    return sub_175C980(a1, *(_QWORD *)(v5 + 16), a3);
  if ( (unsigned int)v6 - 113 > 1 )
  {
    if ( !a3 )
      return sub_175B800(a1, (unsigned __int16 *)v5);
    if ( v6 == 100 )
      goto LABEL_20;
    if ( v6 != 54 )
      return sub_175B800(a1, (unsigned __int16 *)v5);
    return sub_18C2A90(*a1, 0, 0, 0, 0);
  }
  if ( !a3 && (*(_QWORD *)v5 & 0x200000LL) == 0 )
    return sub_175B800(a1, (unsigned __int16 *)v5);
  switch ( v6 )
  {
    case 'd':
LABEL_20:
      v9 = sub_EEC8C0(v5, a2, a4);
      return sub_18C2A90(*a1, (unsigned int)v9, HIDWORD(v9), 0, 0);
    case '6':
      return sub_18C2A90(*a1, 0, 0, 0, 0);
    case 'r':
      return sub_175B800(a1, (unsigned __int16 *)v5);
  }
  if ( (*(_QWORD *)v5 & 0x400000LL) != 0 )
    return sub_175C980(a1, *(_QWORD *)(v5 + 40), a3);
  sub_14EE070((__int64)&v23, *a1, 0, (*(_QWORD *)v5 & 0x200000LL) != 0);
  v10 = *a1;
  v11 = (unsigned __int16 **)(v5 + 40);
  v22 = 0;
  *(_BYTE *)(*(_QWORD *)(v10 + 4616) + 640LL * *(unsigned int *)(v10 + 4624) - 39) = *(_BYTE *)(*(_QWORD *)(v10 + 4616)
                                                                                              + ((5LL
                                                                                                * *(unsigned int *)(v10 + 4624)
                                                                                                - 10) << 7)
                                                                                              + 601);
  *(_BYTE *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 37) = *(_BYTE *)(*(_QWORD *)(*a1 + 4616)
                                                                                              + ((5LL
                                                                                                * *(unsigned int *)(*a1 + 4624)
                                                                                                - 10) << 7)
                                                                                              + 603);
  v12 = *(_DWORD *)(v5 + 32);
  ptr = v27;
  v26 = 0x800000000LL;
  if ( (*(_WORD *)v5 & 0x1FF) == 0x72 )
    v11 = (unsigned __int16 **)(v5 + 48);
  if ( (unsigned __int8)sub_175C6E0(a1, v11, v12, 1, (__int64)&ptr, &v22) )
  {
    v13 = ptr;
    result = 1;
  }
  else
  {
    v13 = ptr;
    if ( (*(_QWORD *)v5 & 0x200000LL) != 0 )
    {
      v16 = sub_C94490(v5);
      v17 = (unsigned int)v26;
      v18 = v16;
      v19 = sub_C94450(v5);
      result = sub_1909BB0(*a1, v19, v13, v17, v18);
      v13 = ptr;
    }
    else
    {
      v14 = *(unsigned int *)(v5 + 24);
      v15 = *(unsigned int *)(v5 + 28);
      if ( (_DWORD)v14 && (_DWORD)v15 )
      {
        result = sub_18C2A90(*a1, v14, v15, ptr, (unsigned int)v26);
        v13 = ptr;
      }
      else
      {
        result = 0;
      }
    }
  }
  if ( v13 != v27 )
  {
    v20 = result;
    free(v13);
    result = v20;
  }
  if ( v24 )
  {
    v21 = result;
    sub_190D5E0(v23);
    return v21;
  }
  return result;
}
