/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100063080
// Address: 0x0000000100063080

//----- (0000000100063080) ----------------------------------------------------
bool __fastcall sub_100063080(_QWORD *a1, _QWORD *a2, __int64 a3, char a4, double a5)
{
  void **v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  void **v11; // rdx
  void *v12; // r15
  unsigned __int64 v13; // r15
  __int64 v14; // r13
  int v15; // eax
  _QWORD *v16; // rcx
  _QWORD *v17; // rsi
  _QWORD *v18; // rdx
  unsigned __int64 v19; // rax
  _QWORD *v20; // rax
  int v21; // r13d
  char *v22; // rax
  __int64 v23; // rcx
  char *v24; // rdi
  __int64 v25; // rsi
  char *v26; // rdx
  __int64 v27; // rsi
  unsigned int v28; // r15d
  __int64 v29; // rcx
  _QWORD *i; // rdi
  __int64 v31; // rsi
  int v32; // r13d
  __int64 v33; // rcx
  _QWORD *v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rdx
  bool result; // al
  _QWORD *v39; // rax
  bool v40; // zf
  int v41; // eax
  unsigned __int64 v42; // rsi
  _Unwind_Exception *v43; // rax
  int v44; // edx
  int v46; // [rsp+10h] [rbp-50h] BYREF
  void *v47; // [rsp+18h] [rbp-48h]
  __int128 v48; // [rsp+20h] [rbp-40h]

  if ( (a1[84] & 0x10) == 0 )
  {
LABEL_2:
    v8 = (void **)a1[44];
    v9 = a1[45];
    v10 = 8 * v9;
    v11 = v8;
    if ( 8 * v9 )
    {
      v12 = (void *)*a2;
      v11 = (void **)a1[44];
      while ( v12 != *v11 )
      {
        ++v11;
        v10 -= 8;
        if ( !v10 )
          goto LABEL_21;
      }
    }
    if ( v11 != &v8[v9] )
    {
      if ( under_debugger == 1 )
        BUG();
      interr(0x268u);
      if ( v44 )
        sub_100001690(v43);
      _Unwind_Resume(v43);
    }
    v12 = (void *)*a2;
LABEL_21:
    if ( a1[46] < (unsigned __int64)(v9 + 1) )
    {
      v8 = (void **)qvector_reserve((__int64)(a1 + 44), (void *)a1[44], v9 + 1, 8u);
      a1[44] = v8;
      v9 = a1[45];
    }
    v8[v9] = v12;
    ++a1[45];
    if ( (a4 & 1) != 0 )
      goto LABEL_36;
    v46 = -2;
    a5 = 0.0;
    v48 = 0;
    v47 = (void *)*a2;
    v21 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, int *, _QWORD))(*a1 + 232LL))(
            a1,
            *(unsigned int *)(a3 + 4),
            *((unsigned int *)a1 + 164),
            &v46,
            0);
    if ( v21 <= 0 )
    {
      v22 = (char *)a1[44];
      v23 = a1[45];
      v24 = v22;
      if ( (v23 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
      {
        v25 = 8 * v23;
        v24 = (char *)a1[44];
        while ( *a2 != *(_QWORD *)v24 )
        {
          v24 += 8;
          v25 -= 8;
          if ( !v25 )
            goto LABEL_32;
        }
      }
      v26 = &v22[8 * v23];
      if ( v24 != v26 )
      {
        memmove(v24, v24 + 8, v26 - v24 - 8);
        --a1[45];
      }
    }
LABEL_32:
    if ( v46 >= -1 && v47 )
    {
      *(_QWORD *)&v48 = 0;
      qfree(v47);
    }
    if ( v21 > 0 )
    {
LABEL_36:
      if ( (*(int (__fastcall **)(_QWORD *, _QWORD))(*a1 + 8LL))(a1, *(unsigned int *)(a3 + 4)) <= 0 )
      {
        v29 = a1[45];
        i = (_QWORD *)a1[44];
        if ( (v29 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
        {
          v31 = 8 * v29;
          for ( i = (_QWORD *)a1[44]; *a2 != *i; ++i )
          {
            v31 -= 8;
            if ( !v31 )
              return 0;
          }
        }
        v37 = a1[44] + 8 * v29;
        if ( i != (_QWORD *)v37 )
        {
          memmove(i, i + 1, v37 - (_QWORD)i - 8);
          --a1[45];
        }
      }
      else
      {
        v27 = *((unsigned int *)a2 + 8);
        if ( (_DWORD)v27 == 4 )
          v28 = *((_DWORD *)a2 + 12);
        else
          v28 = *((_DWORD *)a2 + 107);
        v32 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, _QWORD))(*a1 + 320LL))(
                a1,
                v27,
                *a2,
                a2[5],
                v28);
        if ( v32 > 0 )
        {
          if ( (*(int (__fastcall **)(_QWORD *, __int64, _QWORD *))*a1)(a1, a3, a2 + 8) <= 0 )
          {
            v32 = 0;
            sub_100005090((__int64)a1, "%a: failed to single step\n", a5);
          }
          if ( (*(int (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD))(*a1 + 312LL))(
                 a1,
                 0,
                 *((unsigned int *)a2 + 8),
                 *a2,
                 v28) <= 0 )
          {
            v32 = 0;
            sub_100006F60((__int64)a1, "%a: could not restore deleted bpt\n", a5);
          }
        }
        if ( (*(int (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, *(unsigned int *)(a3 + 4)) <= 0 )
        {
          v32 = 0;
          sub_100006F60((__int64)a1, "%d: could not resume suspended threads\n", *(_DWORD *)(a3 + 4));
        }
        v33 = a1[45];
        v34 = (_QWORD *)a1[44];
        if ( (v33 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
        {
          v35 = 8 * v33;
          v34 = (_QWORD *)a1[44];
          while ( *a2 != *v34 )
          {
            ++v34;
            v35 -= 8;
            if ( !v35 )
              goto LABEL_59;
          }
        }
        v36 = a1[44] + 8 * v33;
        if ( v34 != (_QWORD *)v36 )
        {
          memmove(v34, v34 + 1, v36 - (_QWORD)v34 - 8);
          --a1[45];
        }
LABEL_59:
        if ( v32 > 0 && (*(_DWORD *)(a3 + 20) & 0xFFFFFFF) == 6 )
          goto LABEL_71;
      }
    }
    return 0;
  }
  if ( *((_DWORD *)a2 + 8) != 4 )
  {
    v13 = *a2;
    v14 = *((int *)a2 + 107);
    v15 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 496LL))(a1);
    v16 = a1 + 64;
    v17 = (_QWORD *)a1[64];
    v18 = a1 + 64;
    if ( !v17 )
      goto LABEL_15;
    v19 = v13 & -v15;
    v18 = a1 + 64;
    do
    {
      if ( v17[4] >= v19 )
        v18 = v17;
      v17 = (_QWORD *)v17[v17[4] < v19];
    }
    while ( v17 );
    if ( v18 == v16 || v18[4] >= v13 + v14 )
    {
LABEL_15:
      if ( v18 == (_QWORD *)a1[63] )
        goto LABEL_71;
      v20 = (_QWORD *)*v18;
      if ( *v18 )
      {
        do
        {
          v18 = v20;
          v20 = (_QWORD *)v20[1];
        }
        while ( v20 );
      }
      else
      {
        v39 = v18;
        do
        {
          v18 = (_QWORD *)v39[2];
          v40 = *v18 == (_QWORD)v39;
          v39 = v18;
        }
        while ( v40 );
      }
    }
    if ( (_DWORD)v14 )
    {
      v41 = *((_DWORD *)v18 + 15);
      if ( v41 )
      {
        v42 = v18[4];
        if ( v13 + v14 - 1 >= v42 && v42 + v41 - 1 >= v13 && v18 != v16 )
          goto LABEL_2;
      }
    }
  }
LABEL_71:
  result = 1;
  if ( (a4 & 2) == 0 )
    return (*(int (__fastcall **)(_QWORD *, __int64))(*a1 + 168LL))(a1, a3) > 0;
  return result;
}
// 100063521: variable 'v44' is possibly undefined
// 100063526: variable 'v43' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
