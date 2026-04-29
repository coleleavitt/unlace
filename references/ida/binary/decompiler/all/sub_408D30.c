__int64 __fastcall sub_408D30(__int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD); // rax
  __int64 result; // rax

  v1 = *(__int64 (__fastcall ****)(_QWORD))(a1 + 40);
  if ( v1 )
    return (**v1)(*(_QWORD *)(a1 + 40));
  result = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)result == -1 )
  {
    if ( !under_debugger )
      sub_37EA20(51525);
    BUG();
  }
  *(_DWORD *)(a1 + 32) = -1;
  return result;
}
