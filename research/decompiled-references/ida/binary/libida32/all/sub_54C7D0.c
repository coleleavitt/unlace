unsigned __int64 __fastcall sub_54C7D0(unsigned __int64 *a1, unsigned __int8 *a2, unsigned __int64 a3, _DWORD *a4)
{
  __int64 v6; // r12
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  bool v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  int v15; // eax
  int v16; // r13d
  __int64 v17; // r13
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  char v22; // cl
  unsigned __int8 v23; // si
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  int v32; // eax

  v6 = *a2;
  if ( (getinf(57) & 0xF) == 6 )
  {
    v7 = a1[2];
  }
  else
  {
    v22 = getinf(67);
    v8 = a1[2];
    v7 = v8;
    if ( (v22 & 0x80) == 0 )
    {
      if ( !v8 )
        goto LABEL_4;
      goto LABEL_16;
    }
  }
  v8 = v7;
  if ( !v7 )
  {
LABEL_4:
    v9 = 1;
    goto LABEL_5;
  }
  v14 = 8 * (int)v6;
  if ( v7 < v14 )
  {
    v28 = *a1;
    a1[2] = v14;
    v29 = v28 % v14;
    v8 = 8 * (int)v6;
    a1[1] = v29;
  }
LABEL_16:
  v9 = 0;
  if ( (a1[6] & 0x40) == 0 )
    v9 = v8 - a1[1] < a2[1];
LABEL_5:
  if ( (getinf(57) & 0xF) == 6 || (getinf(67) & 0x80u) != 0LL )
  {
    v10 = a2[1];
    if ( (unsigned __int8)v10 <= 1u )
    {
      LODWORD(v6) = 1;
      if ( !v9 )
        goto LABEL_83;
    }
    else
    {
      if ( (a1[6] & 0x40) == 0 && (a3 >> 3) / *a2 != ((a3 + (unsigned __int8)v10 - 1) >> 3) / *a2 )
      {
LABEL_20:
        if ( a1[5] || !a2[1] || !a4 )
          goto LABEL_25;
        goto LABEL_23;
      }
      if ( (unsigned __int8)v10 <= 8u )
      {
        if ( !v9 )
          goto LABEL_12;
        LODWORD(v6) = 1;
      }
      else if ( (unsigned __int8)v10 <= 0x10u )
      {
        if ( !v9 )
          goto LABEL_12;
        LODWORD(v6) = 2;
      }
      else if ( (unsigned __int8)v10 <= 0x20u )
      {
        if ( !v9 )
          goto LABEL_12;
        LODWORD(v6) = 4;
      }
      else
      {
        if ( !v9 )
          goto LABEL_12;
        LODWORD(v6) = 8;
      }
    }
    if ( a1[5] || !a4 || !(_BYTE)v10 )
      goto LABEL_25;
LABEL_23:
    v15 = *a2;
    if ( v15 > *a4 )
      *a4 = v15;
    goto LABEL_25;
  }
  if ( v6 != a1[4] )
    goto LABEL_20;
  if ( !a1[5] )
  {
    if ( a2[1] )
    {
      if ( a4 )
      {
        v32 = *a2;
        if ( *a4 < v32 )
          *a4 = v32;
      }
    }
  }
  if ( !v9 )
  {
    v10 = a2[1];
LABEL_83:
    if ( (_BYTE)v10 )
      goto LABEL_12;
  }
LABEL_25:
  if ( a1[2] )
  {
    if ( !a1[1] || (getinf(57) & 0xF) == 6 || (getinf(67) & 0x80u) != 0LL )
      v16 = 8;
    else
      v16 = *((_DWORD *)a1 + 4);
    if ( (getinf(57) & 0xF) != 6 && (getinf(67) & 0x80u) == 0LL )
    {
      v24 = a1[1];
      if ( v24 )
      {
        if ( a3 < v24 )
        {
          if ( !under_debugger )
            interr(1138);
          goto LABEL_107;
        }
        if ( a3 - v24 + ((v24 + v16 - 1) & -v16) < a3 )
          sub_548C70();
        a3 = a3 - v24 + ((v24 + v16 - 1) & -v16);
      }
      v25 = a1[5];
      if ( v25 )
      {
        v26 = 8 * v25;
        v27 = 8 * v25;
        if ( v26 < v16 )
          v16 = v27;
      }
    }
    *(_OWORD *)(a1 + 1) = 0;
    a3 = (a3 + v16 - 1) & -v16;
  }
  *a1 = a3;
  v17 = 1;
  *(__m128i *)(a1 + 3) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(int)v6, (__m128i)(unsigned __int64)(int)v6);
  if ( a2[1] )
  {
    if ( (getinf(57) & 0xF) != 6 && (getinf(67) & 0x80u) == 0LL )
      goto LABEL_69;
    v23 = a2[1];
    if ( v23 <= 1u )
    {
LABEL_73:
      v11 = a1[2];
      v12 = a1[1];
      v10 = v23;
      if ( v11 - v12 < v23 )
      {
LABEL_74:
        v13 = v10 + v12;
        v17 = v13 - v11;
        if ( v13 != v11 )
          goto LABEL_31;
LABEL_75:
        a1[1] = v13;
        goto LABEL_41;
      }
      if ( !v23 )
      {
        v17 = 1;
        goto LABEL_31;
      }
LABEL_13:
      v13 = v10 + v12;
      goto LABEL_75;
    }
    v10 = v23;
    if ( (a1[6] & 0x40) == 0 && (a3 >> 3) / *a2 != ((v23 + a3 - 1) >> 3) / *a2 )
    {
LABEL_69:
      v30 = a1[5];
      if ( v30 >= (int)v6 || !v30 || (getinf(57) & 0xF) == 6 || (getinf(67) & 0x80u) != 0LL )
      {
        v31 = a1[3];
      }
      else
      {
        v31 = a1[5];
        a1[3] = v31;
      }
      v23 = a2[1];
      a3 = (a3 + 8 * (int)v31 - 1) & (-8 * (int)v31);
      goto LABEL_73;
    }
LABEL_12:
    v11 = a1[2];
    v12 = a1[1];
    if ( v11 - v12 < v10 )
      goto LABEL_74;
    goto LABEL_13;
  }
LABEL_31:
  if ( ((getinf(57) & 0xF) == 6 || (getinf(67) & 0x80u) != 0LL) && (a1[6] & 0x40) == 0 )
  {
    v18 = 8 * *a2;
    v19 = a3 % v18;
    if ( a2[1] )
      v19 += v17;
    if ( v18 >= v19 )
    {
      a1[1] = v19;
      a1[2] = v18;
      goto LABEL_41;
    }
    if ( !under_debugger )
      interr(868);
LABEL_107:
    BUG();
  }
  a1[2] = 8 * (unsigned int)*a2;
  if ( !a2[1] )
    v17 = 0;
  a1[1] = v17;
LABEL_41:
  v20 = a2[1];
  if ( !(_BYTE)v20 && (a3 & 7) != 0 )
  {
    if ( !under_debugger )
      interr(817);
    goto LABEL_107;
  }
  *a1 = a3 + v20;
  return a3;
}

