__int64 __fastcall sub_15400(_QWORD *a1, __int16 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int8 v5; // dl
  __int64 *v6; // r14
  __int64 v7; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rax

  v2 = sub_151B0(a1, a2);
  if ( !v2 )
    return 0;
  v3 = v2;
  v4 = sub_EBD0((__int64)a1);
  if ( !v4 )
    return 0;
  v5 = *(_BYTE *)(v4 + 18);
  if ( v5 <= 4u )
  {
    if ( v5 > 2u )
    {
      v6 = (__int64 *)v4;
      v16 = v4 + 16;
      v7 = (__int64)(v6 + 1);
      if ( v5 != 3 )
        v7 = v16;
      goto LABEL_14;
    }
  }
  else if ( v5 == 5 )
  {
    v6 = *(__int64 **)v4;
    v7 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
    if ( v7 != *(_QWORD *)v4 )
    {
      do
      {
        v15 = *v6;
        if ( *v6 )
        {
          v9 = (a1[1] + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
          a1[1] = v9;
          if ( !v9 || (v10 = v9 + 24, v9 + 24 > a1[2]) )
          {
            v11 = 2LL * a1[4];
            if ( v11 < 0x20 )
              v11 = 32;
            a1[4] = v11;
            v12 = v11 + 8;
            v13 = malloc(v11 + 8);
            v14 = a1[3];
            a1[3] = v13;
            *v13 = v14;
            v9 = ((unsigned __int64)v13 + 15) & 0xFFFFFFFFFFFFFFF8LL;
            a1[2] = (char *)v13 + v12;
            v10 = v9 + 24;
          }
          a1[1] = v10;
          *(_WORD *)(v9 + 16) = 91;
          *(_QWORD *)v9 = v15;
          *(_QWORD *)(v9 + 8) = 0;
          *(_BYTE *)(v9 + 18) = 3;
        }
        else
        {
          v9 = 0;
        }
        ++v6;
        sub_C080(v3, v9, a1);
LABEL_14:
        ;
      }
      while ( (__int64 *)v7 != v6 );
    }
  }
  return v3;
}

