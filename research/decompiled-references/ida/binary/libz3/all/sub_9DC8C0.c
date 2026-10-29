__int64 __fastcall sub_9DC8C0(_QWORD *a1, unsigned int a2, char a3, int *a4, _BYTE *a5)
{
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  unsigned int *v9; // r14
  unsigned int *i; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // r12d
  unsigned int v14; // r14d
  void *v15; // r13
  void *v16; // rbx
  void *v20[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-68h] BYREF
  int v22[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+48h] [rbp-50h]
  _QWORD v24[9]; // [rsp+50h] [rbp-48h] BYREF

  v6 = a1[74];
  v20[0] = nullptr;
  v20[1] = nullptr;
  v21[0] = 1;
  v21[1] = 0;
  *(_QWORD *)v22 = 0;
  v23 = 0;
  v24[0] = 1;
  v24[1] = 0;
  if ( (*(_BYTE *)(v6 + 4LL * a2 + 3) & 0x40) == 0
    || (v7 = sub_999800((__int64)a1, a2), (*(_BYTE *)(v7 + 20) & 1) == 0) && *(_DWORD *)(v7 + 16) == 1 )
  {
    sub_9A5B20(a1, a2, a3, (__int64)v20, (__int64)v22);
    v9 = *(unsigned int **)(a1[73] + 16LL * a2);
    if ( v9 )
    {
      for ( i = &v9[2 * *(v9 - 1)]; v9 != i; v9 += 2 )
      {
        v11 = *v9;
        if ( (_DWORD)v11 != -1 )
        {
          v12 = a1[71] + 24 * v11;
          v13 = *(_DWORD *)(v12 + 12);
          sub_9B8610(a1, a3, v13, (int *)(*(_QWORD *)v12 + 40LL * v9[1]), (__int64)v20, (__int64)v22);
          *a5 |= sub_8EB4E0(a1[2], *(_QWORD *)(a1[4] + 8LL * v13));
        }
      }
    }
    if ( ((v22[1] & 1) != 0 || v22[0] != -1 || (v24[0] & 0x100000000LL) != 0 || LODWORD(v24[0]) != 1)
      && sub_3ED700((__int64)qword_1C7F2C0, (__int64)v22, (__int64)v20) )
    {
      goto LABEL_12;
    }
    if ( !a3 )
      sub_1831620(qword_1C7F2C0, v22);
    sub_9DA920(a1, a2, (__int64)v22);
    if ( SLODWORD(v20[0]) > 0
      && ((BYTE4(v20[0]) & 1) != 0 || LODWORD(v20[0]) != 1 || (v21[0] & 0x100000000LL) != 0 || LODWORD(v21[0]) != 1) )
    {
      if ( v22[0] )
      {
LABEL_28:
        v14 = 1;
        goto LABEL_14;
      }
    }
    else
    {
      ++*a4;
      if ( v22[0] )
        goto LABEL_28;
    }
LABEL_12:
    v8 = *a4 + 1;
    goto LABEL_13;
  }
  v8 = *a4 + 1;
LABEL_13:
  v14 = 0;
  *a4 = v8;
LABEL_14:
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v22);
  sub_182CBA0(v15, v24);
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v20);
  sub_182CBA0(v16, v21);
  return v14;
}

