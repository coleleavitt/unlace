__int64 sub_43CA0()
{
  __int64 segm_by_name; // rax

  if ( ((unsigned int)getinf(5) == 25 || (unsigned int)getinf(5) == 18) && (segm_by_name = get_segm_by_name()) != 0 )
    return *(_QWORD *)segm_by_name;
  else
    return -1;
}
