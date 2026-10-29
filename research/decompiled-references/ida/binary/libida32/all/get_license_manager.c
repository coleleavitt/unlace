__int64 get_license_manager()
{
  __int64 result; // rax

  if ( !qword_2CA1688 )
    sub_3908F0();
  result = qword_2CA1658;
  if ( !qword_2CA1658 )
  {
    qword_2CA1658 = new_license_manager();
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 (__fastcall **)(), _QWORD))(*(_QWORD *)qword_2CA1658 + 24LL))(
            qword_2CA1658,
            &off_2C57918,
            0) )
    {
      if ( !under_debugger )
        interr(3130);
      BUG();
    }
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)qword_2CA1658 + 48LL))(
      qword_2CA1658,
      &xmmword_2CA1660,
      0);
    get_ida_subdirs();
    return qword_2CA1658;
  }
  return result;
}

