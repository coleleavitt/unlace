__int64 __fastcall sub_AA1270(__int64 *a1, __int64 a2)
{
  bool v2; // zf
  _DWORD *v3; // rax
  __int64 v4; // r15
  unsigned int v5; // r14d
  unsigned int v6; // r14d
  unsigned int v7; // r13d
  unsigned int v8; // r13d
  unsigned int v9; // ebp
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  void *v13; // rbp
  unsigned int *v15; // r13
  unsigned int *v16; // r14
  char v17; // [rsp+Eh] [rbp-5Ah] BYREF
  char v18; // [rsp+Fh] [rbp-59h] BYREF
  _QWORD v19[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v20[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_WORD *)(a2 + 4) == 0;
  v19[0] = 0;
  v19[1] = 0;
  v20[0] = 1;
  v20[1] = 0;
  if ( !v2
    || (v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
    || *v3 != 5
    || v3[1] != 22
    || *(_DWORD *)(a2 + 24) != 2 )
  {
    sub_1872CE0("");
    sub_1873130(114, 1586);
  }
  v15 = *(unsigned int **)(a2 + 32);
  v16 = *(unsigned int **)(a2 + 40);
  if ( (unsigned __int8)sub_1666AE0(a1 + 2, *(_QWORD *)(a2 + 32), v19, &v17)
    && (unsigned __int8)sub_753DF0((__int64)v19, 0)
    && (unsigned __int8)sub_1666AE0(a1 + 2, v16, v19, &v18)
    && (unsigned __int8)sub_753DF0((__int64)v19, 0) )
  {
    v12 = 0;
  }
  else
  {
    v4 = a1[41];
    if ( v4 )
    {
      v5 = sub_A83040(a1, v16);
      sub_100A620(a1[63]);
      v6 = sub_A7A1D0(a1, v5);
      v7 = sub_A83040(a1, v15);
      sub_100A620(a1[63]);
      v8 = sub_A7A1D0(a1, v7);
      v9 = sub_A83040(a1, (unsigned int *)a2);
      sub_100A620(a1[63]);
      v10 = sub_A7A1D0(a1, v9);
      v11 = sub_1021DC0(v4, v10, v8, v6);
      if ( v11 == -1 )
      {
        sub_A9E480((__int64)a1);
        v12 = 1;
      }
      else
      {
        v12 = 2 * (v11 != 1);
      }
    }
    else
    {
      v12 = 2;
    }
  }
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v19);
  sub_182CBA0(v13, v20);
  return v12;
}

