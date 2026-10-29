_BYTE *__fastcall sub_2228440(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned __int8 *v4; // r14
  _BYTE *v6; // rax
  unsigned __int8 *v7; // r12
  _BYTE *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int8 v10; // bp
  unsigned __int8 *v11; // rax
  unsigned __int64 v12; // rdx
  _BYTE *result; // rax

  v4 = a2;
  v6 = *(_BYTE **)(a1 + 32);
  if ( (unsigned __int64)v6 >= *(_QWORD *)(a1 + 24) )
  {
    sub_227BA10(a1, 34);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v6 + 1;
    *v6 = 34;
  }
  v7 = &a2[a3];
  if ( v7 != a2 )
  {
    do
    {
      while ( 1 )
      {
        v10 = *v4;
        v11 = *(unsigned __int8 **)(a1 + 32);
        v12 = *(_QWORD *)(a1 + 24);
        if ( *v4 == 34 || v10 == 92 )
        {
          if ( (unsigned __int64)v11 >= v12 )
          {
            sub_227BA10(a1, 92);
          }
          else
          {
            *(_QWORD *)(a1 + 32) = v11 + 1;
            *v11 = 92;
          }
          v11 = *(unsigned __int8 **)(a1 + 32);
          v12 = *(_QWORD *)(a1 + 24);
        }
        if ( v10 > 0x1Fu )
          break;
        if ( v12 <= (unsigned __int64)v11 )
        {
          sub_227BA10(a1, 92);
          v8 = *(_BYTE **)(a1 + 32);
          v9 = *(_QWORD *)(a1 + 24);
          if ( v10 != 10 )
          {
LABEL_7:
            if ( v10 == 13 )
            {
              if ( (unsigned __int64)v8 >= v9 )
              {
                sub_227BA10(a1, 114);
              }
              else
              {
                *(_QWORD *)(a1 + 32) = v8 + 1;
                *v8 = 114;
              }
            }
            else if ( v10 == 9 )
            {
              if ( (unsigned __int64)v8 >= v9 )
              {
                sub_227BA10(a1, 116);
              }
              else
              {
                *(_QWORD *)(a1 + 32) = v8 + 1;
                *v8 = 116;
              }
            }
            else
            {
              if ( (unsigned __int64)v8 >= v9 )
              {
                sub_227BA10(a1, 117);
              }
              else
              {
                *(_QWORD *)(a1 + 32) = v8 + 1;
                *v8 = 117;
              }
              LOBYTE(v3) = 1;
              sub_2232DC0(a1, v10, 1, 4, v3);
            }
            goto LABEL_12;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v11 + 1;
          *v11 = 92;
          v8 = *(_BYTE **)(a1 + 32);
          v9 = *(_QWORD *)(a1 + 24);
          if ( v10 != 10 )
            goto LABEL_7;
        }
        if ( (unsigned __int64)v8 >= v9 )
        {
          sub_227BA10(a1, 110);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v8 + 1;
          *v8 = 110;
        }
LABEL_12:
        if ( v7 == ++v4 )
          goto LABEL_18;
      }
      if ( v12 <= (unsigned __int64)v11 )
      {
        sub_227BA10(a1, v10);
        goto LABEL_12;
      }
      ++v4;
      *(_QWORD *)(a1 + 32) = v11 + 1;
      *v11 = v10;
    }
    while ( v7 != v4 );
  }
LABEL_18:
  result = *(_BYTE **)(a1 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(a1 + 24) )
    return (_BYTE *)sub_227BA10(a1, 34);
  *(_QWORD *)(a1 + 32) = result + 1;
  *result = 34;
  return result;
}
