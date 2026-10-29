__int64 __fastcall sub_5BE2D0(unsigned int *a1)
{
  char i; // al
  unsigned int v2; // r12d
  __int64 result; // rax
  unsigned int v4; // [rsp+Ch] [rbp-4Ch]
  __int64 v5; // [rsp+10h] [rbp-48h] BYREF
  int v6; // [rsp+18h] [rbp-40h]
  __int64 v7; // [rsp+1Ch] [rbp-3Ch]
  unsigned int v8; // [rsp+28h] [rbp-30h]
  unsigned __int64 v9; // [rsp+38h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v6 = -1;
  v5 = 0;
  v7 = 0;
  v8 = *a1;
  for ( i = func_tail_iterator_set(&v5, a1, 0xFFFFFFFFLL); i; i = func_item_iterator_next(&v5, sub_39AFB0, 0) )
  {
    v2 = v8;
    result = get_first_fcref_from(v8);
    if ( (_DWORD)result != -1 )
      goto LABEL_7;
    result = get_first_dref_from(v2);
    if ( (_DWORD)result != -1 )
      goto LABEL_7;
  }
  result = 0xFFFFFFFFLL;
LABEL_7:
  if ( v5 )
  {
    v4 = result;
    lock_func_range(v5, 0);
    return v4;
  }
  return result;
}

