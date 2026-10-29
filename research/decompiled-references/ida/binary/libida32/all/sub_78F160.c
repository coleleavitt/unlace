unsigned __int64 __fastcall sub_78F160(__int64 a1)
{
  _QWORD *v2; // rdi
  unsigned __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 1544);
  if ( *v2 )
    result = sub_78EC70((__int64)v2);
  *(_DWORD *)(a1 + 1332) = -1;
  return result;
}

