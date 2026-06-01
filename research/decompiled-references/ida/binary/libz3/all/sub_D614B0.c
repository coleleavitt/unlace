__int64 __fastcall sub_D614B0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  void *v16; // rbx
  __int64 result; // rax
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rdi
  int v28[2]; // [rsp+0h] [rbp-58h] BYREF
  int v29[2]; // [rsp+8h] [rbp-50h] BYREF
  int v30[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v31; // [rsp+18h] [rbp-40h]
  __int64 v32; // [rsp+20h] [rbp-38h] BYREF
  __int64 v33; // [rsp+28h] [rbp-30h]
  int v34; // [rsp+30h] [rbp-28h]
  int v35; // [rsp+38h] [rbp-20h]
  int v36; // [rsp+40h] [rbp-18h]
  void *v37; // [rsp+48h] [rbp-10h]

  if ( *(_BYTE *)(a1 + 520) )
  {
    *(_QWORD *)v30 = 0;
    v31 = 0;
    v32 = 1;
    v33 = 0;
    sub_182CBA0(qword_1C7F2C0, &v32);
    v10 = *(_QWORD *)(a1 + 264);
    BYTE4(v32) &= ~1u;
    LODWORD(v32) = 1;
    if ( !v10 )
    {
      sub_16669E0(a1 + 256);
      v10 = *(_QWORD *)(a1 + 264);
    }
    v11 = sub_166A700(v10, (unsigned int)v30, 0, v7, v8, v9);
    v12 = v11;
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    v13 = *a5;
    if ( *a5 )
    {
      v14 = a5[1];
      v15 = (*(_DWORD *)(v13 + 8))-- == 1;
      if ( v15 )
        sub_15D7BC0(v14, v13);
    }
    *a5 = v12;
    v16 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v30);
    return sub_182CBA0(v16, &v32);
  }
  else
  {
    sub_D60A90((__int64 *)v30, a1, *a4);
    v18 = *(_QWORD *)v30;
    v19 = v31;
    v20 = sub_15D1F10(*(_QWORD *)v30);
    v21 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)v28 = v20;
    v22 = sub_D567F0(a1, a2, v28, v21);
    result = sub_15DC610(
               *(_QWORD *)(a1 + 8),
               v22,
               1,
               (int)v29,
               v23,
               v24,
               v28[0],
               v18,
               v30[0],
               v31,
               v32,
               v33,
               v34,
               v35,
               v36,
               v37);
    v25 = result;
    if ( result )
      ++*(_DWORD *)(result + 8);
    v26 = *a5;
    if ( *a5 )
    {
      v27 = a5[1];
      v15 = (*(_DWORD *)(v26 + 8))-- == 1;
      if ( v15 )
        result = sub_15D7BC0(v27, v26);
    }
    *a5 = v25;
    v15 = (*(_DWORD *)(v18 + 8))-- == 1;
    if ( v15 )
      return sub_15D7BC0(v19, v18);
  }
  return result;
}

