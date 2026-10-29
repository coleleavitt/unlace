__int64 __fastcall sub_79C480(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  _DWORD *v3; // rax
  unsigned int *v4; // r13
  unsigned int v5; // r12d
  int v6; // r15d
  __int64 (__fastcall *v7)(); // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  bool v10; // zf
  double v12; // xmm0_8
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 144);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( !*(_WORD *)(a2 + 4)
    && (v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr
    && !*v3
    && v3[1] == 8
    && (v6 = *(_DWORD *)(a2 + 24), v6 == 1) )
  {
    v4 = *(unsigned int **)(a2 + 32);
    v5 = -1;
  }
  else
  {
    v4 = (unsigned int *)a2;
    v5 = -2;
    v6 = 0;
  }
  v7 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 472LL);
  if ( v7 != sub_79C160 )
  {
    v14 = ((__int64 (__fastcall *)(__int64, unsigned int *, _QWORD, _QWORD))v7)(a1, v4, 0, 0);
    goto LABEL_17;
  }
  v8 = *(_QWORD *)(a1 + 1720);
  if ( v8 )
  {
    v9 = *v4;
    if ( (unsigned int)v9 < *(_DWORD *)(v8 - 4) )
    {
      v17 = *(_QWORD *)(v8 + 8 * v9);
      if ( v17 )
      {
        if ( (unsigned __int8)sub_15D2CB0(v2, v4) )
          v5 = v6 ^ (2 * *(_DWORD *)(v17 + 28));
        goto LABEL_13;
      }
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 152) + 16LL))(
         *(_QWORD *)(a1 + 152),
         v4) )
  {
    v12 = (*(double (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 152) + 24LL))(*(_QWORD *)(a1 + 152), v4);
    v14 = sub_79B540(a1, v13, v4, v12);
    goto LABEL_17;
  }
  v15 = sub_7CF0A0(a1, v4);
  if ( v15 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, _QWORD))(*(_QWORD *)(v15 + 48) + 40LL))(
            v15 + 48,
            v4,
            0,
            0);
LABEL_17:
    v10 = (*(_DWORD *)(a2 + 8))-- == 1;
    v5 = v6 ^ v14;
    if ( !v10 )
      return v5;
LABEL_18:
    sub_15D7BC0(v2, a2);
    return v5;
  }
  if ( (unsigned __int8)sub_7E6250((int)a1 + 32, *(_QWORD *)(a1 + 144), (_DWORD)v4, 0, 0, v16)
    && (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 144), v4) )
  {
    v5 = v6
       ^ (2
        * (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 152) + 32LL))(
            *(_QWORD *)(a1 + 152),
            v4));
  }
LABEL_13:
  v10 = (*(_DWORD *)(a2 + 8))-- == 1;
  if ( v10 )
    goto LABEL_18;
  return v5;
}

