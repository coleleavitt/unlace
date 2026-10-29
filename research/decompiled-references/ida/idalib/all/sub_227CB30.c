__int64 *__fastcall sub_227CB30(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbp
  int v5; // eax
  size_t v6; // rdx
  unsigned __int8 *v7; // rdi
  size_t v8; // rdx
  size_t v9; // r12
  unsigned __int8 *v10; // rsi
  unsigned int v11; // r12d
  unsigned int v13; // r14d
  __int64 v14; // rdi
  unsigned int v15; // r12d
  unsigned __int8 *v16; // r8
  size_t i; // r13
  size_t v18; // r11
  unsigned __int8 *v19; // rsi
  __int64 v20; // rax
  size_t v21; // rdx
  size_t v22; // r13
  size_t v23; // r9
  __int64 v24; // rsi
  unsigned __int8 *v25; // rax
  unsigned __int8 *v26; // [rsp+0h] [rbp-48h]
  unsigned __int8 *v27; // [rsp+0h] [rbp-48h]
  unsigned __int8 *v28; // [rsp+0h] [rbp-48h]
  unsigned __int8 *v29; // [rsp+0h] [rbp-48h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t nb; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  v4 = *(unsigned int *)(a2 + 16) - *(_QWORD *)(a2 + 8);
  if ( v4 <= 0 )
  {
    v6 = 0;
    LODWORD(v4) = 0;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 20);
    if ( v5 == 2 )
    {
      v13 = v4;
      LODWORD(v4) = 0;
    }
    else
    {
      if ( v5 != 3 )
      {
        if ( v5 != 1 )
          LODWORD(v4) = 0;
        v6 = 0;
        goto LABEL_7;
      }
      v13 = v4 >> 1;
      LODWORD(v4) = v4 - v13;
    }
    if ( v13 > 0x4F )
    {
      v7 = (unsigned __int8 *)a1[4];
      v8 = a1[3];
      while ( 1 )
      {
        v15 = 79;
        v16 = byte_26FB140;
        if ( v13 <= 0x4F )
          v15 = v13;
        for ( i = v15; ; i = n )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v18 = v8 - (_QWORD)v7;
              if ( v8 - (unsigned __int64)v7 >= i )
              {
                if ( i != 2 )
                {
                  if ( i <= 2 )
                  {
                    if ( i != 1 )
                    {
LABEL_37:
                      memcpy(v7, v16, i);
                      v14 = a1[4];
                      v8 = a1[3];
                      goto LABEL_28;
                    }
LABEL_27:
                    *v7 = *v16;
                    v14 = a1[4];
                    v8 = a1[3];
LABEL_28:
                    v7 = (unsigned __int8 *)(i + v14);
                    a1[4] = (__int64)v7;
                    goto LABEL_29;
                  }
                  if ( i != 3 )
                  {
                    if ( i != 4 )
                      goto LABEL_37;
                    v7[3] = v16[3];
                    v7 = (unsigned __int8 *)a1[4];
                  }
                  v7[2] = v16[2];
                  v7 = (unsigned __int8 *)a1[4];
                }
                v7[1] = v16[1];
                v7 = (unsigned __int8 *)a1[4];
                goto LABEL_27;
              }
              v19 = (unsigned __int8 *)a1[2];
              if ( v19 )
                break;
              if ( !*((_DWORD *)a1 + 11) )
              {
                (*(void (__fastcall **)(__int64 *, unsigned __int8 *, size_t))(*a1 + 72))(a1, v16, i);
                v7 = (unsigned __int8 *)a1[4];
                v8 = a1[3];
                goto LABEL_29;
              }
              v28 = v16;
              sub_227B7D0(a1);
              v8 = a1[3];
              v7 = (unsigned __int8 *)a1[4];
              v16 = v28;
            }
            if ( v19 == v7 )
              break;
            switch ( v18 )
            {
              case 0uLL:
                break;
              case 1uLL:
                goto LABEL_47;
              case 2uLL:
                goto LABEL_46;
              case 3uLL:
                goto LABEL_45;
              case 4uLL:
                v7[3] = v16[3];
                v7 = (unsigned __int8 *)a1[4];
LABEL_45:
                v7[2] = v16[2];
                v7 = (unsigned __int8 *)a1[4];
LABEL_46:
                v7[1] = v16[1];
                v7 = (unsigned __int8 *)a1[4];
LABEL_47:
                *v7 = *v16;
                v19 = (unsigned __int8 *)a1[2];
                v8 = v18 + a1[4];
                break;
              default:
                na = v8 - (_QWORD)v7;
                v26 = v16;
                memcpy(v7, v16, v8 - (_QWORD)v7);
                v18 = na;
                v19 = (unsigned __int8 *)a1[2];
                v16 = v26;
                v8 = na + a1[4];
                break;
            }
            v20 = *a1;
            nb = v18;
            v27 = v16;
            a1[4] = (__int64)v19;
            (*(void (__fastcall **)(__int64 *, unsigned __int8 *, size_t))(v20 + 72))(a1, v19, v8 - (_QWORD)v19);
            v8 = a1[3];
            v7 = (unsigned __int8 *)a1[4];
            i -= nb;
            v16 = &v27[nb];
          }
          v29 = v16;
          v21 = i % v18;
          v22 = i - i % v18;
          n = v21;
          (*(void (__fastcall **)(__int64 *, unsigned __int8 *, size_t))(*a1 + 72))(a1, v16, v22);
          v8 = a1[3];
          v7 = (unsigned __int8 *)a1[4];
          v23 = n;
          v24 = v8;
          v25 = v7;
          v16 = &v29[v22];
          if ( n <= v8 - (unsigned __int64)v7 )
            break;
        }
        switch ( n )
        {
          case 0uLL:
            break;
          case 1uLL:
            goto LABEL_60;
          case 2uLL:
            goto LABEL_59;
          case 3uLL:
            goto LABEL_58;
          case 4uLL:
            v7[3] = v16[3];
            v25 = (unsigned __int8 *)a1[4];
LABEL_58:
            v25[2] = v16[2];
            v25 = (unsigned __int8 *)a1[4];
LABEL_59:
            v25[1] = v16[1];
            v25 = (unsigned __int8 *)a1[4];
LABEL_60:
            *v25 = *v16;
            v25 = (unsigned __int8 *)a1[4];
            v24 = a1[3];
            break;
          default:
            memcpy(v7, &v29[v22], n);
            v25 = (unsigned __int8 *)a1[4];
            v24 = a1[3];
            v23 = n;
            break;
        }
        v7 = &v25[v23];
        v8 = v24;
        a1[4] = (__int64)&v25[v23];
