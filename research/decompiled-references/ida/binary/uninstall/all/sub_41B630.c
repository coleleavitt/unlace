__int64 __fastcall sub_41B630(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  const char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned int v10; // edx
  int v12; // eax
  int v13; // r12d
  int v14; // edx
  __int64 v15; // r12
  int v16; // eax
  int v17; // eax
  int v18; // edx
  __int64 v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // rax
  void (__fastcall *v22)(__int64); // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 (__fastcall *v26)(); // r13
  int v27; // edx
  _BYTE *v28; // rbp
  _BYTE *v29; // rbx
  unsigned __int16 v30; // dx
  int v31; // eax
  int v32; // edx
  int v33; // edx
  char *v34; // rbp
  char *v35; // r12
  int i; // ebx
  char **v37; // rdx
  int v38; // edx
  __int64 v39; // rbp
  unsigned __int64 v40; // rbx
  __int64 v41; // r13
  void *v42; // rax
  int v43; // eax
  __int64 v44; // rax
  __int64 *v45; // rdi
  bool v46; // zf
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 *v51; // rax
  __int64 v52; // [rsp+10h] [rbp-88h]
  int v53; // [rsp+18h] [rbp-80h]
  _BOOL4 v54; // [rsp+1Ch] [rbp-7Ch]
  unsigned int v55; // [rsp+20h] [rbp-78h]
  unsigned __int16 v56; // [rsp+26h] [rbp-72h] BYREF
  char v57; // [rsp+28h] [rbp-70h] BYREF
  char *v58; // [rsp+30h] [rbp-68h] BYREF
  char v59; // [rsp+38h] [rbp-60h] BYREF
  int v60; // [rsp+3Ch] [rbp-5Ch] BYREF
  char v61[12]; // [rsp+40h] [rbp-58h] BYREF
  int v62; // [rsp+4Ch] [rbp-4Ch] BYREF
  unsigned __int64 v63; // [rsp+50h] [rbp-48h] BYREF
  int v64; // [rsp+5Ch] [rbp-3Ch] BYREF
  int v65; // [rsp+60h] [rbp-38h] BYREF
  int v66; // [rsp+64h] [rbp-34h] BYREF

  v55 = 0;
  v54 = 1;
  v53 = 0;
  v52 = 0;
  if ( (unsigned int)(a3 - 3) <= 3 )
  {
    v12 = sub_4584C0(a2, *(_QWORD *)(a4 + 8), (unsigned int)off_654220, 8, (unsigned int)"class", 0, (__int64)&v66);
    v10 = 1;
    if ( v12 )
      return v10;
    if ( a3 == 3 || (v62 = 2, LOBYTE(v12) = 2, a3 - 1 <= 2) )
    {
LABEL_15:
      v15 = *(_QWORD *)(a4 + 8LL * a3 - 8);
      switch ( v66 )
      {
        case 0:
          v26 = Tcl_UniCharIsAlnum;
          goto LABEL_36;
        case 1:
          v26 = Tcl_UniCharIsAlpha;
          goto LABEL_36;
        case 2:
          v26 = sub_41BDB0;
          goto LABEL_36;
        case 3:
          v26 = Tcl_UniCharIsControl;
          goto LABEL_36;
        case 4:
        case 7:
        case 15:
          if ( (unsigned int)sub_47B040(0, *(_QWORD *)(a4 + 8LL * a3 - 8), &off_656160) )
          {
            v54 = 0;
            if ( !v53 )
            {
              if ( *(_QWORD *)(v15 + 8) )
              {
                v32 = *(_DWORD *)(v15 + 16);
                v64 = v32;
              }
              else
              {
                sub_47ACD0(v15, &v64);
                v32 = v64;
              }
              v54 = v32 == 0;
            }
            goto LABEL_32;
          }
          if ( v66 != 15 )
          {
            if ( v66 != 7 )
              goto LABEL_32;
            v46 = *(_QWORD *)(v15 + 32) == 0;
            goto LABEL_94;
          }
          if ( !*(_QWORD *)(v15 + 32) )
            goto LABEL_65;
          goto LABEL_32;
        case 5:
          v26 = Tcl_UniCharIsDigit;
          goto LABEL_36;
        case 6:
          v37 = *(char ***)(v15 + 24);
          if ( v37 == (char **)&off_656120 || v37 == (char **)&off_6560E0 || v37 == &off_6560A0 )
            goto LABEL_32;
          if ( *(_QWORD *)(v15 + 8) )
          {
            v38 = *(_DWORD *)(v15 + 16);
            v39 = *(_QWORD *)(v15 + 8);
            v64 = v38;
          }
          else
          {
            v49 = sub_47ACD0(*(_QWORD *)(a4 + 8LL * a3 - 8), &v64);
            v38 = v64;
            v39 = v49;
          }
          if ( !v38 )
            goto LABEL_93;
          v40 = v38 + v39;
          if ( (unsigned int)sub_4948A0(0, v15, 0, 0, -1, (unsigned int)&v63, 0) )
          {
            v54 = 0;
            v55 = 0;
          }
          else
          {
            v55 = v63 - v39;
            if ( v63 < v40 )
            {
              v54 = 0;
LABEL_28:
              v21 = *(_QWORD *)(v15 + 24);
              if ( v21 )
              {
                v22 = *(void (__fastcall **)(__int64))(v21 + 8);
                if ( v22 )
                  v22(v15);
              }
              *(_QWORD *)(v15 + 24) = 0;
            }
          }
          goto LABEL_32;
        case 8:
          v26 = Tcl_UniCharIsGraph;
          goto LABEL_36;
        case 9:
          v17 = sub_47C180(0, *(_QWORD *)(a4 + 8LL * a3 - 8), &v62);
          goto LABEL_20;
        case 10:
          if ( *(_UNKNOWN ***)(v15 + 24) == &off_655E20 )
          {
            v60 = *(_DWORD *)(*(_QWORD *)(v15 + 32) + 8LL);
            goto LABEL_32;
          }
          if ( !(unsigned int)sub_46FB10(0, *(_QWORD *)(a4 + 8LL * a3 - 8), &v60) )
            goto LABEL_32;
          if ( v52 )
          {
            if ( *(_QWORD *)(v15 + 8) )
            {
              v33 = *(_DWORD *)(v15 + 16);
              v34 = *(char **)(v15 + 8);
              v64 = v33;
            }
            else
            {
              v50 = sub_47ACD0(v15, &v64);
              v33 = v64;
              v34 = (char *)v50;
            }
            v35 = v34;
            v55 = -1;
            for ( i = v33 + (_DWORD)v34; ; v33 = i - (_DWORD)v58 )
            {
              if ( v33 <= 0 )
                goto LABEL_65;
              if ( (unsigned int)sub_49D1E0(
                                   0,
                                   (_DWORD)v35,
                                   v33,
                                   (unsigned int)&v57,
                                   (unsigned int)&v58,
                                   (unsigned int)&v59,
                                   0) == 1 )
                break;
              v35 = v58;
            }
            while ( (unsigned int)sub_47D8A0((unsigned int)*v35) )
              ++v35;
            v41 = sub_496740();
            *(_DWORD *)v41 = 0;
            if ( v35 == v34 )
            {
              v51 = off_656088;
              *(_DWORD *)(v41 + 16) = 0;
              *(_QWORD *)(v41 + 8) = v51;
            }
            else
            {
              v42 = (void *)sub_40FB00((int)v35 - (int)v34 + 1);
              *(_QWORD *)(v41 + 8) = v42;
              memcpy(v42, v34, (unsigned int)((_DWORD)v35 - (_DWORD)v34));
              *(_BYTE *)(*(_QWORD *)(v41 + 8) + v35 - v34) = 0;
              *(_DWORD *)(v41 + 16) = (_DWORD)v35 - (_DWORD)v34;
            }
            *(_QWORD *)(v41 + 24) = 0;
            v55 = sub_48F360(v41);
            v43 = *(_DWORD *)v41 - 1;
            v46 = *(_DWORD *)v41 == 1;
            *(_DWORD *)v41 = v43;
            if ( v43 < 0 || v46 )
            {
              v44 = *(_QWORD *)(v41 + 24);
              if ( v44 && *(_QWORD *)(v44 + 8) )
              {
                sub_47B120(v41);
              }
              else
              {
                v45 = *(__int64 **)(v41 + 8);
                if ( v45 && v45 != off_656088 )
                  Tcl_Free((__int64)v45);
                *(_DWORD *)(v41 + 16) = -1;
                sub_496830(v41);
              }
            }
          }
          goto LABEL_65;
        case 11:
          v26 = (__int64 (__fastcall *)())Tcl_UniCharIsLower;
          goto LABEL_36;
        case 12:
          v26 = Tcl_UniCharIsPrint;
          goto LABEL_36;
        case 13:
          v26 = Tcl_UniCharIsPunct;
          goto LABEL_36;
        case 14:
          v26 = Tcl_UniCharIsSpace;
          goto LABEL_36;
        case 16:
          v26 = (__int64 (__fastcall *)())Tcl_UniCharIsUpper;
          goto LABEL_36;
        case 17:
          v17 = sub_47C250(0, *(_QWORD *)(a4 + 8LL * a3 - 8), v61);
LABEL_20:
          if ( !v17 )
            goto LABEL_32;
          if ( *(_QWORD *)(v15 + 8) )
          {
            v18 = *(_DWORD *)(v15 + 16);
            v19 = *(_QWORD *)(v15 + 8);
            v64 = v18;
          }
          else
          {
            v48 = sub_47ACD0(v15, &v64);
            v18 = v64;
            v19 = v48;
          }
          if ( !v18 )
            goto LABEL_93;
          v54 = 0;
          if ( !v52 )
            goto LABEL_32;
          v20 = v18 + v19;
          v55 = 0;
          if ( (unsigned int)sub_4948A0(0, v15, 0, 0, -1, (unsigned int)&v63, 8) )
            goto LABEL_32;
          v55 = -1;
          if ( v63 == v20 )
            goto LABEL_32;
          v55 = v63 - v19;
          goto LABEL_28;
        case 18:
          v26 = Tcl_UniCharIsWordChar;
          goto LABEL_36;
        case 19:
          v26 = (__int64 (__fastcall *)())sub_41BDC0;
LABEL_36:
          if ( *(_QWORD *)(v15 + 8) )
          {
            v27 = *(_DWORD *)(v15 + 16);
            v28 = *(_BYTE **)(v15 + 8);
            v64 = v27;
          }
          else
          {
            v47 = sub_47ACD0(v15, &v64);
            v27 = v64;
            v28 = (_BYTE *)v47;
          }
          v29 = &v28[v27];
          if ( v27 )
          {
            if ( v28 >= v29 )
              goto LABEL_32;
            while ( 1 )
            {
              if ( *v28 > 0xBFu )
              {
                v31 = sub_49BBC0(v28, &v56);
                v30 = v56;
              }
              else
              {
                v30 = (char)*v28;
                v31 = 1;
                v56 = v30;
              }
              v60 = v31;
              if ( !((unsigned int (__fastcall *)(_QWORD))v26)(v30) )
                break;
              ++v55;
              v28 += v60;
              if ( v28 >= v29 )
                goto LABEL_32;
            }
          }
          else
          {
LABEL_93:
            v46 = v53 == 0;
LABEL_94:
            if ( v46 )
            {
LABEL_32:
              if ( v52 == 0 || v54 || (v23 = sub_47BD00(v55), v24 = sub_4A4160(a2, v52, 0, v23, 512), v10 = 1, v24) )
              {
                v25 = sub_47BD00(v54);
                sub_48AFD0(a2, v25);
                return 0;
              }
              return v10;
            }
          }
LABEL_65:
          v54 = 0;
          goto LABEL_32;
        default:
          goto LABEL_32;
      }
    }
    v13 = a3 - 1;
    while ( 1 )
    {
      if ( (unsigned int)sub_4584C0(
                           a2,
                           *(_QWORD *)(a4 + 8LL * v12),
                           (unsigned int)off_6542D0,
                           8,
                           (unsigned int)"option",
                           0,
                           (__int64)&v65) )
        return 1;
      if ( !v65 )
        break;
      if ( v65 != 1 )
        goto LABEL_13;
      v16 = v62 + 1;
      if ( v62 + 1 >= v13 )
      {
        v7 = "?-strict? ?-failindex var? str";
        v8 = a4;
        v9 = 2;
        goto LABEL_3;
      }
      ++v62;
      v14 = v16;
      v52 = *(_QWORD *)(a4 + 8LL * v16);
LABEL_14:
      v12 = v14 + 1;
      v62 = v14 + 1;
      if ( v13 <= v14 + 1 )
        goto LABEL_15;
    }
    v53 = 1;
LABEL_13:
    v14 = v62;
    goto LABEL_14;
  }
  v7 = "class ?-strict? ?-failindex var? str";
  v8 = a4;
  v9 = 1;
LABEL_3:
  sub_458930(a2, v9, v8, v7);
  return 1;
}

