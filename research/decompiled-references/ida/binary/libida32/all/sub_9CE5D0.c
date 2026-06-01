__int64 __fastcall sub_9CE5D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r13
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // [rsp+10h] [rbp-38h]

  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL);
  v8 = *(_QWORD *)(v7 + 24);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_BYTE *)(v9 + 16);
  if ( v10 == 13 )
  {
    if ( (((*(_WORD *)(v9 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
      goto LABEL_3;
    goto LABEL_7;
  }
  if ( v10 != 47 )
  {
    if ( v10 != 10 )
      goto LABEL_3;
    goto LABEL_7;
  }
  v15 = sub_F3D1D0(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          a2,
          a3,
          a4,
          a5);
  if ( ((*(_BYTE *)(v15 + 74) & 1) != 0 || (*(_QWORD *)(v15 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0)
    && *(char *)(sub_F3D1D0(v9, a2, v16, v17, v18) + 76) >= 0 )
  {
LABEL_7:
    v8 = *(_QWORD *)(v7 + 16);
    goto LABEL_3;
  }
  v8 = *(_QWORD *)(v7 + 24);
LABEL_3:
  v19 = sub_BD7DA0(v8);
  if ( (unsigned int)sub_9CB330(a3, *(_QWORD *)(v19 + 16)) == 1 )
    sub_9CE0D0(a1, *(_QWORD *)(a2 + 16), v11, v12, v13);
  else
    *(_BYTE *)(a1 + 272) = 0;
  return a1;
}

