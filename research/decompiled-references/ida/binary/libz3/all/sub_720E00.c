__int64 (__fastcall **__fastcall sub_720E00(__int64 a1, __int64 *a2, __int64 a3, __int64 a4))()
{
  __int64 v6; // rbp
  __int64 (__fastcall **result)(); // rax
  int v9; // r8d
  int v10; // r9d
  __int64 *v11; // r14
  _QWORD *v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // r15
  __int64 v15; // r14
  int v16; // eax
  _DWORD *v17; // rsi
  int v18; // eax
  _DWORD *v19; // rsi
  __int64 *v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 *v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // r12
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // rdi
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rax
  unsigned int v34; // eax
  __int64 v35; // rsi
  int v36; // eax
  _QWORD *v37; // rsi
  unsigned int v38; // r14d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rsi
  _QWORD *v42; // rax
  char **exception; // rbp
  __int64 v44; // [rsp+0h] [rbp-A8h]
  __int64 v45; // [rsp+8h] [rbp-A0h]
  __int64 v47; // [rsp+18h] [rbp-90h]
  int v48; // [rsp+20h] [rbp-88h]
  char v49; // [rsp+28h] [rbp-80h]
  __m128i v50; // [rsp+30h] [rbp-78h] BYREF
  __int64 *v51; // [rsp+40h] [rbp-68h]
  void *v52; // [rsp+48h] [rbp-60h]
  int v53[2]; // [rsp+50h] [rbp-58h] BYREF

  v6 = a1 + 32;
  if ( (unsigned __int8)sub_15FD0A0(a1 + 32, *(_QWORD *)(*(_QWORD *)(*a2 + 16) + 40LL), a3, a4) )
    return sub_7205A0(a1, a2, a3, a4);
  v45 = *a2;
  v47 = *(_QWORD *)(*(_QWORD *)(*a2 + 16) + 40LL);
  result = (__int64 (__fastcall **)())sub_15F10D0(v6, v47);
  if ( (_DWORD)result != 1 )
  {
    sub_6AA8D0(&v50, *(_QWORD *)(a1 + 8), a3);
    v11 = v51;
    if ( !v51 )
    {
LABEL_29:
      v27 = (_QWORD *)sub_15F6BE0(v6, v47);
      v28 = sub_182D020(qword_1C7F2C0, a4);
      v29 = sub_15F0A30(v6, *(_QWORD *)(*v27 + 8LL * v28));
      v30 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)v53 = v45;
      v33 = sub_15DC610(
              v30,
              v29,
              1,
              (int)v53,
              v31,
              v32,
              v44,
              v45,
              a4,
              v47,
              v48,
              v49,
              v50.m128i_i32[0],
              v50.m128i_i32[2],
              (int)v51,
              v52);
      return (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(
                                          *(_QWORD *)(a1 + 24),
                                          1,
                                          v33,
                                          0,
                                          0);
    }
    v12 = nullptr;
    v13 = 0;
    v44 = 8LL * *((unsigned int *)v51 - 1);
    if ( !*((_DWORD *)v51 - 1) )
    {
      sub_186B220(v51 - 1);
      goto LABEL_29;
    }
    do
    {
      while ( 1 )
      {
        v14 = v11[v13 / 8];
        if ( !*(_WORD *)(v14 + 4) )
          break;
        v13 += 8LL;
        if ( v44 == v13 )
          goto LABEL_15;
      }
      v15 = *(_QWORD *)(v14 + 16);
      v16 = sub_15F0200(v6);
      v17 = *(_DWORD **)(v15 + 24);
      if ( v17 && v16 == *v17 && v17[1] == 1
        || (v18 = sub_15F0200(v6), (v19 = *(_DWORD **)(v15 + 24)) != nullptr) && v18 == *v19 && v19[1] == 2 )
      {
        if ( v12 )
        {
          v34 = *((_DWORD *)v12 - 1);
          if ( v34 == *((_DWORD *)v12 - 2) )
          {
            v38 = (3 * v34 + 1) >> 1;
            v39 = 8 * v38 + 8;
            if ( 8 * v34 + 8 >= (unsigned int)v39 || v34 >= v38 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v53, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v53);
              sub_233E40((__int64)v53);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v40 = (unsigned int *)sub_186B300(v12 - 1, v39);
            v41 = v40[1];
            v12 = v40 + 2;
            *v40 = v38;
            LODWORD(v40) = v41;
            v37 = &v12[v41];
            v36 = (_DWORD)v40 + 1;
          }
          else
          {
            v35 = v34;
            v36 = v34 + 1;
            v37 = &v12[v35];
          }
        }
        else
        {
          v42 = (_QWORD *)sub_186B270(0x18u);
          v12 = v42 + 1;
          *v42 = 2;
          v36 = 1;
          v37 = v12;
        }
        *v37 = v14;
        v11 = v51;
        *((_DWORD *)v12 - 1) = v36;
      }
      else
      {
        v11 = v51;
      }
      v13 += 8LL;
    }
    while ( v44 != v13 );
LABEL_15:
    if ( v11 )
    {
      v20 = &v11[*((unsigned int *)v11 - 1)];
      if ( v11 >= v20 )
        goto LABEL_23;
      do
      {
        while ( 1 )
        {
          v21 = *v11;
          if ( *v11 )
          {
            v22 = v50.m128i_i64[1];
            if ( (*(_DWORD *)(v21 + 8))-- == 1 )
              break;
          }
          if ( ++v11 >= v20 )
            goto LABEL_22;
        }
        sub_15D7BC0(v22, v21);
        ++v11;
      }
      while ( v11 < v20 );
LABEL_22:
      v11 = v51;
      if ( v51 )
LABEL_23:
        sub_186B220(v11 - 1);
    }
    if ( !v12 )
      goto LABEL_29;
    v24 = v12;
    v25 = &v12[*((unsigned int *)v12 - 1)];
    do
    {
      if ( v24 == v25 )
      {
        sub_186B220(v12 - 1);
        goto LABEL_29;
      }
      v26 = *v24++;
    }
    while ( v45 != *(_QWORD *)(v26 + 32) );
    sub_15F0BB0(v6, *(_QWORD *)(v26 + 16), v26, (_DWORD)v25, v9, v10);
    return (__int64 (__fastcall **)())sub_186B220(v12 - 1);
  }
  return result;
}

