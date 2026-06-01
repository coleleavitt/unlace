__int64 __fastcall sub_CB1F80(__int64 a1, __int64 a2, __int64 *a3)
{
  bool v4; // zf
  _DWORD *v5; // rax
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // ebx
  int v9; // r8d
  int v10; // r9d
  void *v11; // rbp
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdi
  unsigned __int8 v22; // [rsp+Fh] [rbp-49h] BYREF
  _QWORD v23[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v24[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_WORD *)(a2 + 4) == 0;
  v23[0] = 0;
  v23[1] = 0;
  v24[0] = 1;
  v24[1] = 0;
  if ( v4 )
  {
    v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v5 )
    {
      if ( *(_DWORD *)(a1 + 16) == *v5 && v5[1] == 66 )
      {
        v13 = *(_QWORD *)(a2 + 32);
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        v14 = *a3;
        if ( *a3 )
        {
          v15 = a3[1];
          v4 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v4 )
            sub_15D7BC0(v15, v14);
        }
        *a3 = v13;
LABEL_21:
        v8 = 1;
        goto LABEL_7;
      }
    }
  }
  v8 = sub_1666AE0(a1 + 40, a2, v23, &v22);
  if ( (_BYTE)v8 )
  {
    v8 = v22;
    if ( v22 )
    {
      v8 = 0;
      if ( SLODWORD(v23[0]) >= 0 )
      {
        v16 = sub_CB86D0((unsigned int)v23, a2, v6, v7, v9, v10);
        v17 = sub_1674700(a1 + 16, v16);
        v18 = sub_16746C0(a1 + 16, v23, v17);
        v19 = v18;
        if ( v18 )
          ++*(_DWORD *)(v18 + 8);
        v20 = *a3;
        if ( *a3 )
        {
          v21 = a3[1];
          v4 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v4 )
            sub_15D7BC0(v21, v20);
        }
        *a3 = v19;
        goto LABEL_21;
      }
    }
  }
LABEL_7:
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v23);
  sub_182CBA0(v11, v24);
  return v8;
}

