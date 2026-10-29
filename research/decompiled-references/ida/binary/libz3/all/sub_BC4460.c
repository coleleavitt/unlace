__int64 __fastcall sub_BC4460(_QWORD *a1, unsigned int *a2, unsigned int *a3, double a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // r12d
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 *v12; // r15
  __int64 *v13; // r14
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // [rsp+8h] [rbp-50h]
  int v17[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v5 = (unsigned int)sub_BB24A0((__int64)a1, a2) ^ 1;
  v6 = a1[2];
  v17[0] = v5;
  v7 = *(_QWORD *)(v6 + 8848);
  result = 0;
  if ( *(_BYTE *)(v7 + v5) == 1 )
  {
    v9 = v5;
    v10 = sub_966380((__int64)a1, a2, a3);
    sub_BC3F50((__int64)a1, v17, v10, a4);
    v16 = a1[3];
    if ( a2 )
      ++a2[2];
    if ( a3 )
      ++a3[2];
    v11 = *(_QWORD *)(a1[2] + 8656LL);
    v12 = *(__int64 **)(v11 + 8LL * *a3);
    v13 = *(__int64 **)(v11 + 8LL * *a2);
    v14 = sub_180C100(a1[15], 32);
    *(_QWORD *)v14 = 0x80000000LL;
    *(_DWORD *)(v14 + 24) = v9;
    *(_OWORD *)(v14 + 8) = 0;
    sub_BBB5D0((__int64)a1, v14, v13, v12);
    v15 = a3[2]-- == 1;
    if ( v15 )
      sub_15D7BC0(v16, a3);
    v15 = a2[2]-- == 1;
    if ( v15 )
      sub_15D7BC0(v16, a2);
    return 1;
  }
  return result;
}

