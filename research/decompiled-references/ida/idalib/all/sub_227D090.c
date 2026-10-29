__int64 *__fastcall sub_227D090(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r14d
  unsigned __int8 *v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // ebp
  size_t v7; // rdx
  unsigned __int8 *v8; // r8
  size_t i; // r15
  size_t v10; // r9
  unsigned __int8 *v12; // rsi
  __int64 v13; // rax
  size_t v14; // rdx
  size_t v15; // r15
  unsigned __int8 *v16; // rax
  size_t v17; // r10
  unsigned __int8 *v18; // [rsp+0h] [rbp-48h]
  unsigned __int8 *v19; // [rsp+0h] [rbp-48h]
  unsigned __int8 *v20; // [rsp+0h] [rbp-48h]
  unsigned __int8 *v21; // [rsp+0h] [rbp-48h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t nb; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  v2 = a2;
  if ( a2 > 0x4F )
  {
    while ( 1 )
    {
      v6 = 79;
      v7 = a1[3];
      v4 = (unsigned __int8 *)a1[4];
      if ( v2 <= 0x4F )
        v6 = v2;
      v8 = byte_26FB140;
      for ( i = v6; ; i = n )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v10 = v7 - (_QWORD)v4;
            if ( v7 - (unsigned __int64)v4 >= i )
            {
              if ( i != 2 )
              {
                if ( i <= 2 )
                {
                  if ( i != 1 )
                  {
LABEL_18:
                    memcpy(v4, v8, i);
                    v5 = a1[4];
                    goto LABEL_9;
                  }
LABEL_8:
                  *v4 = *v8;
                  v5 = a1[4];
LABEL_9:
                  a1[4] = v5 + i;
                  goto LABEL_10;
                }
                if ( i != 3 )
                {
                  if ( i != 4 )
                    goto LABEL_18;
                  v4[3] = v8[3];
                  v4 = (unsigned __int8 *)a1[4];
                }
                v4[2] = v8[2];
                v4 = (unsigned __int8 *)a1[4];
              }
              v4[1] = v8[1];
              v4 = (unsigned __int8 *)a1[4];
              goto LABEL_8;
            }
            v12 = (unsigned __int8 *)a1[2];
            if ( v12 )
              break;
            if ( !*((_DWORD *)a1 + 11) )
            {
              (*(void (__fastcall **)(__int64 *, unsigned __int8 *, size_t))(*a1 + 72))(a1, v8, i);
              goto LABEL_10;
            }
            v21 = v8;
            sub_227B7D0(a1);
            v7 = a1[3];
            v4 = (unsigned __int8 *)a1[4];
            v8 = v21;
          }
          if ( v12 == v4 )
            break;
          switch ( v10 )
          {
            case 0uLL:
              break;
            case 1uLL:
              goto LABEL_28;
            case 2uLL:
              goto LABEL_27;
            case 3uLL:
              goto LABEL_26;
            case 4uLL:
              v4[3] = v8[3];
              v4 = (unsigned __int8 *)a1[4];
LABEL_26:
              v4[2] = v8[2];
              v4 = (unsigned __int8 *)a1[4];
LABEL_27:
              v4[1] = v8[1];
              v4 = (unsigned __int8 *)a1[4];
LABEL_28:
              *v4 = *v8;
              v12 = (unsigned __int8 *)a1[2];
              v7 = v10 + a1[4];
              break;
            default:
              na = v7 - (_QWORD)v4;
              v18 = v8;
              memcpy(v4, v8, v7 - (_QWORD)v4);
              v10 = na;
              v12 = (unsigned __int8 *)a1[2];
              v8 = v18;
              v7 = na + a1[4];
              break;
          }
          v13 = *a1;
          nb = v10;
          v19 = v8;
          a1[4] = (__int64)v12;
          (*(void (__fastcall **)(__int64 *, unsigned __int8 *, size_t))(v13 + 72))(a1, v12, v7 - (_QWORD)v12);
          v7 = a1[3];
          v4 = (unsigned __int8 *)a1[4];
          i -= nb;
          v8 = &v19[nb];
        }
        v20 = v8;
        v14 = i % v10;
        v15 = i - i % v10;
        n = v14;
        (*(void (__fastcall **)(__int64 *, unsigned __int8 *, size_t))(*a1 + 72))(a1, v8, v15);
        v7 = a1[3];
        v16 = (unsigned __int8 *)a1[4];
        v17 = n;
        v4 = v16;
        v8 = &v20[v15];
        if ( n <= v7 - (unsigned __int64)v16 )
          break;
      }
      switch ( n )
      {
        case 0uLL:
          break;
        case 1uLL:
          goto LABEL_41;
        case 2uLL:
          goto LABEL_40;
        case 3uLL:
          goto LABEL_39;
        case 4uLL:
          v16[3] = v8[3];
          v16 = (unsigned __int8 *)a1[4];
LABEL_39:
          v16[2] = v8[2];
          v16 = (unsigned __int8 *)a1[4];
LABEL_40:
          v16[1] = v8[1];
          v16 = (unsigned __int8 *)a1[4];
LABEL_41:
          *v16 = *v8;
          break;
        default:
          memcpy(v16, &v20[v15], n);
          v17 = n;
          break;
      }
      a1[4] += v17;
LABEL_10:
      v2 -= v6;
      if ( !v2 )
        return a1;
    }
  }
  return sub_227BF10(a1, byte_26FB140, a2);
}
