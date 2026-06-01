__int64 __fastcall sub_956B40(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  unsigned int *v5; // rsi
  _QWORD *v6; // rdi
  unsigned int **v7; // rbp
  unsigned int v8; // r12d
  unsigned int **i; // r15
  __int64 v10; // r14
  unsigned int *v11; // r13
  __int64 v12; // rax
  unsigned int v13; // r13d
  _QWORD *v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rbp
  void *v17; // rdi
  __int64 *v18; // rbx
  unsigned __int64 v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rdi
  void **v23; // rbx
  __int64 v24; // rax
  void **v25; // rbp
  void **v26; // rbx
  __int64 v27; // rax
  void **v28; // rbp
  __int64 v30; // rdi
  unsigned int **v31; // rbp
  unsigned int **j; // r14
  __int64 v33; // r15
  unsigned int *v34; // r13
  __int64 v35; // rdi
  _BYTE v36[40]; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v37; // [rsp+38h] [rbp-D0h]
  void **v38; // [rsp+40h] [rbp-C8h]
  void **v39; // [rsp+48h] [rbp-C0h]
  void *v40; // [rsp+50h] [rbp-B8h]
  __int64 v41; // [rsp+68h] [rbp-A0h]
  __int64 *v42; // [rsp+70h] [rbp-98h]
  _QWORD *v43; // [rsp+78h] [rbp-90h]
  void *v44; // [rsp+88h] [rbp-80h]
  void *ptr; // [rsp+A0h] [rbp-68h]
  __int64 v46; // [rsp+C0h] [rbp-48h]

  if ( *(_DWORD *)(a1[2] + 200LL) && (v3 = a1[148]) != 0 && *(_DWORD *)(v3 - 4) )
  {
    if ( (unsigned int)sub_180B130(a1) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v30 = sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v30, "quick checking quantifiers (unsat)...\n");
      }
      else
      {
        sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v5 = (unsigned int *)a1[1];
    v6 = v36;
    sub_B51290(v36, v5);
    v7 = (unsigned int **)a1[148];
    if ( v7 )
    {
      v8 = 1;
      for ( i = &v7[*((unsigned int *)v7 - 1)]; i != v7; v8 &= sub_B50F70(v36, v11) ^ 1 )
      {
        while ( 1 )
        {
          v10 = a1[1];
          v11 = *v7;
          if ( !(unsigned int)sub_8E7030(v10)
            || (v6 = *(_QWORD **)(v10 + 7488),
                v5 = v11,
                (*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned int *))(*v6 + 56LL))(v6, v11)) )
          {
            v6 = (_QWORD *)a1[1];
            v5 = v11;
            if ( (unsigned int)sub_8E80A0(v6, v11) == 1 )
              break;
          }
          if ( i == ++v7 )
            goto LABEL_13;
        }
        v6 = v36;
        v5 = v11;
        ++v7;
      }
    }
    else
    {
      v8 = 1;
    }
LABEL_13:
    v12 = a1[2];
    LOBYTE(v12) = v8 & (*(_DWORD *)(v12 + 200) != 1);
    v13 = v12;
    if ( (_BYTE)v12 )
    {
      if ( (unsigned int)sub_180B130(v6) > 9 )
      {
        if ( (unsigned __int8)sub_186A530(a3) )
        {
          sub_186A4C0(a3);
          v35 = sub_180B150(v6, v5);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v35, "quick checking quantifiers (not sat)...\n");
        }
        else
        {
          sub_180B150(v6, v5);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
      }
      v31 = (unsigned int **)a1[148];
      if ( v31 )
      {
        v8 = v13;
        for ( j = &v31[*((unsigned int *)v31 - 1)]; j != v31; ++v31 )
        {
          v33 = a1[1];
          v34 = *v31;
          if ( (!(unsigned int)sub_8E7030(v33)
             || (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v33 + 7488) + 56LL))(
                  *(_QWORD *)(v33 + 7488),
                  v34))
            && (unsigned int)sub_8E80A0((_QWORD *)a1[1], v34) == 1 )
          {
            v8 &= sub_B51040(v36, v34) ^ 1;
          }
        }
      }
      else
      {
        v8 = v13;
      }
    }
    sub_ADDC00(a1 + 3);
    if ( v46 )
      sub_186B220((void *)(v46 - 8));
    if ( ptr )
      sub_186B220(ptr);
    if ( v44 )
      sub_186B220(v44);
    v14 = v43;
    if ( v43 )
    {
      v15 = *((unsigned int *)v43 - 1);
      if ( (_DWORD)v15 )
      {
        v16 = &v43[v15];
        do
        {
          while ( *v14 )
          {
            v17 = (void *)(*v14++ - 8LL);
            sub_186B220(v17);
            if ( v16 == v14 )
              goto LABEL_25;
          }
          ++v14;
        }
        while ( v16 != v14 );
LABEL_25:
        v14 = v43;
      }
      sub_186B220(v14 - 1);
    }
    v18 = v42;
    if ( v42 )
    {
      v19 = (unsigned __int64)&v42[*((unsigned int *)v42 - 1)];
      if ( (unsigned __int64)v42 >= v19 )
        goto LABEL_35;
      do
      {
        while ( 1 )
        {
          v20 = *v18;
          if ( *v18 )
          {
            v21 = v41;
            if ( (*(_DWORD *)(v20 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v18 >= v19 )
            goto LABEL_34;
        }
        sub_15D7BC0(v21, v20);
        ++v18;
      }
      while ( (unsigned __int64)v18 < v19 );
LABEL_34:
      v18 = v42;
      if ( v42 )
LABEL_35:
        sub_186B220(v18 - 1);
    }
    if ( v40 )
      sub_186B220(v40);
    v23 = v39;
    if ( v39 )
    {
      v24 = *((unsigned int *)v39 - 1);
      if ( (_DWORD)v24 )
      {
        v25 = &v39[3 * v24];
        do
        {
          while ( *v23 )
          {
            sub_186B220(*v23);
            v23 += 3;
            if ( v25 == v23 )
              goto LABEL_43;
          }
          v23 += 3;
        }
        while ( v25 != v23 );
LABEL_43:
        v23 = v39;
      }
      sub_186B220(v23 - 1);
    }
    v26 = v38;
    if ( v38 )
    {
      v27 = *((unsigned int *)v38 - 1);
      if ( (_DWORD)v27 )
      {
        v28 = &v38[3 * v27];
        do
        {
          while ( *v26 )
          {
            sub_186B220(*v26);
            v26 += 3;
            if ( v28 == v26 )
              goto LABEL_50;
          }
          v26 += 3;
        }
        while ( v28 != v26 );
LABEL_50:
        v26 = v38;
      }
      sub_186B220(v26 - 1);
    }
    if ( v37 )
      sub_186B220((void *)(v37 - 8));
  }
  else
  {
    return 1;
  }
  return v8;
}

