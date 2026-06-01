__int64 __fastcall sub_952510(
        __int64 a1,
        char *a2,
        __int64 a3,
        _DWORD *a4,
        unsigned __int64 a5,
        _DWORD *a6,
        unsigned __int64 a7,
        __int64 a8)
{
  int v10; // eax
  char *v11; // r13
  _DWORD *v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  int v15; // edx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  unsigned __int64 v20; // r12
  char *v21; // r11
  char *v22; // r13
  char *v23; // r14
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // r15
  char *v27; // rdx
  int v28; // eax
  unsigned __int64 v29; // rax
  size_t v30; // rcx
  char *v31; // r13
  char *v32; // rax
  _DWORD *v33; // r8
  char *v34; // r11
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  int v38; // eax
  int v40; // [rsp+14h] [rbp-A4h]
  unsigned __int64 v41; // [rsp+18h] [rbp-A0h]
  _DWORD *v42; // [rsp+18h] [rbp-A0h]
  _DWORD *v43; // [rsp+18h] [rbp-A0h]
  char *v44; // [rsp+30h] [rbp-88h]
  char *v45; // [rsp+30h] [rbp-88h]
  __int64 v46; // [rsp+38h] [rbp-80h]
  unsigned __int64 v47; // [rsp+40h] [rbp-78h]
  size_t v50; // [rsp+58h] [rbp-60h]
  _DWORD v51[2]; // [rsp+6Ch] [rbp-4Ch] BYREF
  _DWORD n[17]; // [rsp+74h] [rbp-44h]

  *(_QWORD *)&n[1] = __readfsqword(0x28u);
  if ( a8 )
  {
    a6 = (_DWORD *)sub_950C90(a8);
    a7 = sub_950CA0(a8);
  }
  v10 = *(_DWORD *)(a1 + 30104);
  v11 = a2;
  v40 = 0;
  while ( 2 )
  {
    v12 = a4;
    if ( v10 )
    {
      if ( a5 )
      {
        v13 = a8;
        if ( a8 )
          goto LABEL_7;
LABEL_45:
        v14 = sub_952390(a1, a6, a7);
        if ( v14 > 0xFFFFFFFFFFFFFF88LL )
          return v14;
        goto LABEL_8;
      }
      return v11 - a2;
    }
    while ( 1 )
    {
      if ( a5 <= 4 )
      {
        if ( !a5 )
          return v11 - a2;
        return -72;
      }
      if ( (*v12 & 0xFFFFFFF0) != 0x184D2A50 )
        break;
      if ( a5 <= 7 )
        return -72;
      v35 = (unsigned int)v12[1];
      if ( (unsigned int)v35 > 0xFFFFFFF7 )
        return -14;
      v36 = v35 + 8;
      if ( v36 > a5 )
        return -72;
      v12 = (_DWORD *)((char *)v12 + v36);
      a5 -= v36;
    }
    v13 = a8;
    a4 = v12;
    if ( !a8 )
      goto LABEL_45;
LABEL_7:
    v14 = sub_952490(a1, v13);
    if ( v14 > 0xFFFFFFFFFFFFFF88LL )
      return v14;
LABEL_8:
    sub_95D250(a1, v11, a3);
    v15 = *(_DWORD *)(a1 + 30104);
    if ( !v15 )
    {
      v16 = 5;
      if ( a5 > 8 )
        goto LABEL_10;
LABEL_53:
      v14 = -72;
      goto LABEL_48;
    }
    v16 = 1;
    if ( a5 <= 4 )
      goto LABEL_53;
LABEL_10:
    v17 = sub_950EF0((__int64)a4, v16, v15);
    v14 = v17;
    if ( v17 > 0xFFFFFFFFFFFFFF88LL )
    {
LABEL_48:
      if ( (unsigned int)sub_8DFCD0(v14) != 10 )
        return v14;
LABEL_49:
      if ( v40 != 1 )
        goto LABEL_50;
      return -72;
    }
    if ( v17 + 3 > a5 )
      goto LABEL_53;
    v18 = sub_951880(a1, a4, v17);
    if ( v18 > 0xFFFFFFFFFFFFFF88LL )
    {
      v14 = v18;
      goto LABEL_48;
    }
    v19 = *(_DWORD *)(a1 + 30232);
    v20 = a5 - v14;
    if ( v19 )
    {
      if ( *(_DWORD *)(a1 + 29944) <= v19 )
        v19 = *(_DWORD *)(a1 + 29944);
      *(_DWORD *)(a1 + 29944) = v19;
    }
    v46 = a3;
    v21 = v11;
    v41 = (unsigned __int64)&v11[a3];
    v44 = v11;
    v22 = (char *)a4 + v14;
    v47 = a5;
    v23 = v21;
    while ( 2 )
    {
      v24 = sub_95A8D0(v22, v20, v51);
      v14 = v24;
      if ( v24 > 0xFFFFFFFFFFFFFF88LL )
      {
        v11 = v44;
        a3 = v46;
        a5 = v47;
        goto LABEL_48;
      }
      v25 = v20 - 3;
      v26 = (unsigned __int64)(v22 + 3);
      if ( v24 > v25 )
      {
        v11 = v44;
        a3 = v46;
        v14 = -72;
        a5 = v47;
        goto LABEL_48;
      }
      if ( v26 < (unsigned __int64)v23 || (v27 = v22 + 3, v41 <= v26) )
      {
        v28 = v51[0];
        v27 = (char *)v41;
        if ( v51[0] == 1 )
          goto LABEL_56;
LABEL_23:
        if ( v28 )
        {
          if ( v28 != 2 )
          {
            v11 = v44;
            a3 = v46;
            v14 = -20;
            a5 = v47;
            goto LABEL_48;
          }
          v29 = sub_95D220(a1, v23, v27 - v23, v22 + 3, v14, 0);
          v30 = v29;
          if ( v29 > 0xFFFFFFFFFFFFFF88LL )
          {
            v11 = v44;
            a3 = v46;
            v14 = v29;
            a5 = v47;
            goto LABEL_48;
          }
        }
        else
        {
          if ( v14 > v41 - (unsigned __int64)v23 )
          {
LABEL_64:
            v11 = v44;
            a3 = v46;
            v14 = -70;
            a5 = v47;
            goto LABEL_48;
          }
          if ( !v23 )
          {
            if ( v14 )
              goto LABEL_69;
            goto LABEL_66;
          }
          memmove(v23, v22 + 3, v14);
          v30 = v14;
        }
        v31 = &v23[v30];
        if ( *(_DWORD *)(a1 + 30112) )
          goto LABEL_59;
        goto LABEL_27;
      }
      v28 = v51[0];
      if ( v51[0] != 1 )
        goto LABEL_23;
LABEL_56:
      if ( n[0] > (unsigned __int64)(v27 - v23) )
        goto LABEL_64;
      if ( v23 )
      {
        v50 = n[0];
        memset(v23, (unsigned __int8)v22[3], n[0]);
        v30 = v50;
        v31 = &v23[v50];
        if ( *(_DWORD *)(a1 + 30112) )
          goto LABEL_59;
        goto LABEL_27;
      }
      if ( n[0] )
      {
LABEL_69:
        v11 = v44;
        a3 = v46;
        v14 = -74;
        a5 = v47;
        goto LABEL_48;
      }
LABEL_66:
      if ( *(_DWORD *)(a1 + 30112) )
      {
        v31 = nullptr;
        v30 = 0;
LABEL_59:
        sub_8DF9B0(a1 + 30008, v23, v30);
LABEL_27:
        v23 = v31;
      }
      v22 = (char *)(v26 + v14);
      v20 = v25 - v14;
      if ( !v51[1] )
        continue;
      break;
    }
    v32 = *(char **)(a1 + 29928);
    v33 = (_DWORD *)(v26 + v14);
    v34 = v23;
    v11 = v44;
    a3 = v46;
    a5 = v47;
    if ( v32 != (char *)-1LL && v32 != (char *)(v34 - v44) )
    {
      v14 = -20;
      goto LABEL_48;
    }
    if ( *(_DWORD *)(a1 + 29960) )
    {
      if ( v20 <= 3
        || !*(_DWORD *)(a1 + 30108)
        && (v45 = v34, v43 = v33, v38 = sub_8DFBC0(a1 + 30008), v33 = v43, v34 = v45, *v43 != v38) )
      {
        v14 = -22;
        goto LABEL_48;
      }
      ++v33;
      a5 = v20 - 4;
    }
    else
    {
      a5 = v20;
    }
    v14 = v34 - v11;
    if ( *(_QWORD *)(a1 + 95968) && &ZSTD_trace_decompress_end )
    {
      v42 = v33;
      sub_951030(a1, v34 - v11, (char *)v33 - (char *)a4);
      v33 = v42;
    }
    a4 = v33;
    if ( (unsigned int)sub_8DFCD0(v14) == 10 )
      goto LABEL_49;
LABEL_50:
    if ( v14 <= 0xFFFFFFFFFFFFFF88LL )
    {
      v11 += v14;
      a3 -= v14;
      v10 = *(_DWORD *)(a1 + 30104);
      v40 = 1;
      continue;
    }
    return v14;
  }
}

