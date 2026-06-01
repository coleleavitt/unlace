__int64 __fastcall sub_A7A5B0(__int64 *a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // r14
  _DWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int *v14; // r12
  __int64 v15; // rax
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdi
  void *v20; // r15
  __int64 v21; // rax
  unsigned int *v22; // r14
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 result; // rax
  unsigned int v28; // eax
  __int64 v29; // r13
  unsigned int v30; // ebp
  __int64 v31; // r12
  __int64 v32; // rax
  unsigned int v33; // [rsp+0h] [rbp-88h]
  __int64 v34; // [rsp+0h] [rbp-88h]
  void *v35; // [rsp+8h] [rbp-80h]
  int v36; // [rsp+8h] [rbp-80h]
  __int64 v37; // [rsp+10h] [rbp-78h]
  __int64 v38; // [rsp+18h] [rbp-70h]
  __int64 v39; // [rsp+20h] [rbp-68h]
  __int64 *v40; // [rsp+28h] [rbp-60h]
  __int64 v41; // [rsp+28h] [rbp-60h]
  unsigned int *v42; // [rsp+30h] [rbp-58h] BYREF
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
    sub_1873130(114, 1160);
  }
  v3 = *(_QWORD *)(a2 + 32);
  if ( !*(_WORD *)(v3 + 4)
    && (v5 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL)) != nullptr
    && *v5 == 5
    && v5[1] == 18
    && *(_DWORD *)(v3 + 24) == 1 )
  {
    v28 = sub_966380(*a1, *(_DWORD **)(v3 + 32), (_DWORD *)a2);
    v29 = *a1;
    v30 = v28;
    v31 = *(_QWORD *)(*a1 + 24);
    if ( *(_QWORD *)(v31 + 912) )
    {
      v32 = sub_186B270(0x10u);
      *(_DWORD *)(v32 + 8) = v30;
      v42 = (unsigned int *)(v32 + 8);
      *(_QWORD *)v32 = 0x100000002LL;
      sub_966E60(v29, &v42);
      if ( v42 )
        sub_186B220(v42 - 2);
    }
    result = sub_A7A3B0((__int64)a1, v30);
    if ( *(_QWORD *)(v31 + 912) )
      return std::operator<<<std::char_traits<char>>();
  }
  else
  {
    v37 = a1[1];
    v6 = sub_15E1A70(a1[2]);
    v7 = v6;
    if ( v6 )
      ++*(_DWORD *)(v6 + 8);
    v8 = a1[1];
    v42 = nullptr;
    v43 = 0;
    v38 = v8;
    v40 = a1 + 2;
    v44 = 1;
    v45 = 0;
    sub_182CBA0(qword_1C7F2C0, &v44);
    v12 = a1[3];
    BYTE4(v44) &= ~1u;
    LODWORD(v44) = 1;
    if ( !v12 )
    {
      sub_16669E0(v40);
      v12 = a1[3];
    }
    sub_166A700(v12, (unsigned int)&v42, 0, v9, v10, v11);
    v35 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v42);
    sub_182CBA0(v35, &v44);
    sub_15E1B70(a1[2]);
    v13 = sub_15E1B70(a1[2]);
    v14 = (unsigned int *)v13;
    if ( v13 )
      ++*(_DWORD *)(v13 + 8);
    v15 = a1[1];
    v42 = (unsigned int *)(&dword_0 + 1);
    v43 = 0;
    v39 = v15;
    v44 = 1;
    v45 = 0;
    sub_182CBA0(qword_1C7F2C0, &v44);
    v19 = a1[3];
    BYTE4(v44) &= ~1u;
    LODWORD(v44) = 1;
    if ( !v19 )
    {
      sub_16669E0(v40);
      v19 = a1[3];
    }
    sub_166A700(v19, (unsigned int)&v42, 0, v16, v17, v18);
    v20 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v42);
    sub_182CBA0(v20, &v44);
    sub_15E1B70(a1[2]);
    v21 = sub_15E1B70(a1[2]);
    v22 = (unsigned int *)v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    v33 = sub_A7A500(a1, v14);
    v36 = sub_A7A500(a1, v22);
    v23 = *(_QWORD *)(*a1 + 24);
    v41 = *a1;
    if ( *(_QWORD *)(v23 + 912) )
    {
      v42 = nullptr;
      v24 = sub_186B270(0x10u);
      v42 = (unsigned int *)(v24 + 8);
      *(_DWORD *)(v24 + 8) = v33;
      *(_QWORD *)v24 = 0x100000002LL;
      sub_966E60(v41, &v42);
      if ( v42 )
        sub_186B220(v42 - 2);
    }
    sub_A7A3B0((__int64)a1, v33);
    if ( *(_QWORD *)(v23 + 912) )
      std::operator<<<std::char_traits<char>>();
    v25 = *(_QWORD *)(*a1 + 24);
    v34 = *a1;
    if ( *(_QWORD *)(v25 + 912) )
    {
      v42 = nullptr;
      v26 = sub_186B270(0x10u);
      v42 = (unsigned int *)(v26 + 8);
      *(_DWORD *)(v26 + 8) = v36;
      *(_QWORD *)v26 = 0x100000002LL;
      sub_966E60(v34, &v42);
      if ( v42 )
        sub_186B220(v42 - 2);
    }
    sub_A7A3B0((__int64)a1, v36 ^ 1);
    if ( *(_QWORD *)(v25 + 912) )
      std::operator<<<std::char_traits<char>>();
    sub_A72BE0((__int64)v22, v39);
    sub_A72BE0((__int64)v14, v38);
    return sub_A72BE0(v7, v37);
  }
  return result;
}

