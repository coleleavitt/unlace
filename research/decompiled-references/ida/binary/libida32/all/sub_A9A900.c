__int64 __fastcall sub_A9A900(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rbp
  char v15; // al
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rbp
  __int64 i; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  _QWORD v29[9]; // [rsp-48h] [rbp-48h] BYREF

  result = a2;
  if ( a2 != a3 )
  {
    v6 = sub_A93830(a1, a2);
    v7 = sub_A93830(a1, a3);
    result = 0;
    if ( v6 == v7 )
    {
      v8 = (unsigned int)sub_E6C2C0(a2);
      v9 = sub_E6C2C0(a3);
      switch ( v8 )
      {
        case 0LL:
          v23 = *(_QWORD *)(a2 + 8);
          v24 = 0;
          if ( (v23 & 6) == 0 )
            v24 = *(_QWORD *)(a2 + 16);
          v25 = sub_A9A900(a1, v23 & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL);
          return sub_E6DBA0(a1, v25, v24);
        case 1LL:
        case 2LL:
          v16 = sub_A9A900(a1, *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL);
          v17 = sub_E6C350(a2);
          v18 = sub_E6C350(a3);
          v19 = v18;
          if ( !v17 || !v18 )
          {
            if ( !v17 )
            {
              v20 = sub_E6C320(a2);
              goto LABEL_21;
            }
            v20 = *(_QWORD *)(v17 + 88);
            if ( (*(_BYTE *)(v20 + 28) & 0x7F) != 0x4D )
            {
LABEL_21:
              if ( !v19 )
              {
                i = sub_E6C320(a3);
LABEL_24:
                v22 = sub_A33BD0(v20, i);
                return sub_E6DF00(a1, v16, v22);
              }
LABEL_22:
              for ( i = *(_QWORD *)(v19 + 88); (*(_BYTE *)(i + 28) & 0x7F) == 0x4D; i = *(_QWORD *)(i + 88) )
                ;
              goto LABEL_24;
            }
            do
LABEL_20:
              v20 = *(_QWORD *)(v20 + 88);
            while ( (*(_BYTE *)(v20 + 28) & 0x7F) == 0x4D );
            goto LABEL_21;
          }
          if ( v17 != v18 && !sub_A32BE0(v17, v18) )
          {
            v20 = *(_QWORD *)(v17 + 88);
            if ( (*(_BYTE *)(v20 + 28) & 0x7F) != 0x4D )
              goto LABEL_22;
            goto LABEL_20;
          }
          v27 = sub_A33BD0(v17, v19);
          return sub_E6DDE0(a1, v16, v27);
        case 3LL:
          if ( v9 == 5 )
            return sub_A93830(a1, a2);
          v10 = *(_QWORD *)(a2 + 8);
          v11 = (*(__int64 *)(a3 + 8) >> 1) & 3;
          if ( ((*(__int64 *)(a2 + 8) >> 1) & 3) == 2 )
          {
            v12 = *(_QWORD *)(a2 + 16);
            v13 = 0;
            if ( v11 != 2 )
              goto LABEL_7;
          }
          else
          {
            v12 = 0;
            if ( v11 != 2 )
              goto LABEL_30;
          }
          v13 = *(_QWORD *)(a3 + 16);
LABEL_7:
          if ( v13 != v12 )
          {
            v14 = *(_QWORD *)(sub_A980E0(a1, v12 & 0xFFFFFFFFFFFFFFF0LL, v13 & 0xFFFFFFFFFFFFFFF0LL, 1)
                            & 0xFFFFFFFFFFFFFFF0LL);
            v15 = *(_BYTE *)(v14 + 16);
            switch ( v15 )
            {
              case 22:
                sub_EFF2B0(v29, 0, *(_QWORD *)(v14 + 40), (*(__int64 *)(v14 + 32) >> 2) & 1);
                v28 = sub_A93560(
                        a1,
                        (unsigned __int8)(*(_WORD *)(v14 + 18) >> 3),
                        v29,
                        (const void *)(v14 + 48),
                        *(unsigned int *)(v14 + 20),
                        0);
                return sub_E6DCC0(
                         a1,
                         *(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFF8LL,
                         *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL));
              case 24:
                return sub_E6DCC0(a1, *(_QWORD *)(v14 + 32), *(_QWORD *)(*(_QWORD *)(v14 + 40) & 0xFFFFFFFFFFFFFFF0LL));
              case 20:
                return sub_E6DBA0(a1, *(_QWORD *)(v14 + 32), *(_QWORD *)(v14 + 40));
              default:
                return sub_E6DCC0(a1, 0, v14);
            }
          }
LABEL_30:
          v26 = sub_A9A900(a1, v10 & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF8LL);
          return sub_E6DCC0(a1, v26, v12);
        case 5LL:
          return sub_A93830(a1, a2);
        default:
          return 0;
      }
    }
  }
  return result;
}

