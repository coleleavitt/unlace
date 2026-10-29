__int64 __fastcall sub_6358A0(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rax
  __int16 v12; // ax
  unsigned __int8 v13; // dl
  __int64 v14; // rax
  int v15; // r12d
  int v16; // r14d
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int8 v21; // dl
  __int64 v22; // rax
  unsigned int v23; // r15d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // r12
  _QWORD *v27; // rax
  char **exception; // rbx
  __int64 v29; // [rsp+8h] [rbp-60h] BYREF
  __int64 v30[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !a3 )
  {
    v30[0] = a2;
    if ( !a2 )
    {
LABEL_31:
      sub_62BD60(a1 + 7, v30);
      v30[0] = 0;
      sub_62BCA0(a1 + 11, v30);
      return 1;
    }
LABEL_30:
    ++*(_DWORD *)(a2 + 8);
    goto LABEL_31;
  }
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
    goto LABEL_15;
  v5 = *(_WORD *)(a2 + 4);
  if ( v5 )
  {
    if ( v5 == 2 )
      goto LABEL_6;
LABEL_15:
    v6 = 0;
    goto LABEL_16;
  }
  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_15;
LABEL_6:
  v6 = 1;
  v7 = sub_1680FB0(a1[4], a2, 0);
  v8 = v7;
  if ( v7 )
  {
    v30[0] = v7;
    ++*(_DWORD *)(v7 + 8);
    sub_62BD60(a1 + 7, v30);
    if ( a2 != v8 )
    {
      v9 = a1[5];
      if ( v9 )
      {
        v10 = *(_DWORD *)(v9 - 4);
        if ( v10 )
          *(_BYTE *)(v9 + 16LL * (unsigned int)(v10 - 1) + 8) |= 2u;
      }
    }
    v11 = sub_1680FB0(a1[9], a2, 0);
    v30[0] = v11;
    if ( v11 )
      ++*(_DWORD *)(v11 + 8);
    sub_62BCA0(a1 + 11, v30);
    return 1;
  }
LABEL_16:
  if ( !(unsigned __int8)sub_6AA8B0(a1[18], a2) )
  {
    v30[0] = a2;
    goto LABEL_30;
  }
  v12 = *(_WORD *)(a2 + 4);
  if ( v12 == 1 )
  {
    sub_635710(a1, a2);
  }
  else
  {
    if ( v12 == 2 )
    {
      v21 = 3;
      if ( a3 != 3 )
        v21 = (a3 - 1) & 3;
      v22 = a1[7];
      v15 = v21;
      if ( v22 )
        v16 = *(_DWORD *)(v22 - 4);
      else
        v16 = 0;
      v17 = (_QWORD *)a1[5];
      if ( v17 )
      {
        v18 = *((unsigned int *)v17 - 1);
        if ( (_DWORD)v18 != *((_DWORD *)v17 - 2) )
          goto LABEL_27;
        v23 = (unsigned int)(3 * v18 + 1) >> 1;
        v24 = 16 * v23 + 8;
        if ( 16 * (int)v18 + 8 >= (unsigned int)v24 || (unsigned int)v18 >= v23 )
          goto LABEL_52;
        goto LABEL_44;
      }
LABEL_51:
      v27 = (_QWORD *)sub_186B270(0x28u);
      v17 = v27 + 1;
      *v27 = 2;
      a1[5] = v27 + 1;
      v19 = (__int64)(v27 + 1);
      goto LABEL_28;
    }
    if ( v12 )
    {
      sub_1872CE0("");
      sub_1873130(114, 226);
    }
    if ( *(_DWORD *)(a2 + 24) )
    {
      v13 = 3;
      if ( a3 != 3 )
        v13 = (a3 - 1) & 3;
      v14 = a1[7];
      v15 = v13;
      if ( v14 )
        v16 = *(_DWORD *)(v14 - 4);
      else
        v16 = 0;
      v17 = (_QWORD *)a1[5];
      if ( v17 )
      {
        v18 = *((unsigned int *)v17 - 1);
        if ( (_DWORD)v18 != *((_DWORD *)v17 - 2) )
        {
LABEL_27:
          v19 = (__int64)&v17[2 * v18];
LABEL_28:
          *(_QWORD *)v19 = a2;
          *(_DWORD *)(v19 + 12) = v16;
          *(_DWORD *)(v19 + 8) = v6 | (16 * v15);
          ++*((_DWORD *)v17 - 1);
          return 0;
        }
        v23 = (unsigned int)(3 * v18 + 1) >> 1;
        v24 = 16 * v23 + 8;
        if ( 16 * (int)v18 + 8 >= (unsigned int)v24 || (unsigned int)v18 >= v23 )
        {
LABEL_52:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v30, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v30);
          sub_233E40((__int64)v30);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
LABEL_44:
        v25 = (unsigned int *)sub_186B300(v17 - 1, v24);
        v17 = v25 + 2;
        a1[5] = v25 + 2;
        *v25 = v23;
        v19 = (__int64)&v25[4 * v25[1] + 2];
        goto LABEL_28;
      }
      goto LABEL_51;
    }
    v26 = a1[1];
    *(_DWORD *)(a2 + 8) += 2;
    v30[0] = a2;
    sub_62BD60(a1 + 7, v30);
    v29 = 0;
    sub_62BCA0(a1 + 11, &v29);
    sub_629F20(a2, v26);
  }
  return 1;
}

