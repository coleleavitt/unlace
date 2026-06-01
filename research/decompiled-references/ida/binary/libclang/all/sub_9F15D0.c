__int64 __fastcall sub_9F15D0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // r12d
  __int64 v14; // rax
  int v15; // r12d
  __int64 v16; // r15
  __int64 v17; // rax
  _DWORD *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-60h]
  void *v21; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-50h]
  void *v23; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-40h]

  if ( *(char *)(sub_A2CB40(a1) + 1) >= 0 )
  {
    v23 = (void *)sub_A16CE0(a1[25], a2);
    sub_A2E1B0(a1, &v23, 2243, 0);
  }
  v8 = a1[23];
  v9 = sub_A1A5A0(v8, 16);
  v10 = *(_DWORD *)(v9 + 8);
  *(_DWORD *)(v9 + 8) = 0;
  v22 = v10;
  v21 = *(void **)v9;
  sub_A1A5E0(v8, 16);
  v11 = sub_A24BE0(a3);
  if ( (unsigned __int8)sub_947050((__int64)a1, a2, (__int64)&v21, v11, a5) )
  {
    v15 = *(_DWORD *)(a1[24] + 32LL);
    if ( v22 > 0x40 )
    {
      sub_25877E0(&v23, &v21, 64);
      LODWORD(v16) = (_DWORD)v23;
      if ( v24 > 0x40 )
      {
        v16 = *(_QWORD *)v23;
        operator delete[](v23);
      }
    }
    else
    {
      sub_2587D60(&v23, &v21);
      LODWORD(v16) = (_DWORD)v23;
      if ( v24 > 0x40 )
      {
        v17 = *(_QWORD *)v23;
        if ( v23 )
        {
          v20 = *(_QWORD *)v23;
          operator delete[](v23);
          LODWORD(v17) = v20;
        }
        LODWORD(v16) = v17;
      }
    }
    v18 = sub_9A30E0(a1 + 6, a4, a3, v16, v15, 1);
    v19 = sub_A1A4E0(a1[23], 56);
    sub_A1BFA0(v19, v18, 16);
    goto LABEL_10;
  }
  v12 = 0;
  if ( a5 )
  {
    v14 = sub_A1A4E0(a1[23], 56);
    *(_QWORD *)v14 = 0;
    *(_DWORD *)(v14 + 48) = 1;
    *(_QWORD *)(v14 + 32) = 0;
    *(_QWORD *)(v14 + 24) = 0;
    *(_OWORD *)(v14 + 8) = 0;
LABEL_10:
    v12 = 1;
  }
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  return v12;
}

