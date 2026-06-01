__int64 __fastcall sub_1C40BC(_QWORD *ptr, int a2)
{
  _QWORD *v2; // r12
  __int64 v5; // rdi

  v2 = ptr;
  while ( a2 )
  {
    v5 = v2[1];
    if ( v5 )
      sub_186B220((void *)(v5 - 8));
    v2 += 2;
    --a2;
  }
  return sub_186B220(ptr);
}

