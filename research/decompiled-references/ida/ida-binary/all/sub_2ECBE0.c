__int64 __fastcall sub_2ECBE0(__int64 a1, __int64 a2)
{
  _QWORD *view_options; // rax
  __int64 result; // rax

  view_options = (_QWORD *)get_view_options(0);
  *(_QWORD *)a2 = *view_options;
  result = *(_QWORD *)((char *)view_options + 7);
  *(_BYTE *)(a2 + 6) = 0;
  *(_QWORD *)(a2 + 7) = result;
  return result;
}
