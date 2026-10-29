unsigned __int64 __fastcall sub_1E62D40(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // rax
  unsigned __int64 v22; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v23[200]; // [rsp+20h] [rbp-C8h] BYREF

  v5 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v8 = a4 & 0xFFFFFFFFFFFFFFFALL;
  v10 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v11 = *(_QWORD *)(a1 + 248);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
     - 43 >= 2 )
    v8 = a4;
  if ( (v8 & 2) != 0 )
  {
    v22 = sub_A71450(v11, a2);
    v16 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    v18 = (unsigned int)(v17 - 42);
    if ( (unsigned __int8)(v17 - 42) > 2u )
    {
      v18 = (unsigned int)(v17 - 33);
      if ( (unsigned __int8)(v17 - 33) > 1u )
      {
        v20 = *(_QWORD *)v5;
        if ( (*(_BYTE *)(*(_QWORD *)v5 + 17LL) & 4) == 0
          && (*(_BYTE *)(v20 + 16) != 16 || ((*(_BYTE *)(v20 + 18) >> 3) & 3) != 2) )
        {
          v22 = a2;
          if ( a5 )
            a3 = *(_DWORD *)(a5 + 224);
          v19 = 5286;
LABEL_17:
          v8 &= ~2uLL;
          sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), a3, v19, 0);
          sub_1605D30((__int64)v23, (__int64 *)&v22);
          sub_15F7200(v23);
LABEL_18:
          v11 = *(_QWORD *)(a1 + 248);
          goto LABEL_6;
        }
        goto LABEL_31;
      }
    }
    if ( *(_BYTE *)(v16 + 16) == 33 )
      goto LABEL_13;
    if ( (_BYTE)v17 == 33 )
    {
      v16 = sub_F63050(v16, a2, v18, v14);
      if ( v16 )
      {
LABEL_13:
        v22 = *(_QWORD *)(v16 + 32);
LABEL_14:
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25 <= 1 )
        {
          v19 = 5285;
          if ( a5 )
            a3 = *(_DWORD *)(a5 + 224);
          goto LABEL_17;
        }
        v20 = *(_QWORD *)v5;
LABEL_31:
        if ( a5 )
          a3 = *(_DWORD *)(a5 + 224);
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
        {
          sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), a3, (**(_BYTE **)(a1 + 232) & 8) == 0 ? 5661 : 6643, 0);
          sub_15F7200(v23);
        }
        goto LABEL_18;
      }
      v16 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
    }
    v22 = sub_F68450(v16, a2, v18, v14, v15);
    goto LABEL_14;
  }
LABEL_6:
  v12 = a2 & 7;
  if ( (v8 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return (unsigned int)v8 | (unsigned int)v12 | a2 & 0xFFFFFFFFFFFFFFF8LL;
  v13 = v8 | v12;
  if ( (a2 & 8) != 0 )
  {
    v13 |= *(__int64 *)((char *)&qword_18 + (a2 & 0xFFFFFFFFFFFFFFF0LL));
    v10 = *(_QWORD *)v5;
  }
  return sub_A70C40(v11, v10, v13);
}
