__int64 __fastcall sub_D5C740(_QWORD *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // rbx
  __int64 result; // rax
  bool v15; // zf
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // [rsp+0h] [rbp-A8h]
  int v20; // [rsp+8h] [rbp-A0h]
  __int64 v21; // [rsp+10h] [rbp-98h]
  __int64 v22; // [rsp+18h] [rbp-90h]
  __int64 v23; // [rsp+20h] [rbp-88h]
  __int64 v24; // [rsp+28h] [rbp-80h]
  __int64 v25; // [rsp+30h] [rbp-78h] BYREF
  __int64 v26; // [rsp+38h] [rbp-70h]
  __int64 v27; // [rsp+40h] [rbp-68h] BYREF
  __int64 v28; // [rsp+48h] [rbp-60h]
  __int64 v29; // [rsp+50h] [rbp-58h] BYREF
  __int64 v30; // [rsp+58h] [rbp-50h]
  __int64 v31; // [rsp+60h] [rbp-48h] BYREF
  __int64 v32; // [rsp+68h] [rbp-40h]

  v5 = *a3;
  v26 = a1[1];
  v25 = 0;
  v29 = 0;
  v30 = v26;
  v27 = 0;
  v28 = v26;
  sub_D51BC0((__int64)a1, v5, &v25, &v29, &v27);
  v6 = *a3;
  v31 = 0;
  v7 = v27;
  v18 = v25;
  v8 = v29;
  v24 = v28;
  v23 = v30;
  v22 = v26;
  v21 = a1[1];
  v32 = v21;
  sub_D5BB00(a1, v6, &v31);
  v9 = sub_15E1A70(a1[30]);
  v10 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v11 = sub_15E1BF0(a1[54]);
  v13 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  result = sub_D51DB0((__int64)a1, v31, *a3, v11, a4, v12);
  if ( v13 )
  {
    v15 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v15 )
      result = sub_15D7BC0(v21, v13);
  }
  if ( v10 )
  {
    v15 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v15 )
      result = sub_15D7BC0(v21, v10);
  }
  v16 = v31;
  if ( v31 )
  {
    v17 = v32;
    v15 = (*(_DWORD *)(v31 + 8))-- == 1;
    if ( v15 )
      result = sub_15D7BC0(v17, v16);
  }
  if ( v8 )
  {
    v15 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v15 )
      result = sub_15D7BC0(v23, v8);
  }
  if ( v7 )
  {
    v15 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v15 )
      result = sub_15D7BC0(v24, v7);
  }
  if ( v18 )
  {
    v20 = *(_DWORD *)(v18 + 8);
    result = (unsigned int)(v20 - 1);
    *(_DWORD *)(v18 + 8) = result;
    if ( v20 == 1 )
      return sub_15D7BC0(v22, v18);
  }
  return result;
}

