_QWORD *__fastcall sub_737CE0(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rbp
  char *v4; // rbx

  if ( (unsigned __int64)(a2 - 1) > 0x1F )
  {
    if ( !under_debugger )
      interr(851);
    BUG();
  }
  result = (_QWORD *)(32 * a2);
  v3 = *(_QWORD *)(32 * a2 + a1 + 1616);
  if ( v3 )
  {
    v4 = (char *)result + a1;
    do
    {
      sub_7333B0(*(_QWORD *)(a1 + 8), **((_QWORD **)v4 + 202));
      *((_QWORD *)v4 + 202) = 0;
      if ( v4 == (char *)(a1 + 1024) )
        break;
      v4 += 32;
    }
    while ( *((_QWORD *)v4 + 202) );
    result = *(_QWORD **)(a1 + 16);
    result[1] = v3 - *result;
  }
  return result;
}
