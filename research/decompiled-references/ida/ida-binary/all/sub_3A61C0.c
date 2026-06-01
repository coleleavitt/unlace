unsigned __int64 __fastcall sub_3A61C0(_QWORD *a1, char a2)
{
  void (__fastcall **v2)(_QWORD *, __int64, __int16 *); // rax
  __int64 (*v3)(void); // rax
  _BYTE *v4; // rbp
  __int64 (__fastcall *v5)(__int64); // rax
  char v6; // r13
  void (__fastcall **v7)(_QWORD *, __int64, __int16 *); // rax
  void (__fastcall *v8)(_QWORD *, __int64, __int64); // rax
  void (__fastcall **v9)(_QWORD *, __int64, __int16 *); // rax
  void (__fastcall **v10)(_QWORD *, __int64, __int16 *); // rax
  __int16 v12; // [rsp+2h] [rbp-36h] BYREF
  __int16 v13; // [rsp+4h] [rbp-34h] BYREF
  __int16 v14; // [rsp+6h] [rbp-32h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v2 = (void (__fastcall **)(_QWORD *, __int64, __int16 *))*a1;
  v15 = __readfsqword(0x28u);
  v3 = (__int64 (*)(void))v2[9];
  if ( (char *)v3 == (char *)form_actions_impl_t__::vfunc_9 )
    v4 = (_BYTE *)a1[4];
  else
    v4 = (_BYTE *)v3();
  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL);
  if ( v5 == edit_type_form_data_t__::vfunc_5 )
    v6 = v4[296];
  else
    v6 = v5((__int64)v4);
  v7 = (void (__fastcall **)(_QWORD *, __int64, __int16 *))*a1;
  v12 = 0;
  (*v7)(a1, 18, &v12);
  v8 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 16LL);
  if ( v12 == 1 || v6 == 29 )
  {
    v8(a1, 17, 0);
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 16LL))(a1, 19, 0);
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 16LL))(a1, 2, 0);
  }
  else
  {
    v8(a1, 17, 1);
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 16LL))(a1, 19, 1);
    v9 = (void (__fastcall **)(_QWORD *, __int64, __int16 *))*a1;
    v13 = 0;
    (*v9)(a1, 17, &v13);
    (*(void (__fastcall **)(_QWORD *, __int64, bool))(*a1 + 16LL))(a1, 2, v13 != 0);
    v10 = (void (__fastcall **)(_QWORD *, __int64, __int16 *))*a1;
    v14 = 0;
    (*v10)(a1, 19, &v14);
    (*(void (__fastcall **)(_QWORD *, __int64, bool))(*a1 + 16LL))(a1, 18, v14 == 0);
    if ( v14 && v13 && !v4[316] )
    {
      v13 = 0;
      (*(void (__fastcall **)(_QWORD *, __int64, __int16 *))(*a1 + 8LL))(a1, 17, &v13);
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 16LL))(a1, 2, 0);
      v4[316] = 1;
    }
  }
  if ( a2 )
    v4[316] = 0;
  return v15 - __readfsqword(0x28u);
}
