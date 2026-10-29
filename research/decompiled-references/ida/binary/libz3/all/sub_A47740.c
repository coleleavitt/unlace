__int64 __fastcall sub_A47740(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edx
  _QWORD *v4; // r12
  unsigned int v5; // eax
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // r12
  unsigned int v9; // ebp
  unsigned int v10; // r14d
  size_t v11; // rsi
  unsigned int *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // r12
  __int64 v15; // rdx
  char *v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // eax
  __int64 v21; // rdx
  unsigned int v22; // ecx
  _QWORD *v23; // rax
  unsigned int v24; // ecx
  size_t v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // rbp
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // rsi
  _QWORD *i; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // r15
  void *v38; // r13
  __int64 v39; // rsi
  _QWORD *v40; // rax
  char **exception; // rbp
  char **v42; // rbp
  _QWORD *v43; // [rsp+8h] [rbp-90h]
  _DWORD *v44; // [rsp+10h] [rbp-88h]
  unsigned int v45; // [rsp+18h] [rbp-80h]
  unsigned int v46; // [rsp+1Ch] [rbp-7Ch]
  __int64 v47[11]; // [rsp+40h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 576);
  if ( v2 && (v3 = *(_DWORD *)(v2 - 4)) != 0 )
  {
    v7 = *(_QWORD **)(a1 + 880);
    v21 = (unsigned int)(v3 - 1);
    v22 = *(_DWORD *)(v2 + 4 * v21);
    *(_DWORD *)(v2 - 4) = v21;
    v45 = v22;
    if ( v7 )
      goto LABEL_7;
  }
  else
  {
    v4 = *(_QWORD **)(a1 + 568);
    if ( v4 )
    {
      v5 = *((_DWORD *)v4 - 1);
      v45 = v5;
      if ( v5 == *((_DWORD *)v4 - 2) )
      {
        v24 = (3 * v5 + 1) >> 1;
        v46 = v24;
        v25 = 8 * (v24 + ((3 * v5 + 1) & 0xFFFFFFFE)) + 8;
        if ( 24 * v5 + 8 >= (unsigned int)v25 || v5 >= v24 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_98B3B0(v47, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v47);
          sub_233E40((__int64)v47);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = sub_186B270(v25);
        v27 = *(_QWORD **)(a1 + 568);
        v44 = (_DWORD *)v26;
        v4 = (_QWORD *)(v26 + 8);
        if ( v27 )
        {
          v28 = v26;
          v29 = *((unsigned int *)v27 - 1);
          v30 = v4;
          *(_DWORD *)(v28 + 4) = v29;
          v31 = &v27[3 * v29];
          for ( i = v27; v31 != i; *(_QWORD *)((char *)v30 - 12) = *(_QWORD *)((char *)i - 12) )
          {
            v33 = *i;
            *i = 0;
            i += 3;
            v30 += 3;
            *(v30 - 3) = v33;
            *((_DWORD *)v30 - 4) = *((_DWORD *)i - 4);
          }
          v34 = *((unsigned int *)v27 - 1);
          if ( (_DWORD)v34 )
          {
            v43 = &v27[3 * v34];
            do
            {
              v35 = *v27;
              if ( *v27 )
              {
                v36 = *(unsigned int *)(v35 - 4);
                if ( (_DWORD)v36 )
                {
                  v37 = v35 + 40 * v36;
                  do
                  {
                    v38 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v35);
                    v39 = v35 + 16;
                    v35 += 40;
                    sub_182CBA0(v38, v39);
                  }
                  while ( v35 != v37 );
                  v35 = *v27;
                }
                sub_186B220((void *)(v35 - 8));
              }
              v27 += 3;
            }
            while ( v27 != v43 );
            v27 = *(_QWORD **)(a1 + 568);
          }
          sub_186B220(v27 - 1);
          v6 = &v4[3 * (unsigned int)v44[1]];
        }
        else
        {
          *(_DWORD *)(v26 + 4) = 0;
          v6 = (_QWORD *)(v26 + 8);
        }
        *(_QWORD *)(a1 + 568) = v4;
        *v44 = v46;
      }
      else
      {
        v6 = &v4[3 * v5];
      }
    }
    else
    {
      v40 = (_QWORD *)sub_186B270(0x38u);
      v4 = v40 + 1;
      *v40 = 2;
      *(_QWORD *)(a1 + 568) = v40 + 1;
      v6 = v40 + 1;
      v45 = 0;
    }
    *((_DWORD *)v6 + 4) = -1;
    v6[1] = 0xFFFFFFFF00000000LL;
    v7 = *(_QWORD **)(a1 + 880);
    *v6 = 0;
    ++*((_DWORD *)v4 - 1);
    if ( v7 )
    {
LABEL_7:
      v8 = *((unsigned int *)v7 - 1);
      if ( v45 < (unsigned int)v8 )
        goto LABEL_16;
      v9 = v45 + 1;
      if ( (unsigned int)v8 >= v45 + 1 )
      {
        *((_DWORD *)v7 - 1) = v9;
        goto LABEL_16;
      }
      goto LABEL_13;
    }
  }
  v9 = v45 + 1;
  if ( v45 == -1 )
    goto LABEL_16;
  v8 = 0;
  v23 = (_QWORD *)sub_186B270(0x10u);
  v7 = v23 + 1;
  *v23 = 2;
  *(_QWORD *)(a1 + 880) = v23 + 1;
LABEL_13:
  while ( 1 )
  {
    v13 = *((_DWORD *)v7 - 2);
    if ( v13 >= v9 )
      break;
    v10 = (3 * v13 + 1) >> 1;
    v11 = 4 * v10 + 8;
    if ( 4 * v13 + 8 >= (unsigned int)v11 || v13 >= v10 )
    {
      v42 = (char **)__cxa_allocate_exception(0x28u);
      sub_98B3B0(v47, "Overflow encountered when expanding vector");
      *v42 = (char *)off_1C63128;
      sub_2333C0(v42 + 1, v47);
      sub_233E40((__int64)v47);
      __cxa_throw(v42, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v12 = (unsigned int *)sub_186B300(v7 - 1, v11);
    v7 = v12 + 2;
    *v12 = v10;
    *(_QWORD *)(a1 + 880) = v12 + 2;
  }
  v14 = 4 * v8;
  *((_DWORD *)v7 - 1) = v9;
  v15 = 4LL * v9;
  v16 = (char *)v7 + v14;
  if ( v14 != v15 )
    memset(v16, 0, v15 - v14);
LABEL_16:
  v17 = *(_QWORD *)(a1 + 568);
  if ( v17 )
    v18 = *(_DWORD *)(v17 - 4);
  else
    v18 = 0;
  v19 = *(_DWORD *)(a1 + 324);
  if ( v19 < v18 )
    v19 = v18;
  *(_DWORD *)(a1 + 324) = v19;
  return v45;
}

