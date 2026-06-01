__int64 __fastcall sub_36B780(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 fchunk; // rax

  v2 = *(_QWORD *)(a1 + 40);
  fchunk = get_fchunk(*(_QWORD *)(a1 + 8));
  *(_QWORD *)(a2 + 8) = (unsigned __int8)set_tail_owner(fchunk, v2);
  return 0;
}
