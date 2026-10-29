__int64 __fastcall sub_1AE6A20(__int64 *a1, __int64 (__fastcall *a2)(__int64, unsigned __int64), __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // r15
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  __int64 result; // rax

  v4 = *a1;
  v5 = *a1 + 80LL * *((unsigned int *)a1 + 2);
  if ( v5 == *a1 )
    return 0;
  while ( 1 )
  {
    v6 = *(_QWORD **)v4;
    v7 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
    if ( v7 != *(_QWORD *)v4 )
      break;
LABEL_7:
    v4 += 80;
    if ( v5 == v4 )
      return 0;
  }
  while ( 1 )
  {
    result = a2(a3, *v6 & 0xFFFFFFFFFFFFFFF8LL);
    if ( result )
      return result;
    if ( (_QWORD *)v7 == ++v6 )
      goto LABEL_7;
  }
}
