__int64 __fastcall sub_14A0C50(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  __int64 v7; // rbp
  unsigned int v8; // eax
  bool v9; // r14
  unsigned __int8 v10; // dl
  __int64 v11; // rbx
  __int16 v13; // ax
  __int64 *v14; // rdi
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // rdi
  __int16 v22; // ax
  __int64 *v23; // rdi
  __int64 *v24; // rdi
  unsigned __int8 *v25[17]; // [rsp+0h] [rbp-88h] BYREF

  v7 = *(_QWORD *)(a1 + 96);
  if ( a2 )
  {
    v8 = (*(_BYTE *)(a2 + 28) & 0x7F) - 49;
    v9 = v8 < 3;
    sub_18C74E0(*(_QWORD *)(a1 + 96), 7 - (unsigned int)(v8 >= 3), a2, 4);
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 4616LL) + 640LL * *(unsigned int *)(*(_QWORD *)(a1 + 96) + 4624LL) - 42) = v9;
    if ( *(_WORD *)(a1 + 32) != 64 )
      goto LABEL_3;
LABEL_9:
    v14 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v14, (int *)(a1 + 16));
    *a4 = *(_DWORD *)(a1 + 40);
    v15 = *(_WORD *)(a1 + 32);
    if ( v15 != 131 )
    {
      if ( v15 == 82 )
      {
        if ( a3 )
        {
          sub_1564840(v25, a1, a1 + 16, 1585);
          sub_AE9DF0(v25, 0, 2u);
          sub_AEA040((__int64)v25);
          goto LABEL_6;
        }
        v24 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v24, (int *)(a1 + 16));
        sub_1564820(v25, a1, *(unsigned int *)(a1 + 40), 10);
        v10 = 3;
        a2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) >> 7;
LABEL_5:
        sub_AE9DF0(v25, a2, v10);
        sub_AEA040((__int64)v25);
LABEL_6:
        v11 = 1;
        goto LABEL_7;
      }
LABEL_11:
      if ( !a2 )
      {
LABEL_12:
        v13 = *(_WORD *)(a1 + 32);
        goto LABEL_13;
      }
LABEL_3:
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x30 )
      {
        sub_1564840(v25, a1, a1 + 16, 1746);
        v10 = 10;
        goto LABEL_5;
      }
      goto LABEL_12;
    }
    v17 = *(_QWORD *)(a1 + 8);
    v18 = *(_QWORD *)(v17 + 2944);
    if ( v18 >= *(unsigned int *)(v17 + 2912) )
      v19 = sub_14180A0(v17, 1u);
    else
      v19 = *(_QWORD *)(v17 + 2904) + 24 * v18;
    if ( a3 )
    {
      v20 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v20, (int *)(a1 + 16));
      sub_1564820(v25, a1, *(unsigned int *)(a1 + 40), 1585);
      sub_AE9DF0(v25, 1, 2u);
      sub_AEA040((__int64)v25);
    }
    else
    {
      v22 = *(_WORD *)(v19 + 16);
      if ( v22 != 66 && v22 != 63 && v22 != 1 )
        goto LABEL_11;
      v23 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v23, (int *)(a1 + 16));
      sub_1564820(v25, a1, *(unsigned int *)(a1 + 40), 11);
      sub_AEA040((__int64)v25);
    }
    v21 = a1;
    v11 = 1;
    sub_1474FE0(v21);
    goto LABEL_7;
  }
  sub_18C74E0(*(_QWORD *)(a1 + 96), 6, 0, 4);
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 4616LL) + 640LL * *(unsigned int *)(*(_QWORD *)(a1 + 96) + 4624LL) - 42) = 0;
  v13 = *(_WORD *)(a1 + 32);
  if ( v13 == 64 )
    goto LABEL_9;
LABEL_13:
  if ( v13 == 24 )
    v16 = sub_14EE310(a1);
  else
    v16 = sub_14BDAD0(a1, 0);
  v11 = v16;
LABEL_7:
  sub_190D5E0(v7);
  return v11;
}
