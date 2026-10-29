__int64 *__fastcall sub_1258C40(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 *v6; // [rsp+0h] [rbp-10h] BYREF

  v2 = (_QWORD *)a1[2];
  if ( !v2 )
  {
    v4 = a1 + 1;
LABEL_8:
    v6 = a2;
    return sub_1258AE0(a1, v4, &v6) + 5;
  }
  v3 = *a2;
  v4 = a1 + 1;
  do
  {
    while ( v2[4] >= v3 )
    {
      v4 = v2;
      v2 = (_QWORD *)v2[2];
      if ( !v2 )
        goto LABEL_6;
    }
    v2 = (_QWORD *)v2[3];
  }
  while ( v2 );
LABEL_6:
  if ( a1 + 1 == v4 || v4[4] > v3 )
    goto LABEL_8;
  return v4 + 5;
}
