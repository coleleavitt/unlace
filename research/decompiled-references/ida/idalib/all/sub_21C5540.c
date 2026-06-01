__int64 __fastcall sub_21C5540(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // r12
  __int64 i; // r9
  unsigned __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r11
  __int64 v10; // rbx
  unsigned __int64 *v11; // r9
  unsigned __int64 *v12; // r11
  unsigned __int64 *v13; // r10
  unsigned __int64 v14; // r11
  __int64 v15; // r11
  unsigned __int64 *v16; // r9
  unsigned __int64 j; // rbx
  unsigned __int64 *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 *v20; // rdx

  v5 = (a3 - 1) / 2;
  if ( a2 < v5 )
  {
    for ( i = a2; ; i = result )
    {
      v9 = i + 1;
      v10 = 2 * (i + 1);
      v11 = (unsigned __int64 *)(a1 + 16 * i);
      result = v10 - 1;
      v12 = (unsigned __int64 *)(a1 + 32 * v9);
      v13 = (unsigned __int64 *)(a1 + 16 * (v10 - 1));
      if ( *v13 <= *v12 )
      {
        v7 = v12[1];
        *v11 = *v12;
        v11[1] = v7;
        if ( v5 <= v10 )
        {
          v13 = v12;
          result = v10;
          if ( (a3 & 1) != 0 )
            goto LABEL_9;
          goto LABEL_16;
        }
        result = v10;
      }
      else
      {
        v14 = v13[1];
        *v11 = *v13;
        v11[1] = v14;
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
  v13 = (unsigned __int64 *)(a1 + 16 * a2);
  if ( (a3 & 1) == 0 )
  {
LABEL_16:
    if ( (a3 - 2) / 2 == result )
    {
      result = 2 * result + 1;
      v20 = (unsigned __int64 *)(a1 + 16 * result);
      *v13 = *v20;
      v13[1] = v20[1];
      v13 = v20;
    }
LABEL_9:
    v15 = (result - 1) / 2;
    if ( result > a2 )
    {
      v16 = (unsigned __int64 *)(a1 + 16 * v15);
      for ( j = *v16; *v16 < a4; j = *v16 )
      {
        v18 = (unsigned __int64 *)(a1 + 16 * result);
        v18[1] = v16[1];
        v13 = (unsigned __int64 *)(a1 + 16 * v15);
        *v18 = j;
        result = v15 - 1;
        v19 = (v15 - 1) / 2;
        if ( a2 >= v15 )
          break;
        result = v15;
        v15 = (v15 - 1) / 2;
        v16 = (unsigned __int64 *)(a1 + 16 * v19);
      }
    }
  }
  *v13 = a4;
  v13[1] = a5;
  return result;
}
