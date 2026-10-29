__int64 __fastcall sub_158780(__int64 a1, _QWORD *a2)
{
  _QWORD *view_options; // rax
  __int64 result; // rax

  view_options = (_QWORD *)get_view_options();
  *a2 = *view_options;
  result = *(_QWORD *)((char *)view_options + 7);
  *(_QWORD *)((char *)a2 + 7) = result;
  return result;
}

