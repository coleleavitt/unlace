_QWORD *__fastcall sub_2227770(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // r14d
  size_t v4; // rbp
  size_t v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  char *v8; // r8
  char v9; // al
  size_t v11; // r15
  int v12; // r9d
  char v13; // si
  __int64 v14; // rax
  size_t v15; // rdx
  char *v16; // rsi
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rcx
  size_t v19; // rdx
  _QWORD *v20; // rax
  size_t v21; // rsi
  __int64 v22; // rax

  *a1 = a1 + 2;
  sub_22275E0(a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  v2 = a1[1];
  if ( v2 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v7 = (_QWORD *)*a1;
        v8 = (char *)(*a1 + v4);
        v9 = *v8;
        if ( *v8 == 60 )
          goto LABEL_25;
        if ( v9 <= 60 )
          break;
        if ( v9 != 92 )
        {
          if ( v9 > 92 )
          {
            if ( (unsigned __int8)(v9 - 123) > 2u )
            {
              v4 = (unsigned int)++v3;
              goto LABEL_11;
            }
          }
          else if ( v9 != 62 )
          {
            goto LABEL_10;
          }
LABEL_25:
          if ( v2 == 0x7FFFFFFFFFFFFFFFLL )
            std::__throw_length_error("basic_string::_M_replace_aux");
LABEL_26:
          v17 = v2 + 1;
          if ( v7 == a1 + 2 )
            v18 = 15;
          else
            v18 = a1[2];
          if ( v17 > v18 )
          {
            sub_998B30((__int64)a1, v4, 0, nullptr, 1u);
          }
          else
          {
            v19 = v2 - v4;
            if ( v19 == 1 )
              v8[1] = v9;
            else
              memmove(v8 + 1, (const void *)(*a1 + v4), v19);
          }
          *(_BYTE *)(*a1 + v4) = 92;
          v20 = (_QWORD *)*a1;
          v4 = (unsigned int)(v3 + 2);
          a1[1] = v17;
          v3 += 2;
          *((_BYTE *)v20 + v17) = 0;
          v2 = a1[1];
          goto LABEL_4;
        }
        v11 = (unsigned int)(v3 + 1);
        v12 = v3 + 1;
        if ( v11 == v2 )
          goto LABEL_26;
        v13 = *((_BYTE *)v7 + v11);
        if ( v13 != 108 )
        {
          if ( v13 >= 108 && (unsigned __int8)(v13 - 123) <= 2u )
          {
            v14 = v2 - 1;
            v15 = v2 - 1 - v4;
            if ( v15 )
            {
              v16 = (char *)v7 + v4 + 1;
              if ( v15 == 1 )
              {
                *v8 = *v16;
                v7 = (_QWORD *)*a1;
              }
              else
              {
                memmove((void *)(*a1 + v4), v16, v15);
                v7 = (_QWORD *)*a1;
                v12 = v3 + 1;
              }
              v14 = a1[1] - 1LL;
            }
            a1[1] = v14;
            v3 = v12;
            v4 = v11;
            *((_BYTE *)v7 + v14) = 0;
            v2 = a1[1];
            goto LABEL_4;
          }
          goto LABEL_25;
        }
        ++v3;
        v4 = v11;
LABEL_4:
        if ( v4 == v2 )
          return a1;
      }
      switch ( v9 )
      {
        case 10:
          v21 = v4;
          v4 = (unsigned int)(v3 + 2);
          sub_22276A0(a1, v21, 92);
          v22 = (unsigned int)(v3 + 1);
          v3 += 2;
          *(_BYTE *)(*a1 + v22) = 110;
          v2 = a1[1];
          goto LABEL_4;
        case 34:
          goto LABEL_25;
        case 9:
          v5 = v4;
          v4 = (unsigned int)(v3 + 2);
          sub_22276A0(a1, v5, 32);
          v6 = (unsigned int)(v3 + 1);
          v3 += 2;
          *(_BYTE *)(*a1 + v6) = 32;
          v2 = a1[1];
          goto LABEL_4;
      }
LABEL_10:
      v4 = (unsigned int)++v3;
LABEL_11:
      ;
    }
    while ( v4 != v2 );
  }
  return a1;
}
