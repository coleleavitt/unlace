__int64 sub_120980()
{
  if ( !(unsigned __int8)get_tid_name() || !(unsigned __int8)get_type_by_tid() )
    return (unsigned int)-1;
  if ( (get_tinfo_property() & 0x3F) != 0x2D )
    return (unsigned int)get_udm_by_fullname();
  if ( !(unsigned __int8)get_tinfo_details() )
    return (unsigned int)-1;
  return (unsigned int)-1;
}

