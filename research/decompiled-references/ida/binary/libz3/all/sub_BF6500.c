__int64 __fastcall sub_BF6500(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 result; // rax
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(unsigned int *)(a1 + 240);
  if ( !(_DWORD)v1 )
    return 0;
  v2 = 4 * v1;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 256) + 48LL * *(unsigned int *)(*(_QWORD *)(a1 + 272) + v3);
    v5 = v4 + 16;
    v8[0] = v4;
    v6 = *(_QWORD *)(v4 + 40);
    v8[1] = v5;
    *(_QWORD *)(a1 + 4224) = v6;
    result = sub_1464D00(a1 + 3424, 0, v8);
    if ( (_BYTE)result )
      break;
    v3 += 4;
    if ( v2 == v3 )
      return 0;
  }
  return result;
}

