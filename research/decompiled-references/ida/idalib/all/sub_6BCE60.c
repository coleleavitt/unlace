__int64 __fastcall sub_6BCE60(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  const char *numbered_type_name; // rax

  numbered_type_name = (const char *)get_numbered_type_name(0, a2);
  if ( numbered_type_name )
    return sub_6BCC40(*(_QWORD **)(qword_2CCB598 + 1672), numbered_type_name, a1, a3, 0);
  else
    return -1;
}
