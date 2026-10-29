__int64 __fastcall sub_6D5110(_QWORD **a1, __int64 *a2, __int64 a3)
{
  __int64 *v4; // r12
  bool v5; // zf
  __int64 v6; // rsi
  __int64 v7; // r13
  _DWORD *v9; // rax
  void *v10; // rbx
  unsigned int v11; // r13d
  void *v12; // rbx
  int v14; // eax
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r14
  void *v21; // r13
  _DWORD *v22; // rax
  __int64 v23; // r14
  __int64 *v24; // rbp
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rdi
  int *v32; // rdx
  __int64 v33; // [rsp+18h] [rbp-C0h]
  __int64 v34; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-98h] BYREF
  __int64 v38; // [rsp+48h] [rbp-90h]
  __int64 v39; // [rsp+50h] [rbp-88h] BYREF
  __int64 v40; // [rsp+58h] [rbp-80h]
  _QWORD v41[2]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v42[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v43[2]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v44[9]; // [rsp+90h] [rbp-48h] BYREF

  v4 = *a1;
  v5 = *(_WORD *)(a3 + 4) == 0;
  v6 = **a1;
  v41[0] = 0;
  v42[0] = 1;
  v38 = v6;
  v40 = v6;
  v43[0] = 0;
  v44[0] = 1;
  v7 = *v4;
  v37 = 0;
  v39 = 0;
  v41[1] = 0;
  v42[1] = 0;
  v43[1] = 0;
  v44[1] = 0;
  if ( !v5 )
    goto LABEL_4;
  v9 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v9 || *v9 != 5 )
    goto LABEL_4;
  v14 = v9[1];
  if ( v14 == 2 )
  {
    v23 = *(_QWORD *)(a3 + 32);
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    sub_6BFE30(0, v6);
    v37 = v23;
    v18 = &v36;
    v17 = *(_QWORD *)(a3 + 40);
  }
  else
  {
    if ( v14 != 3 )
    {
LABEL_4:
      sub_6BFE30(0, v7);
      v10 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v43);
      sub_182CBA0(v10, v44);
LABEL_5:
      v11 = 0;
      goto LABEL_6;
    }
    v16 = *(_QWORD *)(a3 + 40);
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    sub_6BFE30(0, v6);
    v37 = v16;
    v17 = *(_QWORD *)(a3 + 32);
    v18 = &v35;
  }
  if ( !(unsigned __int8)sub_1666AE0(v4 + 2, v17, v43, v18) || LODWORD(v43[0]) )
  {
    v19 = sub_15E1B70(v4[2]);
    v20 = v19;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    sub_6BFE30(v37, v38);
    v37 = v20;
    sub_14B9B80(v4 + 4, &v37);
  }
  sub_6BFE30(0, v7);
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v43);
  sub_182CBA0(v21, v44);
  v11 = sub_6D3AC0(*a1, a2, v37, (int *)v41, &v39);
  if ( !(_BYTE)v11 )
    goto LABEL_5;
  v22 = *(_DWORD **)(sub_15D1F10(*a2) + 24);
  if ( v22 && *v22 == 5 && !v22[1] )
  {
    v24 = *a1;
    sub_3EC020((__int64)v43, (__int64)v41);
    v28 = v24[3];
    if ( !v28 )
    {
      sub_16669E0(v24 + 2);
      v28 = v24[3];
    }
    sub_166A700(v28, (unsigned int)v43, 0, v25, v26, v27);
    v29 = sub_15E1B70(v24[2]);
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    v30 = v39;
    if ( v39 )
    {
      v31 = v40;
      v5 = (*(_DWORD *)(v39 + 8))-- == 1;
      if ( v5 )
      {
        v33 = v29;
        sub_15D7BC0(v31, v30);
        v29 = v33;
      }
    }
    v39 = v29;
    sub_14B9B80(v24 + 4, &v39);
    sub_25A130((char *)v43);
    if ( SLODWORD(v41[0]) <= 0 )
      v32 = (int *)&qword_1C7F260;
    else
      v32 = &qword_1C7F280;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v41, v32);
  }
  if ( SLODWORD(v41[0]) < 0 )
  {
    v34 = v39;
    if ( v39 )
      ++*(_DWORD *)(v39 + 8);
    sub_6C01B0(a1 + 9, &v34);
    sub_6C09A0((__int64 *)a1 + 16, (__int64)v41);
    ++*(_DWORD *)(a3 + 8);
    v35 = a3;
    sub_6C00F0(a1 + 21, &v35);
  }
  else
  {
    v36 = v39;
    if ( v39 )
      ++*(_DWORD *)(v39 + 8);
    sub_6C01B0(a1 + 11, &v36);
    sub_6C09A0((__int64 *)a1 + 17, (__int64)v41);
    ++*(_DWORD *)(a3 + 8);
    v43[0] = a3;
    sub_6C00F0(a1 + 23, v43);
  }
LABEL_6:
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v41);
  sub_182CBA0(v12, v42);
  sub_6BFE30(v39, v40);
  sub_6BFE30(v37, v38);
  return v11;
}

