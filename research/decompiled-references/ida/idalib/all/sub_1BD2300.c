void __fastcall sub_1BD2300(char *a1)
{
  char v1; // cl
  __int64 v2; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi

  v1 = *a1;
  if ( (unsigned __int8)*a1 <= 0xFu )
  {
    v2 = 1LL << v1;
    if ( ((1LL << v1) & 0x770) != 0 )
    {
      *((_QWORD *)a1 + 1) = 0;
    }
    else if ( (v2 & 0x8000) != 0 || (v2 & 0x80u) != 0LL )
    {
      *((_QWORD *)a1 + 1) = 0;
      if ( (a1[1] & 1) != 0 )
      {
        v4 = *((_QWORD *)a1 + 3);
        if ( v4 )
        {
          v5 = *((_QWORD *)a1 + 4);
          if ( v5 )
            sub_1580C40(v5, v4);
        }
        a1[1] &= ~1u;
      }
    }
  }
}
