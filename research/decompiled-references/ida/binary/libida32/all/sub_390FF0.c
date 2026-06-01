__int64 sub_390FF0()
{
  unsigned int v0; // ebx
  __int64 license_manager; // rdi
  __int64 (*v3)(); // rax

  v0 = (unsigned __int8)byte_2CA1690;
  if ( byte_2CA1690 )
    return v0;
  license_manager = get_license_manager();
  v3 = *(__int64 (**)())(*(_QWORD *)license_manager + 128LL);
  if ( v3 == sub_3907D0 )
    return v0;
  else
    return ((__int64 (__fastcall *)(__int64))v3)(license_manager);
}

