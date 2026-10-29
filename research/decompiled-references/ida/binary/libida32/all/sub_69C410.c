__int64 __fastcall sub_69C410(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  const char *numbered_type_name; // rax

  numbered_type_name = (const char *)get_numbered_type_name(0, a2);
  if ( numbered_type_name )
    return sub_69C1F0(*(_QWORD **)(qword_2CA1698 + 1480), numbered_type_name, a1, a3, 0);
  else
    return 0xFFFFFFFFLL;
}

