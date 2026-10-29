_QWORD *__fastcall sub_6B61D0(__int64 a1, __int64 a2)
{
  void *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  char v6; // si
  __int64 v7; // rax
  _QWORD *v8; // r13
  _QWORD *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r12
  _QWORD *v17; // rdx
  __int64 *v18; // r15
  _QWORD *v19; // rax
  int v20; // eax
  _QWORD *v21; // rcx
  unsigned int v22; // eax
  unsigned int v24; // r14d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // r14d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  char **exception; // rbx
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  __int64 vars10; // [rsp+10h] [rbp+10h] BYREF
  __int64 vars18; // [rsp+18h] [rbp+18h]

  vars0 = 1;
  vars8 = 0;
  vars10 = 1;
  vars18 = 0;
  sub_182CBA0(qword_1C7F2C0, &vars10);
  v3 = qword_1C7F2C0;
  LODWORD(vars0) = *(_DWORD *)(a1 + 112);
  v4 = *(_QWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 112) = 1;
  v5 = vars8;
  vars8 = v4;
  LOBYTE(v4) = *(_BYTE *)(a1 + 116);
  *(_QWORD *)(a1 + 120) = v5;
  LOBYTE(v5) = v4 & 0xFC;
  v6 = *(_BYTE *)(a1 + 132);
  BYTE4(vars0) = v4 & 3;
  LODWORD(v4) = *(_DWORD *)(a1 + 128);
  *(_BYTE *)(a1 + 116) = v5;
  LODWORD(vars10) = v4;
  v7 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 136) = vars18;
  vars18 = v7;
  LOBYTE(v7) = BYTE4(vars10);
  *(_DWORD *)(a1 + 128) = 1;
  *(_BYTE *)(a1 + 132) = v6 & 0xFC | v7 & 2;
  BYTE4(vars10) = v6 & 1 | v6 & 2 | v7 & 0xFC;
  sub_182CBA0(v3, &vars0);
  sub_182CBA0(v3, &vars10);
  v8 = (_QWORD *)sub_186B270(0xE8u);
  sub_6B1890((__int64)v8, a1, *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 856LL));
  v9 = *(_QWORD **)(a1 + 144);
  if ( v9 )
  {
    v10 = *((_DWORD *)v9 - 1);
    if ( v10 == *((_DWORD *)v9 - 2) )
    {
      v28 = (3 * v10 + 1) >> 1;
      v29 = 8 * v28 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v29 || v10 >= v28 )
      {
LABEL_25:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_6A99E0(&vars0, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &vars0);
        sub_233E40((__int64)&vars0);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v30 = (unsigned int *)sub_186B300(v9 - 1, v29);
      v31 = v30[1];
      v9 = v30 + 2;
      *v30 = v28;
      *(_QWORD *)(a1 + 144) = v30 + 2;
      LODWORD(v30) = v31;
      v13 = &v9[v31];
      v12 = (_DWORD)v30 + 1;
    }
    else
    {
      v11 = v10;
      v12 = v10 + 1;
      v13 = &v9[v11];
    }
  }
  else
  {
    v32 = (_QWORD *)sub_186B270(0x18u);
    v9 = v32 + 1;
    *v32 = 2;
    v12 = 1;
    *(_QWORD *)(a1 + 144) = v9;
    v13 = v9;
  }
  *v13 = v8;
  *((_DWORD *)v9 - 1) = v12;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  sub_6A99C0(v8[9], v8[10]);
  v14 = *(__int64 **)(a1 + 16);
  v8[9] = a2;
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 )
    {
      v16 = *v14;
      v17 = (_QWORD *)v8[2];
      v18 = &v14[v15];
      if ( *v14 )
        ++*(_DWORD *)(v16 + 8);
      if ( v17 )
        goto LABEL_15;
      v19 = (_QWORD *)sub_186B270(0x18u);
      v17 = v19 + 1;
      *v19 = 2;
      v20 = 1;
      v8[2] = v17;
      v21 = v17;
      while ( 1 )
      {
        ++v14;
        *v21 = v16;
        *((_DWORD *)v17 - 1) = v20;
        if ( v18 == v14 )
          break;
        while ( 1 )
        {
          v16 = *v14;
          if ( *v14 )
            ++*(_DWORD *)(v16 + 8);
LABEL_15:
          v22 = *((_DWORD *)v17 - 1);
          if ( v22 == *((_DWORD *)v17 - 2) )
            break;
          ++v14;
          v17[v22] = v16;
          *((_DWORD *)v17 - 1) = v22 + 1;
          if ( v18 == v14 )
            return v8;
        }
        v24 = (3 * v22 + 1) >> 1;
        v25 = 8 * v24 + 8;
        if ( 8 * v22 + 8 >= (unsigned int)v25 || v22 >= v24 )
          goto LABEL_25;
        v26 = (unsigned int *)sub_186B300(v17 - 1, v25);
        v27 = v26[1];
        v17 = v26 + 2;
        *v26 = v24;
        v8[2] = v26 + 2;
        LODWORD(v26) = v27;
        v21 = &v17[v27];
        v20 = (_DWORD)v26 + 1;
      }
    }
  }
  return v8;
}

