/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E6B70
// Address: 0x00000000000E6B70

//----- (00000000000E6B70) ----------------------------------------------------
__int64 __fastcall sub_E6B70(__int64 a1, char **a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // r13
  unsigned __int64 v6; // rsi
  char *v7; // rax
  size_t v8; // rsi
  char *v9; // rax
  size_t v10; // rsi
  __int64 v11; // rdi
  _BYTE *v12; // r15
  __int64 v13; // r12
  size_t v14; // r12
  char *v15; // rax
  size_t v16; // rsi
  char *v17; // rcx
  unsigned __int64 v18; // rsi
  char *v19; // rax
  size_t v20; // rsi

  v4 = (__int64)a2[1];
  if ( v4 && (*a2)[v4 - 1] == 93 )
  {
    v5 = a2 + 2;
  }
  else
  {
    v6 = (unsigned __int64)a2[2];
    if ( v4 + 1 >= v6 )
    {
      v8 = 2 * v6;
      if ( v8 < v4 + 1 )
        v8 = v4 + 1;
      a2[2] = (char *)v8;
      v7 = (char *)realloc(*a2, v8);
      *a2 = v7;
      v4 = (__int64)a2[1];
    }
    else
    {
      v7 = *a2;
    }
    v5 = a2 + 2;
    v7[v4] = 32;
    v4 = (__int64)(a2[1] + 1);
    a2[1] = (char *)v4;
  }
  if ( (unsigned __int64)(v4 + 1) >= *v5 )
  {
    v10 = 2LL * *v5;
    if ( v10 < v4 + 1 )
      v10 = v4 + 1;
    a2[2] = (char *)v10;
    v9 = (char *)realloc(*a2, v10);
    *a2 = v9;
    v4 = (__int64)a2[1];
  }
  else
  {
    v9 = *a2;
  }
  v9[v4] = 91;
  v11 = (__int64)(a2[1] + 1);
  a2[1] = (char *)v11;
  v12 = *(_BYTE **)(a1 + 24);
  v13 = *(_QWORD *)(a1 + 32);
  if ( v13 )
  {
    if ( v12 )
    {
      v14 = v13 - (_QWORD)v12;
      if ( v14 )
      {
        if ( v11 + v14 >= *v5 )
        {
          v16 = 2LL * *v5;
          if ( v16 < v11 + v14 )
            v16 = v11 + v14;
          a2[2] = (char *)v16;
          v15 = (char *)realloc(*a2, v16);
          *a2 = v15;
          v11 = (__int64)a2[1];
        }
        else
        {
          v15 = *a2;
        }
        memmove(&v15[v11], v12, v14);
        a2[1] += v14;
      }
    }
  }
  else if ( v12 )
  {
    (*(void (__fastcall **)(_QWORD, char **))(*(_QWORD *)v12 + 24LL))(*(_QWORD *)(a1 + 24), a2);
    if ( v12[9] != 1 )
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v12 + 32LL))(v12, a2);
  }
  v17 = a2[1];
  v18 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v17 + 1) >= v18 )
  {
    v20 = 2 * v18;
    if ( v20 < (unsigned __int64)(v17 + 1) )
      v20 = (size_t)(v17 + 1);
    a2[2] = (char *)v20;
    v19 = (char *)realloc(*a2, v20);
    *a2 = v19;
    v17 = a2[1];
  }
  else
  {
    v19 = *a2;
  }
  v17[(_QWORD)v19] = 93;
  ++a2[1];
  return (*(__int64 (__fastcall **)(_QWORD, char **))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16), a2);
}
// E6C4B: conditional instruction was optimized away because r12.8==0
