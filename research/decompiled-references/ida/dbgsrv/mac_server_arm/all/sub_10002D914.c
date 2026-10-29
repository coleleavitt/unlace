/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D914
// Address: 0x000000010002D914

//----- (000000010002D914) ----------------------------------------------------
__int64 __fastcall sub_10002D914(_QWORD *a1, char *__s2)
{
  __int64 v4; // x22
  const char *v5; // x0
  const char **v6; // x20
  size_t v7; // x0
  size_t v8; // x22
  unsigned __int64 v9; // x23
  char *v10; // x0
  __int64 v11; // x21
  _QWORD *v12; // x1

  if ( __s2 )
  {
    v4 = a1[1] - 1LL;
    while ( (v4 & 0x8000000000000000LL) == 0 )
    {
      v6 = *(const char ***)(*a1 + 8 * v4);
      if ( v6[1] )
        v5 = *v6;
      else
        v5 = &byte_100075A30;
      --v4;
      if ( !strcmp(v5, __s2) )
      {
        if ( *((_DWORD *)v6 + 34) )
          return -1;
        v11 = v4 + 1;
        sub_10002DA80((__int64)v6);
        goto LABEL_19;
      }
    }
  }
  v6 = (const char **)operator new(0x90u);
  v6[1] = nullptr;
  v6[2] = nullptr;
  *v6 = nullptr;
  v6[5] = nullptr;
  v6[6] = nullptr;
  v6[4] = nullptr;
  *((_OWORD *)v6 + 4) = 0u;
  *((_OWORD *)v6 + 5) = 0u;
  *((_OWORD *)v6 + 6) = 0u;
  *((_OWORD *)v6 + 7) = 0u;
  v6[16] = nullptr;
  if ( __s2 )
  {
    v7 = strlen(__s2);
    if ( v7 )
    {
      v8 = v7;
      v9 = v7 + 1;
      if ( v7 == -1 )
      {
        v10 = nullptr;
      }
      else
      {
        v10 = (char *)qvector_reserve(v6, nullptr, v9, 1u);
        *v6 = v10;
      }
      v6[1] = (const char *)v9;
      memmove(v10, __s2, v8);
      (*v6)[v8] = 0;
    }
  }
  v12 = (_QWORD *)*a1;
  v11 = a1[1];
  if ( a1[2] < (unsigned __int64)(v11 + 1) )
  {
    v12 = qvector_reserve(a1, v12, v11 + 1, 8u);
    *a1 = v12;
  }
  v12[a1[1]++] = v6;
LABEL_19:
  *((_DWORD *)v6 + 34) = -1;
  *((_DWORD *)v6 + 6) = 0;
  return v11;
}
// 100075A30: using guessed type char byte_100075A30;
