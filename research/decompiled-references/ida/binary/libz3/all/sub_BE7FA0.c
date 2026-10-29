__int64 __fastcall sub_BE7FA0(__int64 a1, __int64 *a2, unsigned int *a3, int a4)
{
  __int64 v7; // r14
  __int64 v8; // rax
  _BYTE *v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // r14d
  void *v14; // rdi
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rdi
  void *v19; // r15
  __int64 v21; // rdx
  int v22; // [rsp+0h] [rbp-68h]
  void *v23; // [rsp+0h] [rbp-68h]
  __int64 v24; // [rsp+8h] [rbp-60h]
  _QWORD v25[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v26[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *a2;
  v8 = *(_QWORD *)(sub_15D1F10(a3) + 24);
  if ( !v8 || *(_DWORD *)(v7 + 1720) != *(_DWORD *)v8 || *(_DWORD *)(v8 + 4) != 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 775);
  }
  v9 = *(_BYTE **)(v8 + 8);
  if ( v9[8] != 1 )
    goto LABEL_17;
  v10 = *a2;
  v11 = *(_QWORD *)(*(_QWORD *)v9 + 24LL);
  if ( !v11 || *(_DWORD *)(*a2 + 1720) != *(_DWORD *)v11 || *(_DWORD *)(v11 + 4) )
  {
    sub_1872CE0("");
    sub_1873130(114, 776);
  }
  v21 = *(_QWORD *)(v11 + 8);
  if ( *(_BYTE *)(v21 + 8) != 1 )
LABEL_17:
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  v24 = *(_QWORD *)v21;
  v12 = *a3;
  v25[0] = 0;
  v13 = v10 + 1848;
  v25[1] = 0;
  v26[0] = 1;
  v14 = qword_1C7F2C0;
  v26[1] = 0;
  if ( (int)v12 < 0 )
  {
    v23 = qword_1C7F2C0;
    sub_1830C40(qword_1C7F2C0, v25, v12);
    v14 = v23;
  }
  else
  {
    LODWORD(v25[0]) = v12;
  }
  sub_182CBA0(v14, v26);
  v18 = *(_QWORD *)(v10 + 1840);
  BYTE4(v26[0]) &= ~1u;
  LODWORD(v26[0]) = 1;
  if ( !v18 )
  {
    sub_16669E0(v10 + 1832);
    v18 = *(_QWORD *)(v10 + 1840);
  }
  v22 = sub_166A700(v18, (unsigned int)v25, 1, v15, v16, v17);
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v25);
  sub_182CBA0(v19, v26);
  sub_180C5A0(v25, "re.first");
  sub_1407560(a1, v13, (unsigned int)v25, a4, v22, 0, 0, v24, 1);
  return a1;
}

