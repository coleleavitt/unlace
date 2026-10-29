char *__fastcall sub_DFD980(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  char *result; // rax
  char *v4; // rdx
  char *v5; // rdx

  v2 = *(char **)a1;
  if ( !*(_QWORD *)a1 )
  {
    v2 = (char *)malloc((size_t)&stru_100000);
    *(_OWORD *)v2 = 0;
    result = v2 + 24;
    *((_QWORD *)v2 + 2) = v2 + 24;
    goto LABEL_7;
  }
  result = *((char **)v2 + 2);
  if ( a2 + result - v2 > (unsigned __int64)&stru_100000 )
  {
    v4 = *(char **)v2;
    if ( *(_QWORD *)v2 )
    {
      *(_QWORD *)a1 = v4;
      result = *((char **)v4 + 2);
      v2 = v4;
      goto LABEL_5;
    }
    v5 = (char *)malloc((size_t)&stru_100000);
    *((_QWORD *)v5 + 1) = v2;
    result = v5 + 24;
    *(_QWORD *)v5 = 0;
    *((_QWORD *)v5 + 2) = v5 + 24;
    *(_QWORD *)v2 = v5;
    v2 = v5;
LABEL_7:
    *(_QWORD *)a1 = v2;
  }
LABEL_5:
  *((_QWORD *)v2 + 2) = &result[a2];
  *(_QWORD *)(a1 + 8) += a2;
  return result;
}

