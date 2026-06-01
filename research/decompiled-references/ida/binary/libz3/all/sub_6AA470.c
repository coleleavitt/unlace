__int64 __fastcall sub_6AA470(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 v3; // rax

  v2 = *(unsigned int **)(sub_15D1F10(a2) + 24);
  if ( v2 )
    v3 = 8LL * *v2;
  else
    v3 = 0x7FFFFFFF8LL;
  return *(_QWORD *)(*(_QWORD *)(a1 + 40) + v3);
}

