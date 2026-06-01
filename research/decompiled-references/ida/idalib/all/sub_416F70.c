__int64 __fastcall sub_416F70(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdi

  if ( a2 >= a1[1] )
    return -1;
  v2 = (_QWORD *)(*a1 + 56 * a2);
  v3 = *(_QWORD *)(qword_2CCB598 + 1672);
  if ( v2[1] )
    return sub_6B9860(v3, *v2, 0, 0);
  else
    return sub_6B9860(v3, haystack, 0, 0);
}
