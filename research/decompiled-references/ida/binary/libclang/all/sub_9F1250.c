__int64 __fastcall sub_9F1250(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // r12d
  __int64 v11; // rax
  int v12; // r15d
  __int64 v13; // rbp
  __int64 v14; // r14
  _DWORD *v15; // rbp
  __int64 v16; // rax
  void *v17; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+8h] [rbp-50h]
  void *v19; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+18h] [rbp-40h]

  if ( *(char *)(sub_A2CB40(a1) + 1) >= 0 )
  {
    v19 = (void *)sub_A16CE0(a1[25], a2);
    sub_A2E1B0(a1, &v19, 2243, 0);
  }
  v6 = a1[23];
  v7 = sub_A1A5A0(v6, 16);
  v8 = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v7 + 8) = 0;
  v18 = v8;
  v17 = *(void **)v7;
  sub_A1A5E0(v6, 16);
  if ( (unsigned __int8)sub_947050((__int64)a1, a2, (__int64)&v17, *(_DWORD *)(a3 + 12), a4) )
  {
    v12 = *(_DWORD *)(a1[24] + 32LL);
    if ( v18 > 0x40 )
    {
      sub_25877E0(&v19, &v17, 64);
      LODWORD(v13) = (_DWORD)v19;
      if ( v20 > 0x40 )
      {
        v13 = *(_QWORD *)v19;
        operator delete[](v19);
      }
    }
    else
    {
      sub_2587D60(&v19, &v17);
      LODWORD(v13) = (_DWORD)v19;
      if ( v20 > 0x40 )
      {
        v14 = *(_QWORD *)v19;
        if ( v19 )
          operator delete[](v19);
        LODWORD(v13) = v14;
      }
    }
    v15 = sub_9A3010(a1 + 6, (_QWORD *)a3, v13, v12, 1);
    v16 = sub_A1A4E0(a1[23], 56);
    sub_A1BFA0(v16, v15, 16);
    goto LABEL_10;
  }
  v9 = 0;
  if ( a4 )
  {
    v11 = sub_A1A4E0(a1[23], 56);
    *(_QWORD *)v11 = 0;
    *(_DWORD *)(v11 + 48) = 1;
    *(_QWORD *)(v11 + 32) = 0;
    *(_QWORD *)(v11 + 24) = a3;
    *(_OWORD *)(v11 + 8) = 0;
LABEL_10:
    v9 = 1;
  }
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  return v9;
}

