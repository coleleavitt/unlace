__int64 __fastcall sub_BF9200(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // r13
  _DWORD *v4; // rbx

  v1 = 0;
  v2 = *(unsigned int *)(a1 + 240);
  v3 = 4 * v2;
  if ( !(_DWORD)v2 )
    return 0;
  while ( 1 )
  {
    v4 = (_DWORD *)(*(_QWORD *)(a1 + 256) + 48LL * *(unsigned int *)(*(_QWORD *)(a1 + 272) + v1));
    if ( (unsigned __int8)sub_BF7B00(a1, v4) || (unsigned __int8)sub_BF8680(a1, v4) )
      break;
    v1 += 4;
    if ( v3 == v1 )
      return 0;
  }
  return 1;
}

