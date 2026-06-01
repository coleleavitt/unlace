__int64 __fastcall sub_BFC010(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 result; // rax

  v1 = 0;
  v2 = *(unsigned int *)(a1 + 240);
  v3 = 4 * v2;
  if ( !(_DWORD)v2 )
    return 0;
  while ( 1 )
  {
    result = sub_BFB660(a1, *(_QWORD *)(a1 + 256) + 48LL * *(unsigned int *)(*(_QWORD *)(a1 + 272) + v1));
    if ( (_BYTE)result )
      break;
    v1 += 4;
    if ( v3 == v1 )
      return 0;
  }
  return result;
}

