unsigned __int64 __fastcall sub_2214700(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)a1;
  if ( *(_BYTE *)(a1 + 20) )
    return sub_2214680((__int64 *)a1, (_QWORD *)(v1 + 8LL * *(unsigned int *)(a1 + 12)));
  else
    return sub_2214680((__int64 *)a1, (_QWORD *)(v1 + 8LL * *(unsigned int *)(a1 + 8)));
}
