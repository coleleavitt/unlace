/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D89E0
// Address: 0x00000000000D89E0

//----- (00000000000D89E0) ----------------------------------------------------
char *__fastcall sub_D89E0(char **a1, __int64 *a2, _BYTE *a3)
{
  int v6; // r12d
  char *v7; // rbx
  __int64 v8; // rcx
  char **v9; // rax
  _QWORD *v10; // rdx
  char *v11; // rcx
  char *v12; // rdx
  char *v13; // rsi
  char *v14; // rcx
  char v15; // di
  char *result; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  char *v19; // rbx
  __int64 v20; // rcx
  char **v21; // rax
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  char *v25; // r15
  __int64 v26; // rcx
  char **v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx

  if ( *(_BYTE *)(*a2 + 8) == 36 )
  {
    v6 = *(_DWORD *)(*a2 + 12);
    if ( (unsigned int)(v6 - 2) <= 3 )
    {
      v7 = a1[604];
      v8 = *((_QWORD *)v7 + 1);
      if ( (unsigned __int64)(v8 + 16) < 0xFF0 )
      {
        v10 = v7 + 8;
      }
      else
      {
        v9 = (char **)operator new[](0x1000u);
        *v9 = v7;
        v9[1] = nullptr;
        a1[604] = (char *)v9;
        v8 = 0;
        v10 = v9 + 1;
        v7 = (char *)v9;
      }
      *v10 = v8 + 16;
      *(_DWORD *)&v7[v8 + 24] = 16843043;
      *(_QWORD *)&v7[v8 + 16] = off_152928;
      *(_DWORD *)&v7[v8 + 28] = v6;
      *a2 = (__int64)&v7[v8 + 16];
    }
  }
  v11 = *a1;
  v12 = a1[1];
  if ( *a1 == v12 || *v11 != 67 )
  {
    result = nullptr;
    if ( (unsigned __int64)(v12 - v11) >= 2 && *v11 == 68 )
    {
      v17 = (unsigned __int8)v11[1];
      result = nullptr;
      if ( v17 <= 0x35 )
      {
        v18 = 0x27000000000000LL;
        if ( _bittest64(&v18, v17) )
        {
          *a1 = v11 + 2;
          if ( a3 )
            *a3 = 1;
          v19 = a1[604];
          v20 = *((_QWORD *)v19 + 1);
          if ( (unsigned __int64)(v20 + 32) < 0xFF0 )
          {
            v22 = v19 + 8;
          }
          else
          {
            v21 = (char **)operator new[](0x1000u);
            *v21 = v19;
            v21[1] = nullptr;
            a1[604] = (char *)v21;
            v20 = 0;
            v22 = v21 + 1;
            v19 = (char *)v21;
          }
          *v22 = v20 + 32;
          result = &v19[v20 + 16];
          v29 = *a2;
          *(_DWORD *)&v19[v20 + 24] = 16843045;
          *(_QWORD *)result = off_152998;
          *(_QWORD *)&v19[v20 + 32] = v29;
          v19[v20 + 40] = 1;
        }
      }
    }
    return result;
  }
  v13 = v11 + 1;
  *a1 = v11 + 1;
  if ( v11 + 1 == v12 )
    return nullptr;
  if ( *v13 == 73 )
  {
    v14 = v11 + 2;
    *a1 = v14;
    v15 = 1;
    v13 = v14;
    if ( v12 == v14 )
      return nullptr;
    goto LABEL_22;
  }
  v15 = 0;
  if ( v12 == v13 )
    return nullptr;
LABEL_22:
  v23 = (unsigned __int8)*v13;
  result = nullptr;
  if ( v23 <= 0x35 )
  {
    v24 = 0x2E000000000000LL;
    if ( _bittest64(&v24, v23) )
    {
      *a1 = v13 + 1;
      if ( a3 )
        *a3 = 1;
      if ( v15 && !sub_D6270(a1, a3) )
        return nullptr;
      v25 = a1[604];
      v26 = *((_QWORD *)v25 + 1);
      if ( (unsigned __int64)(v26 + 32) < 0xFF0 )
      {
        v28 = v25 + 8;
      }
      else
      {
        v27 = (char **)operator new[](0x1000u);
        *v27 = v25;
        v27[1] = nullptr;
        a1[604] = (char *)v27;
        v26 = 0;
        v28 = v27 + 1;
        v25 = (char *)v27;
      }
      *v28 = v26 + 32;
      result = &v25[v26 + 16];
      v30 = *a2;
      *(_DWORD *)&v25[v26 + 24] = 16843045;
      *(_QWORD *)result = off_152998;
      *(_QWORD *)&v25[v26 + 32] = v30;
      v25[v26 + 40] = 0;
    }
  }
  return result;
}
// 152928: using guessed type __int64 (__fastcall *off_152928[7])();
// 152998: using guessed type __int64 (__fastcall *off_152998[7])();
