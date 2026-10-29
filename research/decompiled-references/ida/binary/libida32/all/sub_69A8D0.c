__int64 __fastcall sub_69A8D0(__int64 *a1, char a2)
{
  __int64 v2; // rbp
  _QWORD *std_dirtree; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(*a1 + 1672);
  *(_BYTE *)(v2 + 8) = 1;
  if ( a2 )
    sub_696CC0(a1, 1, nullptr);
  else
    sub_6B11C0(*(_QWORD *)(*a1 + 1680));
  sub_6B2310(*(_QWORD *)(*a1 + 1680));
  std_dirtree = (_QWORD *)get_std_dirtree(0);
  result = save_dirtree(*std_dirtree);
  *(_BYTE *)(v2 + 8) = 0;
  return result;
}

