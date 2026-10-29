char **__fastcall sub_767D90(char *a1, __int64 a2)
{
  char **v2; // rbp
  char v4; // al
  char v5; // al
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // al
  char v19; // al
  char v20; // al
  char v21; // al
  char v22; // al
  char v23; // al
  char v24; // al
  char v25; // al
  char v26; // al
  char v27; // al
  char v28; // al
  char v29; // al
  char v30; // al
  char v31; // al
  char v32; // al
  char v33; // al
  char v34; // al
  char v35; // al
  char v36; // al
  char v37; // al
  char v38; // al
  char v39; // al
  char v40; // al
  char v41; // al
  char v42; // al
  char v43; // al
  char v44; // al
  char v45; // al
  char v46; // al
  char v47; // al
  char v48; // al
  char v49; // al
  char v50; // al
  char v51; // al
  char v52; // al
  char v53; // al
  char v54; // al
  char v55; // al
  char v56; // al
  char v57; // al
  char v58; // al
  char v59; // al
  char v60; // al
  char v61; // al
  char v62; // al
  char v63; // al
  char v64; // al
  char v65; // al

  switch ( a2 )
  {
    case 1LL:
      switch ( *a1 )
      {
        case 'a':
          v2 = (char **)&off_47D8800;
          break;
        case 'b':
          v2 = (char **)&off_47D88D8;
          break;
        case 'c':
          v2 = (char **)&off_47D8920;
          break;
        case 'e':
          v2 = (char **)&off_47D8C68;
          break;
        case 'n':
          v2 = (char **)&off_47D9250;
          break;
        case 'p':
          v2 = (char **)&off_47D9310;
          break;
        default:
          v2 = nullptr;
          break;
      }
      break;
    case 2LL:
      switch ( *a1 )
      {
        case 'e':
          v2 = nullptr;
          if ( a1[1] == 109 )
            v2 = (char **)&off_47D8CB0;
          break;
        case 'f':
          v8 = a1[1];
          if ( v8 > 125 )
          {
            v2 = nullptr;
          }
          else if ( v8 <= 90 )
          {
            v2 = (char **)&off_47D8DE8;
            if ( v8 != 40 )
            {
              v2 = (char **)&off_47D8E00;
              if ( v8 != 41 )
              {
                v2 = (char **)(&off_47D8E00 - 6);
                if ( v8 != 36 )
                  v2 = nullptr;
              }
            }
          }
          else
          {
            switch ( v8 )
            {
              case '[':
                v2 = off_47D8DA0;
                break;
              case ']':
                v2 = &off_47D8DB8;
                break;
              case 'n':
                v2 = (char **)&off_47D8E30;
                break;
              case '{':
                v2 = &off_47D8D70;
                break;
              case '}':
                v2 = (char **)&off_47D8D88;
                break;
              default:
                v2 = nullptr;
                break;
            }
          }
          break;
        case 'i':
          v2 = nullptr;
          if ( a1[1] == 102 )
            v2 = (char **)&off_47D8FB0;
          break;
        case 'l':
          v2 = nullptr;
          if ( a1[1] == 105 )
            v2 = (char **)&off_47D9100;
          break;
        case 's':
          v2 = nullptr;
          if ( a1[1] == 97 )
            v2 = (char **)&off_47D9640;
          break;
        default:
          v2 = nullptr;
          break;
      }
      break;
    case 3LL:
      switch ( *a1 )
      {
        case 'a':
          v2 = nullptr;
          if ( *(_WORD *)(a1 + 1) == 26482 )
            v2 = (char **)&off_47D8878;
          break;
        case 'b':
          v2 = nullptr;
          if ( *(_WORD *)(a1 + 1) == 26485 )
            v2 = (char **)&off_47D8908;
          break;
        case 'd':
          v28 = a1[1];
          v2 = nullptr;
          if ( v28 == 105 )
          {
            if ( a1[2] == 114 )
              v2 = (char **)&off_47D8B90;
          }
          else if ( v28 == 111 )
          {
            if ( a1[2] == 116 )
              v2 = (char **)&off_47D8C20;
          }
          else if ( v28 == 101 && a1[2] == 102 )
          {
            v2 = (char **)&off_47D8B00;
          }
          break;
        case 'm':
          v2 = nullptr;
          if ( *(_WORD *)(a1 + 1) == 25459 )
            v2 = (char **)&off_47D9208;
          break;
        case 'p':
          v27 = a1[1];
          v2 = nullptr;
          if ( v27 == 97 )
          {
            if ( a1[2] == 114 )
              v2 = (char **)&off_47D9340;
          }
          else if ( v27 == 114 && a1[2] == 101 )
          {
            v2 = &off_47D93E8;
          }
          break;
        case 'r':
          v2 = nullptr;
          if ( *(_WORD *)(a1 + 1) == 26213 )
            v2 = (char **)&off_47D94D8;
          break;
        case 's':
          v2 = nullptr;
          if ( *(_WORD *)(a1 + 1) == 25957 )
            v2 = (char **)&off_47D96B8;
          break;
        case 'v':
          v2 = nullptr;
          if ( *(_WORD *)(a1 + 1) == 29281 )
            v2 = (char **)&off_47D99A0;
          break;
        default:
          v2 = nullptr;
          break;
      }
      break;
    case 4LL:
      switch ( *a1 )
      {
        case 'c':
          v14 = a1[1];
          if ( v14 == 105 )
          {
            v2 = nullptr;
            if ( *((_WORD *)a1 + 1) == 25972 )
              v2 = &off_47D8998;
          }
          else
          {
            v2 = nullptr;
            if ( v14 == 111 )
            {
              v15 = a1[2];
              v2 = nullptr;
              if ( v15 == 100 )
              {
                if ( a1[3] == 101 )
                  v2 = (char **)&off_47D89F8;
              }
              else if ( v15 == 110 && a1[3] == 100 )
              {
                v2 = (char **)&off_47D8A40;
              }
            }
          }
          break;
        case 'd':
          if ( *(_WORD *)(a1 + 1) == 29793 )
          {
            v2 = (char **)&off_47D8AE8;
            if ( a1[3] != 101 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'e':
          v10 = a1[1];
          v2 = nullptr;
          if ( v10 == 108 )
          {
            if ( *((_WORD *)a1 + 1) == 25971 )
              v2 = (char **)&off_47D8C80;
          }
          else if ( v10 == 110 && *((_WORD *)a1 + 1) == 28021 )
          {
            v2 = (char **)&off_47D8D10;
          }
          break;
        case 'f':
          if ( *(_WORD *)(a1 + 1) == 27753 )
          {
            v2 = (char **)&off_47D8E18;
            if ( a1[3] != 101 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'l':
          v2 = nullptr;
          if ( *(_WORD *)(a1 + 1) == 28265 )
          {
            v13 = a1[3];
            v2 = (char **)&off_47D9118;
            if ( v13 != 101 )
            {
              v2 = (char **)&off_47D9130;
              if ( v13 != 107 )
                v2 = nullptr;
            }
          }
          break;
        case 'n':
          v11 = a1[1];
          if ( v11 == 97 )
          {
            v2 = nullptr;
            if ( *((_WORD *)a1 + 1) == 25965 )
              v2 = (char **)&off_47D9268;
          }
          else
          {
            v2 = nullptr;
            if ( v11 == 111 )
            {
              v12 = a1[2];
              v2 = nullptr;
              if ( v12 == 111 )
              {
                if ( a1[3] == 112 )
                  v2 = (char **)&off_47D9298;
              }
              else if ( v12 == 116 && a1[3] == 101 )
              {
                v2 = (char **)&off_47D92C8;
              }
            }
          }
          break;
        case 'p':
          v16 = a1[1];
          v2 = nullptr;
          if ( v16 == 111 )
          {
            if ( *((_WORD *)a1 + 1) == 29811 )
              v2 = &off_47D93D0;
          }
          else if ( v16 == 117 )
          {
            if ( *((_WORD *)a1 + 1) == 25970 )
              v2 = (char **)&off_47D94C0;
          }
          else if ( v16 == 97 && *((_WORD *)a1 + 1) == 25959 )
          {
            v2 = (char **)&off_47D9328;
          }
          break;
        case 's':
          if ( *(_WORD *)(a1 + 1) == 26987 )
          {
            v2 = (char **)&off_47D9760;
            if ( a1[3] != 112 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 't':
          v9 = a1[1];
          v2 = nullptr;
          if ( v9 == 101 )
          {
            if ( *((_WORD *)a1 + 1) == 29811 )
              v2 = (char **)&off_47D9880;
          }
          else if ( v9 == 111 && *((_WORD *)a1 + 1) == 28516 )
          {
            v2 = &off_47D98F8;
          }
          break;
        default:
          v2 = nullptr;
          break;
      }
      break;
    case 5LL:
      switch ( *a1 )
      {
        case '/':
          v2 = nullptr;
          if ( *(_DWORD *)(a1 + 1) == 1802398060 )
            v2 = &off_47D9148;
          break;
        case 'b':
          v2 = nullptr;
          if ( *(_DWORD *)(a1 + 1) == 1717922162 )
            v2 = (char **)&off_47D88F0;
          break;
        case 'c':
          v58 = a1[1];
          if ( v58 == 108 )
          {
            if ( *((_WORD *)a1 + 1) == 29537 )
            {
              v2 = (char **)&off_47D89B0;
              if ( a1[4] != 115 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v58 == 111 )
            {
              if ( *((_WORD *)a1 + 1) == 29550 )
              {
                v2 = (char **)&off_47D8A58;
                if ( a1[4] != 116 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
          }
          break;
        case 'e':
          v57 = a1[1];
          if ( v57 == 109 )
          {
            if ( *((_WORD *)a1 + 1) == 27247 )
            {
              v2 = &off_47D8CC8;
              if ( a1[4] != 105 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v57 == 110 )
            {
              if ( *((_WORD *)a1 + 1) == 26980 )
              {
                v2 = (char **)&off_47D8CF8;
                if ( a1[4] != 102 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
          }
          break;
        case 'h':
          v2 = nullptr;
          if ( *(_DWORD *)(a1 + 1) == 1936747621 )
            v2 = &off_47D8EC0;
          break;
        case 'i':
          v56 = a1[1];
          if ( v56 == 102 )
          {
            if ( *((_WORD *)a1 + 1) == 28526 )
            {
              v2 = &off_47D8FC8;
              if ( a1[4] != 116 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v56 == 109 )
            {
              if ( *((_WORD *)a1 + 1) == 26465 )
              {
                v2 = (char **)&off_47D8FE0;
                if ( a1[4] != 101 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
          }
          break;
        case 'p':
          v2 = nullptr;
          if ( *(_DWORD *)(a1 + 1) == 1835102817 )
            v2 = (char **)&off_47D93A0;
          break;
        case 's':
          v55 = a1[1];
          if ( v55 == 104 )
          {
            if ( *((_WORD *)a1 + 1) == 29295 )
            {
              v2 = (char **)&off_47D96E8;
              if ( a1[4] != 116 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v55 == 105 )
            {
              if ( *((_WORD *)a1 + 1) == 25454 )
              {
                v2 = &off_47D9748;
                if ( a1[4] != 101 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
          }
          break;
        case 't':
          v2 = nullptr;
          if ( *(_DWORD *)(a1 + 1) == 2003792488 )
            v2 = (char **)&off_47D98C8;
          break;
        case 'u':
          v2 = nullptr;
          if ( a1[1] == 110 )
          {
            v59 = a1[2];
            if ( v59 == 105 )
            {
              if ( *(_WORD *)(a1 + 3) == 28271 )
                v2 = (char **)&off_47D9970;
            }
            else if ( v59 == 116 && *(_WORD *)(a1 + 3) == 27753 )
            {
              v2 = &off_47D9988;
            }
          }
          break;
        default:
          v2 = nullptr;
          break;
      }
      break;
    case 6LL:
      switch ( *a1 )
      {
        case 'a':
          v21 = a1[1];
          v2 = nullptr;
          if ( v21 == 110 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1919903843 )
              v2 = (char **)&off_47D8860;
          }
          else if ( v21 == 117 && *(_DWORD *)(a1 + 2) == 1919903860 )
          {
            v2 = &off_47D88A8;
          }
          break;
        case 'e':
          v19 = a1[1];
          v2 = nullptr;
          if ( v19 == 108 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1718183283 )
              v2 = (char **)&off_47D8C98;
          }
          else if ( v19 == 110 && a1[2] == 100 )
          {
            v20 = a1[3];
            if ( v20 == 109 )
            {
              if ( *((_WORD *)a1 + 2) == 25459 )
                v2 = &off_47D9220;
            }
            else if ( v20 == 117 )
            {
              if ( *((_WORD *)a1 + 2) == 27757 )
                v2 = &off_47D9958;
            }
            else if ( v20 == 100 && *((_WORD *)a1 + 2) == 29807 )
            {
              v2 = &off_47D8C38;
            }
          }
          break;
        case 'h':
          if ( *(_DWORD *)(a1 + 1) == 1701866597 )
          {
            v2 = (char **)&off_47D8E90;
            if ( a1[5] != 114 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'm':
          if ( *(_DWORD *)(a1 + 1) == 1869116517 )
          {
            v2 = (char **)&off_47D91D8;
            if ( a1[5] != 100 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'p':
          if ( *(_DWORD *)(a1 + 1) == 1768710773 )
          {
            v2 = (char **)&off_47D9490;
            if ( a1[5] != 99 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'r':
          v2 = nullptr;
          if ( a1[1] == 101 )
          {
            v23 = a1[2];
            if ( v23 == 115 )
            {
              if ( !memcmp(a1 + 3, "ult", 3u) )
                v2 = (char **)&off_47D9598;
            }
            else if ( v23 == 116 )
            {
              v65 = a1[3];
              if ( v65 == 117 )
              {
                if ( *((_WORD *)a1 + 2) == 28274 )
                  v2 = (char **)&off_47D95B0;
              }
              else if ( v65 == 118 && *((_WORD *)a1 + 2) == 27745 )
              {
                v2 = &off_47D95E0;
              }
            }
            else if ( v23 == 109 && !memcmp(a1 + 3, "ark", 3u) )
            {
              v2 = (char **)&off_47D9568;
            }
          }
          break;
        case 's':
          v2 = nullptr;
          if ( a1[1] == 116 )
          {
            v18 = a1[2];
            if ( v18 == 97 )
            {
              if ( *(_WORD *)(a1 + 3) == 26996 )
              {
                v2 = (char **)&off_47D97A8;
                if ( a1[5] != 99 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
            else if ( v18 == 114 )
            {
              if ( *(_WORD *)(a1 + 3) == 25461 )
              {
                v2 = (char **)&off_47D97C0;
                if ( a1[5] != 116 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
          }
          break;
        case 't':
          v17 = a1[1];
          v2 = nullptr;
          if ( v17 == 104 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1937207154 )
              v2 = (char **)&off_47D98E0;
          }
          else if ( v17 == 112 && *(_DWORD *)(a1 + 2) == 1835102817 )
          {
            v2 = &off_47D9910;
          }
          break;
        default:
          v2 = nullptr;
          break;
      }
      break;
    case 7LL:
      switch ( *a1 )
      {
        case 'a':
          if ( *(_DWORD *)(a1 + 1) == 1869116533 )
          {
            v2 = &off_47D88C0;
            if ( *(_WORD *)(a1 + 5) != 29554 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'c':
          v2 = nullptr;
          if ( a1[1] == 111 )
          {
            v45 = a1[2];
            if ( v45 == 110 )
            {
              if ( *(_DWORD *)(a1 + 3) == 1953523043 )
                v2 = &off_47D8A28;
            }
            else if ( v45 == 112 )
            {
              if ( *(_DWORD *)(a1 + 3) == 1668244601 )
                v2 = &off_47D8AB8;
            }
            else if ( v45 == 99 && *(_DWORD *)(a1 + 3) == 1936941420 )
            {
              v2 = &off_47D89E0;
            }
          }
          break;
        case 'd':
          v44 = a1[1];
          if ( v44 == 105 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1818846817 )
            {
              v2 = &off_47D8B78;
              if ( a1[6] != 101 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else if ( v44 == 111 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1818846836 )
            {
              v2 = &off_47D8C50;
              if ( a1[6] != 101 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v44 == 101 )
            {
              if ( *(_DWORD *)(a1 + 2) == 1818845556 )
              {
                v2 = (char **)&off_47D8B60;
                if ( a1[6] != 115 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
          }
          break;
        case 'e':
          v42 = a1[1];
          if ( v42 == 110 )
          {
            if ( *((_WORD *)a1 + 1) == 25444 && a1[4] == 111 )
            {
              v61 = a1[5];
              if ( v61 == 100 )
              {
                v2 = nullptr;
                if ( a1[6] == 101 )
                  v2 = &off_47D8A10;
              }
              else
              {
                v2 = nullptr;
                if ( v61 == 110 && a1[6] == 100 )
                  v2 = &off_47D8CE0;
              }
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v42 == 120 )
            {
              v43 = a1[2];
              if ( v43 == 97 )
              {
                v2 = (char **)&off_47D8D28;
                if ( *(_DWORD *)(a1 + 3) != 1701605485 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
                if ( v43 == 116 )
                {
                  v2 = &off_47D8D58;
                  if ( *(_DWORD *)(a1 + 3) != 1935961701 )
                    v2 = nullptr;
                }
              }
            }
          }
          break;
        case 'i':
          v2 = nullptr;
          if ( a1[1] == 110 )
          {
            v49 = a1[2];
            if ( v49 == 99 )
            {
              if ( *(_DWORD *)(a1 + 3) == 1701082476 )
                v2 = (char **)&off_47D9010;
            }
            else if ( v49 == 103 && *(_DWORD *)(a1 + 3) == 1886744434 )
            {
              v2 = &off_47D9028;
            }
          }
          break;
        case 'm':
          v48 = a1[1];
          if ( v48 == 97 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1819176814 )
            {
              v2 = (char **)&off_47D9190;
              if ( a1[6] != 121 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v48 == 115 )
            {
              if ( *(_DWORD *)(a1 + 2) == 1818846819 )
              {
                v2 = &off_47D9238;
                if ( a1[6] != 101 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
          }
          break;
        case 'p':
          if ( *(_DWORD *)(a1 + 1) == 1635150194 )
          {
            v2 = (char **)&off_47D9400;
            if ( *(_WORD *)(a1 + 5) != 25972 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'r':
          v39 = a1[1];
          if ( v39 == 101 )
          {
            v62 = a1[2];
            if ( v62 == 109 )
            {
              v2 = (char **)&off_47D9580;
              if ( *(_DWORD *)(a1 + 3) != 1936421473 )
                v2 = nullptr;
            }
            else if ( v62 > 109 )
            {
              v2 = nullptr;
              if ( v62 == 116 )
              {
                v2 = (char **)&off_47D95C8;
                if ( *(_DWORD *)(a1 + 3) != 1936618101 )
                  v2 = nullptr;
              }
            }
            else if ( v62 == 102 )
            {
              v2 = (char **)&off_47D94F0;
              if ( *(_DWORD *)(a1 + 3) != 1835365481 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
              if ( v62 == 108 )
              {
                if ( !memcmp(a1 + 3, "ate", 3u) )
                {
                  v63 = a1[6];
                  v2 = (char **)&off_47D9508;
                  if ( v63 != 100 )
                  {
                    v2 = nullptr;
                    if ( v63 == 115 )
                      v2 = &off_47D9538;
                  }
                }
                else
                {
                  v2 = nullptr;
                }
              }
            }
          }
          else
          {
            v2 = nullptr;
            if ( v39 == 116 )
            {
              if ( *(_DWORD *)(a1 + 2) == 1819176806 )
              {
                v2 = (char **)&off_47D9610;
                if ( a1[6] != 121 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
          }
          break;
        case 's':
          v34 = a1[1];
          if ( v34 == 110 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1701867625 )
            {
              v2 = &off_47D9790;
              if ( a1[6] != 116 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else if ( v34 == 117 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1734439010 )
            {
              v2 = &off_47D97D8;
              if ( a1[6] != 101 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v34 == 101 )
            {
              v35 = a1[2];
              if ( v35 == 99 )
              {
                if ( *(_DWORD *)(a1 + 3) == 1852795252 )
                  v2 = (char **)&off_47D9688;
              }
              else if ( v35 == 101 && *(_DWORD *)(a1 + 3) == 1869835361 )
              {
                v2 = &off_47D96D0;
              }
            }
          }
          break;
        case 't':
          if ( *(_DWORD *)(a1 + 1) == 1684369529 )
          {
            v2 = (char **)&off_47D9928;
            if ( *(_WORD *)(a1 + 5) != 26213 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'v':
          if ( *(_DWORD *)(a1 + 1) == 1769173605 )
          {
            v2 = (char **)&off_47D9A00;
            if ( *(_WORD *)(a1 + 5) != 28271 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'w':
          if ( *(_DWORD *)(a1 + 1) == 1768845921 )
          {
            v2 = (char **)&off_47D9A18;
            if ( *(_WORD *)(a1 + 5) != 26478 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'x':
          if ( *(_DWORD *)(a1 + 1) == 1852796013 )
          {
            v2 = (char **)&off_47D9A78;
            if ( *(_WORD *)(a1 + 5) != 31084 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        default:
          v2 = nullptr;
          break;
      }
      break;
    case 8LL:
      switch ( *a1 )
      {
        case 'a':
          v47 = a1[1];
          if ( v47 == 98 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1634890867 )
            {
              v2 = (char **)&off_47D8818;
              if ( *((_WORD *)a1 + 3) != 29795 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v47 == 100 )
            {
              if ( *(_DWORD *)(a1 + 2) == 1684957540 )
              {
                v2 = &off_47D8830;
                if ( *((_WORD *)a1 + 3) != 30821 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
          }
          break;
        case 'c':
          v46 = a1[1];
          if ( v46 == 97 )
          {
            v64 = a1[2];
            if ( v64 == 108 )
            {
              v2 = (char **)&off_47D8950;
              if ( memcmp(a1 + 3, "lback", 5u) )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
              if ( v64 == 116 )
              {
                v2 = (char **)&off_47D8980;
                if ( memcmp(a1 + 3, "egory", 5u) )
                  v2 = nullptr;
              }
            }
          }
          else
          {
            v2 = nullptr;
            if ( v46 == 111 )
            {
              if ( *(_DWORD *)(a1 + 2) == 1635021678 )
              {
                v2 = (char **)&off_47D8A70;
                if ( *((_WORD *)a1 + 3) != 29806 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
          }
          break;
        case 'd':
          if ( *(_DWORD *)(a1 + 1) == 1919379045 )
          {
            v2 = &off_47D8B18;
            if ( *((_DWORD *)a1 + 1) != 1886744434 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'f':
          if ( *(_DWORD *)(a1 + 1) == 1952673397 )
          {
            v2 = (char **)&off_47D8E48;
            if ( *((_DWORD *)a1 + 1) != 1852795252 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'h':
          v41 = a1[1];
          if ( v41 == 105 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1701995876 )
            {
              v2 = &off_47D8F38;
              if ( *((_WORD *)a1 + 3) != 29542 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v41 == 116 )
            {
              if ( *(_DWORD *)(a1 + 2) == 1852796013 )
              {
                v2 = (char **)&off_47D8F68;
                if ( *((_WORD *)a1 + 3) != 31084 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
          }
          break;
        case 'i':
          if ( *(_DWORD *)(a1 + 1) == 1919251566 )
          {
            v2 = (char **)&off_47D9070;
            if ( *((_DWORD *)a1 + 1) != 1818324594 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'm':
          v40 = a1[1];
          if ( v40 == 97 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1634758249 )
            {
              v2 = &off_47D9160;
              if ( *((_WORD *)a1 + 3) != 25959 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v40 == 101 )
            {
              if ( *(_DWORD *)(a1 + 2) == 1919246957 )
              {
                v2 = &off_47D91C0;
                if ( *((_WORD *)a1 + 3) != 26223 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
          }
          break;
        case 'o':
          if ( *(_DWORD *)(a1 + 1) == 1819436406 )
          {
            v2 = &off_47D92E0;
            if ( *((_DWORD *)a1 + 1) != 1684107116 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'p':
          v37 = a1[1];
          if ( v37 == 97 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1869374066 )
            {
              v2 = (char **)&off_47D9358;
              if ( *((_WORD *)a1 + 3) != 27491 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v37 == 114 && a1[2] == 111 )
            {
              v38 = a1[3];
              if ( v38 == 112 )
              {
                if ( *((_DWORD *)a1 + 1) == 2037674597 )
                  v2 = (char **)&off_47D9430;
              }
              else if ( v38 == 116 && *((_DWORD *)a1 + 1) == 1819239279 )
              {
                v2 = (char **)&off_47D9478;
              }
            }
          }
          break;
        case 's':
          v36 = a1[1];
          if ( v36 == 107 )
          {
            v2 = &off_47D9778;
            if ( memcmp(a1 + 2, "ipline", 6u) )
              v2 = nullptr;
          }
          else if ( v36 > 107 )
          {
            v2 = nullptr;
            if ( v36 == 116 )
            {
              v2 = off_47D9940;
              if ( memcmp(a1 + 2, "artuml", 6u) )
                v2 = nullptr;
            }
          }
          else if ( v36 == 101 )
          {
            v2 = (char **)&off_47D96A0;
            if ( memcmp(a1 + 2, "curity", 6u) )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
            if ( v36 == 104 )
            {
              v2 = &off_47D9730;
              if ( memcmp(a1 + 2, "owrefs", 6u) )
                v2 = nullptr;
            }
          }
          break;
        case 't':
          if ( *(_DWORD *)(a1 + 1) == 1819307365 )
          {
            v2 = (char **)&off_47D9850;
            if ( *((_DWORD *)a1 + 1) != 1702125932 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'v':
          if ( *(_DWORD *)(a1 + 1) == 1633841765 )
          {
            v2 = (char **)&off_47D99D0;
            if ( *((_DWORD *)a1 + 1) != 1835627617 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'x':
          if ( *(_DWORD *)(a1 + 1) == 1768318322 )
          {
            v2 = &off_47D9A48;
            if ( *((_DWORD *)a1 + 1) != 1835365481 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        default:
          v2 = nullptr;
          break;
      }
      break;
    case 9LL:
      switch ( *a1 )
      {
        case 'a':
          v2 = nullptr;
          if ( *(_QWORD *)(a1 + 1) == 0x6E6F69746E657474LL )
            v2 = &off_47D8890;
          break;
        case 'c':
          v30 = a1[1];
          if ( v30 == 97 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1919380588 )
            {
              v2 = (char **)&off_47D8938;
              if ( *(_DWORD *)(a1 + 5) != 1752195442 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v30 == 111 && *((_WORD *)a1 + 1) == 31088 )
            {
              v31 = a1[4];
              if ( v31 == 98 )
              {
                if ( *(_DWORD *)(a1 + 5) == 1717922162 )
                  v2 = &off_47D8A88;
              }
              else if ( v31 == 114 && *(_DWORD *)(a1 + 5) == 1952999273 )
              {
                v2 = &off_47D8AD0;
              }
            }
          }
          break;
        case 'e':
          v2 = nullptr;
          if ( *(_QWORD *)(a1 + 1) == 0x6E6F697470656378LL )
            v2 = (char **)&off_47D8D40;
          break;
        case 'h':
          v2 = nullptr;
          if ( *(_QWORD *)(a1 + 1) == 0x7962666572656469LL )
            v2 = &off_47D8F20;
          break;
        case 'i':
          v32 = a1[1];
          if ( v32 == 100 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1668834668 )
            {
              v2 = &off_47D8F98;
              if ( *(_DWORD *)(a1 + 5) != 1953523043 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v32 == 110 )
            {
              v33 = a1[2];
              if ( v33 == 116 )
              {
                v2 = (char **)&off_47D9058;
                if ( memcmp(a1 + 3, "erface", 6u) )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
                if ( v33 == 118 )
                {
                  v2 = &off_47D90A0;
                  if ( memcmp(a1 + 3, "ariant", 6u) )
                    v2 = nullptr;
                }
              }
            }
          }
          break;
        case 'l':
          v2 = nullptr;
          if ( *(_QWORD *)(a1 + 1) == 0x796C6E6F78657461LL )
            v2 = (char **)&off_47D90D0;
          break;
        case 'n':
          v2 = nullptr;
          if ( *(_QWORD *)(a1 + 1) == 0x6563617073656D61LL )
            v2 = (char **)&off_47D9280;
          break;
        case 'o':
          v2 = nullptr;
          if ( *(_QWORD *)(a1 + 1) == 0x7069687372656E77LL )
            v2 = (char **)&off_47D92F8;
          break;
        case 'p':
          v29 = a1[1];
          if ( v29 == 97 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1919377778 )
            {
              v2 = &off_47D9388;
              if ( *(_DWORD *)(a1 + 5) != 1752195442 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v29 == 114 )
            {
              if ( *(_DWORD *)(a1 + 2) == 1667593327 )
              {
                v2 = (char **)&off_47D9448;
                if ( *(_DWORD *)(a1 + 5) != 1684370531 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
          }
          break;
        case 's':
          v2 = nullptr;
          if ( *(_QWORD *)(a1 + 1) == 0x7962666572776F68LL )
            v2 = &off_47D9718;
          break;
        case 't':
          v2 = nullptr;
          if ( *(_QWORD *)(a1 + 1) == 0x6B636F6C62747865LL )
            v2 = (char **)&off_47D9898;
          break;
        case 'w':
          v2 = nullptr;
          if ( *(_QWORD *)(a1 + 1) == 0x70756F72676B6165LL )
            v2 = &off_47D9A30;
          break;
        default:
          v2 = nullptr;
          break;
      }
      break;
    case 10LL:
      switch ( *a1 )
      {
        case '/':
          if ( *(_QWORD *)(a1 + 1) == 0x636F6C6274786574LL )
          {
            v2 = &off_47D98B0;
            if ( a1[9] != 107 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'a':
          if ( *(_QWORD *)(a1 + 1) == 0x756F72676F746464LL )
          {
            v2 = &off_47D8848;
            if ( a1[9] != 112 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'd':
          v52 = a1[1];
          v2 = nullptr;
          if ( v52 == 101 )
          {
            if ( a1[2] == 112 )
            {
              v60 = a1[3];
              if ( v60 == 101 )
              {
                if ( !memcmp(a1 + 4, "ndency", 6u) )
                  v2 = (char **)&off_47D8B30;
              }
              else if ( v60 == 114 && !memcmp(a1 + 4, "ecated", 6u) )
              {
                v2 = (char **)&off_47D8B48;
              }
            }
          }
          else if ( v52 == 105 && *(_QWORD *)(a1 + 2) == 0x6E6F697373756373LL )
          {
            v2 = &off_47D8BA8;
          }
          break;
        case 'e':
          v2 = nullptr;
          if ( *(_WORD *)(a1 + 1) == 25710 )
          {
            v51 = a1[3];
            if ( v51 == 114 )
            {
              if ( !memcmp(a1 + 4, "tfonly", 6u) )
                v2 = &off_47D9628;
            }
            else if ( v51 == 120 )
            {
              if ( !memcmp(a1 + 4, "mlonly", 6u) )
                v2 = &off_47D9A90;
            }
            else if ( v51 == 109 && !memcmp(a1 + 4, "anonly", 6u) )
            {
              v2 = &off_47D91A8;
            }
          }
          break;
        case 'h':
          if ( *(_QWORD *)(a1 + 1) == 0x6C69667265646165LL )
          {
            v2 = &off_47D8E78;
            if ( a1[9] != 101 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'i':
          if ( *(_QWORD *)(a1 + 1) == 0x746E656D656C706DLL )
          {
            v2 = &off_47D8FF8;
            if ( a1[9] != 115 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'm':
          if ( *(_QWORD *)(a1 + 1) == 0x64756C636E696E61LL )
          {
            v2 = &off_47D9178;
            if ( a1[9] != 101 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'r':
          if ( *(_QWORD *)(a1 + 1) == 0x64756C636E696674LL )
          {
            v2 = &off_47D95F8;
            if ( a1[9] != 101 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 's':
          v53 = a1[1];
          if ( v53 == 101 )
          {
            v2 = nullptr;
            if ( *(_QWORD *)(a1 + 2) == 0x7473696C66657263LL )
              v2 = (char **)&off_47D9658;
          }
          else
          {
            v2 = nullptr;
            if ( v53 == 117 )
            {
              v54 = a1[2];
              if ( v54 == 98 )
              {
                v2 = (char **)&off_47D97F0;
                if ( memcmp(a1 + 3, "section", 7u) )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
                if ( v54 == 112 )
                {
                  v2 = &off_47D9820;
                  if ( memcmp(a1 + 3, "erclass", 7u) )
                    v2 = nullptr;
                }
              }
            }
          }
          break;
        case 'x':
          if ( *(_QWORD *)(a1 + 1) == 0x64756C636E696C6DLL )
          {
            v2 = &off_47D9A60;
            if ( a1[9] != 101 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        default:
          v2 = nullptr;
          break;
      }
      break;
    case 11LL:
      switch ( *a1 )
      {
        case 'c':
          v25 = a1[1];
          if ( v25 == 108 )
          {
            if ( *(_QWORD *)(a1 + 2) == 0x6769736564737361LL )
            {
              v2 = &off_47D89C8;
              if ( a1[10] != 110 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else if ( v25 == 111 )
          {
            if ( *(_QWORD *)(a1 + 2) == 0x6C69617465647970LL )
            {
              v2 = &off_47D8AA0;
              if ( a1[10] != 115 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v25 == 97 )
            {
              if ( *(_QWORD *)(a1 + 2) == 0x7061726772656C6CLL )
              {
                v2 = (char **)&off_47D8968;
                if ( a1[10] != 104 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
          }
          break;
        case 'd':
          v2 = nullptr;
          if ( a1[1] == 111 )
          {
            v24 = a1[2];
            if ( v24 == 99 )
            {
              if ( *(_QWORD *)(a1 + 3) == 0x796C6E6F6B6F6F62LL )
                v2 = (char **)&off_47D8BD8;
            }
            else if ( v24 == 110 && *(_QWORD *)(a1 + 3) == 0x6564756C636E6974LL )
            {
              v2 = &off_47D8C08;
            }
          }
          break;
        case 'e':
          v2 = nullptr;
          if ( *(_WORD *)(a1 + 1) == 25710 )
          {
            v26 = a1[3];
            if ( v26 == 112 )
            {
              if ( !memcmp(a1 + 4, "arblock", 7u) )
                v2 = &off_47D9370;
            }
            else if ( v26 > 112 )
            {
              if ( v26 == 118 && !memcmp(a1 + 4, "erbatim", 7u) )
                v2 = &off_47D99E8;
            }
            else if ( v26 == 104 )
            {
              if ( !memcmp(a1 + 4, "tmlonly", 7u) )
                v2 = &off_47D8F80;
            }
            else if ( v26 == 105 && !memcmp(a1 + 4, "nternal", 7u) )
            {
              v2 = &off_47D9088;
            }
          }
          break;
        case 'h':
          v22 = a1[1];
          if ( v22 == 101 )
          {
            if ( *(_QWORD *)(a1 + 2) == 0x73616C637265706CLL )
            {
              v2 = &off_47D8EA8;
              if ( a1[10] != 115 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else
          {
            v2 = nullptr;
            if ( v22 == 116 )
            {
              if ( *(_QWORD *)(a1 + 2) == 0x64756C636E696C6DLL )
              {
                v2 = &off_47D8F50;
                if ( a1[10] != 101 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
          }
          break;
        case 'm':
          if ( *(_QWORD *)(a1 + 1) == 0x6F7267646F687465LL )
          {
            v2 = &off_47D91F0;
            if ( *(_WORD *)(a1 + 9) != 28789 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'p':
          if ( *(_QWORD *)(a1 + 1) == 0x6E616D726F667265LL )
          {
            v2 = (char **)&off_47D93B8;
            if ( *(_WORD *)(a1 + 9) != 25955 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'r':
          if ( *(_DWORD *)(a1 + 1) == 1952541797 && a1[5] == 101 )
          {
            v50 = a1[6];
            if ( v50 == 100 )
            {
              v2 = nullptr;
              if ( *(_DWORD *)(a1 + 7) == 1869835361 )
                v2 = &off_47D9520;
            }
            else
            {
              v2 = nullptr;
              if ( v50 == 115 && *(_DWORD *)(a1 + 7) == 1869835361 )
                v2 = &off_47D9550;
            }
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'v':
          if ( *(_QWORD *)(a1 + 1) == 0x756C636E69627265LL )
          {
            v2 = &off_47D99B8;
            if ( *(_WORD *)(a1 + 9) != 25956 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        default:
          v2 = nullptr;
          break;
      }
      break;
    case 12LL:
      v4 = *a1;
      if ( *a1 == 105 )
      {
        if ( *(_QWORD *)(a1 + 1) == 0x7365636E6174736ELL )
        {
          v2 = &off_47D9040;
          if ( *((_DWORD *)a1 + 2) != 1702521203 )
            v2 = nullptr;
        }
        else
        {
          v2 = nullptr;
        }
      }
      else if ( v4 == 108 )
      {
        if ( *(_QWORD *)(a1 + 1) == 0x6C636E6978657461LL )
        {
          v2 = &off_47D90B8;
          if ( *((_DWORD *)a1 + 2) != 1701082476 )
            v2 = nullptr;
        }
        else
        {
          v2 = nullptr;
        }
      }
      else
      {
        v2 = nullptr;
        if ( v4 == 101 )
        {
          if ( *(_QWORD *)(a1 + 1) == 0x6F786574616C646ELL )
          {
            v2 = &off_47D90E8;
            if ( *((_DWORD *)a1 + 2) != 2037149295 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
        }
      }
      break;
    case 13LL:
      switch ( *a1 )
      {
        case 'e':
          if ( *(_QWORD *)(a1 + 1) == 0x666572636573646ELL )
          {
            v2 = &off_47D9670;
            if ( *(_DWORD *)(a1 + 9) != 1953720684 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'f':
          if ( *(_QWORD *)(a1 + 1) == 0x676E6F6974636E75LL )
          {
            v2 = &off_47D8E60;
            if ( *(_DWORD *)(a1 + 9) != 1886744434 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'h':
          if ( *(_QWORD *)(a1 + 1) == 0x676C6C6163656469LL )
          {
            v2 = &off_47D8ED8;
            if ( *(_DWORD *)(a1 + 9) != 1752195442 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'n':
          if ( *(_QWORD *)(a1 + 1) == 0x756F72676275736FLL )
          {
            v2 = &off_47D92B0;
            if ( *(_DWORD *)(a1 + 9) != 1735289200 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'p':
          if ( *(_QWORD *)(a1 + 1) == 0x63657363696C6275LL )
          {
            v2 = &off_47D94A8;
            if ( *(_DWORD *)(a1 + 9) != 1852795252 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 's':
          if ( *(_QWORD *)(a1 + 1) == 0x6365736275736275LL )
          {
            v2 = &off_47D9808;
            if ( *(_DWORD *)(a1 + 9) != 1852795252 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 't':
          if ( *(_QWORD *)(a1 + 1) == 0x666574616C706D65LL )
          {
            v2 = &off_47D9868;
            if ( *(_DWORD *)(a1 + 9) != 1684825449 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        default:
          v2 = nullptr;
          break;
      }
      break;
    case 14LL:
      v5 = *a1;
      if ( *a1 == 101 )
      {
        if ( *(_QWORD *)(a1 + 1) == 0x6F6F62636F64646ELL )
        {
          v2 = &off_47D8BF0;
          if ( *(_QWORD *)(a1 + 6) != 0x796C6E6F6B6F6F62LL )
            v2 = nullptr;
        }
        else
        {
          v2 = nullptr;
        }
      }
      else if ( v5 == 112 )
      {
        if ( *(_QWORD *)(a1 + 1) == 0x6573657461766972LL )
        {
          v2 = &off_47D9418;
          if ( *(_QWORD *)(a1 + 6) != 0x6E6F697463657365LL )
            v2 = nullptr;
        }
        else
        {
          v2 = nullptr;
        }
      }
      else
      {
        v2 = nullptr;
        if ( v5 == 100 )
        {
          if ( *(_QWORD *)(a1 + 1) == 0x6E696B6F6F62636FLL )
          {
            v2 = &off_47D8BC0;
            if ( *(_QWORD *)(a1 + 6) != 0x6564756C636E696BLL )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
        }
      }
      break;
    case 15LL:
      v6 = *a1;
      if ( *a1 == 115 )
      {
        if ( *(_QWORD *)(a1 + 1) == 0x6974696E69776F68LL )
        {
          v2 = &off_47D9700;
          if ( *(_QWORD *)(a1 + 7) != 0x72657A696C616974LL )
            v2 = nullptr;
        }
        else
        {
          v2 = nullptr;
        }
      }
      else if ( v6 == 116 )
      {
        if ( *(_QWORD *)(a1 + 1) == 0x6F63666F656C6261LL )
        {
          v2 = &off_47D9838;
          if ( *(_QWORD *)(a1 + 7) != 0x73746E65746E6F63LL )
            v2 = nullptr;
        }
        else
        {
          v2 = nullptr;
        }
      }
      else
      {
        v2 = nullptr;
        if ( v6 == 104 )
        {
          if ( *(_WORD *)(a1 + 1) == 25705 && a1[3] == 101 )
          {
            v7 = a1[4];
            if ( v7 == 99 )
            {
              if ( *(_QWORD *)(a1 + 5) == 0x61726772656C6C61LL )
              {
                v2 = &off_47D8EF0;
                if ( *(_WORD *)(a1 + 13) != 26736 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
            else if ( v7 == 105 )
            {
              if ( *(_QWORD *)(a1 + 5) == 0x7A696C616974696ELL )
              {
                v2 = &off_47D8F08;
                if ( *(_WORD *)(a1 + 13) != 29285 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
          }
          else
          {
            v2 = nullptr;
          }
        }
      }
      break;
    case 16LL:
      v2 = nullptr;
      if ( !(*((_QWORD *)a1 + 1) ^ 0x6E6F697463657364LL | *(_QWORD *)a1 ^ 0x65746365746F7270LL) )
        v2 = &off_47D9460;
      break;
    default:
      v2 = nullptr;
      break;
  }
  return v2;
}

