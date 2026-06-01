__int64 __fastcall sub_C56DB0(__int64 a1, __int64 a2, __int64 *a3)
{
  void *v4; // rax
  __int64 v5; // rdi
  char v6; // al
  int v7; // r8d
  int v8; // r9d
  _DWORD *v9; // rbp
  unsigned int v10; // r14d
  __int64 v11; // rbx
  void *v12; // r15
  void *v13; // r13
  bool v14; // zf
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // r14
  __int64 v23; // rbx
  _DWORD *v24; // rax
  unsigned __int8 v25; // al
  void *v27; // [rsp+8h] [rbp-B0h]
  __int64 v28; // [rsp+10h] [rbp-A8h]
  int v29[2]; // [rsp+18h] [rbp-A0h]
  void *v30; // [rsp+20h] [rbp-98h] BYREF
  int v31[2]; // [rsp+28h] [rbp-90h]
  int v32[2]; // [rsp+30h] [rbp-88h] BYREF
  void *v33; // [rsp+38h] [rbp-80h]
  int v34[2]; // [rsp+40h] [rbp-78h] BYREF
  int v35[2]; // [rsp+48h] [rbp-70h]
  int v36[2]; // [rsp+50h] [rbp-68h] BYREF
  int v37[2]; // [rsp+58h] [rbp-60h]
  int v38[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v39; // [rsp+68h] [rbp-50h]
  _QWORD v40[9]; // [rsp+70h] [rbp-48h] BYREF

  v4 = *(void **)a1;
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v34 = 0;
  *(_QWORD *)v35 = 0;
  *(_QWORD *)v36 = 1;
  *(_QWORD *)v37 = 0;
  *(_QWORD *)v38 = 0;
  v39 = 0;
  v40[0] = 1;
  v40[1] = 0;
  v30 = nullptr;
  *(_QWORD *)v31 = v4;
  *(_QWORD *)v32 = 0;
  v33 = v4;
  v6 = sub_C50710(v5, a2, (__int64 *)&v30, (__int64 *)v32, (__int64)v34, (__int64)v38);
  v9 = v30;
  v10 = 5;
  v11 = *(_QWORD *)v32;
  v27 = v33;
  v28 = *(_QWORD *)v31;
  if ( v6 )
  {
    v16 = sub_C4F2A0(*(_QWORD *)(a1 + 8), 1, (__int64)v30, *(__int64 *)v31, v7, v8);
    *(_QWORD *)v29 = v16;
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    if ( v9 )
    {
      v14 = v9[2]-- == 1;
      if ( v14 )
        sub_15D7BC0(v28, v9);
    }
    v20 = sub_C4F2A0(*(_QWORD *)(a1 + 8), 1, v11, v17, v18, v19);
    v21 = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    if ( v11 )
    {
      v14 = (*(_DWORD *)(v11 + 8))-- == 1;
      if ( v14 )
        sub_15D7BC0(v27, v11);
    }
    v22 = *(_QWORD *)(a1 + 8);
    v23 = sub_15E1A70(*(_QWORD *)(a1 + 24));
    v24 = (_DWORD *)sub_15E1A70(*(_QWORD *)(a1 + 24));
    v25 = sub_C56150(v22, v24, v23, (__int64)v34, v38, a3);
    v11 = v21;
    v9 = *(_DWORD **)v29;
    v10 = 5 - v25;
  }
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v38);
  sub_182CBA0(v12, v40);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v34);
  sub_182CBA0(v13, v36);
  if ( v11 )
  {
    v14 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v27, v11);
  }
  if ( v9 )
  {
    v14 = v9[2]-- == 1;
    if ( v14 )
      sub_15D7BC0(v28, v9);
  }
  return v10;
}

