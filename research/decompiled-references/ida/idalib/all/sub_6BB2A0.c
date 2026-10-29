__int64 __fastcall sub_6BB2A0(__int64 *a1, char a2)
{
  __int64 v2; // rbp
  _QWORD *std_dirtree; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(*a1 + 1864);
  *(_BYTE *)(v2 + 8) = 1;
  if ( a2 )
    sub_6B75A0(a1, 1, nullptr);
  else
    sub_6D21D0(*(void **)(*a1 + 1872));
  sub_6D3320(*(_QWORD *)(*a1 + 1872));
  std_dirtree = (_QWORD *)get_std_dirtree(0);
  result = save_dirtree(*std_dirtree);
  *(_BYTE *)(v2 + 8) = 0;
  return result;
}
