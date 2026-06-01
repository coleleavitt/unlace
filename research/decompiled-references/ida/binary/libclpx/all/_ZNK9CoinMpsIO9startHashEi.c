__int64 __fastcall CoinMpsIO::startHash(CoinMpsIO *this, int a2)
{
  char *v2; // rbx
  __int64 v3; // rbp
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 result; // rax
  __int64 v10; // r14
  const char *v11; // r12
  int v12; // eax
  __int64 v13; // rcx
  int v14; // edx
  int v15; // esi
  __int64 v16; // rdi
  int v17; // eax
  _DWORD *v18; // rax
  _DWORD *v19; // r12
  int v20; // r14d
  const char *v21; // rbx
  int v22; // r13d
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // r8d
  int v27; // eax
  __int64 v28; // r9
  int v29; // esi
  int v30; // edx
  int *v31; // r15
  __int64 v32; // rax
  __int64 v33; // rax
  _DWORD *v34; // rbx
  _DWORD *v35; // [rsp+8h] [rbp-50h]
  __int64 v36; // [rsp+8h] [rbp-50h]
  __int64 v37; // [rsp+10h] [rbp-48h]
  int v38; // [rsp+18h] [rbp-40h]
  int v39; // [rsp+1Ch] [rbp-3Ch]

  v2 = (char *)this + 8 * a2;
  v3 = *((_QWORD *)v2 + 19);
  v4 = 4 * *((_DWORD *)this + a2 + 44);
  v39 = *((_DWORD *)this + a2 + 44);
  v38 = v4;
  if ( (unsigned __int64)v4 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v5 = operator new[](8LL * v4);
  v6 = v5;
  *((_QWORD *)v2 + 23) = v5;
  if ( v4 > 0 )
  {
    v7 = v5;
    v8 = 0;
    do
    {
      ++v8;
      v7 += 16;
      *(_OWORD *)(v7 - 16) = -1;
    }
    while ( v8 < (unsigned int)v4 >> 1 );
  }
  result = (unsigned int)v39;
  if ( v39 > 0 )
  {
    v10 = 0;
    v35 = (_DWORD *)v6;
    do
    {
      v11 = *(const char **)(v3 + 8 * v10);
      v12 = strlen(v11);
      if ( v12 <= 0 )
      {
        v18 = v35;
      }
      else
      {
        v13 = 0;
        v14 = 262139;
        v15 = 0;
        v16 = (unsigned int)(v12 - 1) + 1LL;
        while ( 1 )
        {
          v17 = v11[v13++];
          v15 += v14 * v17;
          if ( v16 == v13 )
            break;
          v14 = *((_DWORD *)qword_297D80 + v13 % 81);
        }
        v18 = &v35[2 * ((int)abs32(v15) % v38)];
      }
      if ( *v18 == -1 )
        *v18 = v10;
      ++v10;
    }
    while ( (unsigned int)(v39 - 1) + 1LL != v10 );
    v19 = v35;
    v36 = 0;
    result = 0;
    v37 = v10;
    v20 = -1;
    do
    {
      v21 = *(const char **)(v3 + 8 * result);
      v22 = result;
      v23 = strlen(v21);
      if ( v23 <= 0 )
      {
        v30 = 0;
      }
      else
      {
        v24 = (unsigned int)(v23 - 1);
        v25 = 0;
        v26 = 0;
        v27 = 262139;
        v28 = v24 + 1;
        while ( 1 )
        {
          v29 = v21[v25++];
          v26 += v27 * v29;
          if ( v28 == v25 )
            break;
          v27 = *((_DWORD *)qword_297D80 + v25 % 81);
        }
        v30 = (int)abs32(v26) % v38;
      }
      while ( 1 )
      {
        v31 = &v19[2 * v30];
        v32 = *v31;
        if ( (_DWORD)v32 == v22 )
          break;
        if ( !strcmp(v21, *(const char **)(v3 + 8 * v32)) )
        {
          printf("** duplicate name %s\n", v21);
          break;
        }
        v30 = v31[1];
        if ( v30 == -1 )
        {
          v33 = (__int64)&v19[2 * v20 + 2];
          while ( 1 )
          {
            ++v20;
            v34 = (_DWORD *)v33;
            if ( v39 < v20 )
              break;
            v33 += 8;
            if ( *(_DWORD *)(v33 - 8) == -1 )
              goto LABEL_31;
          }
          puts("** too many names");
LABEL_31:
          v31[1] = v20;
          *v34 = v22;
          break;
        }
      }
      result = ++v36;
    }
    while ( v37 != v36 );
  }
  return result;
}

