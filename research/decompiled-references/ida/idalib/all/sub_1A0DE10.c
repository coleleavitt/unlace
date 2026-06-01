_QWORD *__fastcall sub_1A0DE10(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  int v4; // r14d
  unsigned __int64 v5; // r15
  __int64 v7; // rax
  int v8; // edx
  _QWORD *v9; // rbp
  __int64 *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edx
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20[8]; // [rsp+8h] [rbp-40h] BYREF

  v4 = a3;
  v5 = HIDWORD(a3);
  v7 = sub_EEE9A0(64, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 8u);
  v8 = v4;
  v9 = (_QWORD *)v7;
  v10 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  sub_C0B340(v7, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v8, 0, 0, (unsigned int)v5);
  v11 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v20[0] = a2;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
    v20[0] = sub_F67970(v20, *(_QWORD *)(*(_QWORD *)a1 + 248LL));
  v9[1] = v20[0];
  v12 = sub_A72040(*(_QWORD **)(*(_QWORD *)a1 + 248LL), a2);
  if ( !v12 )
  {
    v18 = *v10;
    if ( (unsigned int)*(unsigned __int8 *)(*v10 + 16) - 57 <= 1 )
    {
LABEL_12:
      v16 = *(_DWORD *)(v18 + 20);
      goto LABEL_10;
    }
    v13 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    v19 = (unsigned int)(v13 - 57);
    if ( (unsigned int)v19 <= 1 )
    {
      v18 = sub_F63050(*v10, a2, v19, v13);
      if ( v18 )
        goto LABEL_12;
      v18 = *v10;
      v19 = *(_QWORD *)(*(_QWORD *)(*v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v13 = *(unsigned __int8 *)(v19 + 16);
    }
    if ( (_BYTE)v13 == 48 )
      v16 = sub_1A0DD40(a2, a2, v19, v13, v14, v15);
    else
      v16 = (*(unsigned __int8 *)(v18 + 17) >> 2) & 1;
    goto LABEL_10;
  }
  if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 2 > 1 )
    goto LABEL_9;
  v13 = *(_QWORD *)(v12 + 40);
  if ( (*(_BYTE *)(v12 + 19) & 2) != 0 )
  {
    if ( *(_DWORD *)(v13 + 8) <= 0x40u )
      v13 = *(_QWORD *)v13;
    else
      v13 = **(_QWORD **)v13;
  }
  v16 = v13;
  if ( (unsigned int)v13 > a4 )
LABEL_9:
    v16 = 0;
LABEL_10:
  sub_C0B130(v9, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v16, v13, v14, v15);
  return v9;
}
