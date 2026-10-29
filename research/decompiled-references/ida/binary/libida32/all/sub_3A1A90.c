__int64 __fastcall sub_3A1A90(_QWORD *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 result; // rax

  result = get_merge_state();
  if ( (result & 2) == 0 && a2 != -1 )
    return sub_3A1890(a1, a2, a3, a4);
  return result;
}

