void __fastcall sub_7D1690(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rbp
  const char **v6; // r12
  const char *v7; // rsi
  _QWORD *v8; // rax

  v4 = 0;
  do
  {
LABEL_2:
    v6 = (const char **)a2;
    if ( *a2 )
    {
      while ( v6[1] )
      {
        add_idc_func(v6);
        v7 = *v6;
        switch ( v4 )
        {
          case 1LL:
            set_idc_dtor((__int64)a1, v7);
            v8 = a2 + 5;
            v6 = (const char **)(a2 + 5);
            if ( !a2[5] )
            {
              a2 += 10;
              v4 = 3;
              goto LABEL_2;
            }
            v4 = 2;
            break;
          case 2LL:
            set_idc_getattr((__int64)a1, v7);
            v8 = a2 + 5;
            v6 = (const char **)(a2 + 5);
            if ( !a2[5] )
            {
              a2 += 10;
              v4 = 4;
              goto LABEL_2;
            }
            v4 = 3;
            break;
          case 3LL:
            set_idc_setattr((__int64)a1, v7);
            a2 += 5;
            v4 = 4;
            goto LABEL_2;
          default:
            set_idc_method(a1, v7);
            goto LABEL_8;
        }
        a2 = v8;
      }
    }
LABEL_8:
    ++v4;
    a2 += 5;
  }
  while ( a3 != v4 );
}
