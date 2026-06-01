void __fastcall sub_1912220(__int64 a1, __int64 a2, char a3, _QWORD *a4, __int64 a5, __m128 a6, __m128 a7)
{
  __int64 v7; // r9
  __int64 v8; // r8
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  _QWORD *v13; // rax
  _QWORD v14[2]; // [rsp+0h] [rbp-38h] BYREF
  char v15; // [rsp+10h] [rbp-28h]
  _QWORD *v16; // [rsp+18h] [rbp-20h]
  __int64 v17; // [rsp+20h] [rbp-18h]

  v7 = *(_QWORD *)(a1 + 248);
  v17 = a5;
  v8 = 8 * a5;
  v14[1] = a1;
  v9 = &a4[(unsigned __int64)v8 / 8];
  v15 = a3;
  v10 = v8;
  v11 = v8 >> 5;
  v14[0] = v7;
  v12 = v10 >> 3;
  v16 = a4;
  if ( v11 <= 0 )
  {
LABEL_14:
    if ( v12 != 2 )
    {
      if ( v12 != 3 )
      {
        if ( v12 != 1 )
          goto LABEL_25;
        goto LABEL_24;
      }
      if ( a2 == *a4 )
        goto LABEL_18;
      ++a4;
    }
    if ( a2 == *a4 )
      goto LABEL_18;
    ++a4;
LABEL_24:
    if ( a2 == *a4 )
      goto LABEL_18;
LABEL_25:
    sub_1911C50((__int64)v14, a2, v12, (__int64)a4, v11, v7, a6, a7);
    return;
  }
  if ( a2 != *a4 )
  {
    if ( a2 == a4[1] )
    {
      ++a4;
    }
    else if ( a2 == a4[2] )
    {
      a4 += 2;
    }
    else
    {
      v13 = a4;
      v11 = (__int64)&a4[4 * v11];
      if ( a2 == a4[3] )
      {
        a4 += 3;
      }
      else
      {
        while ( 1 )
        {
          a4 = v13 + 4;
          if ( v13 + 4 == (_QWORD *)v11 )
          {
            v12 = ((__int64)v9 - v11) >> 3;
            goto LABEL_14;
          }
          if ( a2 == v13[4] )
            goto LABEL_18;
          if ( a2 == v13[5] )
          {
            a4 = v13 + 5;
            goto LABEL_18;
          }
          if ( a2 == v13[6] )
          {
            a4 = v13 + 6;
            goto LABEL_18;
          }
          if ( a2 == v13[7] )
            break;
          v13 += 4;
        }
        a4 = v13 + 7;
      }
    }
  }
LABEL_18:
  if ( v9 == a4 )
    goto LABEL_25;
}
