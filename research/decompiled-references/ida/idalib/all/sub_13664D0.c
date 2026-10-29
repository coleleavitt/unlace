__int64 __fastcall sub_13664D0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  void *v4; // rdi
  __int64 v5; // r12
  bool v6; // zf
  __int64 v7; // rdi

  v2 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)a1 = &off_2BB2288;
  if ( v2 )
  {
    v3 = a1 + 32;
    while ( 1 )
    {
      sub_F7EAE0(v3, *(_QWORD **)(v2 + 24));
      v4 = *(void **)(v2 + 32);
      v5 = *(_QWORD *)(v2 + 16);
      if ( v4 == (void *)(v2 + 48) )
      {
        operator delete((void *)v2);
        if ( !v5 )
          break;
      }
      else
      {
        operator delete(v4);
        operator delete((void *)v2);
        if ( !v5 )
          break;
      }
      v2 = v5;
    }
  }
  v6 = *(_BYTE *)(a1 + 16) == 0;
  *(_QWORD *)a1 = &off_2BB21A8;
  if ( !v6 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return nullsub_1230(a1);
}
