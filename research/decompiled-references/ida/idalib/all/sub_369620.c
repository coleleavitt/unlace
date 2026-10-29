__int64 __fastcall sub_369620(__int64 a1, __int64 a2)
{
  __int64 hidden_range; // rax

  hidden_range = get_hidden_range(*(_QWORD *)(a1 + 8));
  if ( hidden_range )
  {
    *(_BYTE *)(hidden_range + 40) = *(_QWORD *)(a1 + 40) != 0;
    *(_QWORD *)(a2 + 8) = (unsigned __int8)update_hidden_range(hidden_range);
  }
  return 0;
}
