__int64 __fastcall sub_6CD9A0(__int64 *a1, int *a2, __int64 a3, int *a4, __int64 a5, __int64 *a6)
{
  __int64 v10; // rax
  __int64 v11; // r13
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbx
  void *v18; // r12
  void *v19; // r12
  __int64 result; // rax
  __int64 v21; // [rsp+10h] [rbp-88h]
  _QWORD v23[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v26[9]; // [rsp+50h] [rbp-48h] BYREF

  v21 = *a1;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  if ( a5 )
    ++*(_DWORD *)(a5 + 8);
  v23[0] = 0;
  v23[1] = 0;
  v24[0] = 1;
  v24[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v23, a2);
  v25[0] = 0;
  v25[1] = 0;
  v26[0] = 1;
  v26[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v25, a4);
  if ( SLODWORD(v23[0]) < 0 )
    sub_1831620(qword_1C7F2C0, v23);
  if ( SLODWORD(v25[0]) < 0 )
    sub_1831620(qword_1C7F2C0, v25);
  v10 = sub_6C19A0((__int64)a1, (__int64)v23, a5);
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  if ( a5 )
  {
    v12 = (*(_DWORD *)(a5 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v21, a5);
  }
  v13 = sub_6C19A0((__int64)a1, (__int64)v25, a3);
  v14 = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  if ( a3 && (v12 = *(_DWORD *)(a3 + 8) == 1, --*(_DWORD *)(a3 + 8), v12) )
  {
    sub_15D7BC0(v21, a3);
    v15 = a1[2];
    if ( *a2 >= 0 )
    {
LABEL_19:
      v16 = sub_15E1B70(v15);
      v17 = v16;
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      goto LABEL_21;
    }
  }
  else
  {
    v15 = a1[2];
    if ( *a2 >= 0 )
      goto LABEL_19;
  }
  v16 = sub_15E1B70(v15);
  v17 = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
LABEL_21:
  sub_6C1A50((__int64)a1, v16, a6);
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v25);
  sub_182CBA0(v18, v26);
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v23);
  result = sub_182CBA0(v19, v24);
  if ( v17 )
  {
    v12 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v21, v17);
  }
  if ( v11 )
  {
    v12 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v12 )
      result = sub_15D7BC0(v21, v11);
  }
  if ( v14 )
  {
    v12 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v12 )
      return sub_15D7BC0(v21, v14);
  }
  return result;
}

