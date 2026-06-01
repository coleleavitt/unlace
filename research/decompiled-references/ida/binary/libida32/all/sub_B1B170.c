char *__fastcall sub_B1B170(_BYTE *a1, __int64 a2)
{
  char *result; // rax
  char v3; // al
  char v4; // cl
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

  switch ( a2 )
  {
    case 0LL:
    case 1LL:
      return nullptr;
    case 2LL:
      switch ( *a1 )
      {
        case 'G':
          v6 = a1[1];
          if ( v6 != 84 )
            goto LABEL_32;
          return ">";
        case 'L':
          v5 = a1[1];
          if ( v5 != 84 )
            goto LABEL_29;
          return "<";
        case 'P':
          result = (char *)&unk_22C8311;
          if ( a1[1] != 105 )
            return nullptr;
          return result;
        case 'X':
          result = (char *)&unk_22C8314;
          if ( a1[1] != 105 )
            return nullptr;
          return result;
        case 'g':
          v6 = a1[1];
          if ( v6 == 101 )
            return (char *)&unk_22C8317;
LABEL_32:
          if ( v6 != 116 )
            return nullptr;
          return ">";
        case 'l':
          v5 = a1[1];
          if ( v5 == 101 )
            return (char *)&unk_22C831B;
LABEL_29:
          if ( v5 != 116 )
            return nullptr;
          return "<";
        case 'm':
          result = (char *)&unk_22C831F;
          if ( a1[1] != 117 )
            return nullptr;
          return result;
        case 'n':
          v4 = a1[1];
          if ( v4 == 101 )
            return (char *)&unk_22C8322;
          result = (char *)&unk_22C8326;
          if ( v4 == 117 )
            return result;
          break;
        case 'p':
          result = (char *)&unk_22C8329;
          if ( a1[1] != 105 )
            return nullptr;
          return result;
        case 'x':
          result = (char *)&unk_22C832C;
          if ( a1[1] != 105 )
            return nullptr;
          return result;
        default:
          return nullptr;
      }
      return nullptr;
    case 3LL:
      switch ( *a1 )
      {
        case 'A':
          if ( *(_WORD *)(a1 + 1) != 20557 )
            return nullptr;
          return "&";
        case 'P':
          v7 = a1[1];
          if ( v7 != 104 )
          {
            if ( v7 == 115 && a1[2] == 105 )
            {
              j__strlen(&byte_22C8332);
              return (char *)&byte_22C8332;
            }
            return nullptr;
          }
          if ( a1[2] != 105 )
            return nullptr;
          j__strlen(&byte_22C832F);
          return (char *)&byte_22C832F;
        case 'R':
          result = "®";
          if ( *(_WORD *)(a1 + 1) != 18245 )
            return nullptr;
          return result;
        case 'a':
          if ( *(_WORD *)(a1 + 1) != 28781 )
            return nullptr;
          return "&";
        case 'c':
          result = (char *)&unk_22C8338;
          if ( *(_WORD *)(a1 + 1) != 26984 )
            return nullptr;
          return result;
        case 'd':
          result = (char *)&unk_22C833B;
          if ( *(_WORD *)(a1 + 1) != 26469 )
            return nullptr;
          return result;
        case 'e':
          result = (char *)&unk_22C833E;
          if ( *(_WORD *)(a1 + 1) != 24948 )
            return nullptr;
          return result;
        case 'i':
          result = (char *)&unk_22C8341;
          if ( *(_WORD *)(a1 + 1) != 29806 )
            return nullptr;
          return result;
        case 'p':
          v10 = a1[1];
          if ( v10 != 104 )
          {
            if ( v10 == 115 && a1[2] == 105 )
            {
              j__strlen(&byte_22C8348);
              return (char *)&byte_22C8348;
            }
            return nullptr;
          }
          if ( a1[2] != 105 )
            return nullptr;
          j__strlen(&byte_22C8345);
          return (char *)&byte_22C8345;
        case 'r':
          v9 = a1[1];
          if ( v9 != 101 )
          {
            if ( v9 == 104 && a1[2] == 111 )
            {
              j__strlen(&byte_22C834B);
              return (char *)&byte_22C834B;
            }
            return nullptr;
          }
          if ( a1[2] != 103 )
            return nullptr;
          j__strlen("®");
          return "®";
        case 's':
          v8 = a1[1];
          if ( v8 != 105 )
          {
            if ( v8 == 117 && a1[2] == 109 )
            {
              j__strlen(&byte_22C8352);
              return (char *)&byte_22C8352;
            }
            return nullptr;
          }
          if ( a1[2] != 109 )
            return nullptr;
          j__strlen(&byte_22C834E);
          result = (char *)&byte_22C834E;
          break;
        case 't':
          result = (char *)&unk_22C8356;
          if ( *(_WORD *)(a1 + 1) != 30049 )
            return nullptr;
          return result;
        default:
          return nullptr;
      }
      return result;
    case 4LL:
      switch ( *a1 )
      {
        case 'A':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22C8359;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'C':
          if ( *(_WORD *)(a1 + 1) != 20559 || a1[3] != 89 )
            return nullptr;
          return (char *)&unk_22C835C;
        case 'E':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22C835F;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'I':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22C8362;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'O':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22C8365;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'Q':
          if ( *(_WORD *)(a1 + 1) != 20309 || a1[3] != 84 )
            return nullptr;
          return "\"";
        case 'U':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22C836C;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'Y':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22C836F;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'a':
          v23 = a1[1];
          if ( v23 != 112 )
          {
            if ( v23 == 117 && *((_WORD *)a1 + 1) == 27757 )
            {
              j__strlen(&byte_22C8372);
              return (char *)&byte_22C8372;
            }
            return nullptr;
          }
          if ( *((_WORD *)a1 + 1) != 29551 )
            return nullptr;
          j__strlen("'");
          return "'";
        case 'b':
          if ( *(_WORD *)(a1 + 1) != 29797 )
            return nullptr;
          result = (char *)&unk_22C8375;
          if ( a1[3] != 97 )
            return nullptr;
          return result;
        case 'c':
          if ( *(_WORD *)(a1 + 1) != 28783 || a1[3] != 121 )
            return nullptr;
          return (char *)&unk_22C835C;
        case 'e':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22C8378;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'i':
          v26 = a1[1];
          if ( v26 == 115 )
          {
            if ( *((_WORD *)a1 + 1) != 28265 )
              return nullptr;
            j__strlen(&byte_22C837E);
            return (char *)&byte_22C837E;
          }
          else
          {
            if ( v26 != 117 )
            {
              if ( v26 == 111 && *((_WORD *)a1 + 1) == 24948 )
              {
                j__strlen(&byte_22C837B);
                return (char *)&byte_22C837B;
              }
              return nullptr;
            }
            if ( *((_WORD *)a1 + 1) != 27757 )
              return nullptr;
            j__strlen(&byte_22C8382);
            return (char *)&byte_22C8382;
          }
        case 'l':
          if ( *(_WORD *)(a1 + 1) != 29281 )
            return nullptr;
          result = (char *)&unk_22C8385;
          if ( a1[3] != 114 )
            return nullptr;
          return result;
        case 'n':
          if ( *(_WORD *)(a1 + 1) != 29538 )
            return nullptr;
          result = (char *)&unk_22C838D;
          if ( a1[3] != 112 )
            return nullptr;
          return result;
        case 'o':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22C8390;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'p':
          v25 = a1[1];
          if ( v25 == 101 )
          {
            if ( *((_WORD *)a1 + 1) != 28786 )
              return nullptr;
            j__strlen(&byte_22C8397);
            return (char *)&byte_22C8397;
          }
          else
          {
            if ( v25 != 114 )
            {
              if ( v25 == 97 && *((_WORD *)a1 + 1) == 29810 )
              {
                j__strlen(&byte_22C8393);
                return (char *)&byte_22C8393;
              }
              return nullptr;
            }
            if ( a1[2] != 111 )
              return nullptr;
            v40 = a1[3];
            if ( v40 == 100 )
            {
              j__strlen(&byte_22C839B);
              return (char *)&byte_22C839B;
            }
            else
            {
              if ( v40 != 112 )
                return nullptr;
              j__strlen(&byte_22C839F);
              return (char *)&byte_22C839F;
            }
          }
        case 'q':
          if ( *(_WORD *)(a1 + 1) != 28533 || a1[3] != 116 )
            return nullptr;
          return "\"";
        case 'r':
          if ( *(_WORD *)(a1 + 1) != 29281 )
            return nullptr;
          result = (char *)&unk_22C83A7;
          if ( a1[3] != 114 )
            return nullptr;
          return result;
        case 's':
          v24 = a1[1];
          if ( v24 != 100 )
          {
            if ( v24 == 101 && *((_WORD *)a1 + 1) == 29795 )
            {
              j__strlen(&byte_22C83AF);
              return (char *)&byte_22C83AF;
            }
            return nullptr;
          }
          if ( *((_WORD *)a1 + 1) != 29807 )
            return nullptr;
          j__strlen(&byte_22C83AB);
          result = (char *)&byte_22C83AB;
          break;
        case 'u':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22C83B2;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'y':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22C83B5;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'z':
          if ( *(_WORD *)(a1 + 1) != 29797 )
            return nullptr;
          result = (char *)&unk_22C83B8;
          if ( a1[3] != 97 )
            return nullptr;
          return result;
        default:
          return nullptr;
      }
      return result;
    case 5LL:
      switch ( *a1 )
      {
        case 'A':
          v27 = a1[1];
          if ( v27 == 99 )
          {
            if ( *((_WORD *)a1 + 1) == 29289 && a1[4] == 99 )
            {
              j__strlen(&byte_22C83BF);
              return (char *)&byte_22C83BF;
            }
          }
          else if ( v27 == 114 && *((_WORD *)a1 + 1) == 28265 && a1[4] == 103 )
          {
            j__strlen(&byte_22C83C2);
            return (char *)&byte_22C83C2;
          }
          return nullptr;
        case 'D':
          result = (char *)&unk_22C83C5;
          if ( *(_DWORD *)(a1 + 1) != 1635019877 )
            return nullptr;
          return result;
        case 'E':
          result = (char *)&unk_22C83C8;
          if ( *(_DWORD *)(a1 + 1) != 1668442467 )
            return nullptr;
          return result;
        case 'G':
          result = (char *)&unk_22C83CB;
          if ( *(_DWORD *)(a1 + 1) != 1634561377 )
            return nullptr;
          return result;
        case 'I':
          result = (char *)&unk_22C83CE;
          if ( *(_DWORD *)(a1 + 1) != 1668442467 )
            return nullptr;
          return result;
        case 'O':
          v32 = a1[1];
          if ( v32 == 99 )
          {
            if ( *((_WORD *)a1 + 1) == 29289 && a1[4] == 99 )
            {
              j__strlen(&byte_22C83D1);
              return (char *)&byte_22C83D1;
            }
          }
          else if ( v32 == 109 && *((_WORD *)a1 + 1) == 26469 && a1[4] == 97 )
          {
            j__strlen(&byte_22C83D8);
            return (char *)&byte_22C83D8;
          }
          return nullptr;
        case 'P':
          result = (char *)&unk_22C83DB;
          if ( *(_DWORD *)(a1 + 1) != 1701669234 )
            return nullptr;
          return result;
        case 'S':
          result = (char *)&unk_22C83DF;
          if ( *(_DWORD *)(a1 + 1) != 1634559849 )
            return nullptr;
          return result;
        case 'T':
          v34 = a1[1];
          if ( v34 != 82 )
          {
            if ( v34 == 104 && *((_WORD *)a1 + 1) == 29797 && a1[4] == 97 )
            {
              j__strlen(&byte_22C83EA);
              return (char *)&byte_22C83EA;
            }
            return nullptr;
          }
          if ( *((_WORD *)a1 + 1) != 17473 || a1[4] != 69 )
            return nullptr;
          goto LABEL_382;
        case 'U':
          result = (char *)&unk_22C83ED;
          if ( *(_DWORD *)(a1 + 1) != 1668442467 )
            return nullptr;
          return result;
        case 'Y':
          result = (char *)&unk_22C83F0;
          if ( *(_DWORD *)(a1 + 1) != 1668442467 )
            return nullptr;
          return result;
        case 'a':
          v30 = a1[1];
          if ( v30 == 108 )
          {
            if ( *((_WORD *)a1 + 1) == 26736 && a1[4] == 97 )
            {
              j__strlen(&byte_22C83F6);
              return (char *)&byte_22C83F6;
            }
          }
          else if ( v30 <= 108 )
          {
            if ( v30 == 99 && *((_WORD *)a1 + 1) == 29289 && a1[4] == 99 )
            {
              j__strlen(&byte_22C83F3);
              return (char *)&byte_22C83F3;
            }
          }
          else if ( v30 == 114 )
          {
            if ( *((_WORD *)a1 + 1) == 28265 && a1[4] == 103 )
            {
              j__strlen(&byte_22C83F9);
              return (char *)&byte_22C83F9;
            }
          }
          else if ( v30 == 115 && *((_WORD *)a1 + 1) == 28025 && a1[4] == 112 )
          {
            j__strlen(&byte_22C8400);
            return (char *)&byte_22C8400;
          }
          return nullptr;
        case 'd':
          result = (char *)&unk_22C8404;
          if ( *(_DWORD *)(a1 + 1) != 1635019877 )
            return nullptr;
          return result;
        case 'e':
          v29 = a1[1];
          if ( v29 == 109 )
          {
            if ( *((_WORD *)a1 + 1) == 29808 && a1[4] == 121 )
            {
              j__strlen(&byte_22C840A);
              return (char *)&byte_22C840A;
            }
          }
          else if ( v29 == 113 )
          {
            if ( *((_WORD *)a1 + 1) == 26997 && a1[4] == 118 )
            {
              j__strlen(&byte_22C840E);
              return (char *)&byte_22C840E;
            }
          }
          else if ( v29 == 99 && *((_WORD *)a1 + 1) == 29289 && a1[4] == 99 )
          {
            j__strlen(&byte_22C8407);
            return (char *)&byte_22C8407;
          }
          return nullptr;
        case 'g':
          result = (char *)&unk_22C8412;
          if ( *(_DWORD *)(a1 + 1) != 1634561377 )
            return nullptr;
          return result;
        case 'i':
          v33 = a1[1];
          if ( v33 == 99 )
          {
            if ( *((_WORD *)a1 + 1) == 29289 && a1[4] == 99 )
            {
              j__strlen(&byte_22C8415);
              return (char *)&byte_22C8415;
            }
          }
          else if ( v33 == 110 && *((_WORD *)a1 + 1) == 26982 && a1[4] == 110 )
          {
            j__strlen(&byte_22C841C);
            return (char *)&byte_22C841C;
          }
          return nullptr;
        case 'k':
          result = (char *)&unk_22C8420;
          if ( *(_DWORD *)(a1 + 1) != 1634758753 )
            return nullptr;
          return result;
        case 'l':
          v31 = a1[1];
          if ( v31 == 100 )
          {
            if ( *((_WORD *)a1 + 1) == 30065 && a1[4] == 111 )
            {
              j__strlen(&byte_22C842F);
              return (char *)&byte_22C842F;
            }
          }
          else if ( v31 == 115 )
          {
            if ( *((_WORD *)a1 + 1) == 30065 && a1[4] == 111 )
            {
              j__strlen(&byte_22C8433);
              return (char *)&byte_22C8433;
            }
          }
          else if ( v31 == 99 && *((_WORD *)a1 + 1) == 26981 && a1[4] == 108 )
          {
            j__strlen(&byte_22C8427);
            return (char *)&byte_22C8427;
          }
          return nullptr;
        case 'm':
          v28 = a1[1];
          if ( v28 == 100 )
          {
            if ( *((_WORD *)a1 + 1) == 29537 && a1[4] == 104 )
            {
              j__strlen("—");
              return "—";
            }
          }
          else if ( v28 == 105 && *((_WORD *)a1 + 1) == 30062 && a1[4] == 115 )
          {
            j__strlen(&byte_22C843B);
            return (char *)&byte_22C843B;
          }
          return nullptr;
        case 'n':
          v39 = a1[1];
          if ( v39 == 100 )
          {
            if ( *((_WORD *)a1 + 1) == 29537 && a1[4] == 104 )
            {
              j__strlen("–");
              return "–";
            }
          }
          else if ( v39 == 111 )
          {
            if ( *((_WORD *)a1 + 1) == 26996 && a1[4] == 110 )
            {
              j__strlen(&byte_22C844B);
              return (char *)&byte_22C844B;
            }
          }
          else if ( v39 == 97 && *((_WORD *)a1 + 1) == 27746 && a1[4] == 97 )
          {
            j__strlen(&byte_22C8443);
            return (char *)&byte_22C8443;
          }
          return nullptr;
        case 'o':
          v38 = a1[1];
          if ( v38 == 99 )
          {
            if ( *((_WORD *)a1 + 1) == 29289 && a1[4] == 99 )
            {
              j__strlen(&byte_22C844F);
              return (char *)&byte_22C844F;
            }
          }
          else if ( v38 == 109 && *((_WORD *)a1 + 1) == 26469 && a1[4] == 97 )
          {
            j__strlen(&byte_22C8452);
            return (char *)&byte_22C8452;
          }
          return nullptr;
        case 'p':
          result = (char *)&unk_22C8455;
          if ( *(_DWORD *)(a1 + 1) != 1701669234 )
            return nullptr;
          return result;
        case 'r':
          v37 = a1[1];
          if ( v37 == 99 )
          {
            if ( *((_WORD *)a1 + 1) == 26981 && a1[4] == 108 )
            {
              j__strlen(&byte_22C845D);
              return (char *)&byte_22C845D;
            }
          }
          else if ( v37 <= 99 )
          {
            if ( v37 == 97 && *((_WORD *)a1 + 1) == 26980 && a1[4] == 99 )
            {
              j__strlen(&byte_22C8459);
              return (char *)&byte_22C8459;
            }
          }
          else if ( v37 == 100 )
          {
            if ( *((_WORD *)a1 + 1) == 30065 && a1[4] == 111 )
            {
              j__strlen(&byte_22C8461);
              return (char *)&byte_22C8461;
            }
          }
          else if ( v37 == 115 && *((_WORD *)a1 + 1) == 30065 && a1[4] == 111 )
          {
            j__strlen(&byte_22C8465);
            return (char *)&byte_22C8465;
          }
          return nullptr;
        case 's':
          v36 = a1[1];
          if ( v36 == 105 )
          {
            if ( *((_WORD *)a1 + 1) == 28007 && a1[4] == 97 )
            {
              j__strlen(&byte_22C8469);
              return (char *)&byte_22C8469;
            }
          }
          else if ( v36 == 122 && *((_WORD *)a1 + 1) == 26988 && a1[4] == 103 )
          {
            j__strlen(&byte_22C8470);
            return (char *)&byte_22C8470;
          }
          return nullptr;
        case 't':
          v35 = a1[1];
          if ( v35 == 105 )
          {
            if ( *((_WORD *)a1 + 1) == 25965 && a1[4] == 115 )
            {
              j__strlen(&byte_22C8476);
              return (char *)&byte_22C8476;
            }
          }
          else if ( v35 == 114 )
          {
            if ( *((_WORD *)a1 + 1) == 25697 && a1[4] == 101 )
            {
LABEL_382:
              j__strlen(&byte_22C83E6);
              return (char *)&byte_22C83E6;
            }
          }
          else if ( v35 == 104 && *((_WORD *)a1 + 1) == 29797 && a1[4] == 97 )
          {
            j__strlen(&byte_22C8473);
            return (char *)&byte_22C8473;
          }
          break;
        case 'u':
          result = (char *)&unk_22C8479;
          if ( *(_DWORD *)(a1 + 1) != 1668442467 )
            return nullptr;
          return result;
        case 'y':
          result = (char *)&unk_22C847C;
          if ( *(_DWORD *)(a1 + 1) != 1668442467 )
            return nullptr;
          return result;
        default:
          return nullptr;
      }
      return nullptr;
    case 6LL:
      switch ( *a1 )
      {
        case 'A':
          v16 = a1[1];
          if ( v16 == 103 )
          {
            if ( *(_DWORD *)(a1 + 2) != 1702257010 )
              return nullptr;
            j__strlen(&byte_22C8482);
            return (char *)&byte_22C8482;
          }
          else
          {
            if ( v16 != 116 )
            {
              if ( v16 == 97 && *(_DWORD *)(a1 + 2) == 1702131043 )
              {
                j__strlen(&byte_22C847F);
                return (char *)&byte_22C847F;
              }
              return nullptr;
            }
            if ( *(_DWORD *)(a1 + 2) != 1701080169 )
              return nullptr;
            j__strlen(&byte_22C8485);
            return (char *)&byte_22C8485;
          }
        case 'C':
          if ( *(_DWORD *)(a1 + 1) != 1768187235 )
            return nullptr;
          result = (char *)&unk_22C848E;
          if ( a1[5] != 108 )
            return nullptr;
          return result;
        case 'E':
          v15 = a1[1];
          if ( v15 != 97 )
          {
            if ( v15 == 103 && *(_DWORD *)(a1 + 2) == 1702257010 )
            {
              j__strlen(&byte_22C8494);
              return (char *)&byte_22C8494;
            }
            return nullptr;
          }
          if ( *(_DWORD *)(a1 + 2) != 1702131043 )
            return nullptr;
          j__strlen(&byte_22C8491);
          return (char *)&byte_22C8491;
        case 'I':
          v14 = a1[1];
          if ( v14 != 97 )
          {
            if ( v14 == 103 && *(_DWORD *)(a1 + 2) == 1702257010 )
            {
              j__strlen(&byte_22C849A);
              return (char *)&byte_22C849A;
            }
            return nullptr;
          }
          if ( *(_DWORD *)(a1 + 2) != 1702131043 )
            return nullptr;
          j__strlen(&byte_22C8497);
          return (char *)&byte_22C8497;
        case 'L':
          if ( *(_DWORD *)(a1 + 1) != 1684172129 )
            return nullptr;
          result = (char *)&unk_22C849D;
          if ( a1[5] != 97 )
            return nullptr;
          return result;
        case 'N':
          if ( *(_DWORD *)(a1 + 1) != 1684826484 )
            return nullptr;
          result = (char *)&unk_22C84A6;
          if ( a1[5] != 101 )
            return nullptr;
          return result;
        case 'O':
          v12 = a1[1];
          if ( v12 == 103 )
          {
            if ( *(_DWORD *)(a1 + 2) != 1702257010 )
              return nullptr;
            j__strlen(&byte_22C84AC);
            return (char *)&byte_22C84AC;
          }
          else
          {
            if ( v12 != 116 )
            {
              if ( v12 == 97 && *(_DWORD *)(a1 + 2) == 1702131043 )
              {
                j__strlen(&byte_22C84A9);
                return (char *)&byte_22C84A9;
              }
              return nullptr;
            }
            if ( *(_DWORD *)(a1 + 2) != 1701080169 )
              return nullptr;
            j__strlen(&byte_22C84AF);
            return (char *)&byte_22C84AF;
          }
        case 'U':
          v11 = a1[1];
          if ( v11 != 97 )
          {
            if ( v11 == 103 && *(_DWORD *)(a1 + 2) == 1702257010 )
            {
              j__strlen(&byte_22C84B5);
              return (char *)&byte_22C84B5;
            }
            return nullptr;
          }
          if ( *(_DWORD *)(a1 + 2) != 1702131043 )
            return nullptr;
          j__strlen(&byte_22C84B2);
          return (char *)&byte_22C84B2;
        case 'Y':
          if ( *(_DWORD *)(a1 + 1) != 1953850209 )
            return nullptr;
          result = (char *)&unk_22C84BE;
          if ( a1[5] != 101 )
            return nullptr;
          return result;
        case 'a':
          v22 = a1[1];
          if ( v22 == 103 )
          {
            if ( *(_DWORD *)(a1 + 2) != 1702257010 )
              return nullptr;
            j__strlen(&byte_22C84C4);
            return (char *)&byte_22C84C4;
          }
          else
          {
            if ( v22 != 116 )
            {
              if ( v22 == 97 && *(_DWORD *)(a1 + 2) == 1702131043 )
              {
                j__strlen(&byte_22C84C1);
                return (char *)&byte_22C84C1;
              }
              return nullptr;
            }
            if ( *(_DWORD *)(a1 + 2) != 1701080169 )
              return nullptr;
            j__strlen(&byte_22C84C7);
            return (char *)&byte_22C84C7;
          }
        case 'c':
          if ( *(_DWORD *)(a1 + 1) != 1768187235 )
            return nullptr;
          result = (char *)&unk_22C84CA;
          if ( a1[5] != 108 )
            return nullptr;
          return result;
        case 'e':
          v19 = a1[1];
          if ( v19 != 97 )
          {
            if ( v19 == 103 && *(_DWORD *)(a1 + 2) == 1702257010 )
            {
              j__strlen(&byte_22C84D0);
              return (char *)&byte_22C84D0;
            }
            return nullptr;
          }
          if ( *(_DWORD *)(a1 + 2) != 1702131043 )
            return nullptr;
          j__strlen(&byte_22C84CD);
          return (char *)&byte_22C84CD;
        case 'i':
          v21 = a1[1];
          if ( v21 != 97 )
          {
            if ( v21 == 103 && *(_DWORD *)(a1 + 2) == 1702257010 )
            {
              j__strlen(&byte_22C84D6);
              return (char *)&byte_22C84D6;
            }
            return nullptr;
          }
          if ( *(_DWORD *)(a1 + 2) != 1702131043 )
            return nullptr;
          j__strlen(&byte_22C84D3);
          return (char *)&byte_22C84D3;
        case 'l':
          v20 = a1[1];
          if ( v20 != 97 )
          {
            if ( v20 == 102 && *(_DWORD *)(a1 + 2) == 1919905644 )
            {
              j__strlen(&byte_22C84DC);
              return (char *)&byte_22C84DC;
            }
            return nullptr;
          }
          if ( *(_DWORD *)(a1 + 2) != 1633968749 )
            return nullptr;
          j__strlen(&byte_22C84D9);
          return (char *)&byte_22C84D9;
        case 'n':
          if ( *(_DWORD *)(a1 + 1) != 1684826484 )
            return nullptr;
          result = (char *)&unk_22C84E0;
          if ( a1[5] != 101 )
            return nullptr;
          return result;
        case 'o':
          v17 = a1[1];
          if ( v17 == 103 )
          {
            if ( *(_DWORD *)(a1 + 2) != 1702257010 )
              return nullptr;
            j__strlen(&byte_22C84E6);
            return (char *)&byte_22C84E6;
          }
          else
          {
            if ( v17 != 116 )
            {
              if ( v17 == 97 && *(_DWORD *)(a1 + 2) == 1702131043 )
              {
                j__strlen(&byte_22C84E3);
                return (char *)&byte_22C84E3;
              }
              return nullptr;
            }
            if ( *(_DWORD *)(a1 + 2) != 1701080169 )
              return nullptr;
            j__strlen(&byte_22C84E9);
            return (char *)&byte_22C84E9;
          }
        case 'p':
          if ( *(_DWORD *)(a1 + 1) != 1836283244 )
            return nullptr;
          result = (char *)&unk_22C84F2;
          if ( a1[5] != 110 )
            return nullptr;
          return result;
        case 'r':
          if ( *(_DWORD *)(a1 + 1) != 1869573222 )
            return nullptr;
          result = (char *)&unk_22C84FB;
          if ( a1[5] != 114 )
            return nullptr;
          return result;
        case 's':
          if ( *(_DWORD *)(a1 + 1) != 1634559849 )
            return nullptr;
          result = (char *)&unk_22C8505;
          if ( a1[5] != 102 )
            return nullptr;
          return result;
        case 'u':
          v13 = a1[1];
          if ( v13 != 97 )
          {
            if ( v13 == 103 && *(_DWORD *)(a1 + 2) == 1702257010 )
            {
              j__strlen(&byte_22C850B);
              return (char *)&byte_22C850B;
            }
            return nullptr;
          }
          if ( *(_DWORD *)(a1 + 2) != 1702131043 )
            return nullptr;
          j__strlen(&byte_22C8508);
          return (char *)&byte_22C8508;
        case 'y':
          v18 = a1[1];
          if ( v18 != 97 )
          {
            if ( v18 == 103 && *(_DWORD *)(a1 + 2) == 1702257010 )
            {
              j__strlen(&byte_22C8511);
              return (char *)&byte_22C8511;
            }
            return nullptr;
          }
          if ( *(_DWORD *)(a1 + 2) != 1702131043 )
            return nullptr;
          j__strlen(&byte_22C850E);
          result = (char *)&byte_22C850E;
          break;
        default:
          return nullptr;
      }
      return result;
    case 7LL:
      v3 = *a1;
      if ( *a1 == 101 )
      {
        if ( *(_DWORD *)(a1 + 1) != 1818850160 )
          return nullptr;
        result = (char *)&unk_22C851F;
        if ( *(_WORD *)(a1 + 5) != 28271 )
          return nullptr;
      }
      else
      {
        if ( v3 != 117 )
        {
          if ( v3 == 85 && *(_DWORD *)(a1 + 1) == 1818850160 )
          {
            result = (char *)&unk_22C851C;
            if ( *(_WORD *)(a1 + 5) == 28271 )
              return result;
          }
          return nullptr;
        }
        if ( *(_DWORD *)(a1 + 1) != 1818850160 )
          return nullptr;
        result = (char *)&unk_22C8522;
        if ( *(_WORD *)(a1 + 5) != 28271 )
          return nullptr;
      }
      return result;
    default:
      return nullptr;
  }
}

