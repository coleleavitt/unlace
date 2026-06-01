_QWORD *__fastcall sub_13D3E20(_QWORD *a1, _BYTE *a2, __int64 a3, char a4)
{
  _QWORD *v4; // r14
  unsigned __int64 v6; // r15
  int v7; // r13d
  size_t i; // rbp
  size_t v9; // r12
  _QWORD *v10; // rdx
  char *v11; // rsi
  char v12; // al
  __int64 v13; // r12
  unsigned __int64 v14; // rdx
  char v16; // dl
  __int64 v17; // r10
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // rax
  _BYTE *v20; // rsi
  size_t v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // [rsp+0h] [rbp-48h]
  __int64 v24; // [rsp+0h] [rbp-48h]
  unsigned __int64 v25; // [rsp+8h] [rbp-40h]
  unsigned __int64 v26; // [rsp+8h] [rbp-40h]

  v4 = a1 + 2;
  *a1 = a1 + 2;
  sub_13D0630(a1, a2, (__int64)&a2[a3]);
  v6 = a1[1];
  v7 = a4 == 0 ? 34 : 39;
  if ( v6 )
  {
    for ( i = 0; ; i = v9 )
    {
      v10 = (_QWORD *)*a1;
      v11 = (char *)(*a1 + i);
      v12 = *v11;
      if ( (_BYTE)v7 == *v11 || v12 == 92 )
      {
        v13 = a1[1];
        if ( v13 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_40;
        if ( v4 == v10 )
          v14 = 15;
        else
          v14 = a1[2];
        if ( v13 + 1 > v14 )
        {
          sub_998B30((__int64)a1, i, 0, nullptr, 1u);
          v11 = (char *)(i + *a1);
        }
        else if ( v13 != i )
        {
          if ( v13 - i == 1 )
            v11[1] = v12;
          else
            memmove(v11 + 1, v11, v13 - i);
          v11 = (char *)(i + *a1);
        }
        *v11 = 92;
        ++v6;
        a1[1] = v13 + 1;
        *(_BYTE *)(*a1 + v13 + 1) = 0;
        v9 = i + 2;
        if ( i + 2 >= v6 )
          return a1;
      }
      else
      {
        v9 = i + 1;
        if ( v12 == 10 || v12 == 13 )
        {
          if ( v6 - 1 > i && ((v16 = *((_BYTE *)v10 + v9), v16 == 13) || v16 == 10) && v12 != v16 )
          {
            *v11 = 92;
            *(_BYTE *)(*a1 + v9) = 110;
          }
          else
          {
            *v11 = 92;
            v17 = a1[1];
            if ( v17 == 0x7FFFFFFFFFFFFFFFLL )
LABEL_40:
              std::__throw_length_error("basic_string::_M_replace_aux");
            v18 = v17 + 1;
            if ( v4 == (_QWORD *)*a1 )
              v19 = 15;
            else
              v19 = a1[2];
            if ( v18 > v19 )
            {
              v26 = v17 + 1;
              v24 = a1[1];
              sub_998B30((__int64)a1, i + 1, 0, nullptr, 1u);
              v18 = v26;
              v17 = v24;
              v20 = (_BYTE *)(v9 + *a1);
            }
            else
            {
              v20 = (_BYTE *)(v9 + *a1);
              v21 = v17 - v9;
              if ( v17 != v9 )
              {
                if ( v21 == 1 )
                {
                  v20[1] = *v20;
                }
                else
                {
                  v25 = v17 + 1;
                  v23 = a1[1];
                  memmove(v20 + 1, v20, v21);
                  v17 = v23;
                  v18 = v25;
                }
                v20 = (_BYTE *)(v9 + *a1);
              }
            }
            *v20 = 110;
            v22 = (_QWORD *)*a1;
            ++v6;
            a1[1] = v18;
            *((_BYTE *)v22 + v17 + 1) = 0;
          }
          v9 = i + 2;
        }
        if ( v9 >= v6 )
          return a1;
      }
    }
  }
  return a1;
}
