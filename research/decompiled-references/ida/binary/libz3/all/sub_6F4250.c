__int64 __fastcall sub_6F4250(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v4; // ax
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // edx
  unsigned __int8 v10; // dl
  int v11; // r13d
  unsigned __int8 v13; // dl
  __int64 v14; // rax
  int v15; // r12d
  int v16; // r14d
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  unsigned int v22; // r15d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // edx
  _QWORD *v28; // rax
  char **exception; // rbx
  __int64 v30; // [rsp+8h] [rbp-60h] BYREF
  __int64 v31[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !a3 )
  {
    v31[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_6EFE70(a1 + 7, v31);
    return 1;
  }
  v4 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v10 = 0;
    v11 = 0;
  }
  else
  {
    if ( v4 )
    {
      if ( v4 != 2 )
      {
        if ( v4 != 1 )
        {
LABEL_17:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_32:
        sub_6F40E0(a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v6 = a1[1];
      ++*(_DWORD *)(a2 + 8);
      if ( (unsigned int)sub_6EF470(a1[18], *(_QWORD *)(a2 + 16), 0, nullptr, a1 + 60) == 5 )
      {
        ++*(_DWORD *)(a2 + 8);
        v31[0] = a2;
        sub_6EFE70(a1 + 7, v31);
      }
      else
      {
        v7 = a1[60];
        v30 = v7;
        if ( v7 )
          ++*(_DWORD *)(v7 + 8);
        sub_6EFE70(a1 + 7, &v30);
        sub_6EF400(a1[60], a1[61]);
        a1[60] = 0;
        v8 = a1[5];
        if ( v8 )
        {
          v9 = *(_DWORD *)(v8 - 4);
          if ( v9 )
            *(_BYTE *)(v8 + 16LL * (unsigned int)(v9 - 1) + 8) |= 2u;
        }
      }
      sub_6EF3E0(a2, v6);
      return 1;
    }
    v20 = sub_1680FB0(a1[4], a2, 0);
    v21 = v20;
    if ( v20 )
    {
      v31[0] = v20;
      ++*(_DWORD *)(v20 + 8);
      sub_6EFE70(a1 + 7, v31);
      if ( a2 != v21 )
      {
        v26 = a1[5];
        if ( v26 )
        {
          v27 = *(_DWORD *)(v26 - 4);
          if ( v27 )
            *(_BYTE *)(v26 + 16LL * (unsigned int)(v27 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v4 = *(_WORD *)(a2 + 4);
    v10 = 1;
    v11 = 1;
  }
  if ( v4 == 1 )
    goto LABEL_32;
  if ( v4 == 2 )
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
      if ( (_DWORD)v18 == *((_DWORD *)v17 - 2) )
      {
        v22 = (unsigned int)(3 * v18 + 1) >> 1;
        v23 = 16 * v22 + 8;
        if ( 16 * (int)v18 + 8 >= (unsigned int)v23 || (unsigned int)v18 >= v22 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v31, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v31);
          sub_233E40((__int64)v31);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v24 = (unsigned int *)sub_186B300(v17 - 1, v23);
        v17 = v24 + 2;
        *v24 = v22;
        v25 = v24[1];
        a1[5] = v17;
        v19 = &v17[2 * v25];
      }
      else
      {
        v19 = &v17[2 * v18];
      }
    }
    else
    {
      v28 = (_QWORD *)sub_186B270(0x28u);
      v17 = v28 + 1;
      *v28 = 2;
      a1[5] = v28 + 1;
      v19 = v28 + 1;
    }
    *v19 = a2;
    *((_DWORD *)v19 + 3) = v16;
    *((_DWORD *)v19 + 2) = v11 | (16 * v15);
    ++*((_DWORD *)v17 - 1);
    return 0;
  }
  else
  {
    if ( v4 )
      goto LABEL_17;
    if ( !*(_DWORD *)(a2 + 24) )
      goto LABEL_6;
    sub_39B170((__int64)a1, a2, v10, 0, a3 - (a3 != 3));
    return 0;
  }
}

