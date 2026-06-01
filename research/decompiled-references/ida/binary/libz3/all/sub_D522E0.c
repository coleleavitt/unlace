__int64 __fastcall sub_D522E0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r14
  void *v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // r15
  int v11; // r9d
  __int64 result; // rax
  bool v13; // zf
  __int64 v14; // [rsp+8h] [rbp-80h]
  __int64 v16; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+38h] [rbp-50h]
  _QWORD v20[9]; // [rsp+40h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v18 = 0;
  v19 = 0;
  v20[0] = 1;
  v20[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v20);
  BYTE4(v20[0]) &= ~1u;
  LODWORD(v20[0]) = 1;
  sub_1674520(a1 + 232, &v18, 1);
  v5 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v18);
  sub_182CBA0(v5, v20);
  v6 = sub_15E1B70(v4);
  v7 = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v17 = v4;
  v16 = 0;
  sub_D518E0(a1, a2, &v16);
  v18 = 0;
  v8 = v16;
  v14 = v17;
  v19 = v4;
  sub_D51670(a1, a2, &v18);
  v9 = v18;
  v10 = v19;
  result = sub_D51DB0(a1, v7, v8, v18, a4, v11);
  if ( v9 )
  {
    v13 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v13 )
      result = sub_15D7BC0(v10, v9);
  }
  if ( v8 )
  {
    v13 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v13 )
      result = sub_15D7BC0(v14, v8);
  }
  if ( v7 )
  {
    v13 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v13 )
      return sub_15D7BC0(v4, v7);
  }
  return result;
}

