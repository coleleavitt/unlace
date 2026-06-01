__int64 __fastcall sub_C2E0F0(__int64 *a1, int a2, int a3, int a4, __int64 *a5, __int64 *a6)
{
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  _QWORD *v17; // r15
  __int64 v18; // r13
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdi
  void *v23; // r15
  _QWORD *v24; // r15
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdi
  __int64 v29; // rax
  _QWORD *v30; // r15
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rdi
  __int64 v35; // rax
  void *v36; // r14
  int v37; // [rsp+0h] [rbp-98h]
  int v38; // [rsp+8h] [rbp-90h]
  int v39; // [rsp+10h] [rbp-88h]
  int v40; // [rsp+18h] [rbp-80h]
  void *v41; // [rsp+18h] [rbp-80h]
  int v42; // [rsp+20h] [rbp-78h]
  char v43[8]; // [rsp+28h] [rbp-70h]
  int v44; // [rsp+30h] [rbp-68h]
  __int64 v45; // [rsp+38h] [rbp-60h] BYREF
  __int64 v46; // [rsp+40h] [rbp-58h] BYREF
  void *v47; // [rsp+48h] [rbp-50h]
  __int64 v48; // [rsp+50h] [rbp-48h] BYREF
  __int64 v49; // [rsp+58h] [rbp-40h]

  v9 = sub_15DC610(
         **(_QWORD **)*a1,
         a2,
         a3,
         a4,
         (int)a5,
         (int)a6,
         v37,
         v38,
         v39,
         v40,
         v42,
         **(_QWORD **)*a1,
         v44,
         v45,
         v46,
         v47);
  v10 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  result = sub_C292F0(a1, v9, a5, a6);
  if ( (_BYTE)result )
  {
    if ( v10 )
    {
      v16 = (*(_DWORD *)(v10 + 8))-- == 1;
      if ( v16 )
        return sub_15D7BC0(*(_QWORD *)v43, v10);
    }
  }
  else
  {
    v12 = sub_C2C130(a1, 1);
    v13 = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v14 = *a5;
    if ( *a5 )
    {
      v15 = a5[1];
      v16 = (*(_DWORD *)(v14 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v15, v14);
    }
    *a5 = v13;
    sub_C294F0((_QWORD ***)a1, v13, v10, a6);
    sub_C2AB80((__int64)a1, v10, *a5, *a6);
    v17 = *(_QWORD **)*a1;
    sub_15E1A70(*v17);
    v18 = *(_QWORD *)*a1;
    v47 = nullptr;
    v46 = 0xFFFFFFFFLL;
    v48 = 1;
    v49 = 0;
    sub_182CBA0(qword_1C7F2C0, &v48);
    v22 = *(_QWORD *)(v18 + 8);
    BYTE4(v48) &= ~1u;
    LODWORD(v48) = 1;
    if ( !v22 )
    {
      sub_16669E0(v18);
      v22 = *(_QWORD *)(v18 + 8);
    }
    sub_166A700(v22, (unsigned int)&v46, 0, v19, v20, v21);
    sub_15E1B70(*v17);
    sub_15E1B70(*v17);
    v23 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v46);
    sub_182CBA0(v23, &v48);
    v24 = *(_QWORD **)*a1;
    v46 = 0;
    v47 = nullptr;
    v48 = 1;
    v49 = 0;
    sub_182CBA0(qword_1C7F2C0, &v48);
    v28 = v24[1];
    BYTE4(v48) &= ~1u;
    LODWORD(v48) = 1;
    if ( !v28 )
    {
      sub_16669E0(v24);
      v28 = v24[1];
    }
    sub_166A700(v28, (unsigned int)&v46, 0, v25, v26, v27);
    v41 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v46);
    sub_182CBA0(v41, &v48);
    v29 = sub_15E1B70(*v24);
    v46 = v29;
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    sub_C28530(a1 + 13, &v46);
    sub_C2BA80(a1, *a6);
    v30 = *(_QWORD **)*a1;
    v46 = 1;
    v47 = nullptr;
    v48 = 1;
    v49 = 0;
    sub_182CBA0(qword_1C7F2C0, &v48);
    v34 = v30[1];
    BYTE4(v48) &= ~1u;
    LODWORD(v48) = 1;
    if ( !v34 )
    {
      sub_16669E0(v30);
      v34 = v30[1];
    }
    sub_166A700(v34, (unsigned int)&v46, 0, v31, v32, v33);
    sub_15E1B70(*v30);
    v35 = sub_15E1A70(**(_QWORD **)*a1);
    v45 = v35;
    if ( v35 )
      ++*(_DWORD *)(v35 + 8);
    sub_C28530(a1 + 13, &v45);
    v36 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v46);
    sub_182CBA0(v36, &v48);
    result = sub_C2BA80(a1, *a6);
    if ( v10 )
    {
      v16 = (*(_DWORD *)(v10 + 8))-- == 1;
      if ( v16 )
        return sub_15D7BC0(*(_QWORD *)v43, v10);
    }
  }
  return result;
}

