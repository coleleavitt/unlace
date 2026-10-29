__int64 __fastcall sub_8A1A40(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rdx
  _QWORD *v4; // rbp
  _QWORD *v5; // rbx
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  unsigned int v8; // eax
  unsigned int v9; // r12d
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v13; // edx
  size_t v14; // rsi
  unsigned int v15; // r13d
  unsigned int *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // r13
  unsigned int v22; // r12d
  unsigned int v23; // edx
  size_t v24; // rsi
  unsigned int v25; // r15d
  unsigned int *v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r15
  _QWORD *v30; // rax
  char **exception; // r13
  __int64 v32; // rdx
  char **v33; // r13
  __int64 v34; // rdx
  unsigned int v35; // [rsp+0h] [rbp-68h]
  unsigned int v36; // [rsp+4h] [rbp-64h]
  __int64 *v37; // [rsp+8h] [rbp-60h]
  __int64 v38[11]; // [rsp+10h] [rbp-58h] BYREF

  v2 = (__int64 *)(*(_QWORD *)(a1 + 8) + 16LL * a2);
  v3 = *v2;
  v37 = v2;
  if ( !*v2 )
    return 1;
  v4 = nullptr;
  v5 = nullptr;
  v6 = 0;
  while ( v6 < *(_DWORD *)(v3 - 4) )
  {
    v7 = *(_DWORD *)(v3 + 40LL * v6 + 32);
    if ( v7 != -1 )
    {
      v8 = v7 >> 5;
      if ( v5 )
      {
        v9 = v8 + 1;
        v36 = *((_DWORD *)v5 - 1);
        if ( v8 < v36 )
        {
LABEL_7:
          *((_DWORD *)v5 + (v7 >> 5)) |= 1 << v7;
          goto LABEL_8;
        }
      }
      else
      {
        v9 = v8 + 1;
        v20 = (_QWORD *)sub_186B270(0x10u);
        v36 = 0;
        *v20 = 2;
        v5 = v20 + 1;
      }
      while ( 1 )
      {
        v17 = *((_DWORD *)v5 - 2);
        if ( v17 >= v9 )
          break;
        v13 = (3 * v17 + 1) >> 1;
        v14 = 4 * v13 + 8;
        v15 = v13;
        if ( 4 * v17 + 8 >= (unsigned int)v14 || v17 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_12D192(v38, "Overflow encountered when expanding vector", v32);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v38);
          sub_233E40((__int64)v38);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300(v5 - 1, v14);
        *v16 = v15;
        v5 = v16 + 2;
      }
      *((_DWORD *)v5 - 1) = v9;
      v18 = 4LL * v9;
      v19 = 4LL * v36;
      if ( v19 != v18 )
        memset((char *)v5 + v19, 0, v18 - v19);
      v3 = *v37;
      goto LABEL_7;
    }
    v21 = v6 >> 5;
    if ( !v4 )
    {
      v22 = v21 + 1;
      v30 = (_QWORD *)sub_186B270(0x10u);
      *v30 = 2;
      v4 = v30 + 1;
      v35 = 0;
LABEL_33:
      while ( 1 )
      {
        v27 = *((_DWORD *)v4 - 2);
        if ( v27 >= v22 )
          break;
        v23 = (3 * v27 + 1) >> 1;
        v24 = 4 * v23 + 8;
        v25 = v23;
        if ( 4 * v27 + 8 >= (unsigned int)v24 || v27 >= v23 )
        {
          v33 = (char **)__cxa_allocate_exception(0x28u);
          sub_12D192(v38, "Overflow encountered when expanding vector", v34);
          *v33 = (char *)off_1C63128;
          sub_2333C0(v33 + 1, v38);
          sub_233E40((__int64)v38);
          __cxa_throw(v33, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = (unsigned int *)sub_186B300(v4 - 1, v24);
        *v26 = v25;
        v4 = v26 + 2;
      }
      *((_DWORD *)v4 - 1) = v22;
      v28 = 4LL * v22;
      v29 = 4LL * v35;
      if ( v29 != v28 )
        memset((char *)v4 + v29, 0, v28 - v29);
      v3 = *v37;
      *((_DWORD *)v4 + v21) |= 1 << v6;
      goto LABEL_8;
    }
    v22 = v21 + 1;
    v35 = *((_DWORD *)v4 - 1);
    if ( (unsigned int)v21 >= v35 )
      goto LABEL_33;
    *((_DWORD *)v4 + v21) |= 1 << v6;
LABEL_8:
    ++v6;
    if ( !v3 )
      break;
  }
  v10 = *((unsigned int *)v37 + 3);
  if ( (_DWORD)v10 == -1 )
  {
    if ( v4 )
      goto LABEL_13;
  }
  else if ( v4 )
  {
    do
    {
      while ( 1 )
      {
        v11 = (unsigned int)v10 >> 5;
        if ( (unsigned int)v11 >= *((_DWORD *)v4 - 1) )
          break;
        *((_DWORD *)v4 + v11) &= ~(1 << v10);
        v10 = *(unsigned int *)(v3 + 40 * v10 + 36);
        if ( (_DWORD)v10 == -1 )
          goto LABEL_13;
      }
      v10 = *(unsigned int *)(v3 + 40 * v10 + 36);
    }
    while ( (_DWORD)v10 != -1 );
LABEL_13:
    sub_186B220(v4 - 1);
  }
  if ( v5 )
    sub_186B220(v5 - 1);
  return 1;
}

