_BYTE *__fastcall sub_21BB130(__int64 a1)
{
  _BYTE *result; // rax
  __int64 v2; // r15
  __int64 v3; // r8
  __int64 v4; // r12
  char *v6; // rbp
  char *v7; // r14
  __int64 v8; // rdx
  char v9; // bl
  __int64 v10; // rdi
  _BYTE *v11; // rsi
  _BYTE *v12; // rdi
  _BYTE *v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // [rsp+8h] [rbp-40h]

  result = (_BYTE *)(a1 + 168);
  v2 = *(_QWORD *)(a1 + 80);
  v15 = a1 + 168;
  v3 = 16LL * *(unsigned int *)(a1 + 88);
  v4 = v2 + v3;
  if ( v2 != v2 + v3 )
  {
    while ( 1 )
    {
      v6 = *(char **)v2;
      v7 = (char *)(*(_QWORD *)v2 + *(_QWORD *)(v2 + 8));
      if ( *(char **)v2 != v7 )
        break;
LABEL_23:
      v2 += 16;
      if ( v4 == v2 )
        return result;
    }
    v8 = *(_QWORD *)(a1 + 152);
    while ( 1 )
    {
      result = *(_BYTE **)(a1 + 144);
      v9 = *v6;
      v10 = v8;
      v11 = &result[v8];
      if ( v8 >> 2 > 0 )
      {
        if ( v9 == *result )
        {
          if ( v11 != result )
            goto LABEL_22;
          goto LABEL_27;
        }
        if ( v9 == result[1] )
        {
          if ( v11 != result + 1 )
            goto LABEL_22;
          goto LABEL_27;
        }
        if ( v9 == result[2] )
        {
          if ( v11 != result + 2 )
            goto LABEL_22;
          goto LABEL_27;
        }
        v12 = &result[4 * (v8 >> 2)];
        v13 = result + 3;
        if ( v9 != result[3] )
        {
          while ( 1 )
          {
            v13 = result + 4;
            if ( v12 == result + 4 )
            {
              v10 = v11 - v13;
              goto LABEL_17;
            }
            if ( v9 == result[4] )
              goto LABEL_26;
            if ( v9 == result[5] )
            {
              v13 = result + 5;
              goto LABEL_26;
            }
            if ( v9 == result[6] )
            {
              if ( v11 != result + 6 )
                goto LABEL_22;
              goto LABEL_27;
            }
            if ( v9 == result[7] )
              break;
            result += 4;
          }
          if ( v11 != result + 7 )
            goto LABEL_22;
          goto LABEL_27;
        }
LABEL_26:
        if ( v11 != v13 )
          goto LABEL_22;
        goto LABEL_27;
      }
      v13 = *(_BYTE **)(a1 + 144);
LABEL_17:
      if ( v10 != 2 )
      {
        if ( v10 != 3 )
        {
          if ( v10 != 1 )
            goto LABEL_20;
          goto LABEL_37;
        }
        if ( v9 == *v13 )
          goto LABEL_26;
        ++v13;
      }
      if ( v9 == *v13 )
        goto LABEL_26;
      ++v13;
LABEL_37:
      if ( v9 != *v13 )
      {
LABEL_20:
        v14 = v8 + 1;
        if ( v14 > *(_QWORD *)(a1 + 160) )
          goto LABEL_28;
        goto LABEL_21;
      }
      if ( v11 != v13 )
        goto LABEL_22;
LABEL_27:
      v14 = v8 + 1;
      if ( v14 > *(_QWORD *)(a1 + 160) )
      {
LABEL_28:
        sub_2236E10(a1 + 144, v15, v14, 1);
        v11 = (_BYTE *)(*(_QWORD *)(a1 + 144) + *(_QWORD *)(a1 + 152));
      }
LABEL_21:
      *v11 = v9;
      result = *(_BYTE **)(a1 + 152);
      v8 = (__int64)(result + 1);
      *(_QWORD *)(a1 + 152) = result + 1;
LABEL_22:
      if ( v7 == ++v6 )
        goto LABEL_23;
    }
  }
  return result;
}
