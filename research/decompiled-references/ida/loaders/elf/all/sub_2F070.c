__int64 __fastcall sub_2F070(__int64 a1, __int64 a2, double a3, double a4)
{
  __int64 v5; // rsi
  const char *v6; // r12
  __int64 v7; // rax
  int v8; // ecx
  int v9; // esi
  __int64 v10; // r15
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // edx
  int v15; // ebx
  const char *v16; // rax
  int v18; // ebx
  unsigned __int16 v19; // ax
  const char *v20; // rsi
  const char *v21; // rsi
  unsigned __int64 v22; // [rsp+0h] [rbp-88h]
  __int64 v23; // [rsp+8h] [rbp-80h]
  const char *v24; // [rsp+10h] [rbp-78h] BYREF
  __int128 v25; // [rsp+18h] [rbp-70h]
  char v26[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
  {
    if ( !under_debugger )
      interr(20096);
    BUG();
  }
  v6 = &s1;
  v7 = sub_49020(a2, v5);
  if ( !*(_QWORD *)(v7 + 8) )
  {
    if ( *(_BYTE *)(a1 + 24) )
      goto LABEL_4;
LABEL_17:
    sub_BFC0((__int64)"AUTOHIDE SESSION\nIllegal TLS symbol '%s' (no TLS template)", v6);
    return -1;
  }
  v6 = *(const char **)v7;
  if ( !*(_BYTE *)(a1 + 24) )
    goto LABEL_17;
LABEL_4:
  if ( *(_WORD *)(*(_QWORD *)(a1 + 64) + 520LL) != 1 )
  {
    v16 = *(const char **)(a2 + 80);
    if ( (unsigned __int64)v16 < *(_QWORD *)(a1 + 8) )
      return (__int64)&v16[*(_QWORD *)a1];
    if ( !*(_DWORD *)(a1 + 20) )
      goto LABEL_41;
    goto LABEL_43;
  }
  v8 = *(_DWORD *)(a2 + 88);
  if ( *(_BYTE *)(a1 + 96) )
  {
    v9 = *(_DWORD *)(a1 + 92);
    if ( v9 == v8 )
    {
      v16 = *(const char **)(a2 + 80);
      if ( (unsigned __int64)v16 < *(_QWORD *)(a1 + 80) )
        return (__int64)&v16[*(_QWORD *)(a1 + 72)];
      if ( !v9 )
        goto LABEL_41;
      goto LABEL_43;
    }
    if ( !*(_BYTE *)(a1 + 128) )
    {
      v24 = nullptr;
      v25 = 0;
      if ( v9 )
        goto LABEL_9;
LABEL_27:
      v18 = 0;
      goto LABEL_28;
    }
    v14 = *(_DWORD *)(a1 + 124);
    if ( v14 != v8 )
    {
      v24 = nullptr;
      v25 = 0;
      if ( v9 )
      {
LABEL_9:
        sub_2BDC0((__int64 *)&v24, (__int64)"%u", v9);
        if ( *(_BYTE *)(a1 + 128) && *(_DWORD *)(a1 + 124) )
        {
          v10 = v25;
          if ( (_QWORD)v25 )
          {
            v11 = v25 + 1;
            v12 = v25 + 2;
            v10 = v25 - 1;
          }
          else
          {
            v12 = 3;
            v11 = 2;
          }
          v13 = (__int64)v24;
          if ( *((_QWORD *)&v25 + 1) < v12 )
          {
            v23 = v11;
            v22 = v12;
            v24 = (const char *)qvector_reserve(&v24, v24, v12, 1);
            v11 = v23;
            v13 = (__int64)v24;
            v12 = v22;
          }
          *(_QWORD *)&v25 = v12;
          *(_BYTE *)(v13 + v11) = 0;
          *(_WORD *)&v24[v10] = 8236;
          v14 = *(_DWORD *)(a1 + 124);
          v15 = 1;
          goto LABEL_25;
        }
        v8 = *(_DWORD *)(a2 + 88);
        v18 = 1;
LABEL_28:
        v19 = *(_WORD *)(a2 + 54);
        if ( v19 <= 0xFEFFu || v8 )
          qsnprintf(v26, 20, "%u", v8);
        else
          qsnprintf(v26, 20, "%04X", v19);
        sub_EAA0((__int64)"Illegal section %s of the TLS symbol '%s'", v26, v6);
        if ( v18 == 1 )
        {
          v21 = &s1;
          if ( (_QWORD)v25 )
            v21 = v24;
          sub_EAA0((__int64)" (the correct TLS section is %s)\n", v21);
        }
        else if ( v18 == 2 )
        {
          v20 = &s1;
          if ( (_QWORD)v25 )
            v20 = v24;
          sub_EAA0((__int64)" (the correct TLS sections are %s)\n", v20);
        }
        else
        {
          sub_EAA0((__int64)"\n");
        }
        if ( v24 )
        {
          *(_QWORD *)&v25 = 0;
          qfree(v24);
        }
        return -1;
      }
      goto LABEL_23;
    }
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 128) )
    {
      v24 = nullptr;
      v25 = 0;
      goto LABEL_27;
    }
    v14 = *(_DWORD *)(a1 + 124);
    if ( v14 != v8 )
    {
      v24 = nullptr;
      v25 = 0;
LABEL_23:
      if ( v14 )
      {
        v15 = 0;
LABEL_25:
        sub_2BDC0((__int64 *)&v24, (__int64)"%u", v14);
        v8 = *(_DWORD *)(a2 + 88);
        v18 = v15 + 1;
        goto LABEL_28;
      }
      goto LABEL_27;
    }
  }
  v16 = *(const char **)(a2 + 80);
  if ( (unsigned __int64)v16 >= *(_QWORD *)(a1 + 112) )
  {
    if ( !v8 )
    {
LABEL_41:
      sub_EAA0(
        (__int64)"Illegal offset 0x%a of the TLS symbol '%s' (the size of the TLS template is 0x%a)\n",
        a3,
        v16,
        a4);
      return -1;
    }
LABEL_43:
    sub_EAA0(
      (__int64)"Illegal value 0x%a of the TLS symbol '%s' (the size of the TLS section %u is 0x%a)\n",
      a3,
      v16,
      (_DWORD)v6,
      a4);
    return -1;
  }
  return (__int64)&v16[*(_QWORD *)(a1 + 104)];
}

