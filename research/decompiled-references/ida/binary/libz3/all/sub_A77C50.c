__int64 __fastcall sub_A77C50(__int64 **a1, unsigned int *a2)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rbp

  v2 = sub_FF9E10((*a1)[63], *a2);
  v3 = **a1;
  v4 = *(_QWORD *)(v3 + 16);
  v5 = **(_QWORD **)(*(_QWORD *)(v3 + 32) + 8LL * v2);
  if ( (unsigned int)sub_8E7030(v4) )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 7488) + 56LL))(*(_QWORD *)(v4 + 7488), v5);
  else
    return 1;
}

