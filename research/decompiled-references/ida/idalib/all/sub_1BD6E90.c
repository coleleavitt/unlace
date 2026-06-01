void __fastcall sub_1BD6E90(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rbp
  unsigned __int8 v3; // cl
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi

  v1 = *a1;
  v2 = *a1 + ((unsigned __int64)*((unsigned int *)a1 + 2) << 6);
  if ( v2 != *a1 )
  {
    do
    {
      v3 = *(_BYTE *)(v1 + 16);
      if ( v3 <= 0xFu )
      {
        v4 = 1LL << v3;
        if ( ((1LL << v3) & 0x770) != 0 )
        {
          *(_QWORD *)(v1 + 24) = 0;
        }
        else if ( (v4 & 0x8000) != 0 || (v4 & 0x80u) != 0LL )
        {
          *(_QWORD *)(v1 + 24) = 0;
          if ( (*(_BYTE *)(v1 + 17) & 1) != 0 )
          {
            v5 = *(_QWORD *)(v1 + 40);
            if ( v5 )
            {
              v6 = *(_QWORD *)(v1 + 48);
              if ( v6 )
                sub_1580C40(v6, v5);
            }
            *(_BYTE *)(v1 + 17) &= ~1u;
          }
        }
      }
      v1 += 64;
    }
    while ( v1 != v2 );
  }
}
