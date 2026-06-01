__int64 __fastcall sub_4F8580(__int64 a1, __int64 (__fastcall *a2)(_QWORD, _QWORD))
{
  __int64 v2; // rax
  unsigned int *v3; // rbx
  unsigned int *v4; // r12
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1568LL);
  v3 = *(unsigned int **)(v2 + 16);
  v4 = &v3[2 * *(_QWORD *)(v2 + 24)];
  if ( v4 == v3 )
    return 0;
  while ( 1 )
  {
    result = a2(*v3, v3[1]);
    if ( (_DWORD)result )
      break;
    v3 += 2;
    if ( v4 == v3 )
      return 0;
  }
  return result;
}

