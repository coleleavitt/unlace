__int64 __fastcall sub_36B9F0(__int64 a1, __int64 a2)
{
  __int64 func; // rax
  __int64 v3; // rbp

  *(_QWORD *)(a2 + 8) = -1;
  func = get_func(*(_QWORD *)(a1 + 8));
  if ( func )
  {
    v3 = func;
    if ( (unsigned __int8)set_frame_size(
                            func,
                            *(_QWORD *)(a1 + 40),
                            *(unsigned __int16 *)(a1 + 72),
                            *(_QWORD *)(a1 + 104)) )
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v3 + 24);
  }
  return 0;
}
