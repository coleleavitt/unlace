__int64 __fastcall sub_D504D0(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // rax
  void *v5; // r15
  __int64 v6; // rbx
  int v7; // r8d
  int v8; // r9d
  __int64 result; // rax
  bool v10; // zf
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // [rsp+0h] [rbp-68h]
  __int64 v15; // [rsp+8h] [rbp-60h]
  __int64 v16; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-40h]
  int v21; // [rsp+30h] [rbp-38h]
  int v22; // [rsp+38h] [rbp-30h]
  int v23; // [rsp+40h] [rbp-28h]
  int v24; // [rsp+48h] [rbp-20h]
  int v25; // [rsp+50h] [rbp-18h]
  char v26; // [rsp+58h] [rbp-10h]
  __int64 v27; // [rsp+60h] [rbp-8h]

  v15 = *(_QWORD *)(a1 + 8);
  v17 = 3;
  v18 = 0;
  v19 = 1;
  v20 = 0;
  sub_182CBA0(qword_1C7F2C0, &v19);
  BYTE4(v19) &= ~1u;
  LODWORD(v19) = 1;
  v4 = sub_1674520(a1 + 232, &v17, 3);
  v5 = qword_1C7F2C0;
  v6 = v4;
  sub_182CBA0(qword_1C7F2C0, &v17);
  sub_182CBA0(v5, &v19);
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  result = sub_14DE480(
             (int)a1 + 16,
             a2,
             v6,
             (_DWORD)a3,
             v7,
             v8,
             a2,
             v15,
             v17,
             v18,
             v19,
             v20,
             v21,
             v22,
             v23,
             v24,
             v25,
             v26,
             v27);
  if ( (_DWORD)result == 5 )
  {
    result = sub_14DC5D0(a1 + 16, v14, v6);
    v11 = result;
    if ( result )
      ++*(_DWORD *)(result + 8);
    v12 = *a3;
    if ( *a3 )
    {
      v13 = a3[1];
      v10 = (*(_DWORD *)(v12 + 8))-- == 1;
      if ( v10 )
        result = sub_15D7BC0(v13, v12);
    }
    *a3 = v11;
  }
  if ( v6 )
  {
    v10 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v10 )
      return sub_15D7BC0(v16, v6);
  }
  return result;
}

