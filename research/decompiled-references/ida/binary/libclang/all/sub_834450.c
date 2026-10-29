__int64 __fastcall sub_834450(_QWORD *a1, __int64 a2, unsigned __int64 a3, char a4, __int64 *a5)
{
  unsigned int v5; // r15d
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 (*v11)(); // rdx
  __int64 (*v12)(); // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v18; // rdx
  char v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rbp
  void *v23; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-60h]
  __int64 v25[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = 0;
  v8 = sub_8116F0(a3);
  if ( (*(_WORD *)v8 & 0x1FF) != 0xA )
    return v5;
  v24 = 1;
  v23 = nullptr;
  v9 = sub_6BF060(a1, a2);
  if ( *(_DWORD *)(v8 + 16) * ((*(_WORD *)(v8 + 2) >> 6) & 7) )
  {
    v18 = *(unsigned int *)(v8 + 4);
    a2 = 0;
    v25[1] = *(_DWORD *)(v8 + 16) * ((*(_WORD *)(v8 + 2) >> 6) & 7u);
    v25[0] = v8 + 4 * v18 + 20;
    if ( (unsigned __int8)sub_25E5A70(v25, 0) )
      return v5;
  }
  else
  {
    v24 = 32;
  }
  v10 = a1[2161];
  v11 = sub_81F570;
  v12 = *(__int64 (**)())(*(_QWORD *)v10 + 392LL);
  if ( v12 == sub_81F570 || (v19 = v12(), v21 = sub_2575D20(v10, a2, v20), v22 = v21, v19) )
  {
    v13 = sub_2575D20(v10, a2, v11);
    v14 = v13;
    if ( a4 )
    {
      if ( v9 == v13 )
        sub_257CE40(v25, v13, 0);
      else
        sub_2579AA0(v25, v9, 0);
      v15 = 1;
      if ( v14 == v25[0] )
        goto LABEL_21;
    }
    else
    {
      if ( v9 == v13 )
        sub_257CE40(v25, v13, 0);
      else
        sub_2579AA0(v25, v9, 0);
      v15 = 0;
      if ( v14 == v25[0] )
        goto LABEL_21;
    }
  }
  else if ( a4 )
  {
    if ( v9 == v21 )
      sub_257CE40(v25, v21, 0);
    else
      sub_2579AA0(v25, v9, 0);
    v15 = 0;
    if ( v25[0] == v22 )
    {
LABEL_21:
      sub_257D880(v25, v15, 0, &v23);
      goto LABEL_10;
    }
  }
  else
  {
    if ( v9 == v21 )
      sub_257CE40(v25, v21, 0);
    else
      sub_2579AA0(v25, v9, 0);
    v15 = 1;
    if ( v25[0] == v22 )
      goto LABEL_21;
  }
  sub_2575EC0(v25, v15, 0, &v23);
LABEL_10:
  v5 = 1;
  sub_834250(a5, v25, v16);
  sub_5FF3B0(v25);
  if ( v24 > 0x40 && v23 )
    operator delete[](v23);
  return v5;
}

