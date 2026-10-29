void __fastcall sub_ABFA20(__int64 *a1)
{
  size_t v1; // r9
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rsi

  v1 = 0;
  v2 = a1[6];
  v3 = *a1 + 8;
  if ( v2 )
    v1 = j__strlen((const char *)a1[6]);
  sub_E47BB0(v3, a1 + 1, a1[4], a1[5], v2, v1);
  v5 = *a1;
  switch ( a1[1] & 0x7FFFFFFF )
  {
    case 0LL:
    case 2LL:
    case 3LL:
    case 4LL:
    case 5LL:
    case 6LL:
    case 7LL:
      return;
    case 1LL:
      sub_ABF9B0(*a1, a1[2]);
      break;
    case 8LL:
      sub_ABAAB0(v5 + 8, 0, 0, a1[2], *a1);
      break;
    case 9LL:
      v6 = a1[2];
      v7 = v6 + 24LL * *((unsigned int *)a1 + 3);
      while ( v7 != v6 )
      {
        v8 = v6;
        v6 += 24;
        sub_AC0110(v5, v8, 0);
      }
      break;
    case 0xALL:
      if ( v4 == 1 )
        JUMPOUT(0xAC143E);
      JUMPOUT(0xAC143D);
  }
}

