unsigned __int64 __fastcall sub_1E85E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  bool v5; // zf
  unsigned __int8 (__fastcall *v6)(__int64 *, __int64 *, __int128 *, __int64 *, _QWORD); // rax
  int v9; // r12d
  struct _Unwind_Exception *v10; // rbx
  __int64 v11; // [rsp+0h] [rbp-60h] BYREF
  __int128 v12; // [rsp+8h] [rbp-58h] BYREF
  __int64 v13; // [rsp+18h] [rbp-48h]
  __int64 v14; // [rsp+20h] [rbp-40h]
  __int64 v15; // [rsp+28h] [rbp-38h]
  __int64 v16; // [rsp+30h] [rbp-30h]
  unsigned __int64 v17; // [rsp+40h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v4 = *a1;
  v5 = a1[53] == 0;
  v13 = 0;
  v14 = -1;
  v15 = 0;
  v6 = *(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int128 *, __int64 *, _QWORD))(v4 + 680);
  v16 = 0;
  v12 = 0;
  if ( v5 )
  {
    v10 = (struct _Unwind_Exception *)sub_1E69C0(0.0, (__int64)a1, a2, a3, a4);
    _Unwind_Resume(v10);
  }
  if ( v6(a1, &v11, &v12, a1 + 48, 0) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 40) + 112LL))(*(_QWORD *)(v11 + 40));
    if ( v9 == (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 40) + 112LL))(*(_QWORD *)(a3 + 40)) )
      sub_1E8570((__int64)(a1 + 78), (const char *)&v11);
  }
  if ( v16 )
    qfree(v16, (const char *)&v11);
  return v17 - __readfsqword(0x28u);
}
