__int64 __fastcall sub_589010(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // r14
  unsigned int v3; // r12d
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // [rsp+8h] [rbp-60h]
  __int64 v19[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+28h] [rbp-40h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 56LL))(*(_QWORD *)(a1 + 40));
  v2 = *(_QWORD *)(a1 + 32);
  v3 = v1;
  sub_588490(&v20, a1);
  v4 = v20;
  v5 = sub_15E1B70(*(_QWORD *)(a1 + 32));
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_DWORD *)(v5 + 8);
    *(_DWORD *)(v6 + 8) = v7 + 1;
    if ( !(_BYTE)v3 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 864LL);
      if ( v8 == *(_QWORD *)(a1 + 48) )
        goto LABEL_9;
      goto LABEL_4;
    }
LABEL_15:
    sub_588670((int)&v20, *(_QWORD *)(a1 + 8), a1, v6);
    v13 = v20;
    sub_588670((int)v19, *(_QWORD *)(a1 + 8), a1, v4);
    sub_5875C0(*(_QWORD *)(a1 + 8), "contains fact", v19[0], v13);
    v14 = v19[0];
    if ( v19[0] )
    {
      v15 = v19[1];
      v11 = (*(_DWORD *)(v19[0] + 8))-- == 1;
      if ( v11 )
        sub_15D7BC0(v15, v14);
    }
    v16 = v20;
    if ( v20 )
    {
      v17 = v21;
      v11 = (*(_DWORD *)(v20 + 8))-- == 1;
      if ( v11 )
        sub_15D7BC0(v17, v16);
    }
    goto LABEL_7;
  }
  if ( (_BYTE)v3 )
    goto LABEL_15;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 864LL);
  if ( *(_QWORD *)(a1 + 48) == v8 )
    goto LABEL_11;
LABEL_4:
  v18 = v8;
  sub_588670((int)&v20, *(_QWORD *)(a1 + 8), a1, v6);
  sub_5875C0(*(_QWORD *)(a1 + 8), "contains fact", v20, v18);
  v9 = v20;
  if ( v20 )
  {
    v10 = v21;
    v11 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v10, v9);
  }
LABEL_7:
  if ( !v6 )
    goto LABEL_11;
  v7 = *(_DWORD *)(v6 + 8) - 1;
LABEL_9:
  *(_DWORD *)(v6 + 8) = v7;
  if ( !v7 )
    sub_15D7BC0(v2, v6);
LABEL_11:
  if ( v4 )
  {
    v11 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v2, v4);
  }
  return v3;
}

