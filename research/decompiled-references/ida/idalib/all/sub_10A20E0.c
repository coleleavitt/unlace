__int64 __fastcall sub_10A20E0(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rbp

  v4 = (a2 - a1) >> 7;
  v5 = (a2 - a1) >> 5;
  v6 = a1;
  if ( v4 > 0 )
  {
    v7 = a1 + (v4 << 7);
    while ( sub_9B4AA0(v6, a3) )
    {
      v8 = v6 + 32;
      if ( !sub_9B4AA0(v6 + 32, a3) )
        return v8;
      v8 = v6 + 64;
      if ( !sub_9B4AA0(v6 + 64, a3) )
        return v8;
      v8 = v6 + 96;
      if ( !sub_9B4AA0(v6 + 96, a3) )
        return v8;
      v6 += 128;
      if ( v6 == v7 )
      {
        v5 = (a2 - v6) >> 5;
        goto LABEL_11;
      }
    }
    return v6;
  }
LABEL_11:
  switch ( v5 )
  {
    case 2LL:
LABEL_17:
      if ( !sub_9B4AA0(v6, a3) )
        return v6;
      v6 += 32;
      goto LABEL_19;
    case 3LL:
      if ( !sub_9B4AA0(v6, a3) )
        return v6;
      v6 += 32;
      goto LABEL_17;
    case 1LL:
LABEL_19:
      if ( sub_9B4AA0(v6, a3) )
        return a2;
      return v6;
  }
  return a2;
}
