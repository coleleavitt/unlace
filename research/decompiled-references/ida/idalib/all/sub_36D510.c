__int64 __fastcall sub_36D510(__int64 a1, __int64 a2)
{
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v4; // [rsp+8h] [rbp-50h]
  unsigned __int64 v5; // [rsp+18h] [rbp-40h]

  v5 = __readfsqword(0x28u);
  if ( *(__int64 *)(a2 + 8) > 0 )
  {
    v4 = 0;
    ptr = nullptr;
    print_idcv(&ptr, a1, 0, 0);
    sub_368890();
  }
  return 0;
}
