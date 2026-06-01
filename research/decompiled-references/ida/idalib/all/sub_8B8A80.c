_QWORD *__fastcall sub_8B8A80(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rax
  char *v7; // rcx
  _QWORD *result; // rax
  char *v9; // rdi

  v6 = sub_8BCA60(*a1, a3, 1);
  *(_BYTE *)(v6 - 2) = 1;
  v7 = (char *)memset((void *)(v6 + a4), 0, *(_QWORD *)*a1 - a4);
  result = (_QWORD *)*a1;
  v9 = &v7[(*(_QWORD *)*a1 - a4) & 0xFFFFFFFFFFFFFFF0LL];
  if ( v7 != v9 )
  {
    result = *(_QWORD **)a2;
    do
    {
      if ( result == (_QWORD *)(a1[2] + 24LL * a1[3]) )
        break;
      v7 += 16;
      *((_QWORD *)v7 - 2) = *result;
      *((_QWORD *)v7 - 1) = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
      result = (_QWORD *)(*(_QWORD *)a2 + 24LL);
      *(_QWORD *)a2 = result;
    }
    while ( v9 != v7 );
  }
  return result;
}
