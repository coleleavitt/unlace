__int64 __fastcall sub_2274CC0(__int64 **a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  __int64 v17; // [rsp-18h] [rbp-58h] BYREF
  void *v18; // [rsp+0h] [rbp-40h]
  __int64 v19; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(**a1 + 75) )
    return 0;
  v7 = (__int64)a1[13];
  if ( !v7 )
  {
    v7 = sub_2273F00(a1, a2, a3, a4, a5, a6);
    a1[13] = (__int64 *)v7;
    if ( !v7 )
      return 0;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v12 = *(unsigned int *)sub_2273810(**a1, a2, v8, v9, v10, v11);
  if ( (_DWORD)v12 == 2 )
    return 0;
  result = 1;
  if ( (_DWORD)v12 == 6 )
  {
    sub_2273D80((__int64)&v17, (__m128 *)**a1, v12, v13, v14, v15);
    if ( v18 != &v19 )
      operator delete(v18);
    return sub_2274CC0(a1);
  }
  return result;
}
