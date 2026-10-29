__int64 __fastcall sub_1394B1(_QWORD *ptr, int a2)
{
  _QWORD *v2; // r12
  __int64 v5; // rdi
  __int64 v6; // rdi

  v2 = ptr;
  while ( a2 )
  {
    v5 = v2[2];
    if ( v5 )
      sub_186B220((void *)(v5 - 8));
    v6 = v2[1];
    if ( v6 )
      sub_186B220((void *)(v6 - 8));
    v2 += 4;
    --a2;
  }
  return sub_186B220(ptr);
}

