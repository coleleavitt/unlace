__int64 __fastcall sub_9F6D30(_QWORD *a1)
{
  unsigned int *v1; // rbx
  unsigned int *v2; // r12
  __int64 v3; // r13
  unsigned int v4; // r14d
  __int64 v5; // r15
  __int64 result; // rax
  _BYTE v7[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v1 = (unsigned int *)a1[103];
  v7[0] = 0;
  if ( !v1 )
    return 1;
  v2 = &v1[*(v1 - 1)];
  if ( v2 == v1 )
    return 1;
  while ( 1 )
  {
    v3 = a1[2];
    v4 = *v1;
    v5 = **(_QWORD **)(a1[4] + 8LL * *v1);
    if ( !(unsigned int)sub_8E7030(v3)
      || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 7488) + 56LL))(
           *(_QWORD *)(v3 + 7488),
           v5) )
    {
      result = sub_9F68D0((__int64)a1, v4, v7);
      if ( !(_BYTE)result )
        break;
    }
    if ( v2 == ++v1 )
      return 1;
  }
  return result;
}

