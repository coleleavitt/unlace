void __fastcall sub_220A060(_QWORD *src, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r8d
  size_t v5; // rbp
  int v6; // edx
  unsigned int v7; // r10d
  __int64 *v8; // r9
  __int64 v9; // rax
  unsigned int v10; // edi

  if ( a3 )
  {
    v3 = a3 >> 6;
    if ( a3 >> 6 > a2 )
      v3 = a2;
    v5 = v3;
    v6 = a3 & 0x3F;
    if ( v6 )
    {
      while ( 1 )
      {
        v10 = a2 - 1;
        if ( v3 >= a2 )
          break;
        v7 = ~v3 + a2--;
        v8 = &src[v10];
        v9 = src[v7] << v6;
        *v8 = v9;
        if ( v3 < v10 )
          *v8 = (src[v7 - 1] >> (64 - (unsigned __int8)v6)) | v9;
      }
    }
    else
    {
      memmove(&src[v5], src, 8 * (a2 - v3));
    }
    memset(src, 0, v5 * 8);
  }
}
