__int64 __fastcall sub_369C30(__int64 a1, __int64 a2)
{
  int v2; // edx
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v5; // [rsp+8h] [rbp-50h]
  unsigned __int64 v6; // [rsp+18h] [rbp-40h]

  v2 = *(_DWORD *)(a2 + 8);
  v6 = __readfsqword(0x28u);
  if ( v2 > 0 )
  {
    ptr = nullptr;
    v5 = 0;
    print_idcv(&ptr, a1, 0, 0);
    sub_365330();
  }
  return 0;
}

