unsigned __int64 __fastcall ClpModel::copyColumnNames(
        ClpModel *this,
        const char *const *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v6; // r15d
  _QWORD *v7; // r12
  __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 result; // rax
  unsigned int v11; // r9d
  unsigned int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // rdx
  size_t v15; // rax
  std::string *v16; // rdi
  __int64 v17; // rax
  const char *const *v18; // r9
  const char *v19; // rsi
  size_t v20; // rax
  _QWORD *v21; // r13
  char *v22; // r8
  _QWORD *v23; // rbx
  __int64 v24; // rdi
  size_t v25; // rax
  std::string *v26; // rdi
  unsigned int v29; // [rsp+8h] [rbp-60h]
  char *v30; // [rsp+10h] [rbp-58h]
  const char **v31; // [rsp+18h] [rbp-50h]
  unsigned __int64 v32; // [rsp+18h] [rbp-50h]
  char s[66]; // [rsp+26h] [rbp-42h] BYREF

  v6 = *((_DWORD *)this + 82);
  if ( !v6 )
  {
    v6 = *((_DWORD *)this + 26);
    if ( v6 )
    {
      *((_DWORD *)this + 82) = 8;
      ClpModel::copyRowNames(this, nullptr, 0, v6);
      v6 = *((_DWORD *)this + 82);
    }
  }
  v7 = *((_QWORD **)this + 50);
  v8 = *((_QWORD *)this + 49);
  v9 = *((int *)this + 27);
  result = ((__int64)v7 - v8) >> 3;
  if ( (_DWORD)v9 != (_DWORD)result )
  {
    if ( v9 > result )
    {
      result = std::vector<std::string>::_M_default_append((char *)this + 392, v9 - result);
    }
    else if ( v9 < result )
    {
      v21 = (_QWORD *)(v8 + 8 * v9);
      if ( v7 != v21 )
      {
        result = (unsigned __int64)&std::string::_Rep::_S_empty_rep_storage;
        v22 = s;
        v23 = (_QWORD *)(v8 + 8 * v9);
        do
        {
          while ( 1 )
          {
            v24 = *v23 - 24LL;
            if ( v24 != result )
              break;
            if ( v7 == ++v23 )
              goto LABEL_23;
          }
          ++v23;
          v32 = result;
          v30 = v22;
          sub_8F640(v24);
          v22 = v30;
          result = v32;
        }
        while ( v23 != v7 );
      }
LABEL_23:
      *((_QWORD *)this + 50) = v21;
    }
  }
  v11 = a3;
  if ( a3 < a4 )
  {
    v12 = a3;
    v13 = 8LL * a3;
    if ( a2 )
    {
      do
      {
        while ( 1 )
        {
          v17 = v12 - a3;
          v18 = &a2[v17];
          v19 = *v18;
          if ( !*v18 || !*v19 )
            break;
          v31 = (const char **)&a2[v17];
          v20 = strlen(*v18);
          std::string::assign((std::string *)(v13 + *((_QWORD *)this + 49)), v19, v20);
          result = strlen(*v31);
          if ( v6 < (unsigned int)result )
            v6 = result;
          ++v12;
          v13 += 8;
          if ( v12 == a4 )
            goto LABEL_16;
        }
        if ( v6 < 8 )
          v6 = 8;
        v14 = v12++;
        sprintf(s, "C%7.7d", v14);
        v15 = strlen(s);
        v16 = (std::string *)(v13 + *((_QWORD *)this + 49));
        v13 += 8;
        result = std::string::assign(v16, s, v15);
      }
      while ( v12 != a4 );
    }
    else
    {
      do
      {
        if ( v6 < 8 )
          v6 = 8;
        v29 = v11;
        sprintf(s, "C%7.7d", v11);
        v25 = strlen(s);
        v26 = (std::string *)(v13 + *((_QWORD *)this + 49));
        v13 += 8;
        result = std::string::assign(v26, s, v25);
        v11 = v29 + 1;
      }
      while ( v29 + 1 != a4 );
    }
  }
LABEL_16:
  *((_DWORD *)this + 82) = v6;
  return result;
}

