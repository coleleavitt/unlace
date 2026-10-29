__int64 __fastcall sub_DB2E10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  void *v6; // rbp
  __int64 v7; // rbx
  unsigned __int8 **v8; // rax
  unsigned __int8 **v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v12; // rdx
  void *v13; // rdi
  void *v14; // rbx
  __int64 v15; // rax
  void *v17; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+8h] [rbp-50h]
  void *v19; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 176);
  v5 = sub_DFDA20(v4, 16);
  v6 = *(void **)v5;
  v7 = *(_QWORD *)(v5 + 8);
  sub_DFDA50(v4, 16);
  v19 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v8 = (unsigned __int8 **)sub_E0FFE0(a1, &v19, 2417, 0);
  if ( v8 )
  {
    v9 = v8;
    sub_AC60B0(v8, 2, 2u);
    v10 = sub_E0E500(a1);
    sub_AC60B0(v9, (*(_BYTE *)(v10 + 1) & 8) != 0, 3u);
  }
  else
  {
    sub_E0E500(a1);
  }
  v11 = *(_QWORD *)(a1 + 176);
  v12 = ((unsigned __int64)(unsigned int)v7 + 63) >> 6;
  if ( v12 == 1 )
  {
    v18 = v7;
    if ( (unsigned int)v7 > 0x40 )
    {
      sub_21E1730(&v17, v6, 1);
    }
    else
    {
      v17 = v6;
      sub_CD43C0((unsigned __int64 *)&v17);
    }
  }
  else
  {
    sub_21E18D0(&v17, (unsigned int)v7, v12, v6);
  }
  if ( v18 > 0x40 )
  {
    sub_21E2D00(&v19, &v17);
    v14 = v19;
    if ( v20 <= 0x40 )
      goto LABEL_10;
    v13 = v19;
    v14 = *(void **)v19;
    goto LABEL_9;
  }
  sub_21E2E30(&v19, &v17, 64);
  v13 = v19;
  v14 = v19;
  if ( v20 > 0x40 )
  {
    v14 = *(void **)v19;
    if ( v19 )
LABEL_9:
      operator delete[](v13);
  }
LABEL_10:
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  v15 = sub_DFD980(v11, 48);
  *(_QWORD *)v15 = 0;
  *(_OWORD *)(v15 + 8) = 0;
  *(_DWORD *)(v15 + 24) = 1;
  *(_QWORD *)(v15 + 40) = v14;
  *(_QWORD *)(v15 + 32) = a3;
  return 1;
}

