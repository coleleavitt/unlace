/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_86640
// Address: 0x00086640

//----- (00086640) --------------------------------------------------------
int *__fastcall sub_86640(int a1, char a2)
{
  unsigned __int8 *v2; // r3
  int v4; // r2
  bool v5; // zf
  int v6; // r6
  int *v7; // r0
  int *v8; // r5
  _BOOL4 v9; // r3
  int *result; // r0
  int v11; // r3
  unsigned int *i; // r2
  int v13; // r2
  int v14; // r1
  int v15; // r2
  int v16; // r1
  unsigned int v17; // r3
  unsigned int *v18; // r2
  unsigned int v19; // r3
  __int64 v20; // r2
  int v21; // r1
  int v22; // r0
  int v23; // r0
  _BYTE *v24; // r3
  _BYTE *v25; // r7
  int v26; // r5
  int v27; // r3
  int v28; // r1
  __int64 v29; // kr00_8
  __int64 v30; // r2
  __int64 v31; // r2
  _DWORD *v32; // r5
  __int64 v33; // r2
  __int64 v34; // r2
  __int64 v35; // r2
  _DWORD *v36; // r6
  _BYTE *v37; // r3
  __int64 v38; // r2
  __int64 v39; // r2
  __int64 v40; // r2
  __int64 v41; // r2
  __int64 v42; // r2
  __int64 v43; // r2
  __int64 v44; // r2
  __int64 v45; // r2
  __int64 v46; // r2
  __int64 v47; // r2
  __int64 v48; // r2
  _BYTE *v49; // r6
  int v50; // r1
  int v51; // r3
  int v52; // t1
  bool v53; // zf
  __int64 v54; // kr08_8
  int v55; // r6
  int v56; // r12
  __int64 v57; // r2

  v2 = *(unsigned __int8 **)(a1 + 12);
  v4 = *v2;
  v5 = v4 == 84;
  if ( v4 != 84 )
    v5 = v4 == 71;
  if ( v5 )
  {
    v14 = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 48) = v14 + 20;
    v15 = *v2;
    if ( v15 == 84 )
    {
      *(_DWORD *)(a1 + 12) = v2 + 1;
      if ( v2[1] )
      {
        *(_DWORD *)(a1 + 12) = v2 + 2;
        switch ( v2[1] )
        {
          case 'C':
            v36 = sub_857B4(a1);
            if ( sub_843C4((unsigned __int8 **)(a1 + 12)) < 0 )
              return nullptr;
            v37 = *(_BYTE **)(a1 + 12);
            if ( *v37 != 95 )
              return nullptr;
            *(_DWORD *)(a1 + 12) = v37 + 1;
            v38 = __PAIR64__((unsigned int)v36, (unsigned int)sub_857B4(a1));
            *(_DWORD *)(a1 + 48) += 5;
            result = (int *)sub_841E0(a1, 11, v38);
            break;
          case 'F':
            v35 = (unsigned int)sub_857B4(a1);
            result = (int *)sub_841E0(a1, 14, v35);
            break;
          case 'H':
            v46 = (unsigned int)sub_85450(a1);
            result = (int *)sub_841E0(a1, 20, v46);
            break;
          case 'I':
            v45 = (unsigned int)sub_857B4(a1);
            result = (int *)sub_841E0(a1, 12, v45);
            break;
          case 'J':
            v44 = (unsigned int)sub_857B4(a1);
            result = (int *)sub_841E0(a1, 18, v44);
            break;
          case 'S':
            v43 = (unsigned int)sub_857B4(a1);
            result = (int *)sub_841E0(a1, 13, v43);
            break;
          case 'T':
            *(_DWORD *)(a1 + 48) = v14 + 10;
            v42 = (unsigned int)sub_857B4(a1);
            result = (int *)sub_841E0(a1, 10, v42);
            break;
          case 'V':
            *(_DWORD *)(a1 + 48) = v14 + 15;
            v41 = (unsigned int)sub_857B4(a1);
            result = (int *)sub_841E0(a1, 9, v41);
            break;
          case 'W':
            v40 = (unsigned int)sub_85450(a1);
            result = (int *)sub_841E0(a1, 21, v40);
            break;
          case 'c':
            if ( !sub_84934(a1, 0) || !sub_84934(a1, 0) )
              return nullptr;
            v39 = (unsigned int)sub_86640(a1, 0);
            result = (int *)sub_841E0(a1, 17, v39);
            break;
          case 'h':
            if ( !sub_84934(a1, 104) )
              return nullptr;
            v48 = (unsigned int)sub_86640(a1, 0);
            result = (int *)sub_841E0(a1, 15, v48);
            break;
          case 'v':
            if ( !sub_84934(a1, 118) )
              return nullptr;
            v47 = (unsigned int)sub_86640(a1, 0);
            result = (int *)sub_841E0(a1, 16, v47);
            break;
          default:
            return nullptr;
        }
        return result;
      }
      return nullptr;
    }
    if ( v15 != 71 )
      return nullptr;
    *(_DWORD *)(a1 + 12) = v2 + 1;
    if ( !v2[1] )
      return nullptr;
    *(_DWORD *)(a1 + 12) = v2 + 2;
    switch ( v2[1] )
    {
      case 'A':
        v31 = (unsigned int)sub_86640(a1, 0);
        return (int *)sub_841E0(a1, 23, v31);
      case 'R':
        v32 = sub_85450(a1);
        v33 = __PAIR64__((unsigned int)sub_84420(a1), (unsigned int)v32);
        return (int *)sub_841E0(a1, 22, v33);
      case 'T':
        if ( v2[2] && (*(_DWORD *)(a1 + 12) = v2 + 3, v2[2] == 110) )
        {
          v57 = (unsigned int)sub_86640(a1, 0);
          return (int *)sub_841E0(a1, 73, v57);
        }
        else
        {
          v30 = (unsigned int)sub_86640(a1, 0);
          return (int *)sub_841E0(a1, 72, v30);
        }
      case 'V':
        v34 = (unsigned int)sub_85450(a1);
        return (int *)sub_841E0(a1, 19, v34);
      case 'r':
        v23 = sub_843C4((unsigned __int8 **)(a1 + 12));
        if ( v23 <= 1 )
          return nullptr;
        v24 = *(_BYTE **)(a1 + 12);
        if ( !*v24 )
          return nullptr;
        v25 = v24 + 1;
        *(_DWORD *)(a1 + 12) = v24 + 1;
        if ( *v24 != 95 )
          return nullptr;
        LODWORD(v20) = 0;
        v26 = v23 - 1;
        break;
      default:
        return nullptr;
    }
    while ( 1 )
    {
      if ( !*v25 )
        return nullptr;
      if ( *v25 == 36 )
      {
        v27 = (unsigned __int8)v25[1];
        switch ( v27 )
        {
          case 'S':
            v28 = 47;
            break;
          case '_':
            v28 = 46;
            break;
          case '$':
            v28 = 36;
            break;
          default:
            return nullptr;
        }
        v29 = *(_QWORD *)(a1 + 20);
        v25 = (_BYTE *)(*(_DWORD *)(a1 + 12) + 2);
        if ( (int)v29 >= SHIDWORD(v29) )
        {
          *(_DWORD *)(a1 + 12) = v25;
          return nullptr;
        }
        v26 -= 2;
        HIDWORD(v20) = *(_DWORD *)(a1 + 16) + 16 * v29;
        *(_DWORD *)(HIDWORD(v20) + 4) = 0;
        *(_DWORD *)(a1 + 20) = v29 + 1;
        *(_DWORD *)HIDWORD(v20) = 64;
        *(_DWORD *)(HIDWORD(v20) + 8) = v28;
        *(_DWORD *)(a1 + 12) = v25;
      }
      else
      {
        v49 = v25;
        v50 = 0;
        do
        {
          if ( ++v50 >= v26 )
            break;
          v52 = (unsigned __int8)*++v49;
          v51 = v52;
          v53 = v52 == 36;
          if ( v52 != 36 )
            v53 = v51 == 0;
        }
        while ( !v53 );
        v54 = *(_QWORD *)(a1 + 20);
        if ( (int)v54 >= SHIDWORD(v54) )
        {
          v8 = nullptr;
          *(_DWORD *)(a1 + 12) += v50;
          return v8;
        }
        v55 = *(_DWORD *)(a1 + 16);
        v56 = *(_DWORD *)(a1 + 12);
        *(_DWORD *)(a1 + 20) = v54 + 1;
        v26 -= v50;
        HIDWORD(v20) = v55 + 16 * v54;
        *(_QWORD *)HIDWORD(v20) = 0;
        *(_DWORD *)(HIDWORD(v20) + 8) = v25;
        v25 = (_BYTE *)(v56 + v50);
        *(_DWORD *)(HIDWORD(v20) + 12) = v50;
        *(_DWORD *)(a1 + 12) = v56 + v50;
      }
      if ( (_DWORD)v20 )
      {
        LODWORD(v20) = sub_841E0(a1, 63, v20);
        if ( !(_DWORD)v20 )
          return nullptr;
      }
      else
      {
        LODWORD(v20) = HIDWORD(v20);
      }
      if ( v26 <= 0 )
      {
        v22 = a1;
        HIDWORD(v20) = 0;
        v21 = 62;
        return (int *)sub_841E0(v22, v21, v20);
      }
    }
  }
  v6 = a2 & 1;
  v7 = sub_85450(a1);
  if ( !v7 )
    v6 = 0;
  v8 = v7;
  if ( v6 && (*(_DWORD *)(a1 + 8) & 1) == 0 )
  {
    v11 = *v7;
    if ( (unsigned int)(*v7 - 28) <= 4 )
    {
      do
      {
        v8 = (int *)v8[2];
        v11 = *v8;
      }
      while ( (unsigned int)(*v8 - 28) <= 4 );
    }
    if ( v11 == 2 )
    {
      for ( i = (unsigned int *)v8[3]; sub_843A4(*i); i = *(unsigned int **)(v13 + 8) )
        ;
      v8[3] = v13;
    }
    return v8;
  }
  v9 = **(unsigned __int8 **)(a1 + 12) == 69;
  if ( !**(_BYTE **)(a1 + 12) )
    v9 = 1;
  if ( !v7 )
    v9 = 1;
  if ( v9 )
    return v8;
  v16 = (int)v7;
  while ( 1 )
  {
    v17 = *(_DWORD *)v16;
    if ( *(_DWORD *)v16 <= 0x20u )
      break;
    if ( v17 != 76 && (v17 < 0x4C || v17 - 78 > 1) )
      goto LABEL_40;
LABEL_47:
    v16 = *(_DWORD *)(v16 + 8);
    if ( !v16 )
      goto LABEL_41;
  }
  if ( v17 >= 0x1C )
    goto LABEL_47;
  if ( v17 == 4 )
  {
    v18 = *(unsigned int **)(v16 + 8);
    if ( !v18 )
      goto LABEL_38;
    while ( 1 )
    {
      v19 = *v18;
      if ( *v18 > 8 )
        break;
      if ( v19 >= 7 )
        goto LABEL_40;
      if ( *v18 - 1 <= 1 )
      {
        v18 = (unsigned int *)v18[3];
        if ( v18 )
          continue;
      }
      goto LABEL_38;
    }
    if ( v19 != 52 )
    {
LABEL_38:
      v16 = 1;
      goto LABEL_41;
    }
  }
LABEL_40:
  v16 = 0;
LABEL_41:
  v20 = __PAIR64__(sub_862A4(a1, v16), (unsigned int)v7);
  v21 = 3;
  v22 = a1;
  return (int *)sub_841E0(v22, v21, v20);
}
// 866B0: variable 'v13' is possibly undefined
