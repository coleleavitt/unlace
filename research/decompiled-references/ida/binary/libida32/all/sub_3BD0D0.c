__int64 __fastcall sub_3BD0D0(int *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  char dtype_by_size; // dl
  int v15; // eax
  unsigned int v16; // [rsp+Ch] [rbp-BCh] BYREF
  __int128 v17; // [rsp+10h] [rbp-B8h] BYREF
  void *v18; // [rsp+20h] [rbp-A8h]
  __int128 v19; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+38h] [rbp-90h]
  __int128 v21; // [rsp+40h] [rbp-88h]
  __int128 v22; // [rsp+50h] [rbp-78h] BYREF
  __int64 v23; // [rsp+70h] [rbp-58h]
  int v24; // [rsp+78h] [rbp-50h]
  __int64 v25; // [rsp+80h] [rbp-48h]
  char v26; // [rsp+88h] [rbp-40h]
  unsigned __int64 v27; // [rsp+98h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  if ( (get_merge_state(a1, a2) & 2) != 0 || (result = sub_69A8C0(a2), (_BYTE)result) )
  {
    v7 = (unsigned int *)a3;
    v16 = 1;
    if ( (unsigned __int8)sub_3EA400(a2, a3) || (v7 = (unsigned int *)a3, rangeset_t_find_range(a2 + 1032, a3)) )
    {
      v16 = get_item_end(a3, v7, v8, v9) - a3;
      v13 = v16;
    }
    else
    {
      if ( !(unsigned __int8)sub_69A8C0(a2)
        || (v7 = &v16, !(unsigned __int8)sub_6AAF20(*(_QWORD *)(*(_QWORD *)a2 + 1680LL), &v16, a3)) )
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
        v22 = 0;
        if ( sub_69D720(a2, 0, &v17, a3) >= 0 )
          v16 = *((_QWORD *)&v17 + 1) >> 3;
        clear_tinfo_t(&v22);
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
      v13 = v16;
    }
    dtype_by_size = get_dtype_by_size(v13, v7, v10, v11, v12);
    v15 = 1;
    if ( dtype_by_size )
      v15 = v16;
    *a1 = v15;
    return 1;
  }
  return result;
}

