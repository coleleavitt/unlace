__int64 __fastcall sub_F6990(__int64 a1, _QWORD *a2, int a3, __int64 a4, char a5)
{
  _DWORD *exception; // rdi
  __int64 v6; // rax
  int v7; // r15d
  __int64 v11; // rdx
  const char *v12; // rcx
  __int64 v13; // rax
  int v14; // r14d
  unsigned int v15; // ebp
  const char *v17; // rax
  char *v18; // rsi
  __int64 *v19; // rdi
  __int64 v20; // rdx
  const char *v21; // rdx
  __int64 v22; // rax
  __int64 v24; // [rsp+18h] [rbp-80h] BYREF
  __int64 v25; // [rsp+20h] [rbp-78h] BYREF
  __int128 v26; // [rsp+28h] [rbp-70h]
  __int64 idati; // [rsp+40h] [rbp-58h] BYREF
  const char *v28; // [rsp+48h] [rbp-50h]
  __int16 v29; // [rsp+50h] [rbp-48h]
  unsigned __int64 v30; // [rsp+58h] [rbp-40h]

  v7 = a5 & 1;
  v30 = __readfsqword(0x28u);
  v26 = 0;
  v24 = 0;
  v25 = 0;
  if ( a3 != -1 )
  {
    sub_67670(&v25, (__int64)"arg%d", a3 + 1);
    sub_F68D0(&v25, (__int64)"_%a", 0.0);
    if ( v7 )
    {
      v13 = v26;
      LOBYTE(v14) = 0;
      goto LABEL_4;
    }
    if ( (_QWORD)v26 )
    {
      v12 = (const char *)v25;
      v17 = (const char *)v25;
      if ( v25 )
        goto LABEL_14;
LABEL_35:
      LOBYTE(v14) = 0;
      goto LABEL_6;
    }
    if ( s1 )
      goto LABEL_18;
    goto LABEL_32;
  }
  v22 = qvector_reserve(&v25, 0, 7, 1);
  v25 = v22;
  v18 = "_%a";
  *(_QWORD *)&v26 = 7;
  *(_WORD *)(v22 + 4) = 27745;
  v19 = &v25;
  *(_DWORD *)v22 = 1987339634;
  *(_BYTE *)(v25 + 6) = 0;
  sub_F68D0(&v25, (__int64)"_%a", 0.0);
  if ( v7 )
  {
    v13 = v26;
LABEL_20:
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 944) + 68LL) & 1;
    if ( v14 )
    {
      if ( v13 )
      {
        v12 = (const char *)v25;
        goto LABEL_23;
      }
      goto LABEL_36;
    }
LABEL_4:
    v12 = s1;
    if ( v13 )
      v12 = (const char *)v25;
    goto LABEL_6;
  }
  if ( !(_QWORD)v26 )
  {
    if ( s1 )
    {
LABEL_18:
      v17 = s1;
      goto LABEL_14;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 944) + 68LL) & 1) != 0 )
    {
LABEL_36:
      v21 = s1;
      if ( s1 )
        goto LABEL_24;
    }
LABEL_32:
    LOBYTE(v14) = 0;
    v12 = s1;
LABEL_6:
    if ( (unsigned int)save_tinfo(a2, 0, 0, v12, 5) )
    {
      if ( !under_debugger )
        sub_37E160(52657);
      BUG();
    }
    if ( (_BYTE)v14 )
    {
      exception = __cxa_allocate_exception(0x30u);
      *(_QWORD *)exception = off_4BC450;
      v6 = *(_QWORD *)(a1 + 40);
      exception[2] = -17;
      *((_QWORD *)exception + 3) = 0;
      *((_QWORD *)exception + 2) = v6;
      *((_OWORD *)exception + 2) = 0;
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_762C0);
    }
    goto LABEL_8;
  }
  v12 = (const char *)v25;
  v17 = (const char *)v25;
  if ( !v25 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 944) + 68LL) & 1) != 0 )
    {
LABEL_23:
      v21 = v12;
      if ( v12 )
      {
LABEL_24:
        v28 = v21;
        v29 = 256;
        idati = get_idati(v19, v18, v21, 256);
        LOBYTE(v14) = create_tinfo(&v24, 61, 61, &idati);
        if ( (_BYTE)v14 )
          v14 = compare_tinfo(*a2, v24, 256) ^ 1;
        v13 = v26;
        goto LABEL_4;
      }
      goto LABEL_35;
    }
    goto LABEL_35;
  }
LABEL_14:
  v28 = v17;
  v29 = 256;
  v18 = (_BYTE *)(&word_3C + 1);
  v19 = &v24;
  idati = get_idati(&v25, 256, v11, v12);
  LOBYTE(v14) = create_tinfo(&v24, 61, 61, &idati);
  if ( !(_BYTE)v14 )
  {
    v13 = v26;
    if ( a3 != -1 )
      goto LABEL_4;
    goto LABEL_20;
  }
  v15 = 0;
  if ( (a5 & 2) != 0 )
  {
    v20 = v24;
    v24 = *a2;
    *a2 = v20;
LABEL_8:
    v15 = 1;
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  clear_tinfo_t(&v24);
  return v15;
}
