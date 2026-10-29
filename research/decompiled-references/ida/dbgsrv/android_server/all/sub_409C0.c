/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409C0
// Address: 0x00000000000409C0

//----- (00000000000409C0) ----------------------------------------------------
__int64 __fastcall sub_409C0(__int64 a1, int a2, int a3)
{
  _QWORD *v3; // x29
  _QWORD *v4; // x25
  unsigned int v8; // w23
  int v9; // w22
  int *v10; // x8
  int v11; // w9
  bool v12; // vf
  int v13; // w9
  enum __ptrace_request v14; // w0
  FILE *v15; // x0
  FILE *v16; // x22
  __int64 v17; // x26
  char *v18; // x27
  unsigned __int8 v19; // w8
  unsigned __int8 *v20; // x22
  int v21; // t1
  int v22; // w8
  _QWORD *v23; // x8
  int v24; // w9
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x9
  _QWORD *v28; // t1
  FILE *v30; // [xsp+8h] [xbp-1088h]
  char *s1; // [xsp+10h] [xbp-1080h] BYREF
  unsigned __int64 v32; // [xsp+18h] [xbp-1078h]
  __int64 v33; // [xsp+20h] [xbp-1070h]
  pthread_mutex_t v34[102]; // [xsp+28h] [xbp-1068h] BYREF
  __int64 v35; // [xsp+1028h] [xbp-68h]

  v3 = (_QWORD *)(a1 + 1744);
  v35 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD **)(a1 + 1736);
  if ( v4 != (_QWORD *)(a1 + 1744) )
  {
    v8 = 1;
    while ( 1 )
    {
      if ( (((*((_DWORD *)v4 + 8) != a2) ^ a3) & 1) != 0 )
        goto LABEL_54;
      if ( *((_DWORD *)v4 + 15) || *((_BYTE *)v4 + 64) )
        break;
      v24 = *((_DWORD *)v4 + 11);
      if ( !*((_BYTE *)v4 + 65) )
      {
        if ( v24 )
          goto LABEL_72;
LABEL_54:
        v23 = (_QWORD *)v4[1];
        if ( v23 )
          goto LABEL_55;
        goto LABEL_62;
      }
      v10 = (int *)v4 + 11;
      v12 = __OFSUB__(v24, 1);
      v13 = v24 - 1;
      if ( v13 < 0 == v12 )
        goto LABEL_10;
LABEL_11:
      if ( *((int *)v4 + 12) > 0
        || *((_BYTE *)v4 + 65)
        || !*(_BYTE *)(a1 + 1932) && *((_DWORD *)v4 + 15) != 2
        || *(_BYTE *)(a1 + 1853)
        || (unsigned int)(*((_DWORD *)v4 + 15) - 1) > 1 )
      {
        goto LABEL_54;
      }
      if ( *((_BYTE *)v4 + 56) )
        v14 = PTRACE_SINGLESTEP;
      else
        v14 = PTRACE_CONT;
      if ( *((_BYTE *)v4 + 56) )
        *(_BYTE *)(a1 + 1855) = 1;
      if ( ptrace(v14, *((unsigned int *)v4 + 10), 0, *((int *)v4 + 13)) )
      {
        if ( *((_DWORD *)v4 + 15) == 2 )
          goto LABEL_47;
        qsnprintf(v34, 4096, "/proc/%u/status", *((_DWORD *)v4 + 10));
        v15 = fopenRT((const char *)v34);
        if ( !v15 )
        {
          v8 = 0;
          goto LABEL_61;
        }
        v16 = v15;
        s1 = nullptr;
        v32 = 0;
        v33 = 0;
        v17 = qgetline((__int64)&s1, v15);
        if ( (v17 & 0x8000000000000000LL) == 0
          && (v32 >= 7 && (v18 = s1, !strncmp(s1, "State:", 6u))
           || (v17 = qgetline((__int64)&s1, v16), (v17 & 0x8000000000000000LL) == 0)
           && (v32 >= 7 && (v18 = s1, !strncmp(s1, "State:", 6u))
            || (v17 = qgetline((__int64)&s1, v16), (v17 & 0x8000000000000000LL) == 0)
            && v32 >= 7
            && (v18 = s1, !strncmp(s1, "State:", 6u))))
          && (v19 = v18[6]) != 0 )
        {
          v30 = v16;
          v20 = (unsigned __int8 *)(v18 + 7);
          while ( isspace(v19) )
          {
            v21 = *v20++;
            v19 = v21;
            if ( !v21 )
            {
              v16 = v30;
              goto LABEL_39;
            }
          }
          qfclose(v30);
          v9 = *(v20 - 1);
        }
        else
        {
LABEL_39:
          qfclose(v16);
          if ( (v17 & 0x8000000000000000LL) == 0 )
          {
            if ( !under_debugger )
            {
              interr(30060);
LABEL_70:
              if ( !under_debugger )
              {
                interr(30178);
LABEL_72:
                if ( !under_debugger )
                  interr(30188);
              }
            }
            __break(1u);
          }
          v9 = 32;
        }
        if ( s1 )
        {
          v32 = 0;
          qfree(s1);
          s1 = nullptr;
          v33 = 0;
        }
        if ( v9 != 90 )
        {
          v8 = 0;
LABEL_61:
          v23 = (_QWORD *)v4[1];
          if ( v23 )
          {
            do
            {
LABEL_55:
              v4 = v23;
              v23 = (_QWORD *)*v23;
            }
            while ( v23 );
            goto LABEL_64;
          }
          goto LABEL_62;
        }
        sub_3AFD0(a1, *((_DWORD *)v4 + 10), 2);
      }
      v22 = *((_DWORD *)v4 + 15);
      if ( v22 != 1 )
      {
        if ( v22 != 2 )
          goto LABEL_70;
LABEL_47:
        *((_DWORD *)v4 + 15) = 3;
        v23 = (_QWORD *)v4[1];
        if ( v23 )
          goto LABEL_55;
        goto LABEL_62;
      }
      *((_DWORD *)v4 + 15) = 0;
      v23 = (_QWORD *)v4[1];
      if ( v23 )
        goto LABEL_55;
LABEL_62:
      v25 = (__int64)(v4 + 2);
      v26 = (_QWORD *)v4[2];
      if ( (_QWORD *)*v26 == v4 )
      {
        v4 = (_QWORD *)v4[2];
        if ( v26 == v3 )
          return v8;
      }
      else
      {
        do
        {
          v27 = *(_QWORD *)v25;
          v28 = *(_QWORD **)(*(_QWORD *)v25 + 16LL);
          v25 = *(_QWORD *)v25 + 16LL;
          v4 = v28;
        }
        while ( *v28 != v27 );
LABEL_64:
        if ( v4 == v3 )
          return v8;
      }
    }
    v10 = (int *)v4 + 11;
    v11 = *((_DWORD *)v4 + 11);
    v12 = __OFSUB__(v11, 1);
    v13 = v11 - 1;
    if ( v13 < 0 != v12 )
      goto LABEL_11;
LABEL_10:
    *v10 = v13;
    if ( v13 > 0 )
      goto LABEL_54;
    goto LABEL_11;
  }
  return 1;
}
// 168DF0: using guessed type char under_debugger;
