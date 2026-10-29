__int64 __fastcall sub_5D9D10(__int64 *a1)
{
  char i; // al
  __int64 v2; // r12
  __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-50h]
  __int64 v5; // [rsp+8h] [rbp-48h] BYREF
  int v6; // [rsp+10h] [rbp-40h]
  __int128 v7; // [rsp+18h] [rbp-38h]
  __int64 v8; // [rsp+28h] [rbp-28h]
  unsigned __int64 v9; // [rsp+30h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v6 = -1;
  v7 = 0;
  v5 = 0;
  v8 = *a1;
  for ( i = func_tail_iterator_set(&v5, a1, -1); i; i = func_item_iterator_next(&v5, sub_39FD10, 0, 0.0) )
  {
    v2 = v8;
    result = get_first_fcref_from(v8);
    if ( result != -1 )
      goto LABEL_7;
    result = get_first_dref_from(v2);
    if ( result != -1 )
      goto LABEL_7;
  }
  result = -1;
LABEL_7:
  if ( v5 )
  {
    v4 = result;
    lock_func_range(v5, 0);
    return v4;
  }
  return result;
}
