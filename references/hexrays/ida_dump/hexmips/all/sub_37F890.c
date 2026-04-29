__int64 __fastcall sub_37F890(_QWORD *a1)
{
  __int64 v2; // rdi

  v2 = a1[4];
  if ( *(_QWORD *)(v2 + 24) != a1[5] || !(unsigned __int8)sub_9F330((unsigned int *)v2) )
    return 0;
  a1[6] = a1[4];
  return 1;
}
