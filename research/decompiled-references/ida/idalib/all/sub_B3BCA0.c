char **__fastcall sub_B3BCA0(_BYTE *a1, __int64 a2)
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
          v2 = (char **)&off_2B49280;
          break;
        case 'b':
          v2 = (char **)&off_2B49358;
          break;
        case 'c':
          v2 = &off_2B493A0;
          break;
        case 'e':
          v2 = (char **)&off_2B496E8;
          break;
        case 'n':
          v2 = (char **)&off_2B49CD0;
          break;
        case 'p':
          v2 = (char **)&off_2B49D90;
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
          v2 = (char **)&off_2B49730;
          if ( a1[1] != 109 )
            v2 = nullptr;
          break;
        case 'f':
          v7 = a1[1];
          if ( v7 == 91 )
          {
            v2 = off_2B49820;
          }
          else if ( v7 <= 91 )
          {
            v2 = (char **)&off_2B49868;
            if ( v7 != 40 )
            {
              v2 = (char **)&off_2B49880;
              if ( v7 != 41 )
              {
                v2 = (char **)(&off_2B49880 - 6);
                if ( v7 != 36 )
                  v2 = nullptr;
              }
            }
          }
          else
          {
            v2 = (char **)&off_2B498B0;
            if ( v7 != 110 )
            {
              if ( v7 <= 110 )
              {
                v2 = (char **)(&off_2B498B0 - 15);
                if ( v7 != 93 )
                  v2 = nullptr;
              }
              else
              {
                v2 = &off_2B497F0;
                if ( v7 != 123 )
                {
                  v2 = (char **)&off_2B49808;
                  if ( v7 != 125 )
                    v2 = nullptr;
                }
              }
            }
          }
          break;
        case 'i':
          v2 = (char **)&off_2B49A30;
          if ( a1[1] != 102 )
            v2 = nullptr;
          break;
        case 'l':
          v2 = (char **)&off_2B49B80;
          if ( a1[1] != 105 )
            v2 = nullptr;
          break;
        case 's':
          v2 = (char **)&off_2B4A0C0;
          if ( a1[1] != 97 )
            v2 = nullptr;
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
          v2 = (char **)&off_2B492F8;
          if ( *(_WORD *)(a1 + 1) != 26482 )
            v2 = nullptr;
          break;
        case 'b':
          v2 = (char **)&off_2B49388;
          if ( *(_WORD *)(a1 + 1) != 26485 )
            v2 = nullptr;
          break;
        case 'd':
          v16 = a1[1];
          if ( v16 == 105 )
          {
            v2 = (char **)&off_2B49610;
            if ( a1[2] != 114 )
              v2 = nullptr;
          }
          else if ( v16 == 111 )
          {
            v2 = (char **)&off_2B496A0;
            if ( a1[2] != 116 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
            if ( v16 == 101 && a1[2] == 102 )
              v2 = (char **)&off_2B49580;
          }
          break;
        case 'm':
          v2 = (char **)&off_2B49C88;
          if ( *(_WORD *)(a1 + 1) != 25459 )
            v2 = nullptr;
          break;
        case 'p':
          v14 = a1[1];
          if ( v14 == 97 )
          {
            v2 = (char **)&off_2B49DC0;
            if ( a1[2] != 114 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
            if ( v14 == 114 )
            {
              v2 = (char **)&off_2B49E68;
              if ( a1[2] != 101 )
                v2 = nullptr;
            }
          }
          break;
        case 'r':
          v2 = (char **)&off_2B49F58;
          if ( *(_WORD *)(a1 + 1) != 26213 )
            v2 = nullptr;
          break;
        case 's':
          v2 = (char **)&off_2B4A138;
          if ( *(_WORD *)(a1 + 1) != 25957 )
            v2 = nullptr;
          break;
        case 'v':
          v2 = (char **)&off_2B4A420;
          if ( *(_WORD *)(a1 + 1) != 29281 )
            v2 = nullptr;
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
          v20 = a1[1];
          if ( v20 == 105 )
          {
            v2 = &off_2B49418;
            if ( *((_WORD *)a1 + 1) != 25972 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
            if ( v20 == 111 )
            {
              v21 = a1[2];
              if ( v21 == 100 )
              {
                v2 = (char **)&off_2B49478;
                if ( a1[3] != 101 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
                if ( v21 == 110 )
                {
                  v2 = (char **)&off_2B494C0;
                  if ( a1[3] != 100 )
                    v2 = nullptr;
                }
              }
            }
          }
          break;
        case 'd':
          if ( *(_WORD *)(a1 + 1) == 29793 )
          {
            v2 = (char **)&off_2B49568;
            if ( a1[3] != 101 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'e':
          v27 = a1[1];
          if ( v27 == 108 )
          {
            v2 = (char **)&off_2B49700;
            if ( *((_WORD *)a1 + 1) != 25971 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
            if ( v27 == 110 )
            {
              v2 = (char **)&off_2B49790;
              if ( *((_WORD *)a1 + 1) != 28021 )
                v2 = nullptr;
            }
          }
          break;
        case 'f':
          if ( *(_WORD *)(a1 + 1) == 27753 )
          {
            v2 = (char **)&off_2B49898;
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
            v23 = a1[3];
            v2 = (char **)&off_2B49B98;
            if ( v23 != 101 )
            {
              v2 = (char **)&off_2B49BB0;
              if ( v23 != 107 )
                v2 = nullptr;
            }
          }
          break;
        case 'n':
          v25 = a1[1];
          if ( v25 == 97 )
          {
            v2 = (char **)&off_2B49CE8;
            if ( *((_WORD *)a1 + 1) != 25965 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
            if ( v25 == 111 )
            {
              v26 = a1[2];
              if ( v26 == 111 )
              {
                v2 = (char **)&off_2B49D18;
                if ( a1[3] != 112 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
                if ( v26 == 116 )
                {
                  v2 = (char **)&off_2B49D48;
                  if ( a1[3] != 101 )
                    v2 = nullptr;
                }
              }
            }
          }
          break;
        case 'p':
          v24 = a1[1];
          if ( v24 == 111 )
          {
            v2 = &off_2B49E50;
            if ( *((_WORD *)a1 + 1) != 29811 )
              v2 = nullptr;
          }
          else if ( v24 == 117 )
          {
            v2 = (char **)&off_2B49F40;
            if ( *((_WORD *)a1 + 1) != 25970 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
            if ( v24 == 97 && *((_WORD *)a1 + 1) == 25959 )
              v2 = (char **)&off_2B49DA8;
          }
          break;
        case 's':
          if ( *(_WORD *)(a1 + 1) == 26987 )
          {
            v2 = (char **)&off_2B4A1E0;
            if ( a1[3] != 112 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 't':
          v22 = a1[1];
          if ( v22 == 101 )
          {
            v2 = (char **)&off_2B4A300;
            if ( *((_WORD *)a1 + 1) != 29811 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
            if ( v22 == 111 )
            {
              v2 = &off_2B4A378;
              if ( *((_WORD *)a1 + 1) != 28516 )
                v2 = nullptr;
            }
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
          v2 = &off_2B49BC8;
          if ( *(_DWORD *)(a1 + 1) != 1802398060 )
            v2 = nullptr;
          break;
        case 'b':
          v2 = (char **)&off_2B49370;
          if ( *(_DWORD *)(a1 + 1) != 1717922162 )
            v2 = nullptr;
          break;
        case 'c':
          v36 = a1[1];
          if ( v36 == 108 )
          {
            if ( *((_WORD *)a1 + 1) == 29537 )
            {
              v2 = (char **)&off_2B49430;
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
            if ( v36 == 111 )
            {
              if ( *((_WORD *)a1 + 1) == 29550 )
              {
                v2 = (char **)&off_2B494D8;
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
          v30 = a1[1];
          if ( v30 == 109 )
          {
            if ( *((_WORD *)a1 + 1) == 27247 )
            {
              v2 = &off_2B49748;
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
            if ( v30 == 110 )
            {
              if ( *((_WORD *)a1 + 1) == 26980 )
              {
                v2 = (char **)&off_2B49778;
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
          v2 = &off_2B49940;
          if ( *(_DWORD *)(a1 + 1) != 1936747621 )
            v2 = nullptr;
          break;
        case 'i':
          v35 = a1[1];
          if ( v35 == 102 )
          {
            if ( *((_WORD *)a1 + 1) == 28526 )
            {
              v2 = &off_2B49A48;
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
            if ( v35 == 109 )
            {
              if ( *((_WORD *)a1 + 1) == 26465 )
              {
                v2 = (char **)&off_2B49A60;
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
          v2 = (char **)&off_2B49E20;
          if ( *(_DWORD *)(a1 + 1) != 1835102817 )
            v2 = nullptr;
          break;
        case 's':
          v31 = a1[1];
          if ( v31 == 104 )
          {
            if ( *((_WORD *)a1 + 1) == 29295 )
            {
              v2 = (char **)&off_2B4A168;
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
            if ( v31 == 105 )
            {
              if ( *((_WORD *)a1 + 1) == 25454 )
              {
                v2 = &off_2B4A1C8;
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
          v2 = (char **)&off_2B4A348;
          if ( *(_DWORD *)(a1 + 1) != 2003792488 )
            v2 = nullptr;
          break;
        case 'u':
          v2 = nullptr;
          if ( a1[1] == 110 )
          {
            v28 = a1[2];
            if ( v28 == 105 )
            {
              if ( *(_WORD *)(a1 + 3) == 28271 )
                v2 = (char **)&off_2B4A3F0;
            }
            else if ( v28 == 116 && *(_WORD *)(a1 + 3) == 27753 )
            {
              v2 = &off_2B4A408;
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
          v19 = a1[1];
          if ( v19 == 110 )
          {
            v2 = (char **)&off_2B492E0;
            if ( *(_DWORD *)(a1 + 2) != 1919903843 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
            if ( v19 == 117 )
            {
              v2 = &off_2B49328;
              if ( *(_DWORD *)(a1 + 2) != 1919903860 )
                v2 = nullptr;
            }
          }
          break;
        case 'e':
          v17 = a1[1];
          if ( v17 == 108 )
          {
            v2 = (char **)&off_2B49718;
            if ( *(_DWORD *)(a1 + 2) != 1718183283 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
            if ( v17 == 110 && a1[2] == 100 )
            {
              v18 = a1[3];
              if ( v18 == 109 )
              {
                if ( *((_WORD *)a1 + 2) == 25459 )
                  v2 = &off_2B49CA0;
              }
              else if ( v18 == 117 )
              {
                if ( *((_WORD *)a1 + 2) == 27757 )
                  v2 = &off_2B4A3D8;
              }
              else if ( v18 == 100 && *((_WORD *)a1 + 2) == 29807 )
              {
                v2 = &off_2B496B8;
              }
            }
          }
          break;
        case 'h':
          if ( *(_DWORD *)(a1 + 1) == 1701866597 )
          {
            v2 = (char **)&off_2B49910;
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
            v2 = (char **)&off_2B49C58;
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
            v2 = (char **)&off_2B49F10;
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
            v13 = a1[2];
            if ( v13 == 115 )
            {
              if ( !memcmp(a1 + 3, "ult", 3u) )
                v2 = (char **)&off_2B4A018;
            }
            else if ( v13 == 116 )
            {
              v64 = a1[3];
              if ( v64 == 117 )
              {
                if ( *((_WORD *)a1 + 2) == 28274 )
                  v2 = (char **)&off_2B4A030;
              }
              else if ( v64 == 118 && *((_WORD *)a1 + 2) == 27745 )
              {
                v2 = &off_2B4A060;
              }
            }
            else if ( v13 == 109 && !memcmp(a1 + 3, "ark", 3u) )
            {
              v2 = (char **)&off_2B49FE8;
            }
          }
          break;
        case 's':
          v2 = nullptr;
          if ( a1[1] == 116 )
          {
            v15 = a1[2];
            if ( v15 == 97 )
            {
              if ( *(_WORD *)(a1 + 3) == 26996 )
              {
                v2 = (char **)&off_2B4A228;
                if ( a1[5] != 99 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
            else if ( v15 == 114 )
            {
              if ( *(_WORD *)(a1 + 3) == 25461 )
              {
                v2 = (char **)&off_2B4A240;
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
          v12 = a1[1];
          if ( v12 == 104 )
          {
            v2 = &off_2B4A360;
            if ( *(_DWORD *)(a1 + 2) != 1937207154 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
            if ( v12 == 112 )
            {
              v2 = &off_2B4A390;
              if ( *(_DWORD *)(a1 + 2) != 1835102817 )
                v2 = nullptr;
            }
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
            v2 = (char **)&off_2B49340;
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
            v46 = a1[2];
            if ( v46 == 110 )
            {
              if ( *(_DWORD *)(a1 + 3) == 1953523043 )
                v2 = &off_2B494A8;
            }
            else if ( v46 == 112 )
            {
              if ( *(_DWORD *)(a1 + 3) == 1668244601 )
                v2 = &off_2B49538;
            }
            else if ( v46 == 99 && *(_DWORD *)(a1 + 3) == 1936941420 )
            {
              v2 = &off_2B49460;
            }
          }
          break;
        case 'd':
          v45 = a1[1];
          if ( v45 == 105 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1818846817 )
            {
              v2 = &off_2B495F8;
              if ( a1[6] != 101 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else if ( v45 == 111 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1818846836 )
            {
              v2 = &off_2B496D0;
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
            if ( v45 == 101 )
            {
              if ( *(_DWORD *)(a1 + 2) == 1818845556 )
              {
                v2 = (char **)&off_2B495E0;
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
          v55 = a1[1];
          if ( v55 == 110 )
          {
            if ( *((_WORD *)a1 + 1) == 25444 && a1[4] == 111 )
            {
              v61 = a1[5];
              if ( v61 == 100 )
              {
                v2 = &off_2B49490;
                if ( a1[6] != 101 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
                if ( v61 == 110 )
                {
                  v2 = &off_2B49760;
                  if ( a1[6] != 100 )
                    v2 = nullptr;
                }
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
            if ( v55 == 120 )
            {
              v56 = a1[2];
              if ( v56 == 97 )
              {
                v2 = (char **)&off_2B497A8;
                if ( *(_DWORD *)(a1 + 3) != 1701605485 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
                if ( v56 == 116 )
                {
                  v2 = &off_2B497D8;
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
            v54 = a1[2];
            if ( v54 == 99 )
            {
              if ( *(_DWORD *)(a1 + 3) == 1701082476 )
                v2 = (char **)&off_2B49A90;
            }
            else if ( v54 == 103 && *(_DWORD *)(a1 + 3) == 1886744434 )
            {
              v2 = &off_2B49AA8;
            }
          }
          break;
        case 'm':
          v58 = a1[1];
          if ( v58 == 97 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1819176814 )
            {
              v2 = (char **)&off_2B49C10;
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
            if ( v58 == 115 )
            {
              if ( *(_DWORD *)(a1 + 2) == 1818846819 )
              {
                v2 = &off_2B49CB8;
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
            v2 = (char **)&off_2B49E80;
            if ( *(_WORD *)(a1 + 5) != 25972 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'r':
          v50 = a1[1];
          if ( v50 == 101 )
          {
            v62 = a1[2];
            if ( v62 == 108 )
            {
              if ( !memcmp(a1 + 3, "ate", 3u) )
              {
                v65 = a1[6];
                v2 = (char **)&off_2B49F88;
                if ( v65 != 100 )
                {
                  v2 = &off_2B49FB8;
                  if ( v65 != 115 )
                    v2 = nullptr;
                }
              }
              else
              {
                v2 = nullptr;
              }
            }
            else if ( v62 <= 108 )
            {
              v2 = nullptr;
              if ( v62 == 102 )
              {
                v2 = (char **)&off_2B49F70;
                if ( *(_DWORD *)(a1 + 3) != 1835365481 )
                  v2 = nullptr;
              }
            }
            else if ( v62 == 109 )
            {
              v2 = (char **)&off_2B4A000;
              if ( *(_DWORD *)(a1 + 3) != 1936421473 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
              if ( v62 == 116 )
              {
                v2 = (char **)&off_2B4A048;
                if ( *(_DWORD *)(a1 + 3) != 1936618101 )
                  v2 = nullptr;
              }
            }
          }
          else
          {
            v2 = nullptr;
            if ( v50 == 116 )
            {
              if ( *(_DWORD *)(a1 + 2) == 1819176806 )
              {
                v2 = (char **)&off_2B4A090;
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
          v48 = a1[1];
          if ( v48 == 110 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1701867625 )
            {
              v2 = (char **)&off_2B4A210;
              if ( a1[6] != 116 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else if ( v48 == 117 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1734439010 )
            {
              v2 = &off_2B4A258;
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
            if ( v48 == 101 )
            {
              v49 = a1[2];
              if ( v49 == 99 )
              {
                if ( *(_DWORD *)(a1 + 3) == 1852795252 )
                  v2 = (char **)&off_2B4A108;
              }
              else if ( v49 == 101 && *(_DWORD *)(a1 + 3) == 1869835361 )
              {
                v2 = &off_2B4A150;
              }
            }
          }
          break;
        case 't':
          if ( *(_DWORD *)(a1 + 1) == 1684369529 )
          {
            v2 = (char **)&off_2B4A3A8;
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
            v2 = (char **)&off_2B4A480;
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
            v2 = (char **)&off_2B4A498;
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
            v2 = (char **)&off_2B4A4F8;
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
          v53 = a1[1];
          if ( v53 == 98 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1634890867 )
            {
              v2 = (char **)&off_2B49298;
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
            if ( v53 == 100 )
            {
              if ( *(_DWORD *)(a1 + 2) == 1684957540 )
              {
                v2 = &off_2B492B0;
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
          v47 = a1[1];
          if ( v47 == 97 )
          {
            v63 = a1[2];
            if ( v63 == 108 )
            {
              v2 = (char **)&off_2B493D0;
              if ( memcmp(a1 + 3, "lback", 5u) )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
              if ( v63 == 116 )
              {
                v2 = (char **)&off_2B49400;
                if ( memcmp(a1 + 3, "egory", 5u) )
                  v2 = nullptr;
              }
            }
          }
          else
          {
            v2 = nullptr;
            if ( v47 == 111 )
            {
              if ( *(_DWORD *)(a1 + 2) == 1635021678 )
              {
                v2 = (char **)&off_2B494F0;
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
          if ( *(_DWORD *)(a1 + 1) == 1919379045 && *(_WORD *)(a1 + 5) == 30063 )
          {
            v2 = &off_2B49598;
            if ( a1[7] != 112 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'f':
          if ( *(_DWORD *)(a1 + 1) == 1952673397 && *(_WORD *)(a1 + 5) == 28521 )
          {
            v2 = (char **)&off_2B498C8;
            if ( a1[7] != 110 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'h':
          v44 = a1[1];
          if ( v44 == 105 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1701995876 )
            {
              v2 = &off_2B499B8;
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
            if ( v44 == 116 )
            {
              if ( *(_DWORD *)(a1 + 2) == 1852796013 )
              {
                v2 = (char **)&off_2B499E8;
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
          if ( *(_DWORD *)(a1 + 1) == 1919251566 && *(_WORD *)(a1 + 5) == 24942 )
          {
            v2 = (char **)&off_2B49AF0;
            if ( a1[7] != 108 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'm':
          v43 = a1[1];
          if ( v43 == 97 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1634758249 )
            {
              v2 = &off_2B49BE0;
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
            if ( v43 == 101 )
            {
              if ( *(_DWORD *)(a1 + 2) == 1919246957 )
              {
                v2 = &off_2B49C40;
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
          if ( *(_DWORD *)(a1 + 1) == 1819436406 && *(_WORD *)(a1 + 5) == 24943 )
          {
            v2 = &off_2B49D60;
            if ( a1[7] != 100 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'p':
          v51 = a1[1];
          if ( v51 == 97 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1869374066 )
            {
              v2 = (char **)&off_2B49DD8;
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
            if ( v51 == 114 && a1[2] == 111 )
            {
              v52 = a1[3];
              if ( v52 == 112 )
              {
                if ( *((_DWORD *)a1 + 1) == 2037674597 )
                  v2 = (char **)&off_2B49EB0;
              }
              else if ( v52 == 116 && *((_DWORD *)a1 + 1) == 1819239279 )
              {
                v2 = (char **)&off_2B49EF8;
              }
            }
          }
          break;
        case 's':
          v57 = a1[1];
          if ( v57 == 104 )
          {
            v2 = &off_2B4A1B0;
            if ( memcmp(a1 + 2, "owrefs", 6u) )
              v2 = nullptr;
          }
          else if ( v57 <= 104 )
          {
            v2 = nullptr;
            if ( v57 == 101 )
            {
              v2 = (char **)&off_2B4A120;
              if ( memcmp(a1 + 2, "curity", 6u) )
                v2 = nullptr;
            }
          }
          else if ( v57 == 107 )
          {
            v2 = &off_2B4A1F8;
            if ( memcmp(a1 + 2, "ipline", 6u) )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
            if ( v57 == 116 )
            {
              v2 = off_2B4A3C0;
              if ( memcmp(a1 + 2, "artuml", 6u) )
                v2 = nullptr;
            }
          }
          break;
        case 't':
          if ( *(_DWORD *)(a1 + 1) == 1819307365 && *(_WORD *)(a1 + 5) == 29793 )
          {
            v2 = (char **)&off_2B4A2D0;
            if ( a1[7] != 101 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'v':
          if ( *(_DWORD *)(a1 + 1) == 1633841765 && *(_WORD *)(a1 + 5) == 26996 )
          {
            v2 = (char **)&off_2B4A450;
            if ( a1[7] != 109 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'x':
          if ( *(_DWORD *)(a1 + 1) == 1768318322 && *(_WORD *)(a1 + 5) == 25972 )
          {
            v2 = &off_2B4A4C8;
            if ( a1[7] != 109 )
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
          v2 = &off_2B49310;
          if ( *(_QWORD *)(a1 + 1) != 0x6E6F69746E657474LL )
            v2 = nullptr;
          break;
        case 'c':
          v41 = a1[1];
          if ( v41 == 97 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1919380588 && *((_WORD *)a1 + 3) == 28769 )
            {
              v2 = (char **)&off_2B493B8;
              if ( a1[8] != 104 )
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
            if ( v41 == 111 && *((_WORD *)a1 + 1) == 31088 )
            {
              v42 = a1[4];
              if ( v42 == 98 )
              {
                if ( *(_DWORD *)(a1 + 5) == 1717922162 )
                  v2 = &off_2B49508;
              }
              else if ( v42 == 114 && *(_DWORD *)(a1 + 5) == 1952999273 )
              {
                v2 = &off_2B49550;
              }
            }
          }
          break;
        case 'e':
          v2 = (char **)&off_2B497C0;
          if ( *(_QWORD *)(a1 + 1) != 0x6E6F697470656378LL )
            v2 = nullptr;
          break;
        case 'h':
          v2 = &off_2B499A0;
          if ( *(_QWORD *)(a1 + 1) != 0x7962666572656469LL )
            v2 = nullptr;
          break;
        case 'i':
          v39 = a1[1];
          if ( v39 == 100 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1668834668 && *((_WORD *)a1 + 3) == 28773 )
            {
              v2 = &off_2B49A18;
              if ( a1[8] != 116 )
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
            if ( v39 == 110 )
            {
              v40 = a1[2];
              if ( v40 == 116 )
              {
                v2 = (char **)&off_2B49AD8;
                if ( memcmp(a1 + 3, "erface", 6u) )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
                if ( v40 == 118 )
                {
                  v2 = &off_2B49B20;
                  if ( memcmp(a1 + 3, "ariant", 6u) )
                    v2 = nullptr;
                }
              }
            }
          }
          break;
        case 'l':
          v2 = (char **)&off_2B49B50;
          if ( *(_QWORD *)(a1 + 1) != 0x796C6E6F78657461LL )
            v2 = nullptr;
          break;
        case 'n':
          v2 = (char **)&off_2B49D00;
          if ( *(_QWORD *)(a1 + 1) != 0x6563617073656D61LL )
            v2 = nullptr;
          break;
        case 'o':
          v2 = (char **)&off_2B49D78;
          if ( *(_QWORD *)(a1 + 1) != 0x7069687372656E77LL )
            v2 = nullptr;
          break;
        case 'p':
          v38 = a1[1];
          if ( v38 == 97 )
          {
            if ( *(_DWORD *)(a1 + 2) == 1919377778 && *((_WORD *)a1 + 3) == 28769 )
            {
              v2 = &off_2B49E08;
              if ( a1[8] != 104 )
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
            if ( v38 == 114 )
            {
              if ( *(_DWORD *)(a1 + 2) == 1667593327 && *((_WORD *)a1 + 3) == 25972 )
              {
                v2 = (char **)&off_2B49EC8;
                if ( a1[8] != 100 )
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
          v2 = &off_2B4A198;
          if ( *(_QWORD *)(a1 + 1) != 0x7962666572776F68LL )
            v2 = nullptr;
          break;
        case 't':
          v2 = (char **)&off_2B4A318;
          if ( *(_QWORD *)(a1 + 1) != 0x6B636F6C62747865LL )
            v2 = nullptr;
          break;
        case 'w':
          v2 = &off_2B4A4B0;
          if ( *(_QWORD *)(a1 + 1) != 0x70756F72676B6165LL )
            v2 = nullptr;
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
            v2 = &off_2B4A330;
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
            v2 = &off_2B492C8;
            if ( a1[9] != 112 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 'd':
          v32 = a1[1];
          if ( v32 == 101 )
          {
            v2 = nullptr;
            if ( a1[2] == 112 )
            {
              v60 = a1[3];
              if ( v60 == 101 )
              {
                if ( !memcmp(a1 + 4, "ndency", 6u) )
                  v2 = (char **)&off_2B495B0;
              }
              else if ( v60 == 114 && !memcmp(a1 + 4, "ecated", 6u) )
              {
                v2 = (char **)&off_2B495C8;
              }
            }
          }
          else
          {
            v2 = nullptr;
            if ( v32 == 105 )
            {
              v2 = &off_2B49628;
              if ( *(_QWORD *)(a1 + 2) != 0x6E6F697373756373LL )
                v2 = nullptr;
            }
          }
          break;
        case 'e':
          v2 = nullptr;
          if ( *(_WORD *)(a1 + 1) == 25710 )
          {
            v29 = a1[3];
            if ( v29 == 114 )
            {
              if ( !memcmp(a1 + 4, "tfonly", 6u) )
                v2 = &off_2B4A0A8;
            }
            else if ( v29 == 120 )
            {
              if ( !memcmp(a1 + 4, "mlonly", 6u) )
                v2 = &off_2B4A510;
            }
            else if ( v29 == 109 && !memcmp(a1 + 4, "anonly", 6u) )
            {
              v2 = &off_2B49C28;
            }
          }
          break;
        case 'h':
          if ( *(_QWORD *)(a1 + 1) == 0x6C69667265646165LL )
          {
            v2 = &off_2B498F8;
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
            v2 = &off_2B49A78;
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
            v2 = &off_2B49BF8;
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
            v2 = &off_2B4A078;
            if ( a1[9] != 101 )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
          }
          break;
        case 's':
          v33 = a1[1];
          if ( v33 == 101 )
          {
            v2 = (char **)&off_2B4A0D8;
            if ( *(_QWORD *)(a1 + 2) != 0x7473696C66657263LL )
              v2 = nullptr;
          }
          else
          {
            v2 = nullptr;
            if ( v33 == 117 )
            {
              v34 = a1[2];
              if ( v34 == 98 )
              {
                v2 = (char **)&off_2B4A270;
                if ( memcmp(a1 + 3, "section", 7u) )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
                if ( v34 == 112 )
                {
                  v2 = &off_2B4A2A0;
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
            v2 = &off_2B4A4E0;
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
          v8 = a1[1];
          if ( v8 == 108 )
          {
            if ( *(_QWORD *)(a1 + 2) == 0x6769736564737361LL )
            {
              v2 = &off_2B49448;
              if ( a1[10] != 110 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
            }
          }
          else if ( v8 == 111 )
          {
            if ( *(_QWORD *)(a1 + 2) == 0x6C69617465647970LL )
            {
              v2 = &off_2B49520;
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
            if ( v8 == 97 )
            {
              if ( *(_QWORD *)(a1 + 2) == 0x7061726772656C6CLL )
              {
                v2 = (char **)&off_2B493E8;
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
            v11 = a1[2];
            if ( v11 == 99 )
            {
              if ( *(_QWORD *)(a1 + 3) == 0x796C6E6F6B6F6F62LL )
                v2 = (char **)&off_2B49658;
            }
            else if ( v11 == 110 && *(_QWORD *)(a1 + 3) == 0x6564756C636E6974LL )
            {
              v2 = &off_2B49688;
            }
          }
          break;
        case 'e':
          v2 = nullptr;
          if ( *(_WORD *)(a1 + 1) == 25710 )
          {
            v10 = a1[3];
            if ( v10 == 105 )
            {
              if ( !memcmp(a1 + 4, "nternal", 7u) )
                v2 = &off_2B49B08;
            }
            else if ( v10 <= 105 )
            {
              if ( v10 == 104 && !memcmp(a1 + 4, "tmlonly", 7u) )
                v2 = &off_2B49A00;
            }
            else if ( v10 == 112 )
            {
              if ( !memcmp(a1 + 4, "arblock", 7u) )
                v2 = &off_2B49DF0;
            }
            else if ( v10 == 118 && !memcmp(a1 + 4, "erbatim", 7u) )
            {
              v2 = &off_2B4A468;
            }
          }
          break;
        case 'h':
          v9 = a1[1];
          if ( v9 == 101 )
          {
            if ( *(_QWORD *)(a1 + 2) == 0x73616C637265706CLL )
            {
              v2 = &off_2B49928;
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
            if ( v9 == 116 )
            {
              if ( *(_QWORD *)(a1 + 2) == 0x64756C636E696C6DLL )
              {
                v2 = &off_2B499D0;
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
            v2 = &off_2B49C70;
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
            v2 = (char **)&off_2B49E38;
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
            v59 = a1[6];
            if ( v59 == 100 )
            {
              v2 = &off_2B49FA0;
              if ( *(_DWORD *)(a1 + 7) != 1869835361 )
                v2 = nullptr;
            }
            else
            {
              v2 = nullptr;
              if ( v59 == 115 )
              {
                v2 = &off_2B49FD0;
                if ( *(_DWORD *)(a1 + 7) != 1869835361 )
                  v2 = nullptr;
              }
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
            v2 = &off_2B4A438;
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
        if ( *(_QWORD *)(a1 + 1) == 0x7365636E6174736ELL && *(_WORD *)(a1 + 9) == 31337 )
        {
          v2 = &off_2B49AC0;
          if ( a1[11] != 101 )
            v2 = nullptr;
        }
        else
        {
          v2 = nullptr;
        }
      }
      else if ( v4 == 108 )
      {
        if ( *(_QWORD *)(a1 + 1) == 0x6C636E6978657461LL && *(_WORD *)(a1 + 9) == 25717 )
        {
          v2 = &off_2B49B38;
          if ( a1[11] != 101 )
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
          if ( *(_QWORD *)(a1 + 1) == 0x6F786574616C646ELL && *(_WORD *)(a1 + 9) == 27758 )
          {
            v2 = &off_2B49B68;
            if ( a1[11] != 121 )
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
            v2 = &off_2B4A0F0;
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
            v2 = &off_2B498E0;
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
            v2 = &off_2B49958;
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
            v2 = &off_2B49D30;
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
            v2 = &off_2B49F28;
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
            v2 = &off_2B4A288;
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
            v2 = &off_2B4A2E8;
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
        if ( *(_QWORD *)(a1 + 1) == 0x6F6F62636F64646ELL && *(_DWORD *)(a1 + 9) == 1819176811 )
        {
          v2 = &off_2B49670;
          if ( a1[13] != 121 )
            v2 = nullptr;
        }
        else
        {
          v2 = nullptr;
        }
      }
      else if ( v5 == 112 )
      {
        if ( *(_QWORD *)(a1 + 1) == 0x6573657461766972LL && *(_DWORD *)(a1 + 9) == 1869182051 )
        {
          v2 = &off_2B49E98;
          if ( a1[13] != 110 )
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
          if ( *(_QWORD *)(a1 + 1) == 0x6E696B6F6F62636FLL && *(_DWORD *)(a1 + 9) == 1685417059 )
          {
            v2 = &off_2B49640;
            if ( a1[13] != 101 )
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
        if ( *(_QWORD *)(a1 + 1) == 0x6974696E69776F68LL && *(_DWORD *)(a1 + 9) == 2053729377 )
        {
          v2 = &off_2B4A180;
          if ( *(_WORD *)(a1 + 13) != 29285 )
            v2 = nullptr;
        }
        else
        {
          v2 = nullptr;
        }
      }
      else if ( v6 == 116 )
      {
        if ( *(_QWORD *)(a1 + 1) == 0x6F63666F656C6261LL && *(_DWORD *)(a1 + 9) == 1852142702 )
        {
          v2 = &off_2B4A2B8;
          if ( *(_WORD *)(a1 + 13) != 29556 )
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
            v37 = a1[4];
            if ( v37 == 99 )
            {
              if ( *(_QWORD *)(a1 + 5) == 0x61726772656C6C61LL )
              {
                v2 = &off_2B49970;
                if ( *(_WORD *)(a1 + 13) != 26736 )
                  v2 = nullptr;
              }
              else
              {
                v2 = nullptr;
              }
            }
            else if ( v37 == 105 )
            {
              if ( *(_QWORD *)(a1 + 5) == 0x7A696C616974696ELL )
              {
                v2 = &off_2B49988;
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
      if ( !(*(_QWORD *)a1 ^ 0x65746365746F7270LL | *((_QWORD *)a1 + 1) ^ 0x6E6F697463657364LL) )
        v2 = &off_2B49EE0;
      break;
    default:
      v2 = nullptr;
      break;
  }
  return v2;
}
