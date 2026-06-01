/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E6770
// Address: 0x00000000000E6770

//----- (00000000000E6770) ----------------------------------------------------
unsigned __int64 __fastcall sub_E6770(__int64 a1, void **a2)
{
  unsigned __int64 result; // rax
  char *v4; // rcx
  unsigned __int64 v5; // rsi
  char *v6; // rax
  size_t v7; // rsi
  char *v8; // rcx
  unsigned __int64 v9; // rsi
  void *v10; // rax
  size_t v11; // rsi
  char *v12; // rcx
  unsigned __int64 v13; // rsi
  size_t v14; // rsi

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  result = *(unsigned int *)(a1 + 12);
  if ( (result & 1) != 0 )
  {
    v4 = (char *)a2[1];
    v5 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v4 + 6) >= v5 )
    {
      v7 = 2 * v5;
      if ( v7 < (unsigned __int64)(v4 + 6) )
        v7 = (size_t)(v4 + 6);
      a2[2] = (void *)v7;
      v6 = (char *)realloc(*a2, v7);
      *a2 = v6;
      v4 = (char *)a2[1];
    }
    else
    {
      v6 = (char *)*a2;
    }
    *(_WORD *)&v4[(_QWORD)v6 + 4] = 29811;
    *(_DWORD *)&v4[(_QWORD)v6] = 1852793632;
    a2[1] = (char *)a2[1] + 6;
    result = *(unsigned int *)(a1 + 12);
    if ( (result & 2) == 0 )
    {
LABEL_3:
      if ( (result & 4) == 0 )
        return result;
      goto LABEL_17;
    }
  }
  else if ( (result & 2) == 0 )
  {
    goto LABEL_3;
  }
  v8 = (char *)a2[1];
  v9 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v8 + 9) >= v9 )
  {
    v11 = 2 * v9;
    if ( v11 < (unsigned __int64)(v8 + 9) )
      v11 = (size_t)(v8 + 9);
    a2[2] = (void *)v11;
    v10 = realloc(*a2, v11);
    *a2 = v10;
    v8 = (char *)a2[1];
  }
  else
  {
    v10 = *a2;
  }
  *(_QWORD *)&v8[(_QWORD)v10] = 0x6C6974616C6F7620LL;
  v8[(_QWORD)v10 + 8] = 101;
  a2[1] = (char *)a2[1] + 9;
  result = *(unsigned int *)(a1 + 12);
  if ( (result & 4) != 0 )
  {
LABEL_17:
    v12 = (char *)a2[1];
    v13 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v12 + 9) >= v13 )
    {
      v14 = 2 * v13;
      if ( v14 < (unsigned __int64)(v12 + 9) )
        v14 = (size_t)(v12 + 9);
      a2[2] = (void *)v14;
      result = (unsigned __int64)realloc(*a2, v14);
      *a2 = (void *)result;
      v12 = (char *)a2[1];
    }
    else
    {
      result = (unsigned __int64)*a2;
    }
    *(_QWORD *)&v12[result] = 0x6369727473657220LL;
    v12[result + 8] = 116;
    a2[1] = (char *)a2[1] + 9;
  }
  return result;
}
