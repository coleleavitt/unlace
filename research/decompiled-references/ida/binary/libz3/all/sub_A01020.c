__int64 __fastcall sub_A01020(_QWORD *a1, unsigned int a2, char a3, int *a4, _BYTE *a5)
{
  __int64 v6; // rax
  unsigned int *v7; // r14
  unsigned int *i; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r12d
  unsigned int v12; // ebx
  int v13; // eax
  int *v15; // rax
  void *v18; // [rsp+20h] [rbp-F8h] BYREF
  int v19[2]; // [rsp+28h] [rbp-F0h]
  int v20[2]; // [rsp+30h] [rbp-E8h]
  int v21[2]; // [rsp+38h] [rbp-E0h]
  int v22[2]; // [rsp+40h] [rbp-D8h]
  int v23[2]; // [rsp+48h] [rbp-D0h]
  int v24[2]; // [rsp+50h] [rbp-C8h]
  int v25[2]; // [rsp+58h] [rbp-C0h]
  int v26[2]; // [rsp+60h] [rbp-B8h]
  int v27[2]; // [rsp+68h] [rbp-B0h]
  int v28[2]; // [rsp+70h] [rbp-A8h]
  int v29[2]; // [rsp+78h] [rbp-A0h]
  int v30[2]; // [rsp+80h] [rbp-98h] BYREF
  int v31[2]; // [rsp+88h] [rbp-90h]
  int v32[2]; // [rsp+90h] [rbp-88h]
  int v33[2]; // [rsp+98h] [rbp-80h]
  int v34[2]; // [rsp+A0h] [rbp-78h] BYREF
  int v35[2]; // [rsp+A8h] [rbp-70h]
  int v36[2]; // [rsp+B0h] [rbp-68h]
  int v37[2]; // [rsp+B8h] [rbp-60h]
  int v38[2]; // [rsp+C0h] [rbp-58h] BYREF
  int v39[2]; // [rsp+C8h] [rbp-50h]
  int v40[2]; // [rsp+D0h] [rbp-48h]
  int v41[2]; // [rsp+D8h] [rbp-40h]

  v18 = nullptr;
  *(_QWORD *)v19 = 0;
  *(_QWORD *)v20 = 1;
  *(_QWORD *)v21 = 0;
  *(_QWORD *)v22 = 0;
  *(_QWORD *)v23 = 0;
  *(_QWORD *)v24 = 1;
  *(_QWORD *)v25 = 0;
  *(_QWORD *)v26 = 0;
  *(_QWORD *)v27 = 0;
  *(_QWORD *)v28 = 1;
  *(_QWORD *)v29 = 0;
  *(_QWORD *)v30 = 0;
  *(_QWORD *)v31 = 0;
  *(_QWORD *)v32 = 1;
  *(_QWORD *)v33 = 0;
  v6 = a1[90];
  *(_QWORD *)v34 = 0;
  *(_QWORD *)v35 = 0;
  *(_QWORD *)v36 = 1;
  *(_QWORD *)v37 = 0;
  *(_QWORD *)v38 = 0;
  *(_QWORD *)v39 = 0;
  *(_QWORD *)v40 = 1;
  *(_QWORD *)v41 = 0;
  if ( (*(_BYTE *)(v6 + 4LL * a2 + 3) & 0x40) != 0 )
  {
    v15 = sub_9AD4F0((__int64)a1, a2);
    if ( *v15 || (v15[13] & 1) != 0 || v15[12] != 1 || v15[16] )
    {
      v13 = *a4 + 1;
      goto LABEL_9;
    }
  }
  sub_9F7E80(a1, a2, a3, (int *)&v18, v30);
  v7 = *(unsigned int **)(a1[89] + 16LL * a2);
  if ( v7 )
  {
    for ( i = &v7[2 * *(v7 - 1)]; v7 != i; v7 += 2 )
    {
      v9 = *v7;
      if ( (_DWORD)v9 != -1 )
      {
        v10 = a1[87] + 24 * v9;
        v11 = *(_DWORD *)(v10 + 12);
        sub_9FFC40(a1, a3, v11, (int *)(*(_QWORD *)v10 + 40LL * v7[1]), (__int64)&v18, (__int64)v30);
        *a5 |= sub_8EB4E0(a1[2], *(_QWORD *)(a1[4] + 8LL * v11));
      }
    }
  }
  v12 = sub_9B5AB0((__int64)a1, (__int64)&v18, (__int64)v30);
  if ( (_BYTE)v12 )
  {
    if ( !a3 )
    {
      sub_1831620(qword_1C7F2C0, v30);
      sub_1831620(qword_1C7F2C0, v34);
      sub_1831620(qword_1C7F2C0, v38);
    }
    sub_9F40B0(a1, a2, (__int64)v30);
    if ( (int)v18 > 0 )
    {
LABEL_18:
      if ( v38[0] | v34[0] | v30[0] )
        goto LABEL_10;
      goto LABEL_8;
    }
    if ( !(_DWORD)v18 )
    {
      if ( v22[0] <= 0 )
      {
        if ( !v22[0] && v26[0] > 0 )
          goto LABEL_18;
      }
      else if ( (v22[1] & 1) != 0 || v22[0] != 1 || (v24[1] & 1) != 0 || v24[0] != 1 || v26[0] )
      {
        goto LABEL_18;
      }
    }
    ++*a4;
    goto LABEL_18;
  }
LABEL_8:
  v13 = *a4 + 1;
LABEL_9:
  *a4 = v13;
  v12 = 0;
LABEL_10:
  sub_2A6060((__int64)v30);
  sub_2A6060((__int64)&v18);
  return v12;
}

