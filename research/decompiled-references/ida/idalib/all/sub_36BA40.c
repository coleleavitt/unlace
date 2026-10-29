__int64 __fastcall sub_36BA40(__int64 a1, __int64 a2)
{
  __int64 func; // rax

  func = get_func(*(_QWORD *)(a1 + 8));
  *(_QWORD *)(a2 + 8) = get_frame_size(func);
  return 0;
}
