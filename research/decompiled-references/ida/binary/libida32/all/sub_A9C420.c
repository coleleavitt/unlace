__int64 __fastcall sub_A9C420(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // rsi
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  unsigned int *v16; // rdx
  __int64 v17; // rbp
  char *v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = (unsigned __int64)v2;
  v6 = sub_F46B20(*v2);
  if ( v6 )
    return v6;
  v9 = *v2;
  if ( *(_BYTE *)(*v2 + 16) == 46 )
    goto LABEL_4;
  v12 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(unsigned __int8 *)(v12 + 16);
  if ( (_BYTE)v13 != 46 )
    goto LABEL_8;
  v9 = sub_F3F310(*v2, v2, v13, v5);
  if ( v9 )
  {
LABEL_4:
    if ( (*(_BYTE *)(v9 + 18) & 8) != 0 )
      v10 = *(_QWORD *)(v9 + 48);
    else
      v10 = *(_QWORD *)(v9 + 8);
    v4 = v10 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v11 = *(_QWORD *)(*(_QWORD *)v4 + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v12 = *(_QWORD *)v11;
  v13 = *(unsigned __int8 *)(*(_QWORD *)v11 + 16LL);
LABEL_8:
  if ( (_BYTE)v13 != 48 )
    return v6;
  v14 = sub_F3D1D0(v12, v2, v13, v5, v7);
  if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 60 > 1 )
    return v6;
  v15 = *(_QWORD *)&byte_8[*(_QWORD *)v4 & 0xFFFFFFFFFFFFFFF0LL];
  v16 = *(unsigned int **)(v14 + 168);
  v17 = *v16;
  v18 = (char *)(v16 + 2);
  v19 = sub_B9B550(v14);
  sub_EFED60(v21, v19);
  v20 = sub_A93F70(a1, v21[0], v18, v17, nullptr, 0, v15);
  return sub_F46B20(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL));
}

