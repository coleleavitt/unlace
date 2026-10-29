unsigned __int64 __fastcall sub_1B0AEF0(
        __int64 *a1,
        unsigned int **a2,
        __int64 a3,
        _WORD *a4,
        int a5,
        int a6,
        double a7)
{
  unsigned int **v8; // r13
  _QWORD *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r11
  bool v14; // si
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned int *v19; // rax
  unsigned int **v20; // rdx
  unsigned int **v21; // r9
  int v22; // r14d
  int v23; // eax
  unsigned int v24; // r14d
  unsigned int v25; // r13d
  _QWORD *v27; // rax
  _BYTE v30[200]; // [rsp+8h] [rbp-C8h] BYREF

  if ( !a4 )
    return 1;
  v8 = a2;
  sub_1AEB8B0(*a1, 0x50u, a4);
  v11 = sub_1AE7A80(a2, (__int64)&a2[a3], 71);
  v14 = 0;
  if ( (_QWORD *)v13 != v11 )
  {
    v15 = sub_1AE7A80(a2, v13, 99);
    v14 = v13 != (_QWORD)v15;
  }
  v16 = v12;
  v17 = v12 >> 5;
  v18 = v16 >> 3;
  if ( v17 <= 0 )
  {
    v20 = a2;
LABEL_28:
    if ( v18 != 2 )
    {
      if ( v18 != 3 )
      {
        v24 = 1;
        v25 = 4552;
        if ( v18 != 1 )
          goto LABEL_21;
        goto LABEL_31;
      }
      v19 = *v20;
      if ( (*v20)[2] == 74 )
        goto LABEL_8;
      ++v20;
    }
    v19 = *v20;
    if ( (*v20)[2] == 74 )
      goto LABEL_8;
    ++v20;
LABEL_31:
    v19 = *v20;
    v24 = 1;
    v25 = 4552;
    if ( (*v20)[2] != 74 )
      goto LABEL_21;
    goto LABEL_8;
  }
  v19 = *a2;
  if ( (*a2)[2] == 74 )
  {
    v20 = a2;
    goto LABEL_8;
  }
  v19 = a2[1];
  v20 = a2 + 1;
  if ( v19[2] == 74 || (v19 = a2[2], v20 = a2 + 2, v21 = &a2[4 * v17], v19[2] == 74) )
  {
LABEL_8:
    if ( !v14 )
    {
LABEL_9:
      if ( (unsigned int **)v13 != v20 )
      {
        sub_168B9F0((__int64)v30, a1, *v19, 0x1231u, 0);
        sub_15F7200(v30);
        return 1;
      }
    }
    goto LABEL_18;
  }
  while ( 1 )
  {
    v19 = v8[3];
    if ( v19[2] == 74 )
      break;
    v20 = v8 + 4;
    if ( v21 == v8 + 4 )
    {
      v18 = (v13 - (__int64)v20) >> 3;
      goto LABEL_28;
    }
    v19 = v8[4];
    if ( v19[2] == 74 )
      goto LABEL_8;
    v19 = v8[5];
    if ( v19[2] == 74 )
    {
      v20 = v8 + 5;
      goto LABEL_8;
    }
    v19 = v8[6];
    if ( v19[2] == 74 )
    {
      v20 = v8 + 6;
      goto LABEL_8;
    }
    v8 += 4;
  }
  v20 = v8 + 3;
  if ( !v14 )
    goto LABEL_9;
LABEL_18:
  v22 = 0;
  v23 = 4552;
  if ( (unsigned int **)v13 != v20 )
    v23 = 4658;
  LOBYTE(v22) = v13 != (_QWORD)v20;
  v24 = 2 * v22 + 1;
  v25 = v23;
LABEL_21:
  if ( (unsigned __int8)sub_1B0A9B0(a1, (char *)a2, a3, v24, v25, a7)
    && (unsigned __int8)sub_1B0ABC0(a1, (char *)a2, a3, v24, v25, a7) )
  {
    v27 = (_QWORD *)sub_168B6C0((__int64)a1);
    return sub_F00400(v27, a5, a6, a2, a3, (__int64)a4);
  }
  return 1;
}
