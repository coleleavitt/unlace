unsigned __int8 __fastcall sub_167EDF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // esi
  unsigned __int8 result; // al
  unsigned int *v5; // rcx
  __int64 v6; // rdx
  bool v7; // r9
  int v8; // ebp
  bool v9; // di
  char v10; // bl
  char v11; // bl
  char v12; // di

  v2 = *(_QWORD *)(a2 + 136);
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 17448) + 264LL);
  result = v2 == 0 || v3 == 0;
  if ( !result )
  {
    v5 = *(unsigned int **)(v2 + 16);
    v6 = *v5;
    switch ( v6 )
    {
      case 5LL:
        if ( v5[4] == 1702390128 )
          result = *((_BYTE *)v5 + 20) == 108;
        v7 = 1;
        v8 = 33;
        break;
      case 6LL:
        v7 = 1;
        v8 = 34;
        if ( v5[4] == 1953654134 )
          result = *((_WORD *)v5 + 10) == 30821;
        break;
      case 8LL:
        v7 = 1;
        v9 = 1;
        result = *((_QWORD *)v5 + 2) == 0x797274656D6F6567LL;
        v8 = 2 * result + 33;
LABEL_13:
        v11 = v7 | result;
        goto LABEL_14;
      default:
        v11 = v6 != 7;
        v7 = v6 != 7;
        if ( v6 == 4 )
        {
          v9 = 1;
          v8 = 33;
          if ( v5[4] == 1819047272 )
          {
            v8 = 36;
            result = 1;
LABEL_15:
            v10 = v9 | result;
LABEL_16:
            if ( v10 )
            {
LABEL_17:
              if ( result | (v6 != 12) )
                goto LABEL_18;
              if ( *((_QWORD *)v5 + 2) == 0x6365737265746E69LL && v5[6] == 1852795252 )
              {
                v8 = 41;
                result = 1;
                goto LABEL_20;
              }
LABEL_19:
              if ( !(result | (v6 != 10)) )
              {
                if ( *((_QWORD *)v5 + 2) == 0x68747365736F6C63LL && *((_WORD *)v5 + 12) == 29801 )
                {
                  v8 = 43;
                  result = 1;
                  goto LABEL_22;
                }
LABEL_21:
                if ( !(result | (v6 != 8)) )
                {
                  v12 = result | v9;
                  if ( *((_QWORD *)v5 + 2) == 0x656C62616C6C6163LL )
                  {
                    result = 1;
                    v8 = 45;
                    goto LABEL_24;
                  }
                  goto LABEL_23;
                }
LABEL_22:
                v12 = result | v9;
LABEL_23:
                if ( !v12 )
                {
                  if ( *((_QWORD *)v5 + 2) == 0x636966696C706D61LL && v5[6] == 1869182049 && *((_BYTE *)v5 + 28) == 110 )
                  {
                    v8 = 47;
                    return v3 == v8;
                  }
                  goto LABEL_25;
                }
LABEL_24:
                if ( !(result | v7) )
                {
                  if ( v5[4] != 1919052140 || *((_WORD *)v5 + 10) != 29281 )
                    return 0;
                  v8 = 39;
                  if ( *((_BYTE *)v5 + 22) != 121 )
                    return 0;
                  return v3 == v8;
                }
LABEL_25:
                if ( !result )
                  return result;
                return v3 == v8;
              }
LABEL_20:
              if ( !(result | (v6 != 4)) )
              {
                if ( v5[4] == 1936943469 )
                {
                  result = 1;
                  v8 = 44;
                }
                else if ( v5[4] == 1752393069 )
                {
                  v8 = 46;
                  return v3 == v8;
                }
                goto LABEL_24;
              }
              goto LABEL_21;
            }
            if ( *((_QWORD *)v5 + 2) == 0x72656E6567796172LL && v5[6] == 1869182049 && *((_BYTE *)v5 + 28) == 110 )
            {
              v8 = 40;
              result = 1;
              goto LABEL_19;
            }
LABEL_18:
            if ( !(result | (v6 != 6)) )
            {
              if ( v5[4] == 1752788577 && *((_WORD *)v5 + 10) == 29801 )
              {
                result = 1;
                v8 = 42;
                goto LABEL_21;
              }
              goto LABEL_20;
            }
            goto LABEL_19;
          }
LABEL_14:
          if ( !v11 )
          {
            if ( v5[4] != 1886220131 || *((_WORD *)v5 + 10) != 29813 || *((_BYTE *)v5 + 22) != 101 )
              goto LABEL_17;
            v8 = 38;
            result = 1;
            goto LABEL_18;
          }
          goto LABEL_15;
        }
        v8 = 33;
        break;
    }
    v9 = v6 != 13;
    if ( v6 == 6 && !result )
    {
      if ( v5[4] == 1634561892 && *((_WORD *)v5 + 10) == 28265 )
      {
        v8 = 37;
        result = 1;
        goto LABEL_17;
      }
      v10 = v6 != 13;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  return result;
}
