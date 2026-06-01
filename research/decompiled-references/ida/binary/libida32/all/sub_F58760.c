void __fastcall sub_F58760(__int64 a1)
{
  void *v2; // rdi
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  _QWORD *v6; // r12

  v2 = *(void **)(a1 + 232);
  if ( v2 != (void *)(a1 + 248) )
    free(v2);
  if ( !*(_BYTE *)(a1 + 188) )
    free(*(void **)(a1 + 168));
  if ( (*(_BYTE *)(a1 + 32) & 1) == 0 )
    operator delete();
  v3 = *(_QWORD **)(a1 + 8);
  v4 = (_QWORD *)(a1 + 8);
  if ( v3 != v4 )
  {
    while ( 1 )
    {
      v5 = (_QWORD *)v3[2];
      v6 = (_QWORD *)*v3;
      if ( v5 == v3 + 4 )
      {
        operator delete(v3);
        if ( v6 == v4 )
          return;
      }
      else
      {
        free(v5);
        operator delete(v3);
        if ( v6 == v4 )
          return;
      }
      v3 = v6;
    }
  }
}

