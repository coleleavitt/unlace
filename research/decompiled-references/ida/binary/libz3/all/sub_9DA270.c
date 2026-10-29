__int64 __fastcall sub_9DA270(_QWORD *a1, unsigned int a2, char a3, int *a4, _BYTE *a5)
{
  int *v6; // rax
  int v7; // eax
  unsigned int *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  void *v13; // r15
  void *v14; // rbx
  void *v15; // rbx
  void *v16; // rbx
  unsigned int *i; // [rsp+10h] [rbp-D8h]
  int v21[2]; // [rsp+30h] [rbp-B8h] BYREF
  int v22[2]; // [rsp+38h] [rbp-B0h]
  int v23[2]; // [rsp+40h] [rbp-A8h] BYREF
  char v24[8]; // [rsp+48h] [rbp-A0h]
  int v25[2]; // [rsp+50h] [rbp-98h] BYREF
  int v26[2]; // [rsp+58h] [rbp-90h]
  int v27[2]; // [rsp+60h] [rbp-88h] BYREF
  int v28[2]; // [rsp+68h] [rbp-80h]
  int v29[2]; // [rsp+70h] [rbp-78h] BYREF
  int v30[2]; // [rsp+78h] [rbp-70h]
  int v31[2]; // [rsp+80h] [rbp-68h] BYREF
  char v32[8]; // [rsp+88h] [rbp-60h]
  int v33[2]; // [rsp+90h] [rbp-58h] BYREF
  int v34[2]; // [rsp+98h] [rbp-50h]
  int v35[2]; // [rsp+A0h] [rbp-48h] BYREF
  int v36[2]; // [rsp+A8h] [rbp-40h]

  *(_QWORD *)v21 = 0;
  *(_QWORD *)v22 = 0;
  *(_QWORD *)v23 = 1;
  *(_QWORD *)v24 = 0;
  *(_QWORD *)v25 = 0;
  *(_QWORD *)v26 = 0;
  *(_QWORD *)v27 = 1;
  *(_QWORD *)v28 = 0;
  *(_QWORD *)v29 = 0;
  *(_QWORD *)v30 = 0;
  *(_QWORD *)v31 = 1;
  *(_QWORD *)v32 = 0;
  *(_QWORD *)v33 = 0;
  *(_QWORD *)v34 = 0;
  *(_QWORD *)v35 = 1;
  *(_QWORD *)v36 = 0;
  if ( (*(_BYTE *)(a1[82] + 4LL * a2 + 3) & 0x40) == 0
    || (v6 = sub_9AA900((__int64)a1, a2), (v6[5] & 1) == 0) && v6[4] == 1 && !v6[8] )
  {
    sub_9AA940(a1, a2, a3, (__int64)v21, v29);
    v8 = *(unsigned int **)(a1[81] + 16LL * a2);
    if ( v8 )
    {
      for ( i = &v8[2 * *(v8 - 1)]; v8 != i; v8 += 2 )
      {
        v9 = *v8;
        if ( (_DWORD)v9 != -1 )
        {
          v10 = a1[79] + 24 * v9;
          v11 = *(_DWORD *)(v10 + 12);
          sub_9BDCB0(a1, a3, v11, (int *)(*(_QWORD *)v10 + 40LL * v8[1]), (__int64)v21, (__int64)v29);
          *a5 |= sub_8EB4E0(a1[2], *(_QWORD *)(a1[4] + 8LL * v11));
        }
      }
    }
    if ( ((v29[1] & 1) != 0 || v29[0] != -1 || (v31[1] & 1) != 0 || v31[0] != 1 || v33[0])
      && sub_927C80((__int64)v29, (__int64)v21) )
    {
LABEL_13:
      v7 = *a4 + 1;
      goto LABEL_14;
    }
    if ( !a3 )
    {
      sub_1831620(qword_1C7F2C0, v29);
      sub_1831620(qword_1C7F2C0, v33);
    }
    sub_9D7F30(a1, a2, (__int64)v29);
    if ( v21[0] <= 0 )
    {
      if ( v21[0] || v25[0] <= 0 )
        goto LABEL_29;
    }
    else if ( (v21[1] & 1) == 0 && v21[0] == 1 && (v23[1] & 1) == 0 && v23[0] == 1 && !v25[0] )
    {
LABEL_29:
      ++*a4;
    }
    v12 = 1;
    if ( v33[0] | v29[0] )
      goto LABEL_15;
    goto LABEL_13;
  }
  v7 = *a4 + 1;
LABEL_14:
  v12 = 0;
  *a4 = v7;
LABEL_15:
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v33);
  sub_182CBA0(v13, v35);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v29);
  sub_182CBA0(v14, v31);
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v25);
  sub_182CBA0(v15, v27);
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v21);
  sub_182CBA0(v16, v23);
  return v12;
}

