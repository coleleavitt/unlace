__int64 __fastcall sub_C019A0(__int64 a1, double a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 result; // rax

  v2 = 0;
  v3 = *(unsigned int *)(a1 + 240);
  v4 = 4 * v3;
  if ( !(_DWORD)v3 )
    return 0;
  while ( 1 )
  {
    result = sub_BFFE80(a1, *(_QWORD *)(a1 + 256) + 48LL * *(unsigned int *)(*(_QWORD *)(a1 + 272) + v2), a2);
    if ( (_BYTE)result )
      break;
    v2 += 4;
    if ( v4 == v2 )
      return 0;
  }
  return result;
}

