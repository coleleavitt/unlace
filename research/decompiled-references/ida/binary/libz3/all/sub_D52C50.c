__int64 __fastcall sub_D52C50(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r13
  int *v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rbx
  int v8; // r8d
  int v9; // r9d
  __int64 result; // rax
  bool v11; // zf
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned int v15; // [rsp+0h] [rbp-68h]
  void *v16; // [rsp+0h] [rbp-68h]
  __int64 v17; // [rsp+8h] [rbp-60h]
  __int64 v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+10h] [rbp-58h] BYREF
  __int64 v20; // [rsp+18h] [rbp-50h]
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  __int64 v22; // [rsp+28h] [rbp-40h]
  int v23; // [rsp+30h] [rbp-38h]
  int v24; // [rsp+38h] [rbp-30h]
  int v25; // [rsp+40h] [rbp-28h]
  int v26; // [rsp+48h] [rbp-20h]
  int v27; // [rsp+50h] [rbp-18h]
  char v28; // [rsp+58h] [rbp-10h]
  __int64 v29; // [rsp+60h] [rbp-8h]

  v4 = *(_QWORD *)(a2 + 32);
  v17 = *(_QWORD *)(a1 + 8);
  v5 = *(int **)(*(_QWORD *)(sub_15D1F10(v4) + 24) + 8LL);
  if ( *((_BYTE *)v5 + 8) )
    sub_DBF6E(0);
  v6 = *v5;
  v19 = 1;
  v20 = 0;
  v15 = v6;
  v21 = 1;
  v22 = 0;
  sub_182CBA0(qword_1C7F2C0, &v21);
  BYTE4(v21) &= ~1u;
  LODWORD(v21) = 1;
  v7 = sub_1674520(a1 + 232, &v19, v15);
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v19);
  sub_182CBA0(v16, &v21);
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  result = sub_14DE480(
             (int)a1 + 16,
             v4,
             v7,
             (_DWORD)a3,
             v8,
             v9,
             (_DWORD)v16,
             v17,
             v19,
             v20,
             v21,
             v22,
             v23,
             v24,
             v25,
             v26,
             v27,
             v28,
             v29);
  if ( (_DWORD)result == 5 )
  {
    result = sub_14DC5D0(a1 + 16, v4, v7);
    v12 = result;
    if ( result )
      ++*(_DWORD *)(result + 8);
    v13 = *a3;
    if ( *a3 )
    {
      v14 = a3[1];
      v11 = (*(_DWORD *)(v13 + 8))-- == 1;
      if ( v11 )
        result = sub_15D7BC0(v14, v13);
    }
    *a3 = v12;
  }
  if ( v7 )
  {
    v11 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v11 )
      return sub_15D7BC0(v18, v7);
  }
  return result;
}

