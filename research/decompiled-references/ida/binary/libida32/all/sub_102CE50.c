__int64 __fastcall sub_102CE50(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r15

  v2 = a2[1];
  v3 = *a2;
  v4 = v2 - *a2;
  v5 = v4 >> 7;
  v6 = v4 >> 5;
  if ( v5 > 0 )
  {
    v7 = v3 + (v5 << 7);
    while ( sub_990D60(v3, "+soft-float") )
    {
      v8 = v3;
      v3 += 32;
      if ( !sub_990D60(v3, "+soft-float") )
        break;
      v3 = v8 + 64;
      if ( !sub_990D60(v8 + 64, "+soft-float") )
        break;
      v3 = v8 + 96;
      if ( !sub_990D60(v8 + 96, "+soft-float") )
        break;
      v3 = v8 + 128;
      if ( v8 + 128 == v7 )
      {
        v6 = (v2 - v3) >> 5;
        goto LABEL_12;
      }
    }
    goto LABEL_8;
  }
LABEL_12:
  if ( v6 == 2 )
  {
LABEL_19:
    if ( sub_990D60(v3, "+soft-float") )
    {
      v3 += 32;
LABEL_15:
      if ( sub_990D60(v3, "+soft-float") )
        return 1;
      goto LABEL_8;
    }
    goto LABEL_8;
  }
  if ( v6 != 3 )
  {
    if ( v6 != 1 )
      return 1;
    goto LABEL_15;
  }
  if ( sub_990D60(v3, "+soft-float") )
  {
    v3 += 32;
    goto LABEL_19;
  }
LABEL_8:
  if ( v2 != v3 )
    *(_BYTE *)(a1 + 509) = 1;
  return 1;
}

