__int64 __fastcall sub_371F60(
        __int64 *a1,
        unsigned __int8 (__fastcall **a2)(_QWORD, __int64, __int64, _QWORD, _QWORD),
        unsigned __int8 a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 *v6; // rbp
  __int64 v8; // rdi
  __int64 *v9; // r12
  const char *func; // rsi
  char i; // al
  unsigned int v12; // ebx
  __int64 v14; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v15; // [rsp+8h] [rbp-C0h]
  __int64 v16; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v17; // [rsp+28h] [rbp-A0h]
  unsigned __int8 (__fastcall **v18[4])(_QWORD, __int64, __int64, _QWORD, _QWORD); // [rsp+40h] [rbp-88h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v20; // [rsp+70h] [rbp-58h]
  __int64 v21; // [rsp+80h] [rbp-48h]
  unsigned __int64 v22; // [rsp+88h] [rbp-40h]

  v6 = a4;
  v8 = *a1;
  v22 = __readfsqword(0x28u);
  v9 = a5;
  if ( !a4 )
    v6 = &v14;
  v18[1] = a2;
  v14 = 0;
  v16 = 0;
  v18[2] = (unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))v6;
  v15 = 0;
  v17 = 0;
  if ( !a5 )
    v9 = &v16;
  v18[0] = (unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))&proxim_data_t::item_t::count_missing;
  v18[3] = (unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))v9;
  func = (const char *)get_func(v8);
  if ( func )
  {
    v21 = -1;
    v19[0] = 0;
    v19[1] = 0xFFFFFFFFLL;
    v20 = 0;
    v21 = *(_QWORD *)func;
    for ( i = func_tail_iterator_set(v19, func, -1); i; i = func_item_iterator_next(v19, sub_20A790, 0) )
    {
      sub_370880(a3, v21, *a1, 1, 0, v18);
      func = (const char *)sub_20A790;
    }
    if ( v19[0] )
    {
      func = nullptr;
      lock_func_range(v19[0], 0);
    }
  }
  else
  {
    func = (const char *)*a1;
    sub_370880(a3, *a1, *a1, 1, 0, v18);
  }
  v12 = *((_DWORD *)v6 + 2) + v9[1];
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, func);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14, func);
  }
  return v12;
}
