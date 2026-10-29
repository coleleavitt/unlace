__int64 __fastcall sub_3C2100(__int64 *a1, _QWORD *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  char dtype_by_size; // dl
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v17; // [rsp+10h] [rbp-C8h] BYREF
  void *v18; // [rsp+20h] [rbp-B8h]
  __int128 v19; // [rsp+28h] [rbp-B0h]
  void *ptr; // [rsp+38h] [rbp-A0h]
  __int128 v21; // [rsp+40h] [rbp-98h]
  _OWORD v22[3]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v23; // [rsp+80h] [rbp-58h]
  int v24; // [rsp+88h] [rbp-50h]
  __int64 v25; // [rsp+90h] [rbp-48h]
  char v26; // [rsp+98h] [rbp-40h]
  unsigned __int64 v27; // [rsp+A8h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  if ( (get_merge_state(a1, a2) & 2) != 0 || (result = sub_6BB290(a2), (_BYTE)result) )
  {
    v16 = 1;
    if ( *(_QWORD *)(a2[3] + 16LL) >= (unsigned __int64)a3
      && ((v7 = a3, (unsigned __int8)sub_3FD360(a2, a3)) || (v7 = a3, rangeset_t_find_range(a2 + 130, a3))) )
    {
      v16 = get_item_end(a3, v7, v14, v15) - (_QWORD)a3;
      v11 = v16;
    }
    else
    {
      if ( !(unsigned __int8)sub_6BB290(a2)
        || (v7 = &v16, !(unsigned __int8)sub_6CBE80(*(_QWORD *)(*a2 + 1872LL), &v16, a3)) )
      {
        v7 = nullptr;
        v18 = nullptr;
        ptr = nullptr;
        v23 = 1;
        v24 = -1;
        v25 = 0;
        v26 = 0;
        v17 = 0;
        v19 = 0;
        v21 = 0;
        v22[0] = 0;
        if ( sub_6BE1C0(a2, 0, &v17, a3) >= 0 )
          v16 = *((_QWORD *)&v17 + 1) >> 3;
        clear_tinfo_t(v22);
        if ( ptr )
        {
          *(_QWORD *)&v21 = 0;
          qfree(ptr);
        }
        if ( v18 )
        {
          *(_QWORD *)&v19 = 0;
          qfree(v18);
        }
      }
      v11 = v16;
    }
    dtype_by_size = get_dtype_by_size(v11, v7, v8, v9, v10);
    v13 = 1;
    if ( dtype_by_size )
      v13 = v16;
    *a1 = v13;
    return 1;
  }
  return result;
}
