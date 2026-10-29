_QWORD **__fastcall sub_C294F0(_QWORD ***a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  _QWORD **result; // rax
  __int64 v10; // rax
  int v11; // eax
  _QWORD **v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdi
  int v15; // [rsp+0h] [rbp-38h]
  int v16; // [rsp+10h] [rbp-28h]
  void *v17; // [rsp+18h] [rbp-20h]

  v6 = *a4;
  if ( *a4 )
  {
    v7 = a4[1];
    v8 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v7, v6);
  }
  result = *a1;
  *a4 = 0;
  if ( *((_BYTE *)result + 16) )
  {
    v10 = sub_15E1B70(**result);
    v11 = sub_15DFC30(***a1, v10);
    result = (_QWORD **)sub_15DFC70(***a1, v15, v11, v16, v17);
    v12 = result;
    if ( result )
      ++*((_DWORD *)result + 2);
    v13 = *a4;
    if ( *a4 )
    {
      v14 = a4[1];
      v8 = (*(_DWORD *)(v13 + 8))-- == 1;
      if ( v8 )
        result = (_QWORD **)sub_15D7BC0(v14, v13);
    }
    *a4 = (__int64)v12;
  }
  return result;
}

