__int64 __fastcall sub_D61670(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 *a5)
{
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r14
  int v12; // r9d
  __int64 result; // rax
  bool v14; // zf
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdi
  int v22; // [rsp+8h] [rbp-E0h]
  int v23; // [rsp+8h] [rbp-E0h]
  __int64 v24; // [rsp+10h] [rbp-D8h]
  __int64 v25; // [rsp+18h] [rbp-D0h]
  __int64 v27; // [rsp+20h] [rbp-C8h]
  __int64 v28; // [rsp+28h] [rbp-C0h]
  __int64 v29; // [rsp+30h] [rbp-B8h]
  __int64 v30; // [rsp+38h] [rbp-B0h]
  __int64 v31; // [rsp+40h] [rbp-A8h]
  __int64 v32; // [rsp+50h] [rbp-98h] BYREF
  __int64 v33; // [rsp+58h] [rbp-90h]
  __int64 v34; // [rsp+60h] [rbp-88h] BYREF
  __int64 v35; // [rsp+68h] [rbp-80h]
  __int64 v36; // [rsp+70h] [rbp-78h] BYREF
  __int64 v37; // [rsp+78h] [rbp-70h]
  __int64 v38; // [rsp+80h] [rbp-68h] BYREF
  __int64 v39; // [rsp+88h] [rbp-60h]
  __int64 v40; // [rsp+90h] [rbp-58h] BYREF
  __int64 v41; // [rsp+98h] [rbp-50h]
  __int64 v42; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 8);
  v7 = *a4;
  v32 = 0;
  v33 = v6;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v34 = 0;
  v35 = v6;
  v38 = 0;
  v39 = v6;
  v36 = 0;
  v37 = v6;
  sub_D51BC0(a1, v7, &v34, &v38, &v36);
  v8 = v34;
  v25 = v36;
  v29 = v37;
  v24 = v38;
  v30 = v39;
  v28 = v35;
  sub_D5BB00(a1, v7, &v32);
  v9 = *(_QWORD *)(a1 + 8);
  v40 = 0;
  v41 = v9;
  sub_D60C80(a1, a2, a3, a4, &v40);
  v42 = 0;
  v10 = v40;
  v27 = v41;
  v43 = *(_QWORD *)(a1 + 8);
  sub_D52910(a1, v7, &v42);
  v11 = v42;
  v31 = v43;
  result = sub_14E2530((int)a1 + 16, v32, v10, v42, (_DWORD)a5, v12);
  if ( (_DWORD)result == 5 )
  {
    v17 = sub_15E1BF0(*(_QWORD *)(a1 + 16));
    v18 = v17;
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    v19 = *a5;
    if ( *a5 )
    {
      v20 = a5[1];
      v14 = (*(_DWORD *)(v19 + 8))-- == 1;
      if ( v14 )
        sub_15D7BC0(v20, v19);
    }
    result = (__int64)a5;
    *a5 = v18;
  }
  if ( v11 )
  {
    v14 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v14 )
      result = sub_15D7BC0(v31, v11);
  }
  if ( v10 )
  {
    v14 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v14 )
      result = sub_15D7BC0(v27, v10);
  }
  if ( v24 )
  {
    v22 = *(_DWORD *)(v24 + 8);
    result = (unsigned int)(v22 - 1);
    *(_DWORD *)(v24 + 8) = result;
    if ( v22 == 1 )
      result = sub_15D7BC0(v30, v24);
  }
  if ( v25 )
  {
    v23 = *(_DWORD *)(v25 + 8);
    result = (unsigned int)(v23 - 1);
    *(_DWORD *)(v25 + 8) = result;
    if ( v23 == 1 )
      result = sub_15D7BC0(v29, v25);
  }
  if ( v8 )
  {
    v14 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v14 )
      result = sub_15D7BC0(v28, v8);
  }
  v15 = v32;
  if ( v32 )
  {
    v16 = v33;
    v14 = (*(_DWORD *)(v32 + 8))-- == 1;
    if ( v14 )
      result = sub_15D7BC0(v16, v15);
  }
  if ( v7 )
  {
    v14 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v14 )
      return sub_15D7BC0(v6, v7);
  }
  return result;
}

