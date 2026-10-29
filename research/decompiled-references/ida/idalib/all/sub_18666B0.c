__int64 __fastcall sub_18666B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 result; // rax

  v7 = *(_QWORD *)(a1 + 4096);
  if ( !v7 )
    goto LABEL_9;
  if ( !*(_BYTE *)(v7 + 20) )
  {
    result = sub_2236570(v7, a2);
    if ( result )
      return result;
    goto LABEL_9;
  }
  result = *(_QWORD *)v7;
  a3 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 12);
  if ( *(_QWORD *)v7 == a3 )
  {
LABEL_9:
    result = *(unsigned int *)(*(_QWORD *)(a1 + 264) + 204LL);
    if ( (_DWORD)result )
      return sub_1866110(a1, a2, a3, a4, a5, a6);
    return result;
  }
  while ( a2 != *(_QWORD *)result )
  {
    result += 8;
    if ( a3 == result )
      goto LABEL_9;
  }
  return result;
}
