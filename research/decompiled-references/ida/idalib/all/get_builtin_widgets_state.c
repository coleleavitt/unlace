__int64 __fastcall get_builtin_widgets_state(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax

  if ( (unsigned __int8)sub_3FB5F0() )
  {
    v1 = *(_QWORD *)(qword_2CCB598 + 1704);
    v2 = *(_QWORD *)(v1 + 40);
    result = *(_QWORD *)(v1 + 32);
    a1[1] = v2;
    *a1 = result;
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    return 0;
  }
  return result;
}
