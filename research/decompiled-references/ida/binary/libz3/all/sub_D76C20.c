__int64 __fastcall sub_D76C20(_QWORD *a1, __int64 a2, __int64 a3, _Unwind_Exception_Class *a4, __int64 a5)
{
  void (*v5)(_Unwind_Reason_Code, struct _Unwind_Exception *); // r12
  _Unwind_Exception_Class v6; // rbx
  _Unwind_Word v7; // rbp
  __int64 v8; // rsi
  __int64 result; // rax
  bool v10; // zf
  struct _Unwind_Exception v11[2]; // [rsp+0h] [rbp-48h] BYREF

  v5 = (void (*)(_Unwind_Reason_Code, struct _Unwind_Exception *))a1[1];
  v6 = *a4;
  v11[0].exception_cleanup = v5;
  v11[0].private_2 = (_Unwind_Word)v5;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v7 = a4[1];
  v11[0].exception_class = v6;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v8 = *(_QWORD *)(a2 + 40);
  v11[0].private_1 = v7;
  result = sub_D74200(a1, v8, v11, (__int64 *)&v11[0].private_1, a5);
  if ( v7 )
  {
    v10 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v10 )
      result = sub_15D7BC0(v5, v7);
  }
  if ( v6 )
  {
    v10 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v10 )
      return sub_15D7BC0(v5, v6);
  }
  return result;
}

