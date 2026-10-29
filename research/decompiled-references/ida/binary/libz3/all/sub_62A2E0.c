__int64 __fastcall sub_62A2E0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = *(unsigned int *)(a2 + 24);
  if ( !(_DWORD)v2 )
    return 1;
  v3 = a2 + 8 * v2;
  v4 = a2;
  while ( 1 )
  {
    result = sub_15D26C0(*a1, *(_QWORD *)(v4 + 32));
    if ( !(_BYTE)result )
      break;
    v4 += 8;
    if ( v4 == v3 )
      return 1;
  }
  return result;
}

