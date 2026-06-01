__int64 __fastcall sub_E8D460(__int64 a1, char a2)
{
  char v2; // r14
  char v3; // r13
  char v4; // r12
  char v5; // r15
  char v6; // bp
  _QWORD *v7; // rdx
  _WORD *v8; // rdx
  _DWORD *v9; // rdx
  _WORD *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  _WORD *v13; // rdx
  _QWORD *v14; // rdx
  _WORD *v15; // rdx
  __int64 v16; // rdx
  __int64 v18; // rdx
  _WORD *v19; // rdx

  if ( a2 )
  {
    v2 = a2 & 4;
    v3 = a2 & 8;
    v4 = a2 & 2;
    v5 = a2 & 1;
    v6 = a2 & 0x10;
    if ( (a2 & 0x20) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v12) > 5 )
      {
        *(_DWORD *)v12 = 1635216481;
        *(_WORD *)(v12 + 4) = 29561;
        *(_QWORD *)(a1 + 32) += 6LL;
      }
      else
      {
        sub_22581D0(a1, "always", 6);
      }
      if ( !v2 )
        goto LABEL_29;
      v13 = *(_WORD **)(a1 + 32);
      if ( *(_QWORD *)(a1 + 24) - (_QWORD)v13 > 1u )
      {
        *v13 = 8236;
        v14 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 2LL);
        *(_QWORD *)(a1 + 32) = v14;
LABEL_27:
        if ( *(_QWORD *)(a1 + 24) - (_QWORD)v14 > 7u )
        {
          *v14 = 0x6E69737961776C61LL;
          *(_QWORD *)(a1 + 32) += 8LL;
        }
        else
        {
          sub_22581D0(a1, "alwaysin", 8);
        }
LABEL_29:
        if ( !v3 )
        {
          if ( !v4 )
            goto LABEL_9;
          goto LABEL_44;
        }
        v15 = *(_WORD **)(a1 + 32);
        if ( *(_QWORD *)(a1 + 24) - (_QWORD)v15 > 1u )
        {
          *v15 = 8236;
          v16 = *(_QWORD *)(a1 + 32) + 2LL;
          *(_QWORD *)(a1 + 32) = v16;
LABEL_33:
          if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v16) > 8 )
          {
            *(_BYTE *)(v16 + 8) = 116;
            *(_QWORD *)v16 = 0x756F737961776C61LL;
            *(_QWORD *)(a1 + 32) += 9LL;
          }
          else
          {
            sub_22581D0(a1, "alwaysout", 9);
          }
          if ( !v4 )
          {
            if ( !v5 )
            {
              if ( v6 )
                goto LABEL_16;
              return a1;
            }
LABEL_10:
            v8 = *(_WORD **)(a1 + 32);
            if ( *(_QWORD *)(a1 + 24) - (_QWORD)v8 > 1u )
            {
              *v8 = 8236;
              v9 = (_DWORD *)(*(_QWORD *)(a1 + 32) + 2LL);
              *(_QWORD *)(a1 + 32) = v9;
LABEL_13:
              if ( *(_QWORD *)(a1 + 24) - (_QWORD)v9 > 3u )
              {
                *v9 = 1869768058;
                *(_QWORD *)(a1 + 32) += 4LL;
              }
              else
              {
                sub_22581D0(a1, "zero", 4);
              }
LABEL_15:
              if ( v6 )
              {
LABEL_16:
                v10 = *(_WORD **)(a1 + 32);
                if ( *(_QWORD *)(a1 + 24) - (_QWORD)v10 > 1u )
                {
                  *v10 = 8236;
                  v11 = *(_QWORD *)(a1 + 32) + 2LL;
                  *(_QWORD *)(a1 + 32) = v11;
LABEL_19:
                  if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v11) > 6 )
                  {
                    *(_DWORD *)v11 = 1953522019;
                    *(_WORD *)(v11 + 4) = 29301;
                    *(_BYTE *)(v11 + 6) = 101;
                    *(_QWORD *)(a1 + 32) += 7LL;
                  }
                  else
                  {
                    sub_22581D0(a1, "capture", 7);
                  }
                  return a1;
                }
                sub_22581D0(a1, ", ", 2);
LABEL_18:
                v11 = *(_QWORD *)(a1 + 32);
                goto LABEL_19;
              }
              return a1;
            }
            sub_22581D0(a1, ", ", 2);
LABEL_12:
            v9 = *(_DWORD **)(a1 + 32);
            goto LABEL_13;
          }
LABEL_44:
          v19 = *(_WORD **)(a1 + 32);
          if ( *(_QWORD *)(a1 + 24) - (_QWORD)v19 > 1u )
          {
            *v19 = 8236;
            v7 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 2LL);
            *(_QWORD *)(a1 + 32) = v7;
          }
          else
          {
            sub_22581D0(a1, ", ", 2);
            v7 = *(_QWORD **)(a1 + 32);
          }
LABEL_7:
          if ( *(_QWORD *)(a1 + 24) - (_QWORD)v7 > 7u )
          {
            *v7 = 0x796C6E6F64616572LL;
            *(_QWORD *)(a1 + 32) += 8LL;
          }
          else
          {
            sub_22581D0(a1, "readonly", 8);
          }
LABEL_9:
          if ( !v5 )
            goto LABEL_15;
          goto LABEL_10;
        }
        sub_22581D0(a1, ", ", 2);
LABEL_32:
        v16 = *(_QWORD *)(a1 + 32);
        goto LABEL_33;
      }
      sub_22581D0(a1, ", ", 2);
    }
    else if ( !v2 )
    {
      if ( !v3 )
      {
        if ( !v4 )
        {
          if ( !v5 )
          {
            if ( v6 )
              goto LABEL_18;
            return a1;
          }
          goto LABEL_12;
        }
        v7 = *(_QWORD **)(a1 + 32);
        goto LABEL_7;
      }
      goto LABEL_32;
    }
    v14 = *(_QWORD **)(a1 + 32);
    goto LABEL_27;
  }
  v18 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v18) > 8 )
  {
    *(_BYTE *)(v18 + 8) = 62;
    *(_QWORD *)v18 = 0x64696C61766E693CLL;
    *(_QWORD *)(a1 + 32) += 9LL;
    return a1;
  }
  return sub_22581D0(a1, "<invalid>", 9);
}

