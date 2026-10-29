__int64 __fastcall sub_588AA0(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _QWORD *v4; // r12
  __int64 (__fastcall *v5)(__int64, __int64 *); // rax
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 result; // rax
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // [rsp+0h] [rbp-68h] BYREF
  __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 v26[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v27; // [rsp+20h] [rbp-48h] BYREF
  __int64 v28; // [rsp+28h] [rbp-40h]

  v2 = a1[4];
  v3 = a1[5];
  v24 = 0;
  v25 = v2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
  v4 = (_QWORD *)a1[5];
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v4 + 144LL);
  if ( v5 == sub_586990 )
  {
    v6 = v4[6];
    if ( v24 != v6 )
    {
      v24 = v4[6];
      if ( v6 )
        ++*(_DWORD *)(v6 + 8);
    }
  }
  else
  {
    v5(a1[5], &v24);
  }
  v7 = a1[4];
  sub_588490(&v27, (__int64)a1);
  v8 = v27;
  v9 = v28;
  v10 = sub_15E1B70(v7);
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v12 = a1[6];
  if ( v12 )
  {
    v13 = a1[7];
    v14 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v13, v12);
  }
  a1[6] = v11;
  if ( v8 )
  {
    v14 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v9, v8);
  }
  sub_588670((int)&v27, a1[1], (__int64)a1, v24);
  v15 = v27;
  sub_588670((int)v26, a1[1], (__int64)a1, a1[6]);
  sub_5875C0(a1[1], "add_fact", v26[0], v15);
  v16 = v26[0];
  if ( v26[0] )
  {
    v17 = v26[1];
    v14 = (*(_DWORD *)(v26[0] + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v17, v16);
  }
  v18 = v27;
  if ( v27 && (v19 = v28, v14 = *(_DWORD *)(v27 + 8) == 1, --*(_DWORD *)(v27 + 8), v14) )
  {
    sub_15D7BC0(v19, v18);
    result = a1[6];
    v21 = v24;
    if ( result != v24 )
    {
LABEL_19:
      if ( result && (v22 = a1[7], v14 = *(_DWORD *)(result + 8) == 1, --*(_DWORD *)(result + 8), v14) )
      {
        result = sub_15D7BC0(v22, result);
        v21 = v24;
        a1[6] = v24;
        if ( !v21 )
          return result;
      }
      else
      {
        a1[6] = v21;
        if ( !v21 )
          return result;
      }
      result = *(unsigned int *)(v21 + 8);
      v23 = v25;
      *(_DWORD *)(v21 + 8) = result + 1;
      goto LABEL_23;
    }
  }
  else
  {
    result = a1[6];
    v21 = v24;
    if ( result != v24 )
      goto LABEL_19;
  }
  if ( !v21 )
    return result;
  v23 = v25;
  result = (unsigned int)(*(_DWORD *)(v21 + 8) - 1);
LABEL_23:
  *(_DWORD *)(v21 + 8) = result;
  if ( !(_DWORD)result )
    return sub_15D7BC0(v23, v21);
  return result;
}

