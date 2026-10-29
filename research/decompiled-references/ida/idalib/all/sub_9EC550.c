_QWORD *__fastcall sub_9EC550(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v7; // rdi
  __int64 v8; // rbp
  char v9; // al
  __int16 *v10; // rax
  __int16 v11; // dx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8

  v5 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(v5 + 24);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_BYTE *)(v8 + 16);
  if ( v9 == 13 )
  {
    if ( (((*(_WORD *)(v8 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
      goto LABEL_3;
    goto LABEL_7;
  }
  if ( v9 != 47 )
  {
    if ( v9 != 10 )
      goto LABEL_3;
    goto LABEL_7;
  }
  v13 = sub_F60F10(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          a2,
          a3,
          a4,
          a5);
  if ( ((*(_BYTE *)(v13 + 74) & 1) != 0 || (*(_QWORD *)(v13 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0)
    && *(char *)(sub_F60F10(v8, a2, v14, v15, v16) + 76) >= 0 )
  {
LABEL_7:
    v7 = *(_QWORD *)(v5 + 16);
    goto LABEL_3;
  }
  v7 = *(_QWORD *)(v5 + 24);
LABEL_3:
  v10 = (__int16 *)sub_BFBAE0(v7);
  v11 = *v10;
  *a1 = a1 + 2;
  if ( (v11 & 0x1FF) == 0x47 )
  {
    a1[2] = v10;
    a1[1] = 0x100000001LL;
  }
  else
  {
    a1[1] = 0x100000000LL;
  }
  return a1;
}
