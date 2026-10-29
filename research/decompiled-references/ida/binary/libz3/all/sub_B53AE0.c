__int64 __fastcall sub_B53AE0(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax
  int v7; // eax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi
  _QWORD v22[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v23; // [rsp+10h] [rbp-48h] BYREF
  __int64 v24; // [rsp+18h] [rbp-40h]
  __int64 v25[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 8832);
  if ( !v4 || (v5 = *a2, (unsigned int)v5 >= *(_DWORD *)(v4 - 4)) || *(_DWORD *)(v4 + 4 * v5) == 0x7FFFFFFF )
  {
    v7 = sub_B67520(v3, a2);
    sub_8F1CE0(*(_QWORD *)(a1 + 16), v7 & 0x7FFFFFFF, *(_DWORD *)(a1 + 8));
    sub_B6E740(*(_QWORD *)(a1 + 16));
    sub_D850C0(v22, a1 + 720, a1 + 56, a2);
    v8 = *(_QWORD *)(a1 + 24);
    v23 = 0;
    v24 = v8;
    sub_B537F0(v25, (_QWORD *)a1);
    v9 = sub_15E1B70(v8);
    v10 = v9;
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    v11 = v23;
    if ( v23 )
    {
      v12 = v24;
      v13 = (*(_DWORD *)(v23 + 8))-- == 1;
      if ( v13 )
        sub_15D7BC0(v12, v11);
    }
    v14 = v25[0];
    v23 = v10;
    if ( v25[0] )
    {
      v15 = v25[1];
      v13 = (*(_DWORD *)(v25[0] + 8))-- == 1;
      if ( v13 )
        sub_15D7BC0(v15, v14);
    }
    sub_14B9B80(a1 + 56, &v23);
    v16 = sub_15E1B70(*(_QWORD *)(a1 + 24));
    v17 = v16;
    if ( v16 )
    {
      ++*(_DWORD *)(v16 + 8);
      sub_B52AB0(a1, v16);
      v13 = (*(_DWORD *)(v17 + 8))-- == 1;
      if ( v13 )
        sub_15D7BC0(v8, v17);
    }
    else
    {
      sub_B52AB0(a1, 0);
    }
    v18 = v23;
    if ( v23 )
    {
      v19 = v24;
      v13 = (*(_DWORD *)(v23 + 8))-- == 1;
      if ( v13 )
        sub_15D7BC0(v19, v18);
    }
    v20 = v22[0];
    if ( v22[0] )
    {
      v21 = v22[1];
      v13 = (*(_DWORD *)(v22[0] + 8LL))-- == 1;
      if ( v13 )
        sub_15D7BC0(v21, v20);
    }
  }
  return 1;
}

