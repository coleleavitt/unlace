__int64 __fastcall CoinLpIO::is_keyword(CoinLpIO *this, const char *a2)
{
  size_t v2; // rax
  size_t v3; // rdx
  char v4; // bp
  int v5; // r12d
  int v6; // r13d
  int v7; // r13d
  int v8; // r13d
  int v9; // r13d
  int v10; // r14d
  int v11; // ebp
  __int64 result; // rax
  char v13; // bp
  int v14; // r12d
  int v15; // r13d
  int v16; // r13d
  int v17; // r13d
  int v18; // r13d
  int v19; // r13d
  int v20; // ebp
  __int64 v21; // r13
  char v22; // bp
  int v23; // r14d
  char v24; // bp
  int v25; // r12d
  int v26; // r13d
  int v27; // r13d
  int v28; // r13d
  int v29; // r13d
  int v30; // ebp
  int v31; // r12d
  int v32; // ebp
  int v33; // r12d
  int v34; // r12d
  int v35; // r12d
  __int64 v36; // r13
  char v37; // bp
  int v38; // r14d
  __int64 v39; // r13
  char v40; // bp
  int v41; // r14d
  __int64 v42; // r13
  char v43; // bp
  int v44; // r14d
  int v45; // ebp
  int v46; // ebp
  int v47; // ebp
  int v48; // ebp
  int v49; // ebp
  int v50; // ebx
  int v51; // ebp
  int v52; // ebp
  int v53; // r12d
  int v54; // ebp
  int v55; // ebp
  int v56; // ebx
  int v57; // ebp
  char v58; // al
  int v59; // ebp
  char v60; // al
  int v61; // ebp
  char v62; // al
  int v63; // ebx
  int v64; // ebp
  int v65; // r13d
  int v66; // r12d
  char v67; // al
  int v68; // r13d
  char v69; // al
  int v70; // edx
  int v71; // ebp
  int v72; // ebp
  int v73; // ebx
  bool v74; // zf

  v2 = strlen(a2);
  if ( v2 == 5 )
  {
    v24 = *a2;
    if ( !*a2 )
      return 0;
    v25 = v24;
    v26 = tolower(v24);
    if ( tolower(98) == v26 )
    {
      if ( !a2[1] )
        goto LABEL_102;
      v27 = tolower(a2[1]);
      if ( tolower(111) != v27 )
        goto LABEL_50;
      if ( !a2[2] )
        goto LABEL_102;
      v28 = tolower(a2[2]);
      if ( tolower(117) != v28 )
        goto LABEL_50;
      if ( !a2[3] )
        goto LABEL_102;
      v29 = tolower(a2[3]);
      if ( tolower(110) != v29 )
        goto LABEL_50;
      if ( a2[4] )
      {
        v30 = tolower(a2[4]);
        if ( v30 == tolower(100) )
          return 1;
      }
      else
      {
LABEL_102:
        if ( !v24 )
          return 0;
      }
    }
LABEL_50:
    v31 = tolower(v25);
    v32 = tolower(115);
    if ( v32 == v31 )
    {
      if ( a2[1] )
      {
        v33 = tolower(a2[1]);
        if ( tolower(101) == v33 )
        {
          if ( a2[2] )
          {
            v34 = tolower(a2[2]);
            if ( tolower(109) == v34 )
            {
              if ( a2[3] )
              {
                v35 = tolower(a2[3]);
                if ( tolower(105) == v35 )
                {
                  if ( a2[4] )
                    return 4 * (unsigned int)(tolower(a2[4]) == v32);
                }
              }
            }
          }
        }
      }
    }
    return 0;
  }
  v3 = v2;
  switch ( v2 )
  {
    case 6uLL:
      v13 = *a2;
      if ( !*a2 )
        return 0;
      v14 = v13;
      v15 = tolower(v13);
      if ( tolower(98) == v15 )
      {
        if ( !a2[1] )
          goto LABEL_76;
        v16 = tolower(a2[1]);
        if ( v16 != tolower(111) )
          goto LABEL_77;
        if ( !a2[2] )
          goto LABEL_76;
        v17 = tolower(a2[2]);
        if ( v17 != tolower(117) )
          goto LABEL_77;
        if ( !a2[3] )
          goto LABEL_76;
        v18 = tolower(a2[3]);
        if ( v18 != tolower(110) )
          goto LABEL_77;
        if ( !a2[4] )
          goto LABEL_76;
        v19 = tolower(a2[4]);
        if ( v19 != tolower(100) )
          goto LABEL_77;
        if ( a2[5] )
        {
          v20 = tolower(a2[5]);
          if ( v20 == tolower(115) )
            return 1;
        }
        else
        {
LABEL_76:
          if ( !v13 )
            return 0;
        }
      }
LABEL_77:
      v45 = tolower(v14);
      if ( v45 == tolower(98) )
      {
        if ( a2[1] )
        {
          v46 = tolower(a2[1]);
          if ( v46 == tolower(105) )
          {
            if ( a2[2] )
            {
              v47 = tolower(a2[2]);
              if ( tolower(110) == v47 )
              {
                if ( a2[3] )
                {
                  v48 = tolower(a2[3]);
                  if ( tolower(97) == v48 )
                  {
                    if ( a2[4] )
                    {
                      v49 = tolower(a2[4]);
                      if ( tolower(114) == v49 )
                      {
                        if ( a2[5] )
                        {
                          v50 = tolower(a2[5]);
                          return 3 * (unsigned int)(v50 == tolower(121));
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return 0;
    case 7uLL:
      v4 = *a2;
      if ( *a2 )
      {
        v5 = v4;
        v6 = tolower(v4);
        if ( v6 != tolower(105) )
          goto LABEL_89;
        if ( a2[1] )
        {
          v7 = tolower(a2[1]);
          if ( v7 != tolower(110) )
            goto LABEL_89;
          if ( a2[2] )
          {
            v8 = tolower(a2[2]);
            if ( v8 != tolower(116) )
              goto LABEL_89;
            if ( a2[3] )
            {
              v9 = tolower(a2[3]);
              if ( v9 != tolower(101) )
                goto LABEL_89;
              if ( a2[4] )
              {
                v10 = tolower(a2[4]);
                if ( v10 != tolower(103) )
                  goto LABEL_89;
                if ( a2[5] )
                {
                  if ( v9 != tolower(a2[5]) )
                    goto LABEL_89;
                  if ( a2[6] )
                  {
                    v11 = tolower(a2[6]);
                    if ( v11 == tolower(114) )
                      return 2;
LABEL_89:
                    v51 = tolower(v5);
                    if ( v51 == tolower(103) )
                    {
                      if ( a2[1] )
                      {
                        v52 = tolower(a2[1]);
                        if ( v52 == tolower(101) )
                        {
                          if ( a2[2] )
                          {
                            v53 = tolower(a2[2]);
                            if ( v53 == tolower(110) )
                            {
                              if ( a2[3] )
                              {
                                if ( v52 == tolower(a2[3]) )
                                {
                                  if ( a2[4] )
                                  {
                                    v54 = tolower(a2[4]);
                                    if ( v54 == tolower(114) )
                                    {
                                      if ( a2[5] )
                                      {
                                        v55 = tolower(a2[5]);
                                        if ( v55 == tolower(97) )
                                        {
                                          if ( a2[6] )
                                          {
                                            v56 = tolower(a2[6]);
                                            return 2 * (unsigned int)(v56 == tolower(108));
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    return 0;
                  }
                }
              }
            }
          }
        }
        if ( v4 )
          goto LABEL_89;
      }
      return 0;
    case 8uLL:
      v36 = 0;
      while ( 1 )
      {
        v37 = aIntegers_0[v36];
        if ( !a2[v36] )
          break;
        if ( !v37 )
          goto LABEL_65;
        v38 = tolower(a2[v36]);
        if ( v38 != tolower(v37) )
          goto LABEL_65;
        if ( ++v36 == 8 )
          return 2;
      }
      if ( !v37 )
        return 2;
LABEL_65:
      v39 = 0;
      while ( 1 )
      {
        v40 = aGenerals[v39];
        if ( !a2[v39] )
          break;
        if ( !v40 )
          goto LABEL_70;
        v41 = tolower(a2[v39]);
        if ( v41 != tolower(v40) )
          goto LABEL_70;
        if ( ++v39 == 8 )
          return 2;
      }
      if ( !v40 )
        return 2;
LABEL_70:
      v42 = 0;
      while ( 1 )
      {
        v43 = aBinaries[v42];
        if ( !a2[v42] )
          break;
        if ( !v43 )
          return 0;
        v44 = tolower(a2[v42]);
        if ( v44 != tolower(v43) )
          return 0;
        if ( ++v42 == 8 )
          return 3;
      }
      return v43 == 0 ? 3 : 0;
    case 0xFuLL:
      v21 = 0;
      while ( 1 )
      {
        v22 = aSemiContinuous[v21];
        if ( !a2[v21] )
          break;
        if ( !v22 )
          return 0;
        v23 = tolower(a2[v21]);
        if ( v23 != tolower(v22) )
          return 0;
        if ( ++v21 == 15 )
          return 4;
      }
      return v22 == 0 ? 4 : 0;
    case 4uLL:
      if ( *a2 )
      {
        v57 = tolower(*a2);
        if ( v57 == tolower(115) )
        {
          v58 = a2[1];
          if ( v58 )
          {
            v59 = tolower(v58);
            if ( v59 == tolower(101) )
            {
              v60 = a2[2];
              if ( v60 )
              {
                v61 = tolower(v60);
                if ( v61 == tolower(109) )
                {
                  v62 = a2[3];
                  if ( v62 )
                  {
                    v63 = tolower(v62);
                    return 4 * (unsigned int)(v63 == tolower(105));
                  }
                }
              }
            }
          }
        }
      }
      return 0;
    default:
      result = 0;
      if ( v3 == 3 )
      {
        v64 = *a2;
        if ( *a2 )
        {
          v65 = tolower(v64);
          v66 = tolower(115);
          if ( v65 != v66
            || (v67 = a2[1]) == 0
            || (v68 = tolower(v67), v68 != tolower(111))
            || (v69 = a2[2]) == 0
            || (v70 = tolower(v69), result = 5, v70 != v66) )
          {
            v71 = tolower(v64);
            if ( v71 != tolower(101) )
              return 0;
            if ( !a2[1] )
              return 0;
            v72 = tolower(a2[1]);
            if ( v72 != tolower(110) || !a2[2] )
              return 0;
            v73 = tolower(a2[2]);
            v74 = v73 == tolower(100);
            result = 6;
            if ( !v74 )
              return 0;
          }
        }
      }
      break;
  }
  return result;
}

