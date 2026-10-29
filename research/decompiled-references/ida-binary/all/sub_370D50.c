unsigned __int64 __fastcall sub_370D50(char **a1, const char *a2)
{
  char *v2; // rbx
  char *v3; // rbp
  __int64 v5; // rdi
  __int64 *v6; // r14
  __int64 v7; // rbp
  __int64 *func; // rax
  bool (__fastcall *v9)(__int16); // rsi
  char v10; // al
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v14; // [rsp+8h] [rbp-80h]
  unsigned __int8 (__fastcall **v15[2])(_QWORD, __int64, __int64, _QWORD, _QWORD); // [rsp+10h] [rbp-78h] BYREF
  _QWORD v16[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v17; // [rsp+30h] [rbp-58h]
  __int64 v18; // [rsp+40h] [rbp-48h]
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v2 = *a1;
  v19 = __readfsqword(0x28u);
  v15[1] = (unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))a1;
  v15[0] = (unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))&proxim_data_t::recreate_edges;
  v3 = &v2[40 * (_QWORD)a1[1]];
  if ( v2 != v3 )
  {
    do
    {
      v5 = *((_QWORD *)v2 + 2);
      if ( v5 )
      {
        *((_QWORD *)v2 + 3) = 0;
        qfree(v5, a2);
        *((_QWORD *)v2 + 2) = 0;
        *((_QWORD *)v2 + 4) = 0;
      }
      *((_DWORD *)v2 + 2) &= 0xFFFFFFF9;
      v2 += 40;
    }
    while ( v3 != v2 );
    v6 = (__int64 *)*a1;
    v14 = (__int64)&(*a1)[40 * (_QWORD)a1[1]];
    if ( (char *)v14 != *a1 )
    {
      do
      {
        while ( 1 )
        {
          v7 = *v6;
          func = (__int64 *)get_func(*v6);
          if ( func )
            break;
          sub_370880(1u, v7, v7, 1, 1u, v15);
          sub_370880(0, v7, v7, 1, 0, v15);
LABEL_8:
          v6 += 5;
          if ( v6 == (__int64 *)v14 )
            return v19 - __readfsqword(0x28u);
        }
        v9 = (bool (__fastcall *)(__int16))func;
        v18 = -1;
        v16[0] = 0;
        v16[1] = 0xFFFFFFFFLL;
        v17 = 0;
        v18 = *func;
        v10 = func_tail_iterator_set(v16, func, -1);
        v12 = 0;
        while ( v10 )
        {
          ++v12;
          if ( __ROR4__(-1030792151 * v12 + 85899344, 2) <= 0x28F5C28u )
          {
            if ( (unsigned __int8)sub_541EF0(v16, v9, v11) )
              break;
          }
          sub_370880(1u, v18, v7, 1, 5u, v15);
          sub_370880(0, v18, v7, 1, 0, v15);
          v9 = sub_20A790;
          v10 = func_item_iterator_next(v16, sub_20A790, 0);
        }
        if ( !v16[0] )
          goto LABEL_8;
        v6 += 5;
        lock_func_range(v16[0], 0);
      }
      while ( v6 != (__int64 *)v14 );
    }
  }
  return v19 - __readfsqword(0x28u);
}
