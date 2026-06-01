char *__fastcall sub_370AA0(__int64 a1, __int64 a2, int a3)
{
  char *v4; // rsi
  __int64 v6; // rdx
  char *v7; // rbp
  char *result; // rax
  unsigned __int64 v9; // rdx
  bool (__fastcall *func)(__int16); // rsi
  char v11; // al
  __int64 v12; // rdx
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int8 (__fastcall **v16[2])(_QWORD, __int64, __int64, _QWORD, _QWORD); // [rsp+10h] [rbp-78h] BYREF
  _QWORD v17[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+40h] [rbp-48h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v4 = *(char **)a1;
  v20 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = &v4[40 * v6];
  if ( v7 == v4 )
    goto LABEL_6;
  result = v4;
  while ( a2 != *(_QWORD *)result )
  {
    result += 40;
    if ( v7 == result )
      goto LABEL_6;
  }
  if ( !result )
  {
LABEL_6:
    v9 = v6 + 1;
    if ( *(_QWORD *)(a1 + 16) < v9 )
    {
      v14 = qvector_reserve(a1, v4, v9, 40);
      v15 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v14;
      v7 = (char *)(v14 + 40 * v15);
    }
    *(_QWORD *)v7 = -1;
    *((_QWORD *)v7 + 1) = 0;
    *((_QWORD *)v7 + 2) = 0;
    *(_OWORD *)(v7 + 24) = 0;
    ++*(_QWORD *)(a1 + 8);
    *(_QWORD *)v7 = a2;
    v16[0] = (unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))&proxim_data_t::add_item1;
    v16[1] = (unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))a1;
    if ( a3 > 0 )
    {
      func = (bool (__fastcall *)(__int16))get_func(a2);
      if ( func )
      {
        v19 = -1;
        v17[1] = 0xFFFFFFFFLL;
        v17[0] = 0;
        v18 = 0;
        v19 = *(_QWORD *)func;
        v11 = func_tail_iterator_set(v17, func, -1);
        v13 = 0;
        while ( v11 )
        {
          ++v13;
          if ( __ROR4__(-1030792151 * v13 + 85899344, 2) <= 0x28F5C28u )
          {
            if ( (unsigned __int8)sub_541EF0(v17, func, v12) )
              break;
          }
          sub_370880(1u, v19, a2, a3, 0, v16);
          sub_370880(0, v19, a2, a3, 0, v16);
          func = sub_20A790;
          v11 = func_item_iterator_next(v17, sub_20A790, 0);
        }
        if ( v17[0] )
          lock_func_range(v17[0], 0);
      }
      else
      {
        *((_DWORD *)v7 + 2) |= 1u;
        sub_370880(1u, a2, a2, a3, 0, v16);
        sub_370880(0, a2, a2, a3, 0, v16);
      }
    }
    return v7;
  }
  return result;
}
