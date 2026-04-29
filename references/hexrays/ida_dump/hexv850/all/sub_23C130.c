__int64 __fastcall sub_23C130(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL);
  v2 = sub_30C5D0();
  v3 = *(int *)(v1 + 64);
  if ( (int)v2 >= v3 )
    return -1;
  if ( v2 >= (unsigned int)v3 )
    sub_238F80();
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 528) + 8LL * v2);
  v5 = *(_QWORD *)(v4 + 56);
  if ( v5 )
    return *(_QWORD *)(v5 + 24);
  else
    return *(_QWORD *)(v4 + 32);
}
