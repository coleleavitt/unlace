__int64 __fastcall sub_A78B20(__int64 ***a1)
{
  __int64 **v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 result; // rax
  int v19; // [rsp-8h] [rbp-58h]
  int v20; // [rsp-8h] [rbp-58h]
  int v21; // [rsp-8h] [rbp-58h]
  int v22; // [rsp+0h] [rbp-50h]
  int v23[2]; // [rsp+0h] [rbp-50h]
  int v24; // [rsp+0h] [rbp-50h]
  int v25[2]; // [rsp+0h] [rbp-50h]
  int v26; // [rsp+8h] [rbp-48h]
  int v27; // [rsp+8h] [rbp-48h]
  __int64 v28; // [rsp+8h] [rbp-48h]
  int v29; // [rsp+8h] [rbp-48h]
  int v30; // [rsp+10h] [rbp-40h]
  int v31; // [rsp+10h] [rbp-40h]
  int v32; // [rsp+10h] [rbp-40h]
  __int64 v33[7]; // [rsp+18h] [rbp-38h] BYREF

  v1 = *a1;
  v2 = **a1;
  v3 = *v2;
  v4 = v2[1];
  sub_15E1B70(v4);
  sub_15E1A70(v4);
  v5 = sub_15E1B70(v4);
  v6 = *(_QWORD *)(v3 + 24);
  v7 = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  sub_966750(v3, v5, -1, 0, 0, -1, (__int64 ***)v33, v19, v22, v26, v30, nullptr);
  if ( v33[0] )
    sub_186B220((void *)(v33[0] - 8));
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v7 )
  {
    v27 = *(_DWORD *)(v7 + 8);
    *(_DWORD *)(v7 + 8) = v27 - 1;
    if ( v27 == 1 )
      sub_15D7BC0(v6, v7);
  }
  v8 = (*v1)[1];
  v9 = **v1;
  sub_15E1B70((*v1)[2]);
  *(_QWORD *)v23 = (*v1)[1];
  sub_15E1B70(v23[0]);
  sub_15E1A70(v23[0]);
  v10 = sub_15E1B70(v8);
  v11 = *(_QWORD *)(v9 + 24);
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  sub_966750(v9, v10, -1, 0, 0, -1, (__int64 ***)v33, v20, v23[0], v10, v31, nullptr);
  if ( v33[0] )
    sub_186B220((void *)(v33[0] - 8));
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v28 )
  {
    v24 = *(_DWORD *)(v28 + 8);
    *(_DWORD *)(v28 + 8) = v24 - 1;
    if ( v24 == 1 )
      sub_15D7BC0(v11, v28);
  }
  v12 = (*v1)[1];
  v13 = **v1;
  v29 = sub_15E1B70((*v1)[2]);
  *(_QWORD *)v25 = (*v1)[1];
  sub_15E1B70(v25[0]);
  sub_15E1A70(v25[0]);
  v14 = sub_15E1B70(v12);
  v15 = *(_QWORD *)(v13 + 24);
  v16 = v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  sub_966750(v13, v14, -1, 0, 0, -1, (__int64 ***)v33, v21, v25[0], v29, v32, nullptr);
  if ( v33[0] )
    sub_186B220((void *)(v33[0] - 8));
  result = std::__ostream_insert<char,std::char_traits<char>>();
  if ( v16 )
  {
    if ( (*(_DWORD *)(v16 + 8))-- == 1 )
      return sub_15D7BC0(v15, v16);
  }
  return result;
}

