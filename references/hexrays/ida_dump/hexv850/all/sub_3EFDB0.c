__int64 __fastcall sub_3EFDB0(__int64 a1, __int64 a2, double a3)
{
  __int64 (__fastcall ***v3)(_QWORD); // rax
  __int64 result; // rax

  v3 = *(__int64 (__fastcall ****)(_QWORD))(a1 + 40);
  if ( v3 )
    return (**v3)(*(_QWORD *)(a1 + 40));
  result = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)result == -1 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xC945u, a2, a3);
    BUG();
  }
  *(_DWORD *)(a1 + 32) = -1;
  return result;
}
