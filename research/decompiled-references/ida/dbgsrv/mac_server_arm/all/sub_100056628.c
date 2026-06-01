/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100056628
// Address: 0x0000000100056628

//----- (0000000100056628) ----------------------------------------------------
__int64 __fastcall sub_100056628(__int64 a1, char *a2, size_t a3)
{
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  __int64 v11; // x8
  const char *v12; // x8
  char *v13; // x23
  int v14; // w0
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  char *v20; // x21
  unsigned int v21; // w9
  int v22; // w0
  int v23; // w8
  char *v24; // x8
  char *v25; // x9
  int v26; // w10
  __int64 v28; // x0

  sub_100059898();
  v11 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( (unsigned int)v11 > 0xE )
    v12 = "???";
  else
    v12 = off_10009B408[v11];
  v13 = &a2[a3];
  v14 = qsnprintf(a2, a3, "%s ea=%a", v6, v7, v8, v9, v10, (char)v12);
  v20 = &a2[v14];
  v21 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( v21 > 6 )
  {
    if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFFu) <= 8 )
    {
      if ( v21 == 7 )
      {
        v22 = qsnprintf(
                &a2[v14],
                a3 - v14,
                " code=%x can_cont=%d ea=%a info=%s",
                v15,
                v16,
                v17,
                v18,
                v19,
                *(_DWORD *)(a1 + 24));
        goto LABEL_35;
      }
      if ( v21 != 8 )
        goto LABEL_36;
    }
    else
    {
      if ( v21 - 9 < 2 )
        goto LABEL_12;
      if ( v21 != 11 )
        goto LABEL_36;
    }
LABEL_27:
    if ( ((1 << v21) & 0x902) != 0 )
    {
      v22 = qsnprintf(
              &a2[v14],
              a3 - v14,
              " base=%a size=%a rebase=%a name=%s",
              v15,
              v16,
              v17,
              v18,
              v19,
              *(_BYTE *)(a1 + 48));
      goto LABEL_35;
    }
    if ( under_debugger == 1 )
      goto LABEL_44;
    interr(3295);
    goto LABEL_39;
  }
  if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFFu) <= 2 )
  {
    if ( v21 != 1 )
    {
      if ( v21 != 2 )
        goto LABEL_36;
      goto LABEL_22;
    }
    goto LABEL_27;
  }
  if ( v21 != 3 )
  {
    if ( v21 != 4 )
    {
      if ( v21 == 5 )
      {
        v22 = qsnprintf(&a2[v14], a3 - v14, " hea=%a kea=%a", v15, v16, v17, v18, v19, *(_BYTE *)(a1 + 24));
LABEL_35:
        v20 += v22;
      }
LABEL_36:
      qsnprintf(v20, v13 - v20, " pid=%d tid=%d handled=%d", v15, v16, v17, v18, v19, *(_DWORD *)a1);
      return (__int64)a2;
    }
LABEL_22:
    v22 = qsnprintf(&a2[v14], a3 - v14, " exit_code=%d", v15, v16, v17, v18, v19, *(_DWORD *)(a1 + 24));
    goto LABEL_35;
  }
LABEL_12:
  if ( v20 >= v13 )
  {
LABEL_39:
    if ( under_debugger == 1 )
      goto LABEL_44;
    interr(518);
LABEL_41:
    if ( under_debugger != 1 )
    {
      interr(520);
      goto LABEL_43;
    }
LABEL_44:
    __break(1u);
    goto LABEL_45;
  }
  *v20++ = 32;
  if ( v20 >= v13 )
  {
    *(v13 - 1) = 0;
    v20 = v13 - 1;
  }
  if ( v20 >= v13 )
    goto LABEL_41;
  v23 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( (unsigned int)(v23 - 9) < 2 || v23 == 3 )
  {
    if ( *(_QWORD *)(a1 + 32) )
      v24 = *(char **)(a1 + 24);
    else
      v24 = &byte_100075A30;
    v25 = v13 - 1;
    if ( v20 == v13 - 1 )
    {
LABEL_33:
      *v25 = 0;
      v20 = v13 - 1;
    }
    else
    {
      while ( 1 )
      {
        v26 = (unsigned __int8)*v24;
        *v20 = v26;
        if ( !v26 )
          break;
        ++v24;
        if ( ++v20 == v25 )
          goto LABEL_33;
      }
    }
    goto LABEL_36;
  }
LABEL_43:
  if ( under_debugger == 1 )
    goto LABEL_44;
LABEL_45:
  interr(3297);
  return sub_10005698C(v28);
}
// 1000567B0: conditional instruction was optimized away because w9.4 is in (==1|==8|==B)
// 1000567CC: conditional instruction was optimized away because w9.4 is in (==1|==8|==B)
// 1000567E4: conditional instruction was optimized away because w9.4 is in (==1|==8|==B)
// 1000567FC: conditional instruction was optimized away because w9.4 is in (==1|==8|==B)
// 1000566A4: variable 'v6' is possibly undefined
// 1000566A4: variable 'v7' is possibly undefined
// 1000566A4: variable 'v8' is possibly undefined
// 1000566A4: variable 'v9' is possibly undefined
// 1000566A4: variable 'v10' is possibly undefined
// 1000566FC: variable 'v15' is possibly undefined
// 1000566FC: variable 'v16' is possibly undefined
// 1000566FC: variable 'v17' is possibly undefined
// 1000566FC: variable 'v18' is possibly undefined
// 1000566FC: variable 'v19' is possibly undefined
// 100056989: variable 'v28' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 10009B408: using guessed type char *off_10009B408[15];
// 10009D90D: using guessed type char under_debugger;
