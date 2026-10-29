char __fastcall sub_F3EBA0(__int64 *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // rax
  __int64 *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rdi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned __int64 v28[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                              & 0xFFFFFFFFFFFFFFF0LL)
                                  + 16LL)
                       - 2) <= 4u )
  {
    v28[0] = sub_A4D710(a2, *a1);
    return sub_F3EBA0(v28, a2, a3);
  }
  v5 = *(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v5 & 8) != 0
    && (((*(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL] & 7LL
        | *(unsigned __int64 *)((char *)&qword_18 + (v5 & 0xFFFFFFFFFFFFFFF0LL))) >> 6)
      & 6) != 0 )
  {
    return 0;
  }
  v6 = (__int64 *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return 0;
  v7 = *v6;
  if ( sub_F34520(*v6) )
    return 1;
  if ( sub_F3E930(v7, nullptr, v8, v9, v10, v11) )
    return 0;
  v16 = v6[1];
  if ( (v16 & 8) != 0 )
  {
    v22 = *(unsigned int *)((char *)&qword_18 + (v16 & 0xFFFFFFFFFFFFFFF0LL) + 4);
    if ( v22 )
    {
      if ( (v22 & 2) != 0 )
        return 0;
    }
  }
  if ( sub_F3D400(*v6, 0, v12, v13, v14, v15) )
    return 1;
  v20 = *(_QWORD *)(*(_QWORD *)(*v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v21 = *(unsigned __int8 *)(v20 + 16);
  if ( (unsigned int)(v21 - 57) <= 1 )
    return 1;
  if ( (_BYTE)v21 == 13 )
    return ((*(_WORD *)(v20 + 18) >> 3) & 0x1FF) == 104;
  if ( (_BYTE)v21 != 48 )
    return 0;
  v24 = sub_F3D150(*(_QWORD **)(v20 + 24), 0, v21, v17, v18, v19);
  v27 = (*((_BYTE *)v24 + 28) & 0x7Fu) - 59;
  if ( (unsigned int)v27 > 2 )
    return (*((_BYTE *)sub_F3D150(*(_QWORD **)(v20 + 24), 0, v27, v23, v25, v26) + 75) & 0x20) == 0;
  if ( a3 )
    return sub_B799F0((__int64)v24, 0, v27, v23, v25, v26);
  return sub_B7A450((__int64)v24, 0, v27, v23, v25, v26);
}

