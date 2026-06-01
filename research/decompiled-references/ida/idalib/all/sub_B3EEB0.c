char *__fastcall sub_B3EEB0(_BYTE *a1, __int64 a2)
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
          result = (char *)&unk_22EB733;
          if ( a1[1] != 105 )
            return nullptr;
          return result;
        case 'X':
          result = (char *)&unk_22EB736;
          if ( a1[1] != 105 )
            return nullptr;
          return result;
        case 'g':
          v6 = a1[1];
          if ( v6 == 101 )
            return (char *)&unk_22EB739;
LABEL_32:
          if ( v6 != 116 )
            return nullptr;
          return ">";
        case 'l':
          v5 = a1[1];
          if ( v5 == 101 )
            return (char *)&unk_22EB73D;
LABEL_29:
          if ( v5 != 116 )
            return nullptr;
          return "<";
        case 'm':
          result = (char *)&unk_22EB741;
          if ( a1[1] != 117 )
            return nullptr;
          return result;
        case 'n':
          v4 = a1[1];
          if ( v4 == 101 )
            return (char *)&unk_22EB744;
          result = (char *)&unk_22EB748;
          if ( v4 == 117 )
            return result;
          break;
        case 'p':
          result = (char *)&unk_22EB74B;
          if ( a1[1] != 105 )
            return nullptr;
          return result;
        case 'x':
          result = (char *)&unk_22EB74E;
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
              j__strlen(&byte_22EB754);
              return (char *)&byte_22EB754;
            }
            return nullptr;
          }
          if ( a1[2] != 105 )
            return nullptr;
          j__strlen(&byte_22EB751);
          return (char *)&byte_22EB751;
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
          result = (char *)&unk_22EB75A;
          if ( *(_WORD *)(a1 + 1) != 26984 )
            return nullptr;
          return result;
        case 'd':
          result = (char *)&unk_22EB75D;
          if ( *(_WORD *)(a1 + 1) != 26469 )
            return nullptr;
          return result;
        case 'e':
          result = (char *)&unk_22EB760;
          if ( *(_WORD *)(a1 + 1) != 24948 )
            return nullptr;
          return result;
        case 'i':
          result = (char *)&unk_22EB763;
          if ( *(_WORD *)(a1 + 1) != 29806 )
            return nullptr;
          return result;
        case 'p':
          v10 = a1[1];
          if ( v10 != 104 )
          {
            if ( v10 == 115 && a1[2] == 105 )
            {
              j__strlen(&byte_22EB76A);
              return (char *)&byte_22EB76A;
            }
            return nullptr;
          }
          if ( a1[2] != 105 )
            return nullptr;
          j__strlen(&byte_22EB767);
          return (char *)&byte_22EB767;
        case 'r':
          v9 = a1[1];
          if ( v9 != 101 )
          {
            if ( v9 == 104 && a1[2] == 111 )
            {
              j__strlen(&byte_22EB76D);
              return (char *)&byte_22EB76D;
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
              j__strlen(&byte_22EB774);
              return (char *)&byte_22EB774;
            }
            return nullptr;
          }
          if ( a1[2] != 109 )
            return nullptr;
          j__strlen(&byte_22EB770);
          result = (char *)&byte_22EB770;
          break;
        case 't':
          result = (char *)&unk_22EB778;
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
          result = (char *)&unk_22EB77B;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'C':
          if ( *(_WORD *)(a1 + 1) != 20559 || a1[3] != 89 )
            return nullptr;
          return (char *)&unk_22EB77E;
        case 'E':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22EB781;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'I':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22EB784;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'O':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22EB787;
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
          result = (char *)&unk_22EB78E;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'Y':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22EB791;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'a':
          v23 = a1[1];
          if ( v23 != 112 )
          {
            if ( v23 == 117 && *((_WORD *)a1 + 1) == 27757 )
            {
              j__strlen(&byte_22EB794);
              return (char *)&byte_22EB794;
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
          result = (char *)&unk_22EB797;
          if ( a1[3] != 97 )
            return nullptr;
          return result;
        case 'c':
          if ( *(_WORD *)(a1 + 1) != 28783 || a1[3] != 121 )
            return nullptr;
          return (char *)&unk_22EB77E;
        case 'e':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22EB79A;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'i':
          v26 = a1[1];
          if ( v26 == 115 )
          {
            if ( *((_WORD *)a1 + 1) != 28265 )
              return nullptr;
            j__strlen(&byte_22EB7A0);
            return (char *)&byte_22EB7A0;
          }
          else
          {
            if ( v26 != 117 )
            {
              if ( v26 == 111 && *((_WORD *)a1 + 1) == 24948 )
              {
                j__strlen(&byte_22EB79D);
                return (char *)&byte_22EB79D;
              }
              return nullptr;
            }
            if ( *((_WORD *)a1 + 1) != 27757 )
              return nullptr;
            j__strlen(&byte_22EB7A4);
            return (char *)&byte_22EB7A4;
          }
        case 'l':
          if ( *(_WORD *)(a1 + 1) != 29281 )
            return nullptr;
          result = (char *)&unk_22EB7A7;
          if ( a1[3] != 114 )
            return nullptr;
          return result;
        case 'n':
          if ( *(_WORD *)(a1 + 1) != 29538 )
            return nullptr;
          result = (char *)&unk_22EB7AF;
          if ( a1[3] != 112 )
            return nullptr;
          return result;
        case 'o':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22EB7B2;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'p':
          v25 = a1[1];
          if ( v25 == 101 )
          {
            if ( *((_WORD *)a1 + 1) != 28786 )
              return nullptr;
            j__strlen(&byte_22EB7B9);
            return (char *)&byte_22EB7B9;
          }
          else
          {
            if ( v25 != 114 )
            {
              if ( v25 == 97 && *((_WORD *)a1 + 1) == 29810 )
              {
                j__strlen(&byte_22EB7B5);
                return (char *)&byte_22EB7B5;
              }
              return nullptr;
            }
            if ( a1[2] != 111 )
              return nullptr;
            v40 = a1[3];
            if ( v40 == 100 )
            {
              j__strlen(&byte_22EB7BD);
              return (char *)&byte_22EB7BD;
            }
            else
            {
              if ( v40 != 112 )
                return nullptr;
              j__strlen(&byte_22EB7C1);
              return (char *)&byte_22EB7C1;
            }
          }
        case 'q':
          if ( *(_WORD *)(a1 + 1) != 28533 || a1[3] != 116 )
            return nullptr;
          return "\"";
        case 'r':
          if ( *(_WORD *)(a1 + 1) != 29281 )
            return nullptr;
          result = (char *)&unk_22EB7C9;
          if ( a1[3] != 114 )
            return nullptr;
          return result;
        case 's':
          v24 = a1[1];
          if ( v24 != 100 )
          {
            if ( v24 == 101 && *((_WORD *)a1 + 1) == 29795 )
            {
              j__strlen(&byte_22EB7D1);
              return (char *)&byte_22EB7D1;
            }
            return nullptr;
          }
          if ( *((_WORD *)a1 + 1) != 29807 )
            return nullptr;
          j__strlen(&byte_22EB7CD);
          result = (char *)&byte_22EB7CD;
          break;
        case 'u':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22EB7D4;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'y':
          if ( *(_WORD *)(a1 + 1) != 28021 )
            return nullptr;
          result = (char *)&unk_22EB7D7;
          if ( a1[3] != 108 )
            return nullptr;
          return result;
        case 'z':
          if ( *(_WORD *)(a1 + 1) != 29797 )
            return nullptr;
          result = (char *)&unk_22EB7DA;
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
              j__strlen(&byte_22EB7E1);
              return (char *)&byte_22EB7E1;
            }
          }
          else if ( v27 == 114 && *((_WORD *)a1 + 1) == 28265 && a1[4] == 103 )
          {
            j__strlen(&byte_22EB7E4);
            return (char *)&byte_22EB7E4;
          }
          return nullptr;
        case 'D':
          result = (char *)&unk_22EB7E7;
          if ( *(_DWORD *)(a1 + 1) != 1635019877 )
            return nullptr;
          return result;
        case 'E':
          result = (char *)&unk_22EB7EA;
          if ( *(_DWORD *)(a1 + 1) != 1668442467 )
            return nullptr;
          return result;
        case 'G':
          result = (char *)&unk_22EB7ED;
          if ( *(_DWORD *)(a1 + 1) != 1634561377 )
            return nullptr;
          return result;
        case 'I':
          result = (char *)&unk_22EB7F0;
          if ( *(_DWORD *)(a1 + 1) != 1668442467 )
            return nullptr;
          return result;
        case 'O':
          v32 = a1[1];
          if ( v32 == 99 )
          {
            if ( *((_WORD *)a1 + 1) == 29289 && a1[4] == 99 )
            {
              j__strlen(&byte_22EB7F3);
              return (char *)&byte_22EB7F3;
            }
          }
          else if ( v32 == 109 && *((_WORD *)a1 + 1) == 26469 && a1[4] == 97 )
          {
            j__strlen(&byte_22EB7FA);
            return (char *)&byte_22EB7FA;
          }
          return nullptr;
        case 'P':
          result = (char *)&unk_22EB7FD;
          if ( *(_DWORD *)(a1 + 1) != 1701669234 )
            return nullptr;
          return result;
        case 'S':
          result = (char *)&unk_22EB801;
          if ( *(_DWORD *)(a1 + 1) != 1634559849 )
            return nullptr;
          return result;
        case 'T':
          v34 = a1[1];
          if ( v34 != 82 )
          {
            if ( v34 == 104 && *((_WORD *)a1 + 1) == 29797 && a1[4] == 97 )
            {
              j__strlen(&byte_22EB80C);
              return (char *)&byte_22EB80C;
            }
            return nullptr;
          }
          if ( *((_WORD *)a1 + 1) != 17473 || a1[4] != 69 )
            return nullptr;
          goto LABEL_382;
        case 'U':
          result = (char *)&unk_22EB80F;
          if ( *(_DWORD *)(a1 + 1) != 1668442467 )
            return nullptr;
          return result;
        case 'Y':
          result = (char *)&unk_22EB812;
          if ( *(_DWORD *)(a1 + 1) != 1668442467 )
            return nullptr;
          return result;
        case 'a':
          v30 = a1[1];
          if ( v30 == 108 )
          {
            if ( *((_WORD *)a1 + 1) == 26736 && a1[4] == 97 )
            {
              j__strlen(&byte_22EB818);
              return (char *)&byte_22EB818;
            }
          }
          else if ( v30 <= 108 )
          {
            if ( v30 == 99 && *((_WORD *)a1 + 1) == 29289 && a1[4] == 99 )
            {
              j__strlen(&byte_22EB815);
              return (char *)&byte_22EB815;
            }
          }
          else if ( v30 == 114 )
          {
            if ( *((_WORD *)a1 + 1) == 28265 && a1[4] == 103 )
            {
              j__strlen(&byte_22EB81B);
              return (char *)&byte_22EB81B;
            }
          }
          else if ( v30 == 115 && *((_WORD *)a1 + 1) == 28025 && a1[4] == 112 )
          {
            j__strlen(&byte_22EB822);
            return (char *)&byte_22EB822;
          }
          return nullptr;
        case 'd':
          result = (char *)&unk_22EB826;
          if ( *(_DWORD *)(a1 + 1) != 1635019877 )
            return nullptr;
          return result;
        case 'e':
          v29 = a1[1];
          if ( v29 == 109 )
          {
            if ( *((_WORD *)a1 + 1) == 29808 && a1[4] == 121 )
            {
              j__strlen(&byte_22EB82C);
              return (char *)&byte_22EB82C;
            }
          }
          else if ( v29 == 113 )
          {
            if ( *((_WORD *)a1 + 1) == 26997 && a1[4] == 118 )
            {
              j__strlen(&byte_22EB830);
              return (char *)&byte_22EB830;
            }
          }
          else if ( v29 == 99 && *((_WORD *)a1 + 1) == 29289 && a1[4] == 99 )
          {
            j__strlen(&byte_22EB829);
            return (char *)&byte_22EB829;
          }
          return nullptr;
        case 'g':
          result = (char *)&unk_22EB834;
          if ( *(_DWORD *)(a1 + 1) != 1634561377 )
            return nullptr;
          return result;
        case 'i':
          v33 = a1[1];
          if ( v33 == 99 )
          {
            if ( *((_WORD *)a1 + 1) == 29289 && a1[4] == 99 )
            {
              j__strlen(&byte_22EB837);
              return (char *)&byte_22EB837;
            }
          }
          else if ( v33 == 110 && *((_WORD *)a1 + 1) == 26982 && a1[4] == 110 )
          {
            j__strlen(&byte_22EB83E);
            return (char *)&byte_22EB83E;
          }
          return nullptr;
        case 'k':
          result = (char *)&unk_22EB842;
          if ( *(_DWORD *)(a1 + 1) != 1634758753 )
            return nullptr;
          return result;
        case 'l':
          v31 = a1[1];
          if ( v31 == 100 )
          {
            if ( *((_WORD *)a1 + 1) == 30065 && a1[4] == 111 )
            {
              j__strlen(&byte_22EB851);
              return (char *)&byte_22EB851;
            }
          }
          else if ( v31 == 115 )
          {
            if ( *((_WORD *)a1 + 1) == 30065 && a1[4] == 111 )
            {
              j__strlen(&byte_22EB855);
              return (char *)&byte_22EB855;
            }
          }
          else if ( v31 == 99 && *((_WORD *)a1 + 1) == 26981 && a1[4] == 108 )
          {
            j__strlen(&byte_22EB849);
            return (char *)&byte_22EB849;
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
            j__strlen(&byte_22EB85D);
            return (char *)&byte_22EB85D;
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
              j__strlen(&byte_22EB86D);
              return (char *)&byte_22EB86D;
            }
          }
          else if ( v39 == 97 && *((_WORD *)a1 + 1) == 27746 && a1[4] == 97 )
          {
            j__strlen(&byte_22EB865);
            return (char *)&byte_22EB865;
          }
          return nullptr;
        case 'o':
          v38 = a1[1];
          if ( v38 == 99 )
          {
            if ( *((_WORD *)a1 + 1) == 29289 && a1[4] == 99 )
            {
              j__strlen(&byte_22EB871);
              return (char *)&byte_22EB871;
            }
          }
          else if ( v38 == 109 && *((_WORD *)a1 + 1) == 26469 && a1[4] == 97 )
          {
            j__strlen(&byte_22EB874);
            return (char *)&byte_22EB874;
          }
          return nullptr;
        case 'p':
          result = (char *)&unk_22EB877;
          if ( *(_DWORD *)(a1 + 1) != 1701669234 )
            return nullptr;
          return result;
        case 'r':
          v37 = a1[1];
          if ( v37 == 99 )
          {
            if ( *((_WORD *)a1 + 1) == 26981 && a1[4] == 108 )
            {
              j__strlen(&byte_22EB87F);
              return (char *)&byte_22EB87F;
            }
          }
          else if ( v37 <= 99 )
          {
            if ( v37 == 97 && *((_WORD *)a1 + 1) == 26980 && a1[4] == 99 )
            {
              j__strlen(&byte_22EB87B);
              return (char *)&byte_22EB87B;
            }
          }
          else if ( v37 == 100 )
          {
            if ( *((_WORD *)a1 + 1) == 30065 && a1[4] == 111 )
            {
              j__strlen(&byte_22EB883);
              return (char *)&byte_22EB883;
            }
          }
          else if ( v37 == 115 && *((_WORD *)a1 + 1) == 30065 && a1[4] == 111 )
          {
            j__strlen(&byte_22EB887);
            return (char *)&byte_22EB887;
          }
          return nullptr;
        case 's':
          v36 = a1[1];
          if ( v36 == 105 )
          {
            if ( *((_WORD *)a1 + 1) == 28007 && a1[4] == 97 )
            {
              j__strlen(&byte_22EB88B);
              return (char *)&byte_22EB88B;
            }
          }
          else if ( v36 == 122 && *((_WORD *)a1 + 1) == 26988 && a1[4] == 103 )
          {
            j__strlen(&byte_22EB892);
            return (char *)&byte_22EB892;
          }
          return nullptr;
        case 't':
          v35 = a1[1];
          if ( v35 == 105 )
          {
            if ( *((_WORD *)a1 + 1) == 25965 && a1[4] == 115 )
            {
              j__strlen(&byte_22EB898);
              return (char *)&byte_22EB898;
            }
          }
          else if ( v35 == 114 )
          {
            if ( *((_WORD *)a1 + 1) == 25697 && a1[4] == 101 )
            {
LABEL_382:
              j__strlen(&byte_22EB808);
              return (char *)&byte_22EB808;
            }
          }
          else if ( v35 == 104 && *((_WORD *)a1 + 1) == 29797 && a1[4] == 97 )
          {
            j__strlen(&byte_22EB895);
            return (char *)&byte_22EB895;
          }
          break;
        case 'u':
          result = (char *)&unk_22EB89B;
          if ( *(_DWORD *)(a1 + 1) != 1668442467 )
            return nullptr;
          return result;
        case 'y':
          result = (char *)&unk_22EB89E;
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
            j__strlen(&byte_22EB8A4);
            return (char *)&byte_22EB8A4;
          }
          else
          {
            if ( v16 != 116 )
            {
              if ( v16 == 97 && *(_DWORD *)(a1 + 2) == 1702131043 )
              {
                j__strlen(&byte_22EB8A1);
                return (char *)&byte_22EB8A1;
              }
              return nullptr;
            }
            if ( *(_DWORD *)(a1 + 2) != 1701080169 )
              return nullptr;
            j__strlen(&byte_22EB8A7);
            return (char *)&byte_22EB8A7;
          }
        case 'C':
          if ( *(_DWORD *)(a1 + 1) != 1768187235 )
            return nullptr;
          result = (char *)&unk_22EB8B0;
          if ( a1[5] != 108 )
            return nullptr;
          return result;
        case 'E':
          v15 = a1[1];
          if ( v15 != 97 )
          {
            if ( v15 == 103 && *(_DWORD *)(a1 + 2) == 1702257010 )
            {
              j__strlen(&byte_22EB8B6);
              return (char *)&byte_22EB8B6;
            }
            return nullptr;
          }
          if ( *(_DWORD *)(a1 + 2) != 1702131043 )
            return nullptr;
          j__strlen(&byte_22EB8B3);
          return (char *)&byte_22EB8B3;
        case 'I':
          v14 = a1[1];
          if ( v14 != 97 )
          {
            if ( v14 == 103 && *(_DWORD *)(a1 + 2) == 1702257010 )
            {
              j__strlen(&byte_22EB8BC);
              return (char *)&byte_22EB8BC;
            }
            return nullptr;
          }
          if ( *(_DWORD *)(a1 + 2) != 1702131043 )
            return nullptr;
          j__strlen(&byte_22EB8B9);
          return (char *)&byte_22EB8B9;
        case 'L':
          if ( *(_DWORD *)(a1 + 1) != 1684172129 )
            return nullptr;
          result = (char *)&unk_22EB8BF;
          if ( a1[5] != 97 )
            return nullptr;
          return result;
        case 'N':
          if ( *(_DWORD *)(a1 + 1) != 1684826484 )
            return nullptr;
          result = (char *)&unk_22EB8C8;
          if ( a1[5] != 101 )
            return nullptr;
          return result;
        case 'O':
          v12 = a1[1];
          if ( v12 == 103 )
          {
            if ( *(_DWORD *)(a1 + 2) != 1702257010 )
              return nullptr;
            j__strlen(&byte_22EB8CE);
            return (char *)&byte_22EB8CE;
          }
          else
          {
            if ( v12 != 116 )
            {
              if ( v12 == 97 && *(_DWORD *)(a1 + 2) == 1702131043 )
              {
                j__strlen(&byte_22EB8CB);
                return (char *)&byte_22EB8CB;
              }
              return nullptr;
            }
            if ( *(_DWORD *)(a1 + 2) != 1701080169 )
              return nullptr;
            j__strlen(&byte_22EB8D1);
            return (char *)&byte_22EB8D1;
          }
        case 'U':
          v11 = a1[1];
          if ( v11 != 97 )
          {
            if ( v11 == 103 && *(_DWORD *)(a1 + 2) == 1702257010 )
            {
              j__strlen(&byte_22EB8D7);
              return (char *)&byte_22EB8D7;
            }
            return nullptr;
          }
          if ( *(_DWORD *)(a1 + 2) != 1702131043 )
            return nullptr;
          j__strlen(&byte_22EB8D4);
          return (char *)&byte_22EB8D4;
        case 'Y':
          if ( *(_DWORD *)(a1 + 1) != 1953850209 )
            return nullptr;
          result = (char *)&unk_22EB8E0;
          if ( a1[5] != 101 )
            return nullptr;
          return result;
        case 'a':
          v22 = a1[1];
          if ( v22 == 103 )
          {
            if ( *(_DWORD *)(a1 + 2) != 1702257010 )
              return nullptr;
            j__strlen(&byte_22EB8E6);
            return (char *)&byte_22EB8E6;
          }
          else
          {
            if ( v22 != 116 )
            {
              if ( v22 == 97 && *(_DWORD *)(a1 + 2) == 1702131043 )
              {
                j__strlen(&byte_22EB8E3);
                return (char *)&byte_22EB8E3;
              }
              return nullptr;
            }
            if ( *(_DWORD *)(a1 + 2) != 1701080169 )
              return nullptr;
            j__strlen(&byte_22EB8E9);
            return (char *)&byte_22EB8E9;
          }
        case 'c':
          if ( *(_DWORD *)(a1 + 1) != 1768187235 )
            return nullptr;
          result = (char *)&unk_22EB8EC;
          if ( a1[5] != 108 )
            return nullptr;
          return result;
        case 'e':
          v19 = a1[1];
          if ( v19 != 97 )
          {
            if ( v19 == 103 && *(_DWORD *)(a1 + 2) == 1702257010 )
            {
              j__strlen(&byte_22EB8F2);
              return (char *)&byte_22EB8F2;
            }
            return nullptr;
          }
          if ( *(_DWORD *)(a1 + 2) != 1702131043 )
            return nullptr;
          j__strlen(&byte_22EB8EF);
          return (char *)&byte_22EB8EF;
        case 'i':
          v21 = a1[1];
          if ( v21 != 97 )
          {
            if ( v21 == 103 && *(_DWORD *)(a1 + 2) == 1702257010 )
            {
              j__strlen(&byte_22EB8F8);
              return (char *)&byte_22EB8F8;
            }
            return nullptr;
          }
          if ( *(_DWORD *)(a1 + 2) != 1702131043 )
            return nullptr;
          j__strlen(&byte_22EB8F5);
          return (char *)&byte_22EB8F5;
        case 'l':
          v20 = a1[1];
          if ( v20 != 97 )
          {
            if ( v20 == 102 && *(_DWORD *)(a1 + 2) == 1919905644 )
            {
              j__strlen(&byte_22EB8FE);
              return (char *)&byte_22EB8FE;
            }
            return nullptr;
          }
          if ( *(_DWORD *)(a1 + 2) != 1633968749 )
            return nullptr;
          j__strlen(&byte_22EB8FB);
          return (char *)&byte_22EB8FB;
        case 'n':
          if ( *(_DWORD *)(a1 + 1) != 1684826484 )
            return nullptr;
          result = (char *)&unk_22EB902;
          if ( a1[5] != 101 )
            return nullptr;
          return result;
        case 'o':
          v17 = a1[1];
          if ( v17 == 103 )
          {
            if ( *(_DWORD *)(a1 + 2) != 1702257010 )
              return nullptr;
            j__strlen(&byte_22EB908);
            return (char *)&byte_22EB908;
          }
          else
          {
            if ( v17 != 116 )
            {
              if ( v17 == 97 && *(_DWORD *)(a1 + 2) == 1702131043 )
              {
                j__strlen(&byte_22EB905);
                return (char *)&byte_22EB905;
              }
              return nullptr;
            }
            if ( *(_DWORD *)(a1 + 2) != 1701080169 )
              return nullptr;
            j__strlen(&byte_22EB90B);
            return (char *)&byte_22EB90B;
          }
        case 'p':
          if ( *(_DWORD *)(a1 + 1) != 1836283244 )
            return nullptr;
          result = (char *)&unk_22EB914;
          if ( a1[5] != 110 )
            return nullptr;
          return result;
        case 'r':
          if ( *(_DWORD *)(a1 + 1) != 1869573222 )
            return nullptr;
          result = (char *)&unk_22EB91D;
          if ( a1[5] != 114 )
            return nullptr;
          return result;
        case 's':
          if ( *(_DWORD *)(a1 + 1) != 1634559849 )
            return nullptr;
          result = (char *)&unk_22EB927;
          if ( a1[5] != 102 )
            return nullptr;
          return result;
        case 'u':
          v13 = a1[1];
          if ( v13 != 97 )
          {
            if ( v13 == 103 && *(_DWORD *)(a1 + 2) == 1702257010 )
            {
              j__strlen(&byte_22EB92D);
              return (char *)&byte_22EB92D;
            }
            return nullptr;
          }
          if ( *(_DWORD *)(a1 + 2) != 1702131043 )
            return nullptr;
          j__strlen(&byte_22EB92A);
          return (char *)&byte_22EB92A;
        case 'y':
          v18 = a1[1];
          if ( v18 != 97 )
          {
            if ( v18 == 103 && *(_DWORD *)(a1 + 2) == 1702257010 )
            {
              j__strlen(&byte_22EB933);
              return (char *)&byte_22EB933;
            }
            return nullptr;
          }
          if ( *(_DWORD *)(a1 + 2) != 1702131043 )
            return nullptr;
          j__strlen(&byte_22EB930);
          result = (char *)&byte_22EB930;
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
        result = (char *)&unk_22EB941;
        if ( *(_WORD *)(a1 + 5) != 28271 )
          return nullptr;
      }
      else
      {
        if ( v3 != 117 )
        {
          if ( v3 == 85 && *(_DWORD *)(a1 + 1) == 1818850160 )
          {
            result = (char *)&unk_22EB93E;
            if ( *(_WORD *)(a1 + 5) == 28271 )
              return result;
          }
          return nullptr;
        }
        if ( *(_DWORD *)(a1 + 1) != 1818850160 )
          return nullptr;
        result = (char *)&unk_22EB944;
        if ( *(_WORD *)(a1 + 5) != 28271 )
          return nullptr;
      }
      return result;
    default:
      return nullptr;
  }
}
