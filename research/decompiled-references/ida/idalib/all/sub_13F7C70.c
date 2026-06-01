void __fastcall sub_13F7C70(unsigned __int8 **a1)
{
  unsigned __int8 *v2; // rbp
  unsigned __int8 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi

  v2 = a1[1];
  v3 = *a1;
  if ( v2 != *a1 )
  {
    do
    {
      while ( 1 )
      {
        v4 = v3[136];
        if ( (_BYTE)v4 == 0xFF )
          break;
        v5 = (__int64)v3;
        v3 += 144;
        ((void (__fastcall *)(__int64))funcs_13F3420[v4])(v5);
        if ( v2 == v3 )
          goto LABEL_4;
      }
      v3 += 144;
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = *a1;
  }
  if ( v3 )
    operator delete(v3);
}
