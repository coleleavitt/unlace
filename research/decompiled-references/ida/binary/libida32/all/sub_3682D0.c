__int64 __fastcall sub_3682D0(__int64 a1, __int64 a2)
{
  __int64 func; // rax
  __int64 v3; // rbp

  *(_DWORD *)(a2 + 8) = -1;
  func = get_func(*(unsigned int *)(a1 + 8));
  if ( func )
  {
    v3 = func;
    if ( (unsigned __int8)set_frame_size(
                            func,
                            *(unsigned int *)(a1 + 40),
                            *(unsigned __int16 *)(a1 + 72),
                            *(unsigned int *)(a1 + 104)) )
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(v3 + 16);
  }
  return 0;
}

