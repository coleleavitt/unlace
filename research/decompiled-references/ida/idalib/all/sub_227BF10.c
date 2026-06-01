__int64 *__fastcall sub_227BF10(__int64 *a1, unsigned __int8 *a2, size_t a3)
{
  __int64 v6; // rdx
  unsigned __int8 *v7; // rdi
  unsigned __int64 v8; // r13
  unsigned __int8 *v10; // rsi
  __int64 v11; // rax
  unsigned __int8 *v12; // rsi
  size_t v13; // rdx

  v6 = a1[3];
  v7 = (unsigned __int8 *)a1[4];
  while ( 1 )
  {
    v8 = v6 - (_QWORD)v7;
    if ( v6 - (__int64)v7 >= a3 )
      break;
    v10 = (unsigned __int8 *)a1[2];
    if ( v10 )
    {
      if ( v10 == v7 )
      {
        v12 = a2;
        v13 = a3 - a3 % v8;
        a2 += v13;
        (*(void (__fastcall **)(__int64 *, unsigned __int8 *, size_t))(*a1 + 72))(a1, v12, v13);
        v6 = a1[3];
        v7 = (unsigned __int8 *)a1[4];
        if ( a3 % v8 <= v6 - (__int64)v7 )
        {
          sub_227BE80((__int64)a1, a2, a3 % v8);
          return a1;
        }
        a3 %= v8;
      }
      else
      {
        switch ( v8 )
        {
          case 0uLL:
            break;
          case 1uLL:
            goto LABEL_19;
          case 2uLL:
            goto LABEL_18;
          case 3uLL:
            goto LABEL_17;
          case 4uLL:
            v7[3] = a2[3];
            v7 = (unsigned __int8 *)a1[4];
LABEL_17:
            v7[2] = a2[2];
            v7 = (unsigned __int8 *)a1[4];
LABEL_18:
            v7[1] = a2[1];
            v7 = (unsigned __int8 *)a1[4];
LABEL_19:
            *v7 = *a2;
            v10 = (unsigned __int8 *)a1[2];
            v6 = v8 + a1[4];
            break;
          default:
            memcpy(v7, a2, v6 - (_QWORD)v7);
            v10 = (unsigned __int8 *)a1[2];
            v6 = v8 + a1[4];
            break;
        }
        v11 = *a1;
        a1[4] = (__int64)v10;
        a3 -= v8;
        a2 += v8;
        (*(void (__fastcall **)(__int64 *, unsigned __int8 *, __int64))(v11 + 72))(a1, v10, v6 - (_QWORD)v10);
        v6 = a1[3];
        v7 = (unsigned __int8 *)a1[4];
      }
    }
    else
    {
      if ( !*((_DWORD *)a1 + 11) )
      {
        (*(void (__fastcall **)(__int64 *, unsigned __int8 *, size_t))(*a1 + 72))(a1, a2, a3);
        return a1;
      }
      sub_227B7D0(a1);
      v6 = a1[3];
      v7 = (unsigned __int8 *)a1[4];
    }
  }
  switch ( a3 )
  {
    case 0uLL:
      break;
    case 1uLL:
      goto LABEL_10;
    case 2uLL:
      goto LABEL_9;
    case 3uLL:
      goto LABEL_8;
    case 4uLL:
      v7[3] = a2[3];
      v7 = (unsigned __int8 *)a1[4];
LABEL_8:
      v7[2] = a2[2];
      v7 = (unsigned __int8 *)a1[4];
LABEL_9:
      v7[1] = a2[1];
      v7 = (unsigned __int8 *)a1[4];
LABEL_10:
      *v7 = *a2;
      v7 = (unsigned __int8 *)a1[4];
      break;
    default:
      memcpy(v7, a2, a3);
      v7 = (unsigned __int8 *)a1[4];
      break;
  }
  a1[4] = (__int64)&v7[a3];
  return a1;
}
