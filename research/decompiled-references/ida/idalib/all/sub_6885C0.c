__int64 __fastcall sub_6885C0(_QWORD *a1)
{
  char *v1; // rdx
  __int64 v2; // rsi

  v1 = (char *)haystack;
  if ( a1[6] )
    v1 = (char *)a1[5];
  v2 = a1[1];
  if ( v2 != -1 )
    sub_6883F0(*(_QWORD *)(qword_2CCB598 + 1672), v2, v1);
  return 0;
}
