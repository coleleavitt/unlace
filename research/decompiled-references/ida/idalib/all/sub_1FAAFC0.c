__int64 __fastcall sub_1FAAFC0(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r14
  __int64 *v5; // r13
  __int64 *v6; // rbp
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rbp
  __int64 *v13; // r15
  __int64 *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 256 )
  {
    v4 = a3;
    v5 = a2;
    if ( !a3 )
    {
      v14 = a2;
      goto LABEL_14;
    }
    while ( 1 )
    {
      --v4;
      v6 = &a1[2 * (result >> 5)];
      v7 = sub_B84BB0(a1[2], *v6);
      v8 = *(v5 - 2);
      if ( v7 < 0 )
      {
        if ( (int)sub_B84BB0(*v6, v8) < 0 )
          goto LABEL_18;
        if ( (int)sub_B84BB0(a1[2], *(v5 - 2)) < 0 )
        {
LABEL_20:
          v23 = *a1;
          *a1 = *(v5 - 2);
          v24 = *(v5 - 1);
          *(v5 - 2) = v23;
          v25 = a1[1];
          a1[1] = v24;
          *(v5 - 1) = v25;
          goto LABEL_6;
        }
      }
      else if ( (int)sub_B84BB0(a1[2], v8) >= 0 )
      {
        if ( (int)sub_B84BB0(*v6, *(v5 - 2)) < 0 )
          goto LABEL_20;
LABEL_18:
        v20 = *a1;
        *a1 = *v6;
        v21 = v6[1];
        *v6 = v20;
        v22 = a1[1];
        a1[1] = v21;
        v6[1] = v22;
        goto LABEL_6;
      }
      v9 = a1[2];
      a1[2] = *a1;
      v10 = a1[1];
      *a1 = v9;
      v11 = a1[3];
      a1[3] = v10;
      a1[1] = v11;
LABEL_6:
      v12 = a1 + 2;
      v13 = v5;
      while ( 1 )
      {
        v14 = v12;
        if ( (int)sub_B84BB0(*v12, *a1) < 0 )
          goto LABEL_11;
        do
          v13 -= 2;
        while ( (int)sub_B84BB0(*a1, *v13) < 0 );
        if ( v12 >= v13 )
          break;
        v15 = *v12;
        *v12 = *v13;
        v16 = v13[1];
        *v13 = v15;
        v17 = v12[1];
        v12[1] = v16;
        v13[1] = v17;
LABEL_11:
        v12 += 2;
      }
      sub_1FAAFC0(v12, v5, v4);
      result = (char *)v12 - (char *)a1;
      if ( (char *)v12 - (char *)a1 <= 256 )
        return result;
      v5 = v12;
      if ( !v4 )
      {
LABEL_14:
        sub_1FAAEE0(a1, v14, (unsigned __int64)v14);
        do
        {
          v14 -= 2;
          v18 = *v14;
          v19 = v14[1];
          *v14 = *a1;
          v14[1] = a1[1];
          result = sub_1F6ADE0((__int64)a1, 0, ((char *)v14 - (char *)a1) >> 4, v18, v19);
        }
        while ( (char *)v14 - (char *)a1 > 16 );
        return result;
      }
    }
  }
  return result;
}
