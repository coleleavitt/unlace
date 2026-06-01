__int64 __fastcall sub_AF0B0(_QWORD *ptr)
{
  void (__fastcall *v1)(_QWORD, _QWORD *); // rax

  if ( !ptr )
    return 0;
  if ( ptr[113] )
    return -64;
  if ( (unsigned __int64)ptr < ptr[85] || (unsigned __int64)ptr >= ptr[86] )
  {
    sub_AF020((__int64)ptr);
    v1 = (void (__fastcall *)(_QWORD, _QWORD *))ptr[110];
    if ( v1 )
      v1(ptr[111], ptr);
    else
      free(ptr);
    return 0;
  }
  else
  {
    sub_AF020((__int64)ptr);
    return 0;
  }
}

