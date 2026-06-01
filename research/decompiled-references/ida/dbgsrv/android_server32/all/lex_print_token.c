/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_print_token
// Address: 0x00055B24

//----- (00055B24) --------------------------------------------------------
char *__fastcall lex_print_token(int a1, int a2)
{
  unsigned int v4; // r0
  int v5; // r0
  size_t v6; // r5
  unsigned int v7; // r6
  unsigned int v8; // r2
  unsigned int v9; // r0
  unsigned int v10; // r1
  char v11; // r3
  void **v12; // r6
  unsigned int v13; // r2
  int v14; // r0
  const char *v15; // r1
  int v16; // r0
  size_t v17; // r5
  unsigned int v18; // r6
  unsigned int v19; // r7
  const char *v20; // r5
  int v21; // r2
  const char *v22; // r3
  int v23; // r0
  unsigned int v24; // r6
  const char *v25; // r2
  int v26; // r0
  size_t v27; // r5
  unsigned int v28; // r6
  void *v29; // r0
  const char *v30; // r2
  void *v31; // r0
  const char *v32; // r1
  void *v33; // r0
  int *v34; // r3
  char *v35; // r0
  int v36; // r0
  unsigned int v37; // r6
  void *v38; // r0
  int v40; // [sp+Ch] [bp-414h] BYREF
  char *v41; // [sp+10h] [bp-410h] BYREF
  int v42; // [sp+14h] [bp-40Ch]
  int v43; // [sp+18h] [bp-408h]
  int v44[48]; // [sp+1Ch] [bp-404h] BYREF
  char v45; // [sp+DCh] [bp-344h]
  int v46; // [sp+E0h] [bp-340h]
  int v47; // [sp+E4h] [bp-33Ch]
  int v48; // [sp+E8h] [bp-338h]
  int v49; // [sp+ECh] [bp-334h]
  int v50; // [sp+F0h] [bp-330h]
  char v51; // [sp+F4h] [bp-32Ch]
  int v52; // [sp+F8h] [bp-328h]
  int v53; // [sp+FCh] [bp-324h]
  int v54; // [sp+100h] [bp-320h]
  int v55; // [sp+104h] [bp-31Ch]
  int v56; // [sp+108h] [bp-318h]
  char v57; // [sp+10Ch] [bp-314h]
  int v58; // [sp+110h] [bp-310h]
  int v59; // [sp+114h] [bp-30Ch]
  int v60; // [sp+118h] [bp-308h]
  int v61; // [sp+11Ch] [bp-304h]
  int v62; // [sp+120h] [bp-300h]
  char v63; // [sp+124h] [bp-2FCh]
  char v64; // [sp+41Bh] [bp-5h] BYREF
  int v65; // [sp+41Ch] [bp-4h] BYREF

  v4 = *(unsigned __int16 *)(a2 + 12);
  switch ( *(_WORD *)(a2 + 12) )
  {
    case 1:
      v5 = _strlen_chk("<END>", 6);
      if ( !v5 )
        goto LABEL_66;
      v6 = v5;
      v7 = v5 + 1;
      if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v5 + 1) )
      {
        v31 = qvector_reserve(a1, *(void **)a1, v7, 1u);
        *(_DWORD *)a1 = v31;
      }
      else
      {
        v31 = *(void **)a1;
      }
      *(_DWORD *)(a1 + 4) = v7;
      v32 = "<END>";
      goto LABEL_57;
    case 2:
      goto LABEL_29;
    case 3:
      sub_1DA58(a1, "0x%a", *(_DWORD *)(a2 + 16));
      goto LABEL_68;
    case 4:
      v42 = 0;
      v41 = nullptr;
      v43 = 0;
      v14 = *(_DWORD *)(a2 + 4);
      if ( v14 )
        v15 = *(const char **)a2;
      else
        v15 = &byte_B3CBE;
      v21 = v14 - 1;
      if ( !v14 )
        v21 = 0;
      qstr2user((int)&v41, v15, v21);
      if ( v42 )
        v22 = v41;
      else
        v22 = &byte_B3CBE;
      if ( *(_BYTE *)(a2 + 20) )
        v25 = "L";
      else
        v25 = &byte_A0742;
      sub_1DA58(a1, "%s\"%s\"", v25, v22);
      if ( v41 )
      {
        v42 = 0;
        qfree(v41);
        v43 = 0;
        v41 = nullptr;
      }
      goto LABEL_68;
    case 5:
      v8 = *(_DWORD *)(a2 + 16);
      if ( v8 )
      {
        v9 = 1;
        v10 = 1;
        if ( v8 >> 8 )
          v10 = 4;
        v11 = 8 * v10 - 8;
        v12 = (void **)&v41;
        while ( 1 )
        {
          v13 = v8 >> v11;
          if ( v13 << 24 )
          {
            *(_BYTE *)v12 = v13;
            v12 = (void **)((char *)v12 + 1);
          }
          if ( v10 <= v9 )
            break;
          v11 -= 8;
          v8 = *(_DWORD *)(a2 + 16);
          ++v9;
        }
        *(_BYTE *)v12 = 0;
        str2user((unsigned int)v44, (const char *)&v41, 1024);
        sub_1DA58(a1, "'%s'", (const char *)v44);
      }
      else
      {
        v26 = _strlen_chk("'\\0'", 5);
        if ( v26 )
        {
          v27 = v26;
          v28 = v26 + 1;
          if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v26 + 1) )
          {
            v29 = *(void **)a1;
          }
          else
          {
            v29 = qvector_reserve(a1, *(void **)a1, v28, 1u);
            *(_DWORD *)a1 = v29;
          }
          *(_DWORD *)(a1 + 4) = v28;
          memmove(v29, "'\\0'", v27);
          *(_BYTE *)(*(_DWORD *)a1 + v27) = 0;
        }
        else
        {
          *(_DWORD *)(a1 + 4) = 0;
        }
      }
      goto LABEL_68;
    case 6:
      if ( *(_DWORD *)(a2 + 4) )
        v30 = *(const char **)a2;
      else
        v30 = &byte_B3CBE;
      sub_1DA58(a1, "@type %s", v30);
      goto LABEL_68;
    case 7:
      realtoasc(
        (int)v44,
        1024,
        (_WORD *)(a2 + 24),
        50,
        (int)&_stack_chk_guard,
        (int)&v40,
        v40,
        (int)v41,
        v42,
        v43,
        v44[0],
        v44[1],
        v44[2],
        v44[3],
        v44[4],
        v44[5],
        v44[6],
        v44[7],
        v44[8],
        v44[9],
        v44[10],
        v44[11],
        v44[12],
        v44[13],
        v44[14],
        v44[15],
        v44[16],
        v44[17],
        v44[18],
        v44[19],
        v44[20],
        v44[21],
        v44[22],
        v44[23],
        v44[24],
        v44[25],
        v44[26],
        v44[27],
        v44[28],
        v44[29],
        v44[30],
        v44[31],
        v44[32],
        v44[33],
        v44[34],
        v44[35],
        v44[36],
        v44[37],
        v44[38],
        v44[39],
        v44[40],
        v44[41],
        v44[42],
        v44[43],
        v44[44],
        v44[45],
        v44[46],
        v44[47],
        v45,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
      v16 = _strlen_chk(v44, 1024);
      if ( v16 )
      {
        v17 = v16;
        v18 = v16 + 1;
        if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v16 + 1) )
        {
          v33 = qvector_reserve(a1, *(void **)a1, v18, 1u);
          *(_DWORD *)a1 = v33;
        }
        else
        {
          v33 = *(void **)a1;
        }
        *(_DWORD *)(a1 + 4) = v18;
        memmove(v33, v44, v17);
        *(_BYTE *)(*(_DWORD *)a1 + v17) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 4) = 0;
      }
      goto LABEL_68;
    case 8:
      sub_1DA58(a1, "0x%llxi64", *(_QWORD *)(a2 + 24));
      goto LABEL_68;
    default:
      if ( ((v4 - 128) & 0xFF80) >> 7 >= 7 )
      {
        if ( v4 == 11868 )
        {
          v23 = _strlen_chk("...", 4);
          if ( v23 )
          {
            v6 = v23;
            v24 = v23 + 1;
            if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v23 + 1) )
            {
              v31 = qvector_reserve(a1, *(void **)a1, v24, 1u);
              *(_DWORD *)a1 = v31;
            }
            else
            {
              v31 = *(void **)a1;
            }
            *(_DWORD *)(a1 + 4) = v24;
            v32 = "...";
LABEL_57:
            memmove(v31, v32, v6);
            *(_BYTE *)(*(_DWORD *)a1 + v6) = 0;
            goto LABEL_68;
          }
        }
        else
        {
          v34 = v44;
          if ( v4 >> 8 )
          {
            LOBYTE(v44[0]) = HIBYTE(*(_WORD *)(a2 + 12));
            v34 = (int *)((char *)v44 + 1);
          }
          *(_BYTE *)v34 = v4;
          v35 = (char *)v34 + 1;
          if ( (int *)((char *)v34 + 1) >= &v65 )
          {
            v64 = 0;
            v35 = &v64;
          }
          *v35 = 0;
          v36 = _strlen_chk(v44, 1024);
          if ( v36 )
          {
            v6 = v36;
            v37 = v36 + 1;
            if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v36 + 1) )
            {
              v31 = *(void **)a1;
            }
            else
            {
              v31 = qvector_reserve(a1, *(void **)a1, v37, 1u);
              *(_DWORD *)a1 = v31;
            }
            *(_DWORD *)(a1 + 4) = v37;
            v32 = (const char *)v44;
            goto LABEL_57;
          }
        }
LABEL_66:
        *(_DWORD *)(a1 + 4) = 0;
        goto LABEL_68;
      }
LABEL_29:
      if ( a2 != a1 )
      {
        v19 = *(_DWORD *)(a2 + 4);
        if ( v19 < 2 )
        {
          *(_DWORD *)(a1 + 4) = 0;
        }
        else
        {
          v20 = *(const char **)a2;
          if ( *(_DWORD *)(a1 + 8) < v19 )
          {
            v38 = qvector_reserve(a1, *(void **)a1, v19, 1u);
            *(_DWORD *)a1 = v38;
          }
          else
          {
            v38 = *(void **)a1;
          }
          *(_DWORD *)(a1 + 4) = v19;
          memmove(v38, v20, v19 - 1);
          *(_BYTE *)(*(_DWORD *)a1 + v19 - 1) = 0;
        }
      }
LABEL_68:
      if ( *(_DWORD *)(a1 + 4) )
        return *(char **)a1;
      else
        return &byte_B3CBE;
  }
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
