__int64 __fastcall sub_6E19F0(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 *v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+8h] [rbp-50h]
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  __int64 v19; // [rsp+18h] [rbp-40h]
  __m128 v20[3]; // [rsp+20h] [rbp-38h] BYREF

  v4 = (__int64 *)a1[1];
  v5 = *v4;
  v16 = 0;
  v17 = v5;
  v6 = *v4;
  v18 = 0;
  v19 = v6;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64 *))(*a1 + 16LL))(a1, a2, &v16);
  (*(void (__fastcall **)(_QWORD *, __int64, __int64 *))(*a1 + 24LL))(a1, a2, &v18);
  v20[0] = _mm_loadh_ps((const double *)&v18);
  result = sub_6E1880(v4, 2, v20);
  v8 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v9 = *a3;
  if ( *a3 )
  {
    v10 = a3[1];
    v11 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v11 )
      result = sub_15D7BC0(v10, v9);
  }
  v12 = v18;
  *a3 = v8;
  if ( v12 )
  {
    v13 = v19;
    v11 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v11 )
      result = sub_15D7BC0(v13, v12);
  }
  v14 = v16;
  if ( v16 )
  {
    v15 = v17;
    v11 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v11 )
      return sub_15D7BC0(v15, v14);
  }
  return result;
}

