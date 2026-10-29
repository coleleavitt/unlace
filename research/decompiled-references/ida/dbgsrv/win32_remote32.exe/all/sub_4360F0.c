/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4360F0
// Address: 0x004360F0

//----- (004360F0) --------------------------------------------------------
int __userpurge sub_4360F0@<eax>(int a1@<ecx>, void **a2@<ebx>, __m128i a3@<xmm0>, int a4, int a5, _DWORD *a6)
{
  bool v7; // zf
  char *v8; // ecx
  char i; // al
  _BYTE *v11; // eax
  _BYTE *v12; // eax
  unsigned __int8 v13; // bl
  char *v14; // edx
  _BYTE *v15; // eax
  unsigned int v16; // eax
  int v17; // edx
  _BYTE *v18; // ecx
  int v19; // eax
  int v20; // edx
  int result; // eax
  char v22; // al
  char v23; // al
  int v24; // ecx
  _BYTE *v25; // eax
  __int16 v26; // ax
  char v27; // dl
  _BYTE *v28; // eax
  unsigned __int8 *v29; // eax
  char v30; // al
  unsigned __int8 v31; // bl
  char v32; // al
  unsigned __int8 *v33; // eax
  _BYTE *v34; // ebx
  _BYTE *v35; // ecx
  char v36; // al
  unsigned int v37; // eax
  unsigned __int8 *v38; // eax
  unsigned __int8 *v39; // eax
  _BYTE *v40; // ecx
  char v41; // dl
  char v42; // dl
  int v43; // eax
  unsigned int v44; // eax
  bool v45; // cl
  __int16 v46; // ax
  char *v47; // eax
  char v48; // cl
  char **v49; // edx
  char *v50; // ebx
  int v51; // ebx
  int v52; // eax
  int v53; // ebx
  unsigned int v54; // eax
  char v55; // al
  unsigned __int8 **v56; // ecx
  int v57; // ebx
  unsigned __int8 v58; // dl
  _BYTE *v59; // eax
  char *v60; // edx
  char v61; // cl
  _BYTE *v62; // eax
  __m128i v63; // [esp-4h] [ebp-2Ch]
  unsigned int v64; // [esp-4h] [ebp-2Ch]
  unsigned int v65; // [esp+10h] [ebp-18h]
  char *v66; // [esp+14h] [ebp-14h]
  _BYTE *v67; // [esp+14h] [ebp-14h]
  unsigned int v68; // [esp+14h] [ebp-14h]
  unsigned __int8 v69; // [esp+18h] [ebp-10h]
  unsigned __int8 v70; // [esp+18h] [ebp-10h]
  _DWORD *v71; // [esp+30h] [ebp+8h]
  unsigned int v72; // [esp+30h] [ebp+8h]
  unsigned __int8 *v73; // [esp+34h] [ebp+Ch]
  int v74; // [esp+34h] [ebp+Ch]
  bool v75; // [esp+37h] [ebp+Fh]
  int j; // [esp+38h] [ebp+10h]
  char *v77; // [esp+38h] [ebp+10h]
  char v78; // [esp+3Bh] [ebp+13h]
  char v79; // [esp+3Bh] [ebp+13h]

  v7 = *(_BYTE *)(a1 + 80) == 0;
  v8 = *(char **)(a1 + 4);
  *(_DWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 12) = 0;
  if ( v7 )
    goto LABEL_12;
  do
  {
    while ( 1 )
    {
      for ( i = *v8; *v8 != 42; i = *v8 )
      {
        if ( !i )
          goto LABEL_46;
        *(_DWORD *)(a1 + 4) = ++v8;
      }
      *(_DWORD *)(a1 + 4) = ++v8;
      if ( *v8 != 47 )
        break;
      if ( (*(_BYTE *)(a1 + 324) & 1) != 0 )
        goto LABEL_10;
    }
  }
  while ( *v8 != 41 || (*(_DWORD *)(a1 + 324) & 2) == 0 );
LABEL_10:
  v11 = v8 + 1;
  *(_BYTE *)(a1 + 80) = 0;
LABEL_11:
  *(_DWORD *)(a1 + 4) = v11;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          do
          {
LABEL_12:
            v12 = *(_BYTE **)(a1 + 4);
            LOBYTE(a2) = *v12;
            *(_DWORD *)(a1 + 4) = v12 + 1;
          }
          while ( (_BYTE)a2 == 32 );
        }
        while ( (_BYTE)a2 == 9 || (_BYTE)a2 == 10 || (_BYTE)a2 == 13 || (_BYTE)a2 == 11 || (_BYTE)a2 == 12 );
        if ( a6 )
          *a6 = *(_DWORD *)(a1 + 160);
        if ( !(_BYTE)a2 )
          goto LABEL_46;
        if ( (_BYTE)a2 != 47 )
          break;
        if ( **(_BYTE **)(a1 + 4) == 47 )
        {
          if ( (*(_DWORD *)(a1 + 324) & 4) == 0 )
          {
            *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 4) - 1;
            goto LABEL_37;
          }
          goto LABEL_46;
        }
