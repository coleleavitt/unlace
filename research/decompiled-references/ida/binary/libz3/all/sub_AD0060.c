__int64 __fastcall sub_AD0060(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rbp
  int v5; // r12d
  __int16 v6; // dx
  _DWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rbp
  __int64 *v11; // r13
  __int64 v12; // rsi

  result = a1[56];
  if ( result )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(result - 4);
      if ( !(_DWORD)result )
        return result;
      sub_AC8710(*a1);
      result = a1[56];
      v2 = (unsigned int)(*(_DWORD *)(result - 4) - 1);
      v3 = result + 16 * v2;
      v4 = *(_QWORD *)v3;
      v5 = *(_DWORD *)(v3 + 8);
      *(_DWORD *)(result - 4) = v2;
      v6 = *(_WORD *)(v4 + 4);
      if ( v6 )
      {
        if ( v6 == 1 )
          goto LABEL_6;
      }
      else
      {
        v7 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL);
        if ( v7 )
        {
          if ( !*v7 )
          {
            if ( (unsigned __int8)sub_15D2CB0(a1[1], v4) )
            {
              v8 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 24LL);
              if ( v8 )
              {
                switch ( *(_DWORD *)(v8 + 4) )
                {
                  case 2:
                    if ( !(unsigned __int8)sub_15D2CB0(a1[1], *(_QWORD *)(v4 + 32)) )
                      goto LABEL_6;
                    sub_ACF220((__int64)a1, *(_QWORD *)(v4 + 32), 0);
                    sub_ACF220((__int64)a1, *(_QWORD *)(v4 + 32), 1);
                    sub_ACF220((__int64)a1, *(_QWORD *)(v4 + 40), 0);
                    sub_ACF220((__int64)a1, *(_QWORD *)(v4 + 40), 1);
                    result = a1[56];
                    break;
                  case 4:
                    sub_ACF220((__int64)a1, *(_QWORD *)(v4 + 32), v5);
                    sub_ACF220((__int64)a1, *(_QWORD *)(v4 + 32), v5 == 0);
                    sub_ACF220((__int64)a1, *(_QWORD *)(v4 + 40), v5);
                    sub_ACF220((__int64)a1, *(_QWORD *)(v4 + 48), v5);
                    result = a1[56];
                    goto LABEL_8;
                  case 5:
                  case 6:
                    v9 = *(unsigned int *)(v4 + 24);
                    v10 = (__int64 *)(v4 + 32);
                    v9 *= 8;
                    v11 = (__int64 *)((char *)v10 + v9);
                    if ( v9 )
                    {
                      do
                      {
                        v12 = *v10++;
                        sub_ACF220((__int64)a1, v12, v5);
                      }
                      while ( v11 != v10 );
                    }
                    goto LABEL_7;
                  case 7:
                  case 9:
                    sub_1872CE0("");
                    sub_1873130(114, 2208);
                  case 8:
                    sub_ACF220((__int64)a1, *(_QWORD *)(v4 + 32), v5 == 0);
                    result = a1[56];
                    goto LABEL_8;
                  default:
                    goto LABEL_6;
                }
                goto LABEL_8;
              }
            }
          }
        }
LABEL_6:
        sub_ACFAE0((__int64)a1, v4, v5 == 1);
LABEL_7:
        result = a1[56];
LABEL_8:
        if ( !result )
          return result;
      }
    }
  }
  return result;
}

