/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007743C
// Address: 0x000000010007743C

//----- (000000010007743C) ----------------------------------------------------
__int64 __fastcall sub_10007743C(_QWORD *a1, char **a2)
{
  unsigned __int64 v4; // x8
  int v5; // w21
  __int64 v6; // x23
  int v7; // w8
  __int64 v8; // x9
  char *v9; // x10
  __int64 v10; // x10
  int v11; // w10
  int v12; // w1
  const char *v13; // x0
  int v14; // w0
  int v15; // w19
  rlim_t v16; // x20
  unsigned __int64 v17; // x8
  unsigned __int64 v18; // x11
  int v19; // w10
  int *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  rlimit v28; // [xsp+28h] [xbp-68h] BYREF

  if ( a1[1] )
  {
    v4 = 0;
    v5 = 1;
    do
    {
      v6 = *a1 + 48 * v4;
      v7 = *(_DWORD *)(v6 + 32);
      if ( (v7 & 8) != 0 )
      {
        v8 = *(_QWORD *)(v6 + 16);
      }
      else
      {
        v8 = *(_QWORD *)(v6 + 16);
        if ( v8 )
          v9 = *(char **)(v6 + 8);
        else
          v9 = &byte_10007ABEC;
        if ( *v9 == 38 )
        {
          v10 = *(char *)(*(_QWORD *)(v6 + 8) + 1LL);
          if ( (v10 & 0x8000000000000000LL) == 0 && (_DefaultRuneLocale.__runetype[v10] & 0x400) != 0 )
          {
            v14 = v10 - 48;
            if ( (_DWORD)v10 == 47 )
              goto LABEL_27;
            goto LABEL_23;
          }
        }
      }
      if ( (v7 & 4) != 0 )
        v11 = 521;
      else
        v11 = 1537;
      if ( (v7 & 1) != 0 )
        v12 = 0;
      else
        v12 = v11;
      if ( v8 )
        v13 = *(const char **)(v6 + 8);
      else
        v13 = &byte_10007AE40;
      v14 = open(v13, v12, 420);
      if ( v14 == -1 )
      {
LABEL_27:
        if ( a2 )
        {
          v15 = *(_DWORD *)v6;
          v21 = __error();
          winerr(*v21);
          sub_10000295C(a2, "failed to redirect %d %s %s: %s", v22, v23, v24, v25, v26, v27, v15);
        }
        return 0;
      }
LABEL_23:
      if ( v14 == *(_DWORD *)v6 )
      {
        fcntl(v14, 2, 0);
      }
      else if ( dup2(v14, *(_DWORD *)v6) != *(_DWORD *)v6 )
      {
        if ( under_debugger == 1 )
          __break(1u);
        interr(575);
      }
      v4 = v5++;
    }
    while ( a1[1] > v4 );
  }
  if ( !getrlimit(8, &v28) && v28.rlim_cur >= 4 )
  {
    v16 = v28.rlim_cur - 1;
    do
    {
      if ( (int)v16 <= 9 && (v17 = a1[1]) != 0 )
      {
        v18 = 0;
        v19 = 1;
        while ( *(_DWORD *)(*a1 + 48 * v18) != (_DWORD)v16 )
        {
          v18 = v19++;
          if ( v17 <= v18 )
            goto LABEL_32;
        }
      }
      else
      {
LABEL_32:
        close(v16);
      }
      --v16;
    }
    while ( v16 > 2 );
  }
  return 1;
}
// 100077660: variable 'v22' is possibly undefined
// 100077660: variable 'v23' is possibly undefined
// 100077660: variable 'v24' is possibly undefined
// 100077660: variable 'v25' is possibly undefined
// 100077660: variable 'v26' is possibly undefined
// 100077660: variable 'v27' is possibly undefined
// 10007ABEC: using guessed type char byte_10007ABEC;
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A590D: using guessed type char under_debugger;
