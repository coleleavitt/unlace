__int64 __fastcall sub_D6AC30(_QWORD *a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 *a6)
{
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+8h] [rbp-40h]

  v9 = a1[1];
  v14 = 0;
  v15 = v9;
  sub_D5C740(a1, a2, a5, &v14);
  result = sub_D690E0(a1, a2, a3, a4, &v14, a6);
  v11 = v14;
  if ( v14 )
  {
    v12 = v15;
    if ( (*(_DWORD *)(v14 + 8))-- == 1 )
      return sub_15D7BC0(v12, v11);
  }
  return result;
}

