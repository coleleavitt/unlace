__int64 __fastcall sub_419A40(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // r15d
  int *v9; // r12
  int v10; // ebp
  __int64 v11; // rdi
  _BYTE *v12; // rax
  int v13; // eax
  bool v14; // zf
  int v15; // ebx
  _QWORD *v16; // r14
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  int *v20; // rdi
  int v21; // eax
  unsigned int v23; // eax
  int v24; // eax
  int v25; // eax
  _QWORD *v26; // r14
  int v27; // r13d
  __int64 v28; // rcx
  unsigned int v29; // eax
  int v30; // eax
  int *v31; // rsi
  __int64 v32; // rdx
  int v33; // ebp
  __int64 v34; // r15
  __int64 v35; // r12
  __int64 v36; // rdx
  int v37; // ebx
  int v38; // edx
  __int64 v39; // rax
  _DWORD *v40; // rbx
  int v41; // r9d
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rsi
  int v46; // eax
  int v47; // eax
  int *v48; // [rsp+18h] [rbp-B0h]
  __int64 v49; // [rsp+20h] [rbp-A8h]
  __int64 v50; // [rsp+28h] [rbp-A0h]
  int v51; // [rsp+30h] [rbp-98h]
  unsigned int v52; // [rsp+34h] [rbp-94h]
  int v53; // [rsp+38h] [rbp-90h]
  int v54; // [rsp+3Ch] [rbp-8Ch]
  int v55; // [rsp+40h] [rbp-88h]
  unsigned int v56; // [rsp+44h] [rbp-84h]
  int v58; // [rsp+54h] [rbp-74h] BYREF
  char v59[4]; // [rsp+58h] [rbp-70h] BYREF
  int v60; // [rsp+5Ch] [rbp-6Ch] BYREF
  _QWORD v61[2]; // [rsp+60h] [rbp-68h] BYREF
  int v62; // [rsp+70h] [rbp-58h] BYREF
  __int64 v63; // [rsp+78h] [rbp-50h]

  v6 = 3;
  v9 = nullptr;
  v10 = 1;
  v48 = nullptr;
  v56 = 0;
  v55 = 0;
  v58 = 0;
  v54 = 0;
  v53 = 0;
  if ( a3 > 1 )
  {
    while ( 2 )
    {
      v11 = *(_QWORD *)(a4 + 8LL * v10);
      v12 = *(_BYTE **)(v11 + 8);
      if ( !v12 )
        v12 = (_BYTE *)sub_47B3B0(v11);
      if ( *v12 == 45 )
      {
        if ( !(unsigned int)sub_4584C0(
                              a2,
                              *(_QWORD *)(a4 + 8LL * v10),
                              (unsigned int)off_654160,
                              8,
                              (unsigned int)"switch",
                              1,
                              (__int64)&v60) )
        {
          switch ( v60 )
          {
            case 0:
              ++v10;
              v54 = 1;
              goto LABEL_14;
            case 1:
              ++v10;
              v55 = 1;
              goto LABEL_14;
            case 2:
              ++v10;
              v56 = 1;
              goto LABEL_14;
            case 3:
              ++v10;
              v53 = 1;
              goto LABEL_14;
            case 4:
              v6 |= 0x20u;
              ++v10;
              goto LABEL_14;
            case 5:
              LOBYTE(v6) = v6 | 0xC0;
              ++v10;
              goto LABEL_14;
            case 6:
              v6 |= 0x40u;
              ++v10;
              goto LABEL_14;
            case 7:
              LOBYTE(v6) = v6 | 0x80;
              ++v10;
              goto LABEL_14;
            case 8:
              v6 |= 8u;
              ++v10;
              goto LABEL_14;
            case 9:
              if ( ++v10 >= a3 )
                goto LABEL_15;
              if ( (unsigned int)sub_49FAC0(a2, *(_QWORD *)(a4 + 8LL * v10), 0, v59) )
                goto LABEL_20;
              if ( v9 )
              {
                v13 = *v9 - 1;
                v14 = *v9 == 1;
                *v9 = v13;
                if ( v13 < 0 || v14 )
                  sub_47B120(v9);
              }
              v9 = *(int **)(a4 + 8LL * v10);
              ++*v9;
LABEL_13:
              ++v10;
LABEL_14:
              if ( v10 >= a3 )
                goto LABEL_15;
              continue;
            case 10:
              ++v10;
              v15 = a3 - v10;
              if ( a3 - v10 < 2 - v55 )
                goto LABEL_62;
              goto LABEL_16;
            default:
              goto LABEL_13;
          }
        }
        goto LABEL_20;
      }
      break;
    }
  }
LABEL_15:
  v15 = a3 - v10;
  if ( a3 - v10 < 2 - v55 )
  {
LABEL_62:
    sub_458930(a2, 1, a4, "?switches? exp string ?matchVar? ?subMatchVar subMatchVar ...?");
    goto LABEL_20;
  }
LABEL_16:
  v16 = (_QWORD *)(a4 + 8LL * v10);
  if ( v15 != 2 && v53 != 0 )
  {
    sub_48B710(a2, (unsigned int)"regexp match variables not allowed when using -inline", 0, a4, a5, a6);
    goto LABEL_20;
  }
  if ( v55 )
  {
    v17 = sub_48AC00(a2, *v16, v6);
    if ( v17 )
    {
      v18 = sub_48A490(a2, v17);
      LODWORD(v19) = 0;
      if ( v18 >= 0 )
        return (unsigned int)v19;
    }
LABEL_20:
    if ( v9 )
    {
      v20 = v9;
      v21 = *v9 - 1;
      v14 = *v9 == 1;
      *v9 = v21;
      if ( v21 < 0 || v14 )
LABEL_90:
        sub_47B120(v20);
    }
    goto LABEL_22;
  }
  v49 = v16[1];
  v23 = sub_48F360(v49);
  v51 = v23;
  if ( v9 )
  {
    sub_49FAC0(0, v9, v23, &v58);
    v24 = *v9 - 1;
    v14 = *v9 == 1;
    *v9 = v24;
    if ( v24 < 0 || v14 )
      sub_47B120(v9);
    v25 = v58;
    if ( v58 <= -1 )
      v25 = 0;
    v58 = v25;
  }
  v50 = sub_48AC00(a2, *v16, v6);
  v19 = 1;
  if ( !v50 )
    return (unsigned int)v19;
  v26 = v16 + 2;
  v27 = v15 - 2;
  v52 = -1;
  if ( !v53 )
  {
    v19 = (unsigned int)v54;
    if ( v15 != 2 )
      v19 = (unsigned int)v27;
    v52 = v19;
  }
  v28 = (unsigned int)v58;
  while ( 1 )
  {
    v29 = 0;
    if ( (_DWORD)v28 )
    {
      LOBYTE(v29) = 1;
      if ( (int)v28 <= v51 )
      {
        if ( (unsigned __int16)sub_48F4E0(v49, (unsigned int)(v28 - 1), v19) == 10 )
        {
          v28 = (unsigned int)v58;
          v29 = 0;
        }
        else
        {
          v28 = (unsigned int)v58;
          v29 = 1;
        }
      }
    }
    v30 = sub_48A6C0(a2, v50, v49, v28, v52, v29);
    if ( v30 < 0 )
      goto LABEL_22;
    if ( !v30 )
    {
      if ( v54 > 1 )
      {
LABEL_77:
        if ( v53 )
        {
          v45 = (__int64)v48;
          goto LABEL_81;
        }
        v44 = 1;
        if ( v54 )
          v44 = (unsigned int)(v54 - 1);
      }
      else
      {
        if ( v53 )
          return 0;
        v44 = 0;
      }
      v45 = sub_47BD00(v44);
LABEL_81:
      sub_48AFD0(a2, v45);
      return 0;
    }
    v31 = &v62;
    sub_48A470(v50, &v62);
    if ( v53 )
    {
      v27 = v62 + 1;
      if ( v54 <= 1 )
        v48 = (int *)sub_47B0B0(v50, &v62, v32);
    }
    v33 = 0;
    if ( v27 > 0 )
      break;
LABEL_73:
    if ( v54 )
    {
      v19 = v58 + (unsigned int)*(_QWORD *)(v63 + 8);
      v14 = (unsigned int)*(_QWORD *)(v63 + 8) == *(_DWORD *)v63;
      v58 += *(_QWORD *)(v63 + 8);
      if ( v14 )
        v58 = v19 + 1;
      ++v54;
      v28 = (unsigned int)v58;
      if ( v58 < v51 )
        continue;
    }
    goto LABEL_77;
  }
  v34 = 0;
  v35 = 0;
  while ( v56 )
  {
    if ( v62 < v33 || (v36 = *(_QWORD *)(v35 + v63), v36 < 0) )
    {
      v37 = -1;
      v38 = -1;
    }
    else
    {
      v37 = *(_DWORD *)(v35 + v63 + 8) + v58;
      v38 = v58 + v36;
      if ( v37 >= v58 )
        --v37;
    }
    v61[0] = sub_47BE30(v38);
    v61[1] = sub_47BE30(v37);
    v39 = sub_46EEB0(2, v61);
LABEL_50:
    v40 = (_DWORD *)v39;
    if ( v53 )
      goto LABEL_51;
LABEL_56:
    v31 = (int *)v26[v34];
    if ( !sub_4A4160(a2, v31, 0, v39, 0) )
    {
      v42 = v26[v34];
      v43 = *(_QWORD *)(v42 + 8);
      if ( !v43 )
        LODWORD(v43) = sub_47B3B0(v42);
      sub_48B710(a2, (unsigned int)"couldn't set variable \"", v43, (unsigned int)"\"", 0, v41);
      goto LABEL_22;
    }
LABEL_52:
    ++v33;
    v35 += 16;
    ++v34;
    if ( v33 >= v27 )
      goto LABEL_73;
  }
  if ( v62 < v33 )
  {
    v39 = sub_47B0B0(v56, v31, v32);
    goto LABEL_50;
  }
  v39 = sub_48F420(
          v49,
          (unsigned int)(*(_DWORD *)(v35 + v63) + v58),
          (unsigned int)(*(_DWORD *)(v35 + v63 + 8) + v58 - 1));
  v40 = (_DWORD *)v39;
  if ( !v53 )
    goto LABEL_56;
LABEL_51:
  v31 = v48;
  if ( !(unsigned int)sub_46FBF0(a2, v48, v39) )
    goto LABEL_52;
  v46 = *v40 - 1;
  v14 = *v40 == 1;
  *v40 = v46;
  if ( v46 < 0 || v14 )
    sub_47B120(v40);
  v47 = *v48 - 1;
  v14 = *v48 == 1;
  *v48 = v47;
  if ( v47 < 0 || v14 )
  {
    v20 = v48;
    goto LABEL_90;
  }
LABEL_22:
  LODWORD(v19) = 1;
  return (unsigned int)v19;
}

