_BOOL8 __fastcall sub_3B9C70(__int64 a1)
{
  __int64 v1; // rbx
  __int64 idati; // rax

  v1 = **(_QWORD **)(a1 + 48);
  idati = get_idati(a1);
  return sub_3CE640(*(_QWORD *)(*(_QWORD *)(idati + 24) + 8 * v1)) != 0;
}
