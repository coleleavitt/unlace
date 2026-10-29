__int64 __fastcall sub_36CF20(__int64 a1, __int64 a2)
{
  __int64 *next_seg; // rax
  __int64 v3; // rdx

  next_seg = (__int64 *)get_next_seg(*(_QWORD *)(a1 + 8));
  v3 = -1;
  if ( next_seg )
    v3 = *next_seg;
  *(_QWORD *)(a2 + 8) = v3;
  return 0;
}
