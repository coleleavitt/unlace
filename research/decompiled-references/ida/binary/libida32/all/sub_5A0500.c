__int64 __fastcall sub_5A0500(_QWORD *a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  int v8; // [rsp+8h] [rbp-50h]
  __int64 v9; // [rsp+Ch] [rbp-4Ch]
  unsigned int v10; // [rsp+18h] [rbp-40h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v7 = 0;
  v8 = -1;
  v9 = 0;
  if ( a3 == -1 && a2 )
    v4 = *a2;
  else
    v4 = a3;
  v10 = v4;
  func_tail_iterator_set(&v7, a2, a3);
  v5 = func_item_iterator_succ(&v7, sub_39AFB0, 0);
  if ( (_BYTE)v5 )
  {
    if ( a3 < *a2 && v10 >= *a2 )
      v5 = 0;
    else
      v5 = sub_5A03C0(a1, (__int64)a2, v10);
  }
  if ( v7 )
    lock_func_range(v7, 0);
  return v5;
}

