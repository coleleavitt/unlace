__int64 __fastcall sub_7341B0(_QWORD *ptr)
{
  if ( !ptr )
    return 4294967194LL;
  if ( ptr[40] )
    sub_734100((__int64)ptr);
  ((void (__fastcall *)(_QWORD, _QWORD))ptr[5])(ptr[7], ptr[12]);
  free(ptr);
  return 0;
}

