void __fastcall sub_E2B5E0(__int64 *a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdi
  _BYTE *v8; // rax
  unsigned __int64 v9; // r13
  size_t v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  size_t v16; // rax
  __int64 v17; // r8

  switch ( sub_E6C2C0(a2) )
  {
    case 0LL:
      v5 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        sub_E2B5E0(a1, v5, 1);
      else
        sub_971800(a1[1], "sr");
      v6 = 0;
      if ( (*(_BYTE *)(a2 + 8) & 6) == 0 )
        v6 = *(_QWORD *)(a2 + 16);
      sub_E15750(a1[1], v6);
      goto LABEL_7;
    case 1LL:
      v12 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        sub_E2B5E0(a1, v12, 1);
      else
        sub_971800(a1[1], "sr");
      v13 = sub_E6C320(a2);
      sub_E17680((__int64)a1, v13);
      if ( !a3 )
        goto LABEL_8;
      return;
    case 2LL:
      v14 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        sub_E2B5E0(a1, v14, 1);
      else
        sub_971800(a1[1], "sr");
      v15 = sub_E6C350(a2);
      sub_E17680((__int64)a1, v15);
      if ( !a3 )
        goto LABEL_8;
      return;
    case 3LL:
      v9 = 0;
      if ( ((*(__int64 *)(a2 + 8) >> 1) & 3) == 2 )
        v9 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        sub_E2B5E0(a1, *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL, 1);
      else
        sub_971800(a1[1], "sr");
      if ( a3 )
      {
        v10 = j__strlen("N");
        sub_E2B320(a1, v9, "N", v10, v11);
      }
      else
      {
        v16 = j__strlen(&byte_22CD811);
        if ( !(unsigned __int8)sub_E2B320(a1, v9, &byte_22CD811, v16, v17) )
        {
LABEL_8:
          v7 = a1[1];
          v8 = *(_BYTE **)(v7 + 32);
          if ( (unsigned __int64)v8 >= *(_QWORD *)(v7 + 24) )
          {
            sub_2257CD0(v7, 69);
          }
          else
          {
            *(_QWORD *)(v7 + 32) = v8 + 1;
            *v8 = 69;
          }
        }
      }
      return;
    case 4LL:
      sub_971800(a1[1], "gs");
      if ( a3 )
        sub_971800(a1[1], "sr");
      return;
    default:
LABEL_7:
      if ( !a3 )
        goto LABEL_8;
      return;
  }
}

