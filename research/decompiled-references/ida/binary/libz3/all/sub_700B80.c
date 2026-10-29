__int64 __fastcall sub_700B80(_QWORD *a1)
{
  unsigned int *v1; // rbx
  unsigned int *v2; // rbp
  unsigned int v3; // esi
  __int64 result; // rax

  v1 = (unsigned int *)a1[1];
  if ( v1 )
  {
    v2 = &v1[*(v1 - 1)];
    if ( v1 == v2 )
      goto LABEL_5;
    do
    {
      v3 = *v1++;
      result = sub_1144670(*a1, v3 >> 1);
    }
    while ( v2 != v1 );
    v2 = (unsigned int *)a1[1];
    if ( v2 )
    {
LABEL_5:
      *(v2 - 1) = 0;
      return sub_186B220(v2 - 2);
    }
  }
  return result;
}

