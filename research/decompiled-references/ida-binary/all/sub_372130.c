unsigned __int64 __fastcall sub_372130(
        __int64 *a1,
        bool (__fastcall *func)(__int16 a1),
        char a3,
        __int64 *a4,
        __int64 *a5)
{
  bool (__fastcall *v5)(__int16); // r14
  __int64 *v6; // r12
  __int64 *v8; // rbp
  _QWORD *v9; // r15
  _QWORD *v10; // r13
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 *v14; // rdi
  __int64 v15; // rdx
  bool (__fastcall *v16)(__int16); // rcx
  bool (__fastcall *v17)(__int16); // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  char i; // al
  __int64 v24; // [rsp+8h] [rbp-C8h] BYREF
  __int128 v25; // [rsp+10h] [rbp-C0h]
  __int64 v26; // [rsp+28h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+30h] [rbp-A0h]
  unsigned __int8 (__fastcall **v28[4])(_QWORD, __int64, __int64, _QWORD, _QWORD); // [rsp+48h] [rbp-88h] BYREF
  _QWORD v29[2]; // [rsp+68h] [rbp-68h] BYREF
  __int128 v30; // [rsp+78h] [rbp-58h]
  __int64 v31; // [rsp+88h] [rbp-48h]
  unsigned __int64 v32; // [rsp+90h] [rbp-40h]

  v5 = func;
  v6 = a4;
  v32 = __readfsqword(0x28u);
  v8 = a5;
  v25 = 0;
  if ( !a4 )
    v6 = &v24;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  if ( !a5 )
    v8 = &v26;
  if ( a3 )
  {
    v9 = (_QWORD *)a1[2];
    v10 = &v9[a1[3]];
    if ( v10 == v9 )
      return v32 - __readfsqword(0x28u);
    do
    {
      v11 = *(_QWORD **)v5;
      v12 = *v9;
      v13 = *(_QWORD *)v5 + 40LL * *((_QWORD *)v5 + 1);
      if ( *(_QWORD *)v5 != v13 )
      {
        while ( v12 != *v11 )
        {
          v11 += 5;
          if ( (_QWORD *)v13 == v11 )
            goto LABEL_19;
        }
        if ( v11 )
        {
          v14 = v6;
          if ( !get_func(*v9) )
            v14 = v8;
          func = (bool (__fastcall *)(__int16))*v14;
          v15 = v14[1];
          v16 = (bool (__fastcall *)(__int16))(*v14 + 8 * v15);
          if ( (bool (__fastcall *)(__int16))*v14 == v16 )
            goto LABEL_25;
          v17 = (bool (__fastcall *)(__int16))*v14;
          while ( v12 != *(_QWORD *)v17 )
          {
            v17 = (bool (__fastcall *)(__int16))((char *)v17 + 8);
            if ( v16 == v17 )
              goto LABEL_25;
          }
          if ( v16 == v17 )
          {
LABEL_25:
            v19 = v15 + 1;
            if ( v14[2] < v19 )
            {
              v20 = qvector_reserve(v14, func, v19, 8);
              v21 = v14[1];
              *v14 = v20;
              v16 = (bool (__fastcall *)(__int16))(v20 + 8 * v21);
            }
            *(_QWORD *)v16 = v12;
            ++v14[1];
          }
        }
      }
LABEL_19:
      ++v9;
    }
    while ( v10 != v9 );
  }
  else
  {
    v22 = *a1;
    v28[1] = (unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))func;
    v28[0] = (unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))&proxim_data_t::item_t::get_present;
    v28[2] = (unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))v6;
    v28[3] = (unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))v8;
    func = (bool (__fastcall *)(__int16))get_func(v22);
    if ( func )
    {
      v31 = -1;
      v29[1] = 0xFFFFFFFFLL;
      v29[0] = 0;
      v30 = 0;
      v31 = *(_QWORD *)func;
      for ( i = func_tail_iterator_set(v29, func, -1); i; i = func_item_iterator_next(v29, sub_20A790, 0) )
      {
        sub_370880(0, v31, *a1, 1, 0, v28);
        func = sub_20A790;
      }
      if ( v29[0] )
      {
        func = nullptr;
        lock_func_range(v29[0], 0);
      }
    }
    else
    {
      func = (bool (__fastcall *)(__int16))*a1;
      sub_370880(0, *a1, *a1, 1, 0, v28);
    }
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26, (const char *)func);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24, (const char *)func);
  }
  return v32 - __readfsqword(0x28u);
}
