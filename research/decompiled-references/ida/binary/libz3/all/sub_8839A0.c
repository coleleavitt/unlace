char __fastcall sub_8839A0(_QWORD *a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // r13
  _DWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdi
  void *v20; // r15
  __int64 v21; // rax
  __int64 v22; // r13
  unsigned int v23; // r15d
  int v24; // r14d
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  char result; // al
  bool v32; // zf
  unsigned int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  void *v37; // [rsp+8h] [rbp-80h]
  _QWORD *v38; // [rsp+10h] [rbp-78h]
  __int64 v39; // [rsp+18h] [rbp-70h]
  __int64 v40; // [rsp+20h] [rbp-68h]
  __int64 v41; // [rsp+28h] [rbp-60h]
  __int64 v42; // [rsp+30h] [rbp-58h] BYREF
  __int64 v43; // [rsp+38h] [rbp-50h]
  __int64 v44; // [rsp+40h] [rbp-48h] BYREF
  __int64 v45; // [rsp+48h] [rbp-40h]

  if ( *(_WORD *)(a2 + 4)
    || (v2 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
    || *v2 != 5
    || v2[1] != 19
    || *(_DWORD *)(a2 + 24) != 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 36);
  }
  v3 = *(_QWORD *)(a2 + 32);
  if ( !*(_WORD *)(v3 + 4)
    && (v5 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL)) != nullptr
    && *v5 == 5
    && v5[1] == 18
    && *(_DWORD *)(v3 + 24) == 1 )
  {
    v33 = sub_7E58D0((__int64)a1, *(_QWORD *)(v3 + 32), a2);
    return sub_7E5160((__int64)a1, v33, nullptr, v34, v35, v36);
  }
  else
  {
    v39 = a1[9];
    v6 = sub_15E1A70(a1[104]);
    v7 = v6;
    if ( v6 )
      ++*(_DWORD *)(v6 + 8);
    v8 = a1[9];
    v42 = 0;
    v43 = 0;
    v40 = v8;
    v38 = a1 + 104;
    v44 = 1;
    v45 = 0;
    sub_182CBA0(qword_1C7F2C0, &v44);
    v12 = a1[105];
    BYTE4(v44) &= ~1u;
    LODWORD(v44) = 1;
    if ( !v12 )
    {
      sub_16669E0(v38);
      v12 = a1[105];
    }
    sub_166A700(v12, (unsigned int)&v42, 0, v9, v10, v11);
    v37 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v42);
    sub_182CBA0(v37, &v44);
    sub_15E1B70(a1[104]);
    v13 = sub_15E1B70(a1[104]);
    v14 = v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    v15 = a1[9];
    v42 = 1;
    v43 = 0;
    v41 = v15;
    v44 = 1;
    v45 = 0;
    sub_182CBA0(qword_1C7F2C0, &v44);
    v19 = a1[105];
    BYTE4(v44) &= ~1u;
    LODWORD(v44) = 1;
    if ( !v19 )
    {
      sub_16669E0(v38);
      v19 = a1[105];
    }
    sub_166A700(v19, (unsigned int)&v42, 0, v16, v17, v18);
    v20 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v42);
    sub_182CBA0(v20, &v44);
    sub_15E1B70(a1[104]);
    v21 = sub_15E1B70(a1[104]);
    v22 = v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    v23 = sub_7E58C0((__int64)a1, v14);
    v24 = sub_7E58C0((__int64)a1, v22);
    sub_7E5160((__int64)a1, v23, nullptr, v25, v26, v27);
    result = sub_7E5160((__int64)a1, v24 ^ 1, nullptr, v28, v29, v30);
    if ( v22 )
    {
      v32 = (*(_DWORD *)(v22 + 8))-- == 1;
      if ( v32 )
        result = sub_15D7BC0(v41, v22);
    }
    if ( v14 )
    {
      v32 = (*(_DWORD *)(v14 + 8))-- == 1;
      if ( v32 )
        result = sub_15D7BC0(v40, v14);
    }
    if ( v7 )
    {
      v32 = (*(_DWORD *)(v7 + 8))-- == 1;
      if ( v32 )
        return sub_15D7BC0(v39, v7);
    }
  }
  return result;
}

