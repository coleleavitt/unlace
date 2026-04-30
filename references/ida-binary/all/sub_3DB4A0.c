__int64 __fastcall sub_3DB4A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
    return *(unsigned int *)(v2 + 24);
  if ( *(int *)a2 >= 0 && *(int *)(a2 + 4) >= 0 && *(_QWORD *)(a2 + 16) )
  {
    v2 = 0;
    return *(unsigned int *)(v2 + 24);
  }
  return *(unsigned int *)(*(_QWORD *)(a1 + 32) + 24LL);
}
