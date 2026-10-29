__int64 __fastcall sub_1690(__int64 a1)
{
  unsigned __int64 v2; // rbx
  bool v3; // cf
  __int64 v4; // rax
  char *v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  char v8; // r13
  unsigned __int64 i; // rbx
  __int16 v10; // r12
  __int16 *v11; // r14
  unsigned __int64 v12; // rdi
  int byte; // r12d
  int v14; // eax
  __int16 v15; // ax
  int v16; // edx
  __int64 v17; // rax
  char v18; // al
  char v20; // al
  unsigned __int64 *v21; // rax
  __int64 v22; // rbx
  unsigned __int64 v23; // rbx
  __int64 v24; // r12
  unsigned __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 j; // r12
  __int64 v30; // rax
  unsigned __int64 *v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rbx
  __int64 v35; // [rsp-10h] [rbp-B8h]
  unsigned __int64 v36; // [rsp+10h] [rbp-98h]
  unsigned __int64 v37; // [rsp+20h] [rbp-88h]
  unsigned __int64 v38; // [rsp+28h] [rbp-80h]
  __int16 v39; // [rsp+30h] [rbp-78h] BYREF
  char v40; // [rsp+32h] [rbp-76h] BYREF
  _BYTE v41[5]; // [rsp+63h] [rbp-45h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v2 = 16 * getinf(12);
  v3 = getinf(19) < v2;
  v4 = -1;
  if ( !v3 )
    v4 = v2;
  v37 = v4;
  if ( a1 )
  {
    v5 = strrchr(s, 63);
    if ( !v5 )
    {
      if ( !under_debugger )
        interr(20067);
      BUG();
    }
    v6 = (int)(v5 - s);
    s[v6] = 50;
    v7 = getinf(5);
    if ( v7 == 5 )
    {
      a0000001ff[3] = 48;
      v8 = 58;
    }
    else
    {
      v8 = 83;
      if ( v7 != 13 )
      {
        a0000001ff[3] = 0;
        v8 = 59;
        s[v6] = 52;
      }
    }
    a0000001ff[0] = v8;
    LODWORD(xmmword_51C0) = 4;
    v38 = getinf(15);
    for ( i = getinf(19); i < getinf(20); ++i )
    {
      while ( (unsigned __int8)is_loaded(i) && (unsigned __int8)segtype(i) != 12 )
      {
        if ( v37 == -1 )
        {
          v21 = (unsigned __int64 *)getseg(i);
          if ( v21 )
          {
            v37 = *v21;
            v36 = i - *v21;
            v10 = (unsigned __int8)v36 + BYTE1(v36);
          }
          else
          {
            v37 = i;
            v10 = 0;
            v36 = 0;
          }
          if ( v38 != -1 )
            v38 = getinf(19) + v38 - v37;
        }
        else
        {
          v36 = i - v37;
          v10 = (unsigned __int8)(i - v37) + ((unsigned __int16)(i - v37) >> 8);
        }
        WORD6(xmmword_51C0) = v10;
        v11 = &v39;
        if ( (unsigned int)getinf(5) == 5 )
        {
          v11 = (__int16 *)&v40;
          v39 = 12336;
        }
        v12 = i;
        DWORD2(xmmword_51C0) = 0;
        while ( 1 )
        {
          ++i;
          byte = (unsigned __int8)get_byte(v12);
          v14 = qsnprintf(v11, v41 - (_BYTE *)v11, "%02X", byte);
          WORD6(xmmword_51C0) += (unsigned __int8)byte;
          v11 = (__int16 *)((char *)v11 + v14);
          ++DWORD2(xmmword_51C0);
          if ( SDWORD2(xmmword_51C0) > 23
            || i >= getinf(20)
            || !(unsigned __int8)is_loaded(i)
            || (unsigned __int8)segtype(i) == 12 )
          {
            break;
          }
          v12 = i;
        }
        qfputc((unsigned int)v8, a1);
        if ( (unsigned int)getinf(5) == 13 )
        {
          v20 = sub_13A0(v36);
          qfputc((unsigned int)(char)(v20 + 49), a1);
          v15 = WORD6(xmmword_51C0) + 1;
        }
        else
        {
          v15 = WORD6(xmmword_51C0);
        }
        WORD6(xmmword_51C0) = WORD4(xmmword_51C0) + v15;
        v16 = getinf(5);
        v17 = WORD6(xmmword_51C0);
        if ( v16 != 6 )
        {
          v17 = (unsigned __int8)-BYTE12(xmmword_51C0);
          WORD6(xmmword_51C0) = (unsigned __int8)v17;
        }
        sub_15D0(a1, (__int64)s, DWORD2(xmmword_51C0), (unsigned int)xmmword_51C0, v36, &v39, v17);
        if ( i >= getinf(20) )
          goto LABEL_25;
      }
    }
LABEL_25:
    if ( (unsigned int)getinf(5) == 13 )
    {
      if ( v38 != -1 )
      {
        qfputc((unsigned int)v8, a1);
        WORD6(xmmword_51C0) = 0;
        DWORD2(xmmword_51C0) = 0;
        v18 = sub_13A0(v38);
        qfputc((unsigned int)(char)(57 - v18), a1);
        v35 = (unsigned __int8)~(BYTE8(xmmword_51C0) + BYTE12(xmmword_51C0));
        WORD6(xmmword_51C0) = (unsigned __int8)~(BYTE8(xmmword_51C0) + BYTE12(xmmword_51C0));
        sub_15D0(a1, (__int64)s, DWORD2(xmmword_51C0), (unsigned int)xmmword_51C0, v38, &a02x[4], v35);
      }
    }
    else
    {
      sub_15D0(a1, (__int64)"%s", a0000001ff);
    }
    return 1;
  }
  if ( (unsigned int)getinf(5) == 13 )
    return 1;
  v22 = getinf(20);
  v23 = v22 - getinf(19);
  if ( v23 <= 0x10000 )
    return 1;
  v24 = 0;
  v25 = getinf(19);
  while ( v25 < getinf(20) )
  {
    v26 = getseg(v25);
    if ( v26 && *(_BYTE *)(v26 + 184) == 12 )
    {
      if ( v24 )
      {
        v23 -= v24;
        if ( v23 != 0x10000 )
          return 1;
      }
      v27 = *(_QWORD *)(v26 + 8);
      v28 = v25 - v27 + v23;
      if ( v28 <= 0xFFFF )
        return 1;
      v23 = v28 + 1;
      v25 = v27;
      v24 = 0;
    }
    else
    {
      if ( (unsigned __int8)is_loaded(v25) )
        break;
      if ( v37 == -1 )
      {
        ++v24;
      }
      else if ( --v23 <= 0x10000 )
      {
        return 1;
      }
      ++v25;
    }
  }
  if ( v37 == -1 )
  {
    v31 = (unsigned __int64 *)getseg(v25);
    v32 = v25;
    if ( v31 )
      v32 = *v31;
    v23 -= v32;
    if ( v23 <= 0x10000 )
      return 1;
  }
  if ( v25 != getinf(20) )
  {
    for ( j = getinf(20) - 1; v25 < j; j = v33 )
    {
      while ( 1 )
      {
        v30 = getseg(j);
        if ( v30 )
        {
          if ( *(_BYTE *)(v30 + 184) == 12 )
            break;
        }
        if ( (unsigned __int8)is_loaded(j) )
          return 0;
        if ( --v23 <= 0x10000 )
          return 1;
        if ( v25 >= --j )
          return 0;
      }
      v33 = *(_QWORD *)v30;
      v34 = v33 - j + v23;
      if ( v34 <= 0xFFFF )
        return 1;
      v23 = v34 + 1;
    }
  }
  return 0;
}

