void __fastcall sub_221A690(__int64 a1)
{
  void (__fastcall *v2)(__int64, __int64, __int64); // rax
  void *v3; // rdi
  _QWORD *v4; // r12
  _QWORD *v5; // rbp
  _QWORD *v6; // rdi
  bool v7; // zf
  void *v8; // rdi

  *(_QWORD *)a1 = off_2C75918;
  v2 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 208);
  if ( v2 )
    v2(a1 + 192, a1 + 192, 3);
  v3 = *(void **)(a1 + 160);
  if ( v3 )
    operator delete(v3);
  v4 = *(_QWORD **)(a1 + 136);
  v5 = *(_QWORD **)(a1 + 128);
  if ( v4 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v6 = (_QWORD *)v5[1];
        *v5 = off_2C712B0;
        if ( v6 == v5 + 3 )
          break;
        operator delete(v6);
        v5 += 6;
        if ( v5 == v4 )
          goto LABEL_8;
      }
      v5 += 6;
    }
    while ( v4 != v5 );
LABEL_8:
    v5 = *(_QWORD **)(a1 + 128);
  }
  if ( v5 )
    operator delete(v5);
  v7 = *(_BYTE *)(a1 + 108) == 0;
  *(_QWORD *)a1 = &off_2C758B0;
  if ( v7 )
    free(*(void **)(a1 + 88));
  v8 = *(void **)(a1 + 64);
  if ( v8 != (void *)(a1 + 80) )
    free(v8);
}
