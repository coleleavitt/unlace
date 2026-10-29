_QWORD *__fastcall sub_9C85A0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v7; // rdi
  __int64 v8; // rbp
  char v9; // al
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8

  v5 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(v5 + 24);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_BYTE *)(v8 + 16);
  if ( v9 != 13 )
  {
    if ( v9 == 47 )
    {
      v11 = sub_F3D1D0(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
              a2,
              a3,
              a4,
              a5);
      if ( (*(_BYTE *)(v11 + 74) & 1) == 0 && (*(_QWORD *)(v11 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0
        || *(char *)(sub_F3D1D0(v8, a2, v12, v13, v14) + 76) < 0 )
      {
        v7 = *(_QWORD *)(v5 + 24);
        goto LABEL_3;
      }
    }
    else if ( v9 != 10 )
    {
      goto LABEL_3;
    }
LABEL_5:
    v7 = *(_QWORD *)(v5 + 16);
    goto LABEL_3;
  }
  if ( (((*(_WORD *)(v8 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
    goto LABEL_5;
LABEL_3:
  a1[2] = sub_BD7DA0(v7);
  a1[1] = 0x100000001LL;
  *a1 = a1 + 2;
  return a1;
}

