__int64 __fastcall dwarf_get_section_count(_QWORD *a1)
{
  _QWORD *v1; // rax

  if ( a1 && *a1 == 3959286781LL && (v1 = (_QWORD *)a1[1]) != nullptr )
    return (*(__int64 (__fastcall **)(_QWORD))(v1[1] + 40LL))(*v1);
  else
    return 0;
}