LABEL_36:
        *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 4) - 1;
        if ( (char)a2 >= 0 )
          goto LABEL_37;
LABEL_38:
        if ( (_BYTE)a2 == 95 )
          goto LABEL_43;
        if ( (_BYTE)a2 != 36 )
        {
          if ( sub_464F10("?(),.[\\]`{};~@", (unsigned __int8)a2) )
          {
            *(_WORD *)(a4 + 12) = (unsigned __int8)a2;
            if ( (_BYTE)a2 == 46 )
            {
              if ( (*(_BYTE *)(a1 + 196) & 1) == 0
                || (v23 = **(_BYTE **)(a1 + 4), v23 < 0)
                || !sub_46B760((unsigned __int16)a2, (unsigned __int8)v23)
                || (v24 = *(_DWORD *)(a1 + 4), (unsigned int)(v24 - 1) > *(_DWORD *)a1)
                && sub_435360(*(_BYTE *)(v24 - 2)) )
              {
                v25 = *(_BYTE **)(a1 + 4);
                if ( *v25 == 46 && v25[1] == 46 )
                {
                  *(_DWORD *)(a1 + 4) = v25 + 2;
                  v26 = 11868;
                  goto LABEL_235;
                }
                return 0;
              }
LABEL_92:
              v29 = (unsigned __int8 *)(*(_DWORD *)(a1 + 4) - 1);
              v65 = (unsigned int)v29;
              if ( (*(_BYTE *)(a1 + 196) & 1) != 0 )
              {
                for ( j = 0; ; j |= 2u )
                {
                  while ( 1 )
                  {
                    do
                    {
                      BYTE1(a2) = *v29;
                      v73 = v29 + 1;
                      v7 = !sub_422E10((unsigned __int16)a2, *v29);
                      v29 = v73;
                    }
                    while ( !v7 );
                    if ( BYTE1(a2) != 46 )
                      break;
                    if ( j )
                      goto LABEL_113;
                    j = 1;
                  }
                  v30 = sub_4692E4(BYTE1(a2));
                  if ( v30 != 69 )
                    break;
                  if ( (j & 2) != 0 )
                    goto LABEL_113;
                  v29 = v73;
                  if ( *v73 == 45 || *v73 == 43 )
                    v29 = v73 + 1;
                }
                if ( !j )
                  goto LABEL_121;
                if ( v30 == 76 || v30 == 70 )
                {
                  v31 = *v73;
                  if ( sub_435360(*v73) || v31 == 46 )
                  {
LABEL_113:
                    v34 = (_BYTE *)(*(_DWORD *)(a1 + 4) - 1);
                    for ( *(_DWORD *)(a1 + 4) = v34; ; v34 = *(_BYTE **)(a1 + 4) )
                    {
                      LOBYTE(v34) = *v34;
                      if ( ((char)v34 < 0 || !sub_46B640((int)v34, (unsigned __int8)v34))
                        && (_BYTE)v34 != 95
                        && (_BYTE)v34 != 36
                        && **(_BYTE **)(a1 + 4) != 46 )
                      {
                        break;
                      }
                      ++*(_DWORD *)(a1 + 4);
                    }
                    return sub_45CC20(21);
                  }
                }
                --*(_DWORD *)(a1 + 4);
                if ( sub_45E530((char **)(a1 + 4), a4 + 24) != 1 )
                  return sub_45CC20(22);
                *(_WORD *)(a4 + 12) = 7;
                LOBYTE(a2) = **(_BYTE **)(a1 + 4);
                v69 = (unsigned __int8)a2;
                v32 = sub_4692E4((unsigned __int8)a2);
                if ( v32 == 70 || v32 == 76 )
                {
                  v33 = (unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 1);
                  *(_DWORD *)(a1 + 4) = v33;
                  LOBYTE(a2) = *v33;
                  v69 = *v33;
                }
                goto LABEL_181;
              }
LABEL_121:
              v74 = 10;
              v68 = (unsigned __int8)a2 - 48;
              v72 = __CFADD__((unsigned __int8)a2, -48) - 1;
              if ( (_BYTE)a2 == 48 )
              {
                v35 = *(_BYTE **)(a1 + 4);
                v74 = 8;
                switch ( *v35 )
                {
                  case 'B':
                  case 'b':
                    v74 = 2;
                    *(_DWORD *)(a1 + 4) = v35 + 1;
                    v36 = v35[1];
                    if ( v36 == 48 || v36 == 49 )
                      goto LABEL_128;
                    sub_45CAD0(0, v36);
                    result = sub_45CC20(20);
                    break;
                  case 'X':
                  case 'x':
                    v74 = 16;
                    *(_DWORD *)(a1 + 4) = v35 + 1;
                    if ( sub_437820((unsigned __int16)a2, v35[1]) )
                      goto LABEL_128;
                    sub_45CAD0(0, **(char **)(a1 + 4));
                    ++*(_DWORD *)(a1 + 4);
                    result = sub_45CC20(20);
                    break;
                  default:
                    goto LABEL_128;
                }
                return result;
              }
LABEL_128:
              while ( 1 )
              {
                LOBYTE(a2) = **(_BYTE **)(a1 + 4);
                v69 = (unsigned __int8)a2;
                if ( (char)a2 < 0 || !sub_46B880((unsigned __int16)a2, (unsigned __int8)a2) )
                  break;
                ++*(_DWORD *)(a1 + 4);
                if ( (unsigned __int8)a2 > 0x39u && v74 == 10
                  || (unsigned __int8)a2 > 0x37u && v74 == 8
                  || (unsigned __int8)a2 > 0x31u && v74 == 2 )
                {
                  sub_45CAD0(0, (char)a2);
                  return sub_45CC20(20);
                }
                if ( (unsigned __int8)a2 > 0x39u )
                {
                  if ( (unsigned __int8)a2 >= 0x61u )
                    LOBYTE(a2) = (_BYTE)a2 - 32;
                  LOBYTE(a2) = (_BYTE)a2 - 7;
                }
                v37 = ((unsigned __int8)a2 + __PAIR64__(v72, v68) * (unsigned int)v74 - 48) >> 32;
                v68 = (unsigned __int8)a2 + v68 * v74 - 48;
                v72 = v37;
              }
              BYTE1(a2) = 0;
              v78 = 1;
              v75 = v74 != 10;
              while ( 1 )
              {
                while ( (_BYTE)a2 == 117 || (_BYTE)a2 == 85 )
                {
                  ++*(_DWORD *)(a1 + 4);
                  v78 = 0;
                  v75 = 1;
                  LOBYTE(a2) = **(_BYTE **)(a1 + 4);
                  v69 = (unsigned __int8)a2;
                }
                if ( (_BYTE)a2 != 108 && (_BYTE)a2 != 76 )
                  break;
                if ( BYTE1(a2) )
                  return sub_45CC20(23);
                v38 = (unsigned __int8 *)(*(_DWORD *)(a1 + 4) + 1);
                *(_DWORD *)(a1 + 4) = v38;
                LOBYTE(a2) = *v38;
                v69 = *v38;
                if ( *v38 == 108 || (_BYTE)a2 == 76 )
                {
                  v39 = v38 + 1;
                  BYTE1(a2) = 1;
                  *(_DWORD *)(a1 + 4) = v39;
                  LOBYTE(a2) = *v39;
                  v69 = *v39;
                }
              }
              if ( sub_4692B4(**(unsigned __int8 **)(a1 + 4)) == 105 )
              {
                v40 = *(_BYTE **)(a1 + 4);
                v41 = v40[1];
                if ( v41 == 51 && v40[2] == 50 )
                {
                  v42 = 0;
                  goto LABEL_158;
                }
                if ( v41 == 54 )
                {
                  v42 = 1;
                  if ( v40[2] == 52 )
                  {
LABEL_158:
                    BYTE1(a2) = v42;
                    *(_DWORD *)(a1 + 4) = v40 + 3;
                    LOBYTE(a2) = v40[3];
                    v69 = (unsigned __int8)a2;
                  }
                }
              }
              if ( (*(_BYTE *)(a1 + 196) & 8) == 0 )
              {
                v44 = v68;
                if ( v72 )
                  BYTE1(a2) = 1;
                v45 = 0;
                goto LABEL_177;
              }
              v43 = 0;
              if ( !BYTE1(a2) )
              {
                if ( v78 && !v72 && v68 <= 0x7FFFFFFF )
                {
                  v44 = v68;
                  v45 = 0;
LABEL_177:
                  *(_BYTE *)(a4 + 20) = v45;
                  if ( BYTE1(a2) )
                  {
                    *(_DWORD *)(a4 + 24) = v44;
                    *(_DWORD *)(a4 + 28) = v72;
                    v46 = 8;
                  }
                  else
                  {
                    *(_DWORD *)(a4 + 16) = v44;
                    v46 = 3;
                  }
                  *(_WORD *)(a4 + 12) = v46;
LABEL_181:
                  if ( (*(_BYTE *)(a1 + 196) & 2) == 0
                    || !sub_435360(v69) && (_BYTE)a2 != 34 && (_BYTE)a2 != 39 && (_BYTE)a2 != 46 )
                  {
                    v64 = *(_DWORD *)(a1 + 4) - v65;
                    *(_DWORD *)(a1 + 20) = 0;
                    sub_4043A0(a1 + 16, v65, v64);
                    return 0;
                  }
                  return sub_45CC20(23);
                }
                if ( v75 && !v72 )
                {
                  v44 = v68;
                  v45 = 1;
                  goto LABEL_177;
                }
              }
              BYTE1(a2) = 1;
              if ( v78 && v72 <= 0x7FFFFFFF )
              {
                v44 = v68;
                v45 = 0;
              }
              else
              {
                if ( v75 )
                  v43 = 1;
                v7 = v43 == -1;
                v44 = v68;
                v45 = !v7;
              }
              goto LABEL_177;
            }
            if ( (_BYTE)a2 != 40 || **(_BYTE **)(a1 + 4) != 42 || (*(_DWORD *)(a1 + 324) & 2) == 0 )
              return 0;
LABEL_81:
            ++*(_DWORD *)(a1 + 4);
            *(_BYTE *)(a1 + 80) = 1;
            return sub_4360F0(a4, a5, a6);
          }
          if ( sub_464F10("!%&*+-/<=>^|:", (unsigned __int8)a2) )
          {
            *(_WORD *)(a4 + 12) = (unsigned __int8)a2;
            v27 = **(_BYTE **)(a1 + 4);
            if ( v27 == 61 )
            {
              *(_WORD *)(a4 + 12) = ((unsigned __int8)a2 << 8) + 61;
              ++*(_DWORD *)(a1 + 4);
              return 0;
            }
            if ( (_BYTE)a2 == 60
              || (_BYTE)a2 == 62
              || (_BYTE)a2 == 38
              || (_BYTE)a2 == 124
              || (_BYTE)a2 == 43
              || (_BYTE)a2 == 45
              || (_BYTE)a2 == 58 )
            {
              if ( v27 == (unsigned __int8)a2 )
              {
                *(_WORD *)(a4 + 12) = 257 * (unsigned __int8)a2;
                v28 = (_BYTE *)(*(_DWORD *)(a1 + 4) + 1);
                *(_DWORD *)(a1 + 4) = v28;
                if ( ((_BYTE)a2 == 62 || (_BYTE)a2 == 60) && *v28 == 61 )
                {
                  *(_WORD *)(a4 + 12) += 61;
                  ++*(_DWORD *)(a1 + 4);
                }
              }
              else if ( (_BYTE)a2 == 45 && v27 == 62 )
              {
                *(_WORD *)(a4 + 12) = 11582;
                ++*(_DWORD *)(a1 + 4);
              }
              return 0;
            }
            if ( (_BYTE)a2 != 47 || v27 != 42 || (*(_BYTE *)(a1 + 324) & 1) == 0 )
              return 0;
            goto LABEL_81;
          }
          if ( (char)a2 >= 0 && sub_46B760((unsigned __int16)a2, (unsigned __int8)a2) )
            goto LABEL_92;
          if ( (_BYTE)a2 != 34 )
          {
            if ( (_BYTE)a2 != 39 )
            {
              if ( (_BYTE)a2 == 35 && (v60 = *(char **)(a1 + 4), v61 = *v60, (unsigned __int8)(*v60 + 0x80) <= 0x7Eu) )
              {
                if ( *(_DWORD *)(a1 + 32) )
                {
                  *(_DWORD *)(a1 + 4) = v60 + 1;
                  *(_WORD *)(a4 + 12) = 4;
                  *(_BYTE *)(a4 + 20) = 0;
                  *(_DWORD *)(a4 + 4) = 0;
                  v70 = v61 + 0x80;
                  if ( *(_DWORD *)(a4 + 8) < 0x400u )
                    *(_DWORD *)a4 = sub_453B00(a4, *(void **)a4, 0x400u, 1u);
                  sub_438310((_DWORD *)a1, a4, v70, *(_DWORD *)(a1 + 40));
                  return 0;
                }
                sub_45CAD0(0, v61);
                return sub_45CC20(27);
              }
              else
              {
LABEL_51:
                sub_45CAD0(0, (char)a2);
                return sub_45CC20(27);
              }
            }
LABEL_212:
            *(_DWORD *)(a4 + 16) = 0;
            *(_WORD *)(a4 + 12) = 5;
            v56 = (unsigned __int8 **)(a1 + 4);
            v57 = 0;
            while ( 1 )
            {
              v58 = **v56;
              if ( v58 == 39 )
                break;
              if ( !v58 )
                return sub_45CC20(26);
              ++*v56;
              if ( v58 == 92 )
              {
                v63.m128i_i32[0] = (__int32)v56;
                v58 = sub_452CA0(v63);
              }
              ++v57;
              *(_DWORD *)(a4 + 16) = v58 | (*(_DWORD *)(a4 + 16) << 8);
              v56 = (unsigned __int8 **)(a1 + 4);
              if ( v57 >= 4 )
                goto LABEL_221;
            }
            if ( v57 )
            {
LABEL_221:
              v59 = *(_BYTE **)(a1 + 4);
              if ( *v59 == 39 )
              {
                *(_DWORD *)(a1 + 4) = v59 + 1;
                if ( v57 == 1 )
                  *(_DWORD *)(a4 + 16) = *(char *)(a4 + 16);
                return 0;
              }
            }
            return sub_45CC20(26);
          }
          v22 = 0;
LABEL_190:
          *(_BYTE *)(a4 + 20) = v22;
          *(_WORD *)(a4 + 12) = 4;
          *(_DWORD *)(a4 + 4) = 0;
          if ( *(_DWORD *)(a4 + 8) < 0x400u )
            *(_DWORD *)a4 = sub_453B00(a4, *(void **)a4, 0x400u, 1u);
          v47 = *(char **)(a1 + 4);
          v77 = v47;
          v48 = *v47;
          if ( *v47 == 34 )
          {
LABEL_210:
            *(_DWORD *)(a1 + 4) = v47 + 1;
            return 0;
          }
          if ( !v48 )
            return sub_45CC20(24);
          v49 = (char **)(a1 + 4);
          while ( 2 )
          {
            v50 = v47 + 1;
            if ( v48 == 92 )
            {
              if ( (*(_BYTE *)(a1 + 196) & 0x10) != 0 )
              {
                if ( !*v50 )
                  return sub_45CC20(24);
                v51 = *(_DWORD *)(a4 + 4) != 0 ? *(_DWORD *)(a4 + 4) - 1 : 0;
                v52 = v51 + 3;
                if ( (unsigned int)(v51 + 3) > *(_DWORD *)(a4 + 8) )
                {
                  *(_DWORD *)a4 = sub_453B00(a4, *(void **)a4, v51 + 3, 1u);
                  v49 = (char **)(a1 + 4);
                  v52 = v51 + 3;
                }
                *(_DWORD *)(a4 + 4) = v52;
                *(_BYTE *)(v51 + *(_DWORD *)a4 + 2) = 0;
                *(_WORD *)(v51 + *(_DWORD *)a4) = *(_WORD *)v77;
                *v49 += 2;
LABEL_207:
                v47 = *v49;
                v48 = **v49;
                if ( v48 == 34 )
                  goto LABEL_210;
                v77 = *v49;
                if ( !v48 )
                  return sub_45CC20(24);
                continue;
              }
              v63.m128i_i32[0] = (__int32)v49;
              *v49 = v50;
              v79 = sub_452CA0(v63);
              v53 = *(_DWORD *)(a4 + 4) != 0 ? *(_DWORD *)(a4 + 4) - 1 : 0;
              v54 = v53 + 2;
              if ( (unsigned int)(v53 + 2) > *(_DWORD *)(a4 + 8) )
              {
LABEL_204:
                *(_DWORD *)a4 = sub_453B00(a4, *(void **)a4, v54, 1u);
                v54 = v53 + 2;
              }
              v49 = (char **)(a1 + 4);
            }
            else
            {
              v55 = *v47;
              *v49 = v50;
              v79 = v55;
              v53 = *(_DWORD *)(a4 + 4) != 0 ? *(_DWORD *)(a4 + 4) - 1 : 0;
              v54 = v53 + 2;
              if ( (unsigned int)(v53 + 2) > *(_DWORD *)(a4 + 8) )
                goto LABEL_204;
            }
            break;
          }
          *(_DWORD *)(a4 + 4) = v54;
          *(_BYTE *)(v53 + *(_DWORD *)a4) = v79;
          *(_BYTE *)(*(_DWORD *)a4 + v53 + 1) = 0;
          goto LABEL_207;
        }