LABEL_29:
        v13 -= v15;
        if ( !v13 )
          goto LABEL_8;
      }
    }
    v6 = v13;
  }
LABEL_7:
  sub_227BF10(a1, byte_26FB140, v6);
  v7 = (unsigned __int8 *)a1[4];
  v8 = a1[3];
LABEL_8:
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(unsigned __int8 **)a2;
  if ( v8 - (unsigned __int64)v7 < v9 )
  {
    sub_227BF10(a1, v10, *(_QWORD *)(a2 + 8));
LABEL_10:
    if ( (unsigned int)v4 > 0x4F )
      goto LABEL_11;
LABEL_16:
    sub_227BF10(a1, byte_26FB140, (unsigned int)v4);
    return a1;
  }
  if ( !v9 )
    goto LABEL_10;
  memcpy(v7, v10, *(_QWORD *)(a2 + 8));
  a1[4] += v9;
  if ( (unsigned int)v4 <= 0x4F )
    goto LABEL_16;
  do
  {
LABEL_11:
    v11 = 79;
    if ( (unsigned int)v4 <= 0x4F )
      v11 = v4;
    sub_227BF10(a1, byte_26FB140, v11);
    LODWORD(v4) = v4 - v11;
  }
  while ( (_DWORD)v4 );
  return a1;
}
