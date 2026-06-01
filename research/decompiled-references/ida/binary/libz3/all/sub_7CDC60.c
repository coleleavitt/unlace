// bad sp value at call has been detected, the output may be wrong!
void __fastcall sub_7CDC60(_QWORD *a1, __int64 a2, double a3)
{
  char **exception; // rbp
  __int64 v4; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _DWORD *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  _QWORD *v15; // rdx
  __int64 v16; // rdi
  size_t v17; // rsi
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // r12
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  _QWORD *v24; // rcx
  __int64 v25; // r12
  __int64 v26; // r12
  unsigned int v27; // r13d
  unsigned int *v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // r12d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rdx
  _DWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37[2]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v38[72]; // [rsp+10h] [rbp-48h] BYREF

  v7 = (_QWORD *)a1[277];
  if ( !v7 )
  {
    v34 = *(_DWORD **)(a2 + 24);
    if ( v34 && *v34 == 3 && !v34[1] )
      return;
    ++*(_DWORD *)(a2 + 8);
    v35 = (_QWORD *)sub_186B270(0x18u);
    v7 = v35 + 1;
    *v35 = 2;
    v14 = 1;
    a1[277] = v7;
    v15 = v7;
    goto LABEL_11;
  }
  v8 = *((unsigned int *)v7 - 1);
  if ( !(_DWORD)v8 )
  {
LABEL_7:
    v11 = *(_DWORD **)(a2 + 24);
    if ( v11 && *v11 == 3 && !v11[1] )
      return;
    ++*(_DWORD *)(a2 + 8);
    v12 = *((_DWORD *)v7 - 1);
    if ( v12 == *((_DWORD *)v7 - 2) )
    {
      v30 = (3 * v12 + 1) >> 1;
      v31 = 8 * v30 + 8;
      if ( 8 * v12 + 8 >= (unsigned int)v31 || v12 >= v30 )
        goto LABEL_31;
      v32 = (unsigned int *)sub_186B300(v7 - 1, v31);
      v33 = v32[1];
      v7 = v32 + 2;
      *v32 = v30;
      a1[277] = v32 + 2;
      LODWORD(v32) = v33;
      v15 = &v7[v33];
      v14 = (_DWORD)v32 + 1;
    }
    else
    {
      v13 = v12;
      v14 = v12 + 1;
      v15 = &v7[v13];
    }
LABEL_11:
    *v15 = a2;
    v16 = (__int64)(a1 + 268);
    v17 = 16;
    *((_DWORD *)v7 - 1) = v14;
    v18 = (_QWORD *)sub_180C100(a1 + 268, 16);
    v19 = (_QWORD *)a1[266];
    v20 = v18;
    *v18 = off_1C4DF58;
    v18[1] = a1 + 276;
    if ( !v19 )
    {
      v16 = 24;
      v36 = (_QWORD *)sub_186B270(0x18u);
      v19 = v36 + 1;
      *v36 = 2;
      v23 = 1;
      a1[266] = v19;
      v24 = v19;
LABEL_14:
      *v24 = v20;
      *((_DWORD *)v19 - 1) = v23;
      sub_180B130(v16);
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v25 = sub_180B150(v16, v17);
        sub_1606360(v37, a2, a1[18], 0, 0, 0);
        sub_160E8B0(v25, v37);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v38);
        sub_186A500(v38, " not handled\n");
      }
      else
      {
        v26 = sub_180B150(v16, v17);
        sub_1606360(v37, a2, a1[18], 0, 0, 0);
        sub_160E8B0(v26, v37);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v38);
      }
      return;
    }
    v21 = *((_DWORD *)v19 - 1);
    if ( v21 != *((_DWORD *)v19 - 2) )
    {
      v22 = v21;
      v23 = v21 + 1;
      v24 = &v19[v22];
      goto LABEL_14;
    }
    v27 = (3 * v21 + 1) >> 1;
    v17 = 8 * v27 + 8;
    if ( 8 * v21 + 8 < (unsigned int)v17 && v21 < v27 )
    {
      v16 = (__int64)(v19 - 1);
      v28 = (unsigned int *)sub_186B300(v19 - 1, v17);
      v29 = v28[1];
      v19 = v28 + 2;
      *v28 = v27;
      a1[266] = v28 + 2;
      LODWORD(v28) = v29;
      v24 = &v19[v29];
      v23 = (_DWORD)v28 + 1;
      goto LABEL_14;
    }
LABEL_31:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_116834(v37, "Overflow encountered when expanding vector", v4);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v37);
    sub_233E40((__int64)v37);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v9 = (_QWORD *)a1[277];
  v10 = &v7[v8];
  while ( a2 != *v9 )
  {
    if ( v10 == ++v9 )
      goto LABEL_7;
  }
}

