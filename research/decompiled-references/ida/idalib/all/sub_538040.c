const char *__fastcall sub_538040(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  const char *result; // rax

  v3 = **(_QWORD **)a1 + 144 * a3;
  switch ( a2 )
  {
    case 0LL:
    case 10LL:
      if ( !*(_QWORD *)(v3 + 24) )
        goto LABEL_4;
      result = *(const char **)(v3 + 16);
      break;
    case 1LL:
      sub_35A790((char **)(a1 + 8));
      goto LABEL_3;
    case 2LL:
    case 3LL:
    case 4LL:
    case 8LL:
      sub_35A790((char **)(a1 + 8));
      if ( *(_QWORD *)(a1 + 16) )
        goto LABEL_5;
      goto LABEL_4;
    case 5LL:
      sub_35A790((char **)(a1 + 8));
      if ( *(_QWORD *)(a1 + 16) )
        goto LABEL_5;
      goto LABEL_4;
    case 6LL:
    case 7LL:
      sub_35A790((char **)(a1 + 8));
      if ( *(_QWORD *)(a1 + 16) )
        goto LABEL_5;
      goto LABEL_4;
    case 9LL:
      if ( !under_debugger )
        interr(3033);
      BUG();
    default:
LABEL_3:
      if ( *(_QWORD *)(a1 + 16) )
LABEL_5:
        result = *(const char **)(a1 + 8);
      else
LABEL_4:
        result = haystack;
      break;
  }
  return result;
}
