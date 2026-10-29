__int64 __fastcall sub_21C57A0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 i; // r8
  __int64 result; // rax
  __int64 v8; // r10
  __int64 v9; // r13
  _QWORD *v10; // r8
  _QWORD *v11; // r10
  _QWORD *v12; // r9
  __int64 v13; // r10
  unsigned __int64 *v14; // r8
  unsigned __int64 j; // r11
  unsigned __int64 *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  double v19[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = (a3 - 1) / 2;
  *(_QWORD *)&v19[0] = a5;
  if ( a2 < v5 )
  {
    for ( i = a2; ; i = result )
    {
      v8 = i + 1;
      v9 = 2 * (i + 1);
      v10 = (_QWORD *)(a1 + 16 * i);
      result = v9 - 1;
      v11 = (_QWORD *)(a1 + 32 * v8);
      v12 = (_QWORD *)(a1 + 16 * (v9 - 1));
      if ( *v12 <= *v11 )
      {
        *v10 = *v11;
        v10[1] = v11[1];
        if ( v5 <= v9 )
        {
          v12 = v11;
          result = v9;
          if ( (a3 & 1) != 0 )
            goto LABEL_9;
          goto LABEL_16;
        }
        result = v9;
      }
      else
      {
        *v10 = *v12;
        v10[1] = v12[1];
        if ( v5 <= result )
        {
          if ( (a3 & 1) == 0 )
            goto LABEL_16;
          goto LABEL_9;
        }
      }
    }
  }
  result = a2;
  v12 = (_QWORD *)(a1 + 16 * a2);
  if ( (a3 & 1) == 0 )
  {
LABEL_16:
    if ( (a3 - 2) / 2 == result )
    {
      result = 2 * result + 1;
      v18 = (_QWORD *)(a1 + 16 * result);
      *v12 = *v18;
      v12[1] = v18[1];
      v12 = v18;
    }
LABEL_9:
    v13 = (result - 1) / 2;
    if ( result > a2 )
    {
      v14 = (unsigned __int64 *)(a1 + 16 * v13);
      for ( j = *v14; *v14 < a4; j = *v14 )
      {
        v16 = (unsigned __int64 *)(a1 + 16 * result);
        *v16 = j;
        v12 = (_QWORD *)(a1 + 16 * v13);
        v16[1] = v14[1];
        result = v13 - 1;
        v17 = (v13 - 1) / 2;
        if ( a2 >= v13 )
          break;
        result = v13;
        v13 = (v13 - 1) / 2;
        v14 = (unsigned __int64 *)(a1 + 16 * v17);
      }
    }
  }
  *(_QWORD *)&v19[1] = a4;
  *(__m128 *)v12 = _mm_loadh_ps(v19);
  return result;
}
