__int64 __fastcall sub_BBF120(_QWORD *a1, unsigned int **a2, double a3)
{
  unsigned int **v3; // r13
  __int64 v4; // r12
  unsigned int *v5; // rbx
  unsigned int *v6; // rdx
  __int64 v7; // r14
  unsigned int *v8; // rsi
  __int64 result; // rax
  unsigned int *v10; // rax
  unsigned int *v11; // r15
  __int64 v12; // rbx
  unsigned int *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  char *v16; // rsi
  __int64 v17; // rdi
  unsigned int *v18; // r8
  unsigned int *v19; // r15
  unsigned int v20; // r14d
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rax
  char *v24; // rsi
  __int64 v25; // rdi
  unsigned int *v26; // r8
  unsigned int *v27; // r15
  unsigned int v28; // r14d
  __int64 v29; // rbx
  __int64 v30; // [rsp-10h] [rbp-60h]
  unsigned int *v31; // [rsp+8h] [rbp-48h]
  unsigned int *v32; // [rsp+8h] [rbp-48h]
  __int64 v33; // [rsp+10h] [rbp-40h]
  __int64 v34; // [rsp+10h] [rbp-40h]

  v3 = a2;
  v4 = (__int64)a1;
  v5 = *a2;
  if ( !*a2 || (v6 = &v5[*(v5 - 1)], v5 == v6) )
  {
LABEL_10:
    if ( (unsigned int)sub_180B130(a1) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v15 = sub_180B150(a1, a2);
        v16 = "ax";
        v17 = v15;
        std::operator<<<std::char_traits<char>>();
        v18 = *v3;
        if ( *v3 )
        {
          v31 = &v18[*(v18 - 1)];
          if ( v31 != v18 )
          {
            v19 = *v3;
            do
            {
              v20 = *v19++;
              v33 = *(_QWORD *)(v4 + 16);
              v21 = sub_180B150(v17, v16);
              std::__ostream_insert<char,std::char_traits<char>>();
              v17 = v33;
              v16 = (char *)v21;
              sub_AA55D0(v33, v21, v20);
            }
            while ( v31 != v19 );
          }
        }
        v22 = sub_180B150(v17, v16);
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v22, "\n");
      }
      else
      {
        v23 = sub_180B150(a1, a2);
        v24 = "ax";
        v25 = v23;
        std::operator<<<std::char_traits<char>>();
        v26 = *v3;
        if ( *v3 )
        {
          v32 = &v26[*(v26 - 1)];
          if ( v32 != v26 )
          {
            v27 = *v3;
            do
            {
              v28 = *v27++;
              v34 = *(_QWORD *)(v4 + 16);
              v29 = sub_180B150(v25, v24);
              std::__ostream_insert<char,std::char_traits<char>>();
              v25 = v34;
              v24 = (char *)v29;
              sub_AA55D0(v34, v29, v28);
            }
            while ( v32 != v27 );
          }
        }
        sub_180B150(v25, v24);
        std::operator<<<std::char_traits<char>>();
      }
    }
    ++*(_DWORD *)(v4 + 4028);
    v12 = *(_QWORD *)(v4 + 24);
    *(_BYTE *)(v4 + 4170) = 1;
    if ( *(_QWORD *)(v12 + 912) )
      sub_966E60(v4, v3);
    sub_BBEF60(v4, (int **)v3);
    v13 = *v3;
    if ( *v3 )
      v14 = *(v13 - 1);
    else
      v14 = 0;
    sub_B69FE0(*(_QWORD *)(v4 + 16), *(_DWORD *)(v4 + 8), v14, v13, 0, 0, 1u);
    result = v30;
    if ( *(_QWORD *)(v12 + 912) )
      return std::__ostream_insert<char,std::char_traits<char>>();
  }
  else
  {
    v7 = a1[2];
    v8 = *a2;
    while ( 1 )
    {
      result = *v5;
      if ( *(_BYTE *)(*(_QWORD *)(v7 + 8848) + result) == 1 )
        break;
      if ( v6 == ++v5 )
      {
        v10 = v8;
        while ( 1 )
        {
          v11 = v10 + 1;
          a2 = *(unsigned int ***)(*(_QWORD *)(v7 + 8840) + 8LL * (*v10 >> 1));
          (*(void (__fastcall **)(_QWORD, unsigned int **))(**(_QWORD **)(v7 + 7488) + 48LL))(
            *(_QWORD *)(v7 + 7488),
            a2);
          a1 = *(_QWORD **)(v7 + 7488);
          (*(void (__fastcall **)(_QWORD *))(*a1 + 64LL))(a1);
          v10 = v11;
          if ( v5 == v11 )
            break;
          v7 = *(_QWORD *)(v4 + 16);
        }
        goto LABEL_10;
      }
    }
  }
  return result;
}

