void __fastcall sub_B80AE0(__int64 *a1, char a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  int v10; // ebp
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r12
  _DWORD *v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  bool v18; // bp
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rax
  unsigned int *v23; // rbp
  unsigned int v24; // esi
  __int64 v25; // rdi
  __int64 v26; // rcx
  char v27; // al
  bool v28; // zf
  __int64 v30; // [rsp+8h] [rbp-70h]
  __int64 v31; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v32[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v33[9]; // [rsp+30h] [rbp-48h] BYREF

  v32[0] = 0;
  v32[1] = 0;
  v33[0] = 1;
  v33[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v33);
  BYTE4(v33[0]) &= ~1u;
  LODWORD(v33[0]) = 1;
  v10 = sub_B7CB40((__int64)a1, 1, a3, (__int64)v32);
  if ( v10 == (unsigned int)sub_B7CB40((__int64)a1, 0, a4, (__int64)v32) )
  {
    if ( (LODWORD(v32[0]) == 0) != a2 )
    {
      sub_B80930((__int64)a1);
      v11 = a1[2];
      v31 = a5 | 3;
      sub_8E8670(v11, &v31, -2);
    }
  }
  else
  {
    v30 = a1[3];
    v12 = sub_15E1B70(a1[109]);
    v13 = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v14 = *(_DWORD **)(sub_15D1F10(v12) + 24);
    if ( v14 )
    {
      v18 = 0;
      if ( *v14 == 5 )
        v18 = v14[1] == 1;
    }
    else
    {
      v18 = 0;
    }
    v19 = a1[110];
    if ( !v19 )
    {
      sub_16669E0(a1 + 109);
      v19 = a1[110];
    }
    v20 = sub_166A700(v19, (unsigned int)v32, v18, v15, v16, v17);
    v21 = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    v22 = sub_15E1B70(a1[3]);
    v23 = (unsigned int *)v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 16))(a1, v22, 0) )
    {
      sub_1872CE0("");
      sub_1873130(114, 181);
    }
    v24 = sub_B645B0(a1[2], v23);
    v25 = a1[2];
    if ( !a2 )
      v24 ^= 1u;
    v26 = *(_QWORD *)(v25 + 8848);
    v31 = a5 | 3;
    v27 = *(_BYTE *)(v26 + v24);
    if ( v27 == -1 )
    {
      sub_8E8670(v25, &v31, v24 ^ 1);
    }
    else if ( !v27 )
    {
      sub_8F28B0(v25, v24, a5 | 3, 0);
    }
    if ( v21 )
    {
      v28 = (*(_DWORD *)(v21 + 8))-- == 1;
      if ( v28 )
        sub_15D7BC0(v30, v21);
    }
    if ( v13 )
    {
      v28 = (*(_DWORD *)(v13 + 8))-- == 1;
      if ( v28 )
        sub_15D7BC0(v30, v13);
    }
    if ( v23 )
    {
      v28 = v23[2]-- == 1;
      if ( v28 )
        sub_15D7BC0(v30, v23);
    }
  }
  sub_25A130((char *)v32);
}

