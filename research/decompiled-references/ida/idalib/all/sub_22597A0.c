_UNKNOWN **__fastcall sub_22597A0(_QWORD *a1)
{
  _UNKNOWN **result; // rax
  volatile signed __int32 *v2; // rdi

  result = &off_2BEB888;
  *a1 = &off_2BEB888;
  v2 = (volatile signed __int32 *)a1[2];
  if ( v2 )
  {
    if ( !_InterlockedSub(v2 + 2, 1u) )
      return (_UNKNOWN **)(*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return result;
}
