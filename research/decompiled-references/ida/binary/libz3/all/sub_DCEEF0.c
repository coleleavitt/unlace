__int64 __fastcall sub_DCEEF0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rbx
  _QWORD *v6; // r12
  int v7; // eax
  _QWORD *v8; // rbx
  __int64 v9; // r12
  _QWORD *v10; // rcx
  unsigned int v11; // edx
  _QWORD *v12; // rax
  _QWORD *v13; // r12
  __int64 v14; // rax
  int v15; // edx
  _QWORD *v16; // rax
  int v17; // r8d
  __int64 v18; // rdi
  unsigned int v19; // r15d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  _QWORD *v24; // rax
  __int64 v25; // r14
  __int64 v26; // r12
  int v27; // eax
  _DWORD *v28; // rdx
  _QWORD *v29; // r12
  __int64 v30; // r12
  __int64 v31; // r12
  __int32 v32; // eax
  __int64 *v33; // rax
  __int64 result; // rax
  int v35; // edx
  int v36; // eax
  __int64 *v37; // r15
  _DWORD *v38; // r13
  unsigned int v39; // r12d
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 *v42; // rax
  __int64 v43; // r15
  __int64 *v44; // r12
  int v45; // r8d
  int v46; // r9d
  __int64 v47; // rdi
  int v48; // edx
  __int64 v49; // rax
  __int64 v50; // r15
  __int64 v51; // r13
  void *v52; // rdi
  _QWORD *v53; // r12
  _QWORD *v54; // r12
  _QWORD *exception; // rbx
  char **v56; // r12
  int v57; // [rsp+0h] [rbp-A0h]
  __int64 *v58; // [rsp+8h] [rbp-98h]
  __int64 v59; // [rsp+10h] [rbp-90h]
  __int64 v60; // [rsp+10h] [rbp-90h]
  int v62; // [rsp+20h] [rbp-80h]
  __int64 v63; // [rsp+28h] [rbp-78h] BYREF
  __int64 v64; // [rsp+30h] [rbp-70h] BYREF
  __int64 v65; // [rsp+38h] [rbp-68h] BYREF
  __int64 v66; // [rsp+40h] [rbp-60h] BYREF
  int v67[2]; // [rsp+48h] [rbp-58h] BYREF
  __m128i v68[5]; // [rsp+50h] [rbp-50h] BYREF

  v3 = *a1;
  v63 = 0;
  sub_DFBCB0(v3);
  v66 = *(_QWORD *)(v3 + 296);
  v4 = *((_DWORD *)a1 + 356);
  if ( v4 == 4 )
  {
    v63 = a1[6];
  }
  else
  {
    if ( v4 != 1 )
    {
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "expecting a constructor, _, variable or constructor application");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    sub_DC0980(a1);
    sub_DBF580(*((unsigned int *)a1 + 356), (__int64)"constructor symbol expected");
    v5 = a1[6];
    if ( *((_DWORD *)a1 + 356) == 9 )
    {
      v63 = a1[6];
LABEL_5:
      v6 = __cxa_allocate_exception(0x30u);
      sub_305660(v6, "variable symbol expected");
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    sub_DC0980(a1);
    v63 = v5;
    v7 = *((_DWORD *)a1 + 356);
    if ( v7 != 2 )
    {
      v8 = nullptr;
      while ( 1 )
      {
        if ( v7 != 4 )
          goto LABEL_5;
        v9 = a1[6];
        sub_DC0980(a1);
        if ( a1[254] == v9 )
        {
          if ( v8 )
          {
            v11 = *((_DWORD *)v8 - 1);
LABEL_18:
            if ( v11 == *((_DWORD *)v8 - 2) )
            {
              v19 = (3 * v11 + 1) >> 1;
              v20 = 8 * v19 + 8;
              if ( 8 * v11 + 8 >= (unsigned int)v20 || v11 >= v19 )
              {
                v56 = (char **)__cxa_allocate_exception(0x28u);
                sub_DBF430(v68[0].m128i_i64, "Overflow encountered when expanding vector");
                *v56 = (char *)off_1C63128;
                sub_2333C0(v56 + 1, v68);
                sub_233E40((__int64)v68);
                __cxa_throw(v56, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v21 = (unsigned int *)sub_186B300(v8 - 1, v20);
              v8 = v21 + 2;
              *v21 = v19;
              v22 = v21[1];
              v23 = v22;
              v16 = &v8[v22];
              v15 = v23 + 1;
            }
            else
            {
              v14 = v11;
              v15 = v11 + 1;
              v16 = &v8[v14];
            }
            goto LABEL_20;
          }
        }
        else if ( v8 )
        {
          v10 = &v8[*((unsigned int *)v8 - 1)];
          v11 = *((_DWORD *)v8 - 1);
          if ( v8 != v10 )
          {
            v12 = v8;
            do
            {
              if ( *v12 == v9 )
              {
                v13 = __cxa_allocate_exception(0x30u);
                sub_305660(v13, "unexpected repeated variable in pattern expression");
                __cxa_throw(v13, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
              }
              ++v12;
            }
            while ( v12 != v10 );
          }
          goto LABEL_18;
        }
        v24 = (_QWORD *)sub_186B270(0x18u);
        v8 = v24 + 1;
        *v24 = 2;
        v15 = 1;
        v16 = v24 + 1;
LABEL_20:
        *v16 = v9;
        *((_DWORD *)v8 - 1) = v15;
        v7 = *((_DWORD *)a1 + 356);
        if ( v7 == 2 )
        {
          sub_DC0980(a1);
          v17 = *((_DWORD *)v8 - 1);
          v18 = *a1;
          goto LABEL_28;
        }
      }
    }
  }
  sub_DC0980(a1);
  v8 = nullptr;
  v17 = 0;
  v18 = *a1;
LABEL_28:
  v25 = sub_E0D810(v18, (unsigned int)&v63, 0, 0, v17, 0, a2);
  if ( v25 )
  {
    v26 = a1[211];
    if ( !v26 )
    {
      v26 = sub_186B270(0x18u);
      v51 = *a1;
      sub_DFBCB0(*a1);
      sub_15F01E0(v26, *(_QWORD *)(v51 + 296));
      v52 = (void *)a1[211];
      if ( (void *)v26 != v52 )
      {
        if ( v52 )
          sub_186B220(v52);
        a1[211] = v26;
      }
    }
    v27 = sub_15F0200(v26);
    v28 = *(_DWORD **)(v25 + 24);
    if ( !v28 || v27 != *v28 || v28[1] )
    {
      v29 = __cxa_allocate_exception(0x30u);
      sub_305660(v29, "expecting a constructor");
      __cxa_throw(v29, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    v35 = *(_DWORD *)(v25 + 32);
    if ( v8 )
    {
      v36 = *((_DWORD *)v8 - 1);
      if ( v36 == v35 )
      {
        v37 = v8;
        v38 = nullptr;
        v39 = 0;
        *((_DWORD *)a1 + 378) += v36;
        v58 = &v65;
        if ( v36 )
        {
          do
          {
            v60 = *a1;
            sub_DFBCB0(*a1);
            v40 = sub_15DB5C0(*(_QWORD *)(v60 + 296), v39, *(_QWORD *)(v25 + 8LL * v39 + 48));
            v65 = v40;
            if ( v40 )
              ++*(_DWORD *)(v40 + 8);
            v59 = v40;
            *(_QWORD *)v67 = v38;
            sub_DBF5A0(v67, &v65);
            v38 = *(_DWORD **)v67;
            v41 = *v37;
            if ( *v37 != a1[254] )
            {
              v68[0].m128i_i32[2] = *((_DWORD *)a1 + 378);
              v68[0].m128i_i64[0] = v59;
              sub_DCE310((__int64)(a1 + 184), v41, v68);
            }
            ++v39;
            ++v37;
          }
          while ( v39 < *((_DWORD *)v8 - 1) );
          v42 = sub_DC2710(a1);
          v43 = *a1;
          v44 = v42;
          sub_DFBCB0(*a1);
          v47 = *(_QWORD *)(v43 + 296);
          if ( v38 )
            v48 = *(v38 - 1);
          else
            v48 = 0;
          goto LABEL_53;
        }
LABEL_58:
        v44 = sub_DC2710(a1);
        v50 = *a1;
        sub_DFBCB0(*a1);
        v47 = *(_QWORD *)(v50 + 296);
        v38 = nullptr;
        v48 = 0;
LABEL_53:
        v49 = sub_15DC610(
                v47,
                v25,
                v48,
                (int)v38,
                v45,
                v46,
                v57,
                (int)v58,
                v59,
                (int)a1,
                v62,
                v63,
                v64,
                v65,
                v66,
                *(void **)v67);
        v68[0].m128i_i64[0] = v49;
        if ( v49 )
          ++*(_DWORD *)(v49 + 8);
        sub_DBF5A0(v44 + 1, v68);
        *(_QWORD *)v67 = v38;
        result = sub_2334C0(&v66);
        if ( v8 )
          return sub_186B220(v8 - 1);
        return result;
      }
    }
    else if ( !v35 )
    {
      goto LABEL_58;
    }
    v54 = __cxa_allocate_exception(0x30u);
    sub_305660(v54, "mismatching number of variables supplied to constructor");
    __cxa_throw(v54, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( v8 && *((_DWORD *)v8 - 1) )
  {
    v53 = __cxa_allocate_exception(0x30u);
    sub_305660(v53, "expecting a constructor that has been declared");
    __cxa_throw(v53, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  ++*((_DWORD *)a1 + 378);
  v30 = *a1;
  sub_DFBCB0(*a1);
  v31 = sub_15DB5C0(*(_QWORD *)(v30 + 296), 0, a2);
  if ( v63 != a1[254] )
  {
    v32 = *((_DWORD *)a1 + 378);
    v68[0].m128i_i64[0] = v31;
    v68[0].m128i_i32[2] = v32;
    sub_DCE310((__int64)(a1 + 184), v63, v68);
  }
  v33 = sub_DC2710(a1);
  v64 = v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  sub_DBF5A0(v33 + 1, &v64);
  *(_QWORD *)v67 = 0;
  result = sub_2334C0(&v66);
  if ( v8 )
    return sub_186B220(v8 - 1);
  return result;
}

