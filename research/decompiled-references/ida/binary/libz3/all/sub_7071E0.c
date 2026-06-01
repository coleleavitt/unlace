__int64 __fastcall sub_7071E0(__int64 a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // edx
  int v14; // r13d
  unsigned __int8 v16; // dl
  __int64 v17; // rax
  int v18; // r12d
  int v19; // r14d
  _QWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r13
  unsigned __int8 v25; // dl
  __int64 v26; // rax
  unsigned int v27; // r15d
  size_t v28; // rsi
  char **exception; // rbx
  unsigned int *v30; // rax
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+0h] [rbp-78h] BYREF
  __int64 v37; // [rsp+8h] [rbp-70h] BYREF
  __int64 v38; // [rsp+10h] [rbp-68h] BYREF
  __int64 v39; // [rsp+18h] [rbp-60h] BYREF
  __int64 v40[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( !a3 )
  {
    v40[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_6FFDF0((_QWORD *)(a1 + 56), v40);
    v40[0] = 0;
    sub_6FFD30((_QWORD *)(a1 + 88), v40);
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v14 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
        {
LABEL_19:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_34:
        sub_706F30((_QWORD *)a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v7 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a2 + 8);
      if ( (unsigned int)sub_6FFF20(*(__int64 **)(a1 + 144), *(_QWORD *)(a2 + 16), 0, 0, a1 + 480) == 5 )
      {
        ++*(_DWORD *)(a2 + 8);
        v40[0] = a2;
        sub_6FFDF0((_QWORD *)(a1 + 56), v40);
        v39 = 0;
        sub_6FFD30((_QWORD *)(a1 + 88), &v39);
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 480);
        v38 = v8;
        if ( v8 )
          ++*(_DWORD *)(v8 + 8);
        sub_6FFDF0((_QWORD *)(a1 + 56), &v38);
        v9 = *(_QWORD *)(a1 + 496);
        if ( v9 )
        {
          ++*(_DWORD *)(v9 + 8);
          v37 = v9;
          sub_6FFD30((_QWORD *)(a1 + 88), &v37);
        }
        else
        {
          v35 = sub_15DE370(*(_QWORD *)(a1 + 8));
          v36 = v35;
          if ( v35 )
            ++*(_DWORD *)(v35 + 8);
          sub_6FFD30((_QWORD *)(a1 + 88), &v36);
        }
        sub_6FFC60(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
        v10 = *(_QWORD *)(a1 + 488);
        v11 = *(_QWORD *)(a1 + 480);
        *(_QWORD *)(a1 + 496) = 0;
        sub_6FFC80(v11, v10);
        *(_QWORD *)(a1 + 480) = 0;
        v12 = *(_QWORD *)(a1 + 40);
        if ( v12 )
        {
          v13 = *(_DWORD *)(v12 - 4);
          if ( v13 )
            *(_BYTE *)(v12 + 16LL * (unsigned int)(v13 - 1) + 8) |= 2u;
        }
      }
      sub_6FFC60(a2, v7);
      return 1;
    }
    v23 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v24 = v23;
    if ( v23 )
    {
      v40[0] = v23;
      ++*(_DWORD *)(v23 + 8);
      sub_6FFDF0((_QWORD *)(a1 + 56), v40);
      if ( a2 != v24 )
      {
        v31 = *(_QWORD *)(a1 + 40);
        if ( v31 )
        {
          v32 = *(_DWORD *)(v31 - 4);
          if ( v32 )
            *(_BYTE *)(v31 + 16LL * (unsigned int)(v32 - 1) + 8) |= 2u;
        }
      }
      v33 = sub_1680FB0(*(_QWORD *)(a1 + 72), a2, 0);
      v40[0] = v33;
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      sub_6FFD30((_QWORD *)(a1 + 88), v40);
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v14 = 1;
  }
  if ( v5 == 1 )
    goto LABEL_34;
  if ( v5 != 2 )
  {
    if ( v5 )
      goto LABEL_19;
    if ( !*(_DWORD *)(a2 + 24) )
      goto LABEL_6;
    v25 = 3;
    if ( a3 != 3 )
      v25 = (a3 - 1) & 3;
    v26 = *(_QWORD *)(a1 + 56);
    v18 = v25;
    if ( v26 )
      v19 = *(_DWORD *)(v26 - 4);
    else
      v19 = 0;
    v20 = *(_QWORD **)(a1 + 40);
    if ( v20 )
    {
      v21 = *((unsigned int *)v20 - 1);
      if ( (_DWORD)v21 == *((_DWORD *)v20 - 2) )
      {
        v27 = (unsigned int)(3 * v21 + 1) >> 1;
        v28 = 16 * v27 + 8;
        if ( 16 * (int)v21 + 8 >= (unsigned int)v28 || (unsigned int)v21 >= v27 )
          goto LABEL_46;
LABEL_49:
        v30 = (unsigned int *)sub_186B300(v20 - 1, v28);
        v20 = v30 + 2;
        *(_QWORD *)(a1 + 40) = v30 + 2;
        *v30 = v27;
        v22 = (__int64)&v30[4 * v30[1] + 2];
        goto LABEL_31;
      }
      goto LABEL_30;
    }
LABEL_60:
    v34 = (_QWORD *)sub_186B270(0x28u);
    v20 = v34 + 1;
    *v34 = 2;
    *(_QWORD *)(a1 + 40) = v34 + 1;
    v22 = (__int64)(v34 + 1);
    goto LABEL_31;
  }
  v16 = 3;
  if ( a3 != 3 )
    v16 = (a3 - 1) & 3;
  v17 = *(_QWORD *)(a1 + 56);
  v18 = v16;
  if ( v17 )
    v19 = *(_DWORD *)(v17 - 4);
  else
    v19 = 0;
  v20 = *(_QWORD **)(a1 + 40);
  if ( !v20 )
    goto LABEL_60;
  v21 = *((unsigned int *)v20 - 1);
  if ( (_DWORD)v21 == *((_DWORD *)v20 - 2) )
  {
    v27 = (unsigned int)(3 * v21 + 1) >> 1;
    v28 = 16 * v27 + 8;
    if ( 16 * (int)v21 + 8 >= (unsigned int)v28 || (unsigned int)v21 >= v27 )
    {
LABEL_46:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_6FFCA0(v40, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v40);
      sub_233E40((__int64)v40);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    goto LABEL_49;
  }
LABEL_30:
  v22 = (__int64)&v20[2 * v21];
LABEL_31:
  *(_QWORD *)v22 = a2;
  *(_DWORD *)(v22 + 12) = v19;
  *(_DWORD *)(v22 + 8) = v14 | (16 * v18);
  ++*((_DWORD *)v20 - 1);
  return 0;
}

