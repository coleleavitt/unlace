void __fastcall sub_1866D00(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  unsigned __int8 v4; // al
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // r13
  int v8; // edx
  __int64 *v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // [rsp+8h] [rbp-40h] BYREF
  __m128 v15[3]; // [rsp+10h] [rbp-38h] BYREF

  v2 = sub_B8E970(a2 + 64);
  if ( v2 )
  {
    v3 = v2;
    do
    {
      if ( (*(_BYTE *)(v3 + 29) & 2) == 0 )
      {
        v4 = *(_BYTE *)(v3 + 28) & 0x7F;
        if ( v4 == 86 )
        {
          v5 = *(_QWORD *)(v3 + 40);
          if ( !v5 )
            goto LABEL_10;
          if ( (v5 & 4) != 0 )
            goto LABEL_10;
          v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
          v7 = v6;
          if ( !v6 )
            goto LABEL_10;
          v4 = *(_BYTE *)(v6 + 28) & 0x7F;
          v8 = v4;
          if ( (unsigned int)v4 - 34 <= 5 )
          {
LABEL_9:
            sub_1866C20(a1, v7);
            goto LABEL_10;
          }
        }
        else
        {
          v8 = v4;
          v7 = v3;
          if ( (unsigned int)v4 - 34 <= 5 )
            goto LABEL_9;
        }
        if ( v4 == 71 )
        {
          sub_1866C20(a1, *(_QWORD *)(v7 + 48));
        }
        else if ( (unsigned int)(v8 - 49) > 2 )
        {
          if ( (unsigned int)(v8 - 40) > 6 )
          {
            if ( v4 != 69 )
            {
              if ( (unsigned int)(v8 - 59) > 2 )
              {
                if ( v4 == 72 )
                  sub_1866D00(a1, *(_QWORD *)(v7 + 48));
              }
              else
              {
                sub_1866D00(a1, v7);
              }
              goto LABEL_10;
            }
            v7 = *(_QWORD *)(v7 + 48);
          }
          v11 = sub_B8C330(v7);
          if ( !(unsigned int)sub_B74100(v7, v11) )
          {
            v12 = (__int64 *)(*(_QWORD *)(v7 + 56) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(v7 + 56) & 4) != 0 )
              v12 = (__int64 *)v12[4];
            v13 = *v12;
            v14 = v7;
            v15[0] = _mm_loadh_ps((const double *)&v14);
            sub_1866A00(v15, v13, (__int64)(v12 + 1), 2u, v15[0]);
          }
        }
        else
        {
          v9 = (__int64 *)(*(_QWORD *)(v7 + 56) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v7 + 56) & 4) != 0 )
            v9 = (__int64 *)v9[4];
          if ( v9 )
          {
            v14 = a1;
            v10 = *v9;
            v14 = v7;
            v15[0] = _mm_loadh_ps((const double *)&v14);
            sub_1866A00(v15, v10, (__int64)(v9 + 1), 3u, v15[0]);
          }
        }
      }
LABEL_10:
      v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( v3 );
  }
}
