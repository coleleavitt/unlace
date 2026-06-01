/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DF510
// Address: 0x00000000000DF510

//----- (00000000000DF510) ----------------------------------------------------
__int64 __fastcall sub_DF510(__int64 a1, char **a2)
{
  int v3; // r13d
  char *v4; // rbx
  _BYTE *v5; // r15
  unsigned int v6; // r15d
  char *v7; // rcx
  unsigned __int64 v8; // rsi
  char *v9; // rax
  unsigned int i; // ebp
  char *v11; // rcx
  unsigned __int64 v12; // rsi
  char *v13; // rax
  size_t v14; // rsi
  _BYTE *v15; // rbx
  size_t v16; // rsi
  unsigned int v18; // [rsp+0h] [rbp-34h]

  v18 = *((_DWORD *)a2 + 6);
  v3 = *((_DWORD *)a2 + 7);
  a2[3] = (char *)-1LL;
  v4 = a2[1];
  v5 = *(_BYTE **)(a1 + 16);
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v5 + 24LL))(v5);
  if ( v5[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v5 + 32LL))(v5, a2);
  v6 = *((_DWORD *)a2 + 7);
  if ( v6 == -1 )
  {
    v7 = a2[1];
    v8 = (unsigned __int64)a2[2];
    if ( (unsigned __int64)(v7 + 3) >= v8 )
    {
      v16 = 2 * v8;
      if ( v16 < (unsigned __int64)(v7 + 3) )
        v16 = (size_t)(v7 + 3);
      a2[2] = (char *)v16;
      v9 = (char *)realloc(*a2, v16);
      *a2 = v9;
      v7 = a2[1];
    }
    else
    {
      v9 = *a2;
    }
    v7[(_QWORD)v9 + 2] = 46;
    *(_WORD *)&v7[(_QWORD)v9] = 11822;
    a2[1] += 3;
  }
  else if ( v6 )
  {
    if ( v6 >= 2 )
    {
      for ( i = 1; i < v6; ++i )
      {
        v11 = a2[1];
        v12 = (unsigned __int64)a2[2];
        if ( (unsigned __int64)(v11 + 2) >= v12 )
        {
          v14 = 2 * v12;
          if ( v14 < (unsigned __int64)(v11 + 2) )
            v14 = (size_t)(v11 + 2);
          a2[2] = (char *)v14;
          v13 = (char *)realloc(*a2, v14);
          *a2 = v13;
          v11 = a2[1];
        }
        else
        {
          v13 = *a2;
        }
        *(_WORD *)&v11[(_QWORD)v13] = 8236;
        a2[1] += 2;
        *((_DWORD *)a2 + 6) = i;
        v15 = *(_BYTE **)(a1 + 16);
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v15 + 24LL))(v15, a2);
        if ( v15[9] != 1 )
          (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v15 + 32LL))(v15, a2);
      }
    }
  }
  else
  {
    a2[1] = v4;
  }
  *((_DWORD *)a2 + 7) = v3;
  *((_DWORD *)a2 + 6) = v18;
  return v18;
}