LABEL_40:
        if ( (_BYTE)a2 == 76 )
        {
          v18 = *(_BYTE **)(a1 + 4);
          if ( *v18 == 34 )
          {
            *(_DWORD *)(a1 + 4) = v18 + 1;
            v22 = 1;
            goto LABEL_190;
          }
          if ( *v18 == 39 )
          {
            *(_DWORD *)(a1 + 4) = v18 + 1;
            *(_BYTE *)(a4 + 20) = 1;
            goto LABEL_212;
          }
        }
LABEL_43:
        v19 = sub_4373C0((_DWORD *)a1, (unsigned __int16)a2, a3, 0, a4);
        if ( v19 == -1 )
          return sub_45C9E0();
        if ( v19 != 1 )
          return 0;
      }
      if ( (_BYTE)a2 == 59 )
        break;
      if ( (unsigned __int8)((_BYTE)a2 + 0x80) > 0x7Eu )
        goto LABEL_36;
      if ( !*(_DWORD *)(a1 + 32) )
        goto LABEL_51;
      v13 = (_BYTE)a2 + 0x80;
      v14 = *(char **)(a1 + 28);
      v71 = v14;
      v66 = &v14[28 * *(_DWORD *)(a1 + 40)];
      if ( (unsigned int)v13 < *((_DWORD *)v66 + 1) )
      {
        v15 = *(_BYTE **)(*(_DWORD *)v66 + 12 * v13);
        v67 = v15;
        if ( v15 )
        {
          if ( *v15 )
          {
            a2 = (void **)(a1 + 28);
            v16 = *(_DWORD *)(a1 + 32) + 1;
            if ( v16 > *(_DWORD *)(a1 + 36) )
            {
              v71 = sub_453B00(a1 + 28, v14, v16, 0x1Cu);
              *a2 = v71;
            }
            v17 = 7 * *(_DWORD *)(a1 + 32);
            v71[v17] = 0;
            v71[v17 + 1] = 0;
            v71[v17 + 2] = 0;
            ++*(_DWORD *)(a1 + 32);
            v71[v17 + 3] = *(_DWORD *)a1;
            v71[v17 + 4] = *(_DWORD *)(a1 + 4);
            v71[v17 + 6] = *(_DWORD *)(a1 + 40);
            v71[v17 + 5] = 0;
            *(_DWORD *)(a1 + 40) = *((_DWORD *)*a2 + 7 * *(_DWORD *)(a1 + 40) + 6);
            v11 = v67;
            *(_DWORD *)a1 = v67;
            goto LABEL_11;
          }
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 324) & 8) == 0 )
    {
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 4) - 1;
LABEL_37:
      if ( sub_46B6D0((unsigned __int16)a2, (unsigned __int8)a2) )
        goto LABEL_40;
      goto LABEL_38;
    }
LABEL_46:
    v20 = *(_DWORD *)(a1 + 32);
    if ( v20 == a5 )
      break;
    a2 = *(void ***)(a1 + 28);
    *(_DWORD *)a1 = a2[7 * v20 - 4];
    *(_DWORD *)(a1 + 4) = a2[7 * v20 - 3];
    *(_DWORD *)(a1 + 40) = a2[7 * v20 - 1];
    if ( v20 )
    {
      *(_DWORD *)(a1 + 32) = v20 - 1;
      a2 += 7 * v20 - 7;
      if ( *a2 )
      {
        sub_415F90(a2, 0);
        sub_453A20(*a2);
        *a2 = nullptr;
        a2[2] = nullptr;
      }
    }
  }
  v62 = (_BYTE *)(*(_DWORD *)(a1 + 4) - 1);
  if ( !*v62 )
    *(_DWORD *)(a1 + 4) = v62;
  v26 = 1;
LABEL_235:
  *(_WORD *)(a4 + 12) = v26;
  return 0;
}
// 436B63: variable 'v63' is possibly undefined
