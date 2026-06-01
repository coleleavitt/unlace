_QWORD *__fastcall sub_229B780(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  _BYTE **v5; // r15
  char *v6; // r12
  size_t v7; // r13
  char v8; // bp
  _UNKNOWN **v9; // r14
  _QWORD *v10; // rdi
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rdx
  _UNKNOWN **v14; // rax
  _BYTE **v15; // [rsp+10h] [rbp-48h]

  result = *(_QWORD **)(a2 + 8);
  v15 = (_BYTE **)result;
  if ( *(_QWORD **)a2 != result )
  {
    v5 = *(_BYTE ***)a2;
    do
    {
      v6 = *v5;
      v7 = (size_t)v5[1];
      v8 = **v5;
      if ( v7 )
      {
        v9 = &off_2B414A0;
        while ( ((_UNKNOWN *)v7 != v9[11] || memcmp(v6, v9[10], v7))
             && ((_UNKNOWN *)v7 != v9[13] || memcmp(v6, v9[12], v7)) )
        {
          v9 += 14;
          if ( v9 == (_UNKNOWN **)&unk_2B44FB0 )
            goto LABEL_10;
        }
      }
      else
      {
        v14 = &off_2B414A0;
        while ( 1 )
        {
          v9 = v14;
          if ( !v14[11] || !v14[13] )
            break;
          v14 += 14;
          if ( v14 == (_UNKNOWN **)&unk_2B44FB0 )
          {
LABEL_10:
            v10 = *(_QWORD **)(a3 + 8);
            if ( v10 == *(_QWORD **)(a3 + 16) )
            {
              result = sub_10BCB90((void ***)a3, *(const __m128i **)(a3 + 8), (__int64)v5);
            }
            else
            {
              *v10 = v10 + 2;
              result = sub_2297F10(v10, *v5, (__int64)&v5[1][(_QWORD)*v5]);
              *(_QWORD *)(a3 + 8) += 32LL;
            }
            goto LABEL_12;
          }
        }
      }
      v11 = *((_DWORD *)v9 + 10);
      v12 = 1LL << v11;
      result = (_QWORD *)(a1 + 8LL * (v11 >> 6));
      result[3] |= 1LL << v11;
      if ( v8 == 45 )
        v13 = *result & ~v12;
      else
        v13 = *result | v12;
      *result = v13;
LABEL_12:
      v5 += 4;
    }
    while ( v15 != v5 );
  }
  return result;
}
