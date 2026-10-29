void __fastcall sub_491350(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r13
  _DWORD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  unsigned int *v11; // rax
  __int64 v12; // rax
  _DWORD *v13; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  bool v17; // r14
  int v18; // edi
  void *v19; // [rsp+0h] [rbp-98h]
  int v20[2]; // [rsp+18h] [rbp-80h] BYREF
  int v21[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v22; // [rsp+28h] [rbp-70h]
  int v23[4]; // [rsp+30h] [rbp-68h] BYREF
  int v24[22]; // [rsp+40h] [rbp-58h] BYREF

  if ( (*(_BYTE *)(a2 + 4) & 1) == 0
    && *(_DWORD *)a2 == 1
    && (*(_BYTE *)(a2 + 20) & 1) == 0
    && *(_DWORD *)(a2 + 16) == 1 )
  {
    return;
  }
  v3 = a1[1];
  sub_16669D0(v21, v3);
  sub_16744A0(v24, v3);
  v4 = *(_DWORD **)(sub_15D1F10(*a1) + 24);
  if ( v4 && *v4 == 5 )
  {
    v13 = *(_DWORD **)(sub_15D1F10(*a1) + 24);
    if ( v13 )
    {
      v17 = 0;
      if ( *v13 == 5 )
        v17 = v13[1] == 1;
    }
    else
    {
      v17 = 0;
    }
    v18 = v22;
    if ( !v22 )
    {
      sub_16669E0(v21);
      v18 = v22;
    }
    sub_166A700(v18, a2, v17, v14, v15, v16);
    v12 = sub_15E1B70(v21[0]);
    goto LABEL_12;
  }
  v5 = sub_15D1F10(*a1);
  v6 = 0;
  if ( (unsigned __int8)sub_1673B10(v24, v5) )
  {
    v11 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(*a1) + 24) + 8LL);
    if ( *((_BYTE *)v11 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    sub_1674520(v24, a2, *v11);
    v12 = sub_15E1B70(v24[2]);
LABEL_12:
    v6 = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
  }
  *(_QWORD *)v20 = 0;
  sub_1862300(v20, "som", 1);
  sub_1862300(v20, "flat", 1);
  sub_14B7810((int)v23, v3, (int)v20, v7, v8, v9, v19);
  sub_14B9BF0(v23, v6, a1);
  sub_14B63F0(v23);
  sub_18572D0(v20);
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 8))-- == 1 )
      sub_15D7BC0(v3, v6);
  }
}

