__int64 __fastcall sub_368320(__int64 a1, __int64 a2)
{
  __int64 func; // rax

  func = get_func(*(unsigned int *)(a1 + 8));
  *(_DWORD *)(a2 + 8) = get_frame_size(func);
  return 0;
}

