unsigned __int64 __fastcall sub_915080(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        _BYTE *a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13,
        int a14,
        int a15,
        _DWORD *a16,
        _DWORD *a17,
        int a18)
{
  const void *v18; // r11
  char *v22; // r12
  _BOOL4 v23; // ebp
  int v24; // ebp
  unsigned __int64 v25; // r10
  char *v26; // r15
  int v27; // eax
  char v28; // r9
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r10
  unsigned __int64 result; // rax
  unsigned __int64 v33; // rdx
  int v34; // ebx
  int v35; // ebx
  char *v36; // r12
  unsigned int v37; // edx
  _BYTE *v38; // r15
  _BYTE *v39; // rbp
  char *v40; // rbp
  _BOOL4 v41; // ebp
  int v42; // edx
  unsigned __int64 *v43; // rbp
  __int64 v44; // rdx
  __int64 v45; // [rsp+0h] [rbp-78h]
  unsigned __int64 v46; // [rsp+10h] [rbp-68h]
  _BOOL4 v47; // [rsp+10h] [rbp-68h]
  int v49; // [rsp+20h] [rbp-58h]
  __int64 v50; // [rsp+28h] [rbp-50h]
  const void *v51; // [rsp+30h] [rbp-48h]
  unsigned __int64 v52; // [rsp+30h] [rbp-48h]
  unsigned __int64 v53; // [rsp+38h] [rbp-40h]

  v18 = a5;
  v22 = (char *)(a11 + 3);
  v45 = a12 + a11;
  v46 = a12 - 3;
  if ( a14 )
  {
    v23 = a6 > 0x3F37;
    if ( a6 > 0x337 )
      v24 = v23 + 4;
    else
      v24 = v23 + 3;
    v25 = v24;
    v26 = &v22[v24];
    v49 = *(_DWORD *)a2;
LABEL_5:
    *a16 = 0;
    if ( !a6 )
      goto LABEL_25;
    goto LABEL_6;
  }
  v41 = a6 > 0x3FFF;
  if ( a6 <= 0x3FF )
  {
    v24 = v41 + 3;
    v49 = 3;
    v25 = v24;
    v26 = &v22[v24];
    goto LABEL_5;
  }
  v24 = v41 + 4;
  v49 = 3;
  v25 = v24;
  v26 = &v22[v24];
  *a16 = 0;
LABEL_6:
  v27 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 )
  {
    if ( v27 == 1 )
    {
      result = sub_913980((__int64)v22, v46, a5, a6);
      goto LABEL_26;
    }
    if ( a14 && v27 == 2 )
    {
      v52 = v25;
      memcpy(v26, (const void *)(a2 + 4), *(_QWORD *)(a2 + 136));
      v25 = v52;
      v18 = a5;
      v50 = *(_QWORD *)(a2 + 136);
      v26 += v50;
    }
    else
    {
      v50 = 0;
    }
    v53 = v25;
    v51 = v18;
    v28 = a13 != 0;
    v29 = v45 - (_QWORD)v26;
    if ( v24 == 3 )
    {
      v30 = sub_908720((unsigned __int64 *)v26, v29, (__int64)v18, a6, (__int64 *)a1, v28);
      v18 = v51;
      v31 = v53;
    }
    else
    {
      v30 = sub_908730((__int64)v26, v29, (__int64)v18, a6, (__int64 *)a1, v28);
      v31 = v53;
      v18 = v51;
    }
    if ( v30 - 1 > 0xFFFFFFFFFFFFFF87LL )
      return 0;
    v33 = v30 + v50;
    if ( (a14 || a6 > v33) && (v33 <= 0x3FF || (v33 > 0x3FFF) + 4 <= v31) )
    {
      v34 = 16 * a6;
      if ( v24 == 4 )
      {
        *(_DWORD *)(a11 + 3) = v49 + v34 + 8 + ((_DWORD)v33 << 18);
      }
      else if ( v24 == 5 )
      {
        *(_BYTE *)(a11 + 7) = v33 >> 10;
        *(_DWORD *)(a11 + 3) = (((_DWORD)v30 + (_DWORD)v50) << 22) + v49 + v34 + 12;
      }
      else
      {
        v35 = ((_DWORD)v33 << 14) + v49 + v34;
        *(_WORD *)(a11 + 3) = v35;
        *(_BYTE *)(a11 + 5) = BYTE2(v35);
      }
      result = &v26[v30] - v22;
      *a16 = 1;
      goto LABEL_26;
    }
  }
LABEL_25:
  result = sub_9138E0(v22, v46, v18, a6);
LABEL_26:
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
  {
    if ( !result )
      return 0;
    v36 = &v22[result];
    v37 = *(_DWORD *)(a10 + 4);
    *a17 = 0;
    result = -70;
    if ( v45 - (__int64)v36 > 3 )
    {
      if ( a4 <= 0x7F )
      {
        *v36 = a4;
        result = 1;
        v38 = v36 + 1;
        if ( !a4 )
        {
LABEL_42:
          result = (unsigned __int64)&v36[result - a11];
          v42 = a18 + 8 * result - 20;
          *(_WORD *)a11 = v42;
          *(_BYTE *)(a11 + 2) = BYTE2(v42);
          return result;
        }
      }
      else if ( a4 > 0x7EFF )
      {
        *v36 = -1;
        v38 = v36 + 3;
        *(_WORD *)(v36 + 1) = a4 - 32512;
      }
      else
      {
        v36[1] = a4;
        v38 = v36 + 2;
        *v36 = BYTE1(a4) + 0x80;
      }
      v39 = v38 + 1;
      if ( a15 )
      {
        v47 = v37 > 0x39;
        *v38 = 16 * *(_BYTE *)(a2 + 148) + (*(_BYTE *)(a2 + 144) << 6) + 4 * *(_BYTE *)(a2 + 152);
        memcpy(v38 + 1, (const void *)(a2 + 156), *(_QWORD *)(a2 + 296));
        v43 = (unsigned __int64 *)&v39[*(_QWORD *)(a2 + 296)];
        result = sub_9149E0(
                   v43,
                   v45 - (_QWORD)v43,
                   (_WORD *)(a1 + 2836),
                   a8,
                   (_WORD *)(a1 + 2064),
                   a9,
                   (_WORD *)(a1 + 4288),
                   a7,
                   a3,
                   a4,
                   v47,
                   a13);
        if ( result > 0xFFFFFFFFFFFFFF88LL )
          return result;
        v44 = *(_QWORD *)(a2 + 304);
        v40 = (char *)v43 + result;
        if ( v44 && v44 + result <= 3 )
          return 0;
      }
      else
      {
        *v38 = -4;
        result = sub_9149E0(
                   (unsigned __int64 *)(v38 + 1),
                   v45 - (_QWORD)v39,
                   (_WORD *)(a1 + 2836),
                   a8,
                   (_WORD *)(a1 + 2064),
                   a9,
                   (_WORD *)(a1 + 4288),
                   a7,
                   a3,
                   a4,
                   v37 > 0x39,
                   a13);
        v40 = &v39[result];
        if ( result > 0xFFFFFFFFFFFFFF88LL )
          return result;
      }
      if ( v40 - v38 <= 3 )
        return 0;
      *a17 = 1;
      result = v40 - v36;
      if ( (unsigned __int64)(v40 - v36) <= 0xFFFFFFFFFFFFFF88LL )
      {
        if ( result )
          goto LABEL_42;
        return 0;
      }
    }
  }
  return result;
}
