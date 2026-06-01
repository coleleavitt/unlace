__int64 __fastcall sub_AFBE30(__int64 a1, unsigned int a2)
{
  unsigned int *v3; // rdx
  __int64 result; // rax
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 v11; // [rsp+Fh] [rbp-19h]

  v3 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 32LL * a2);
  result = *((unsigned __int8 *)v3 + 24);
  if ( !(_BYTE)result )
  {
    v5 = *(_DWORD *)(a1 + 128);
    v6 = v3[1];
    *((_BYTE *)v3 + 24) = 1;
    v7 = *v3;
    v3[3] = v5;
    *(_DWORD *)(a1 + 128) = v5 + 1;
    v8 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 132) = a2;
    LODWORD(v6) = *(_DWORD *)(v8 + 4 * v6) - *(_DWORD *)(v8 + 4 * v7);
    result = 1;
    if ( (int)v6 > (int)v3[2] )
    {
      result = sub_AFB440(a1, a2);
      v9 = *(_QWORD *)(a1 + 136);
      if ( !v9 )
        goto LABEL_8;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 136);
      if ( !v9 )
        goto LABEL_8;
    }
    v10 = *(unsigned int *)(v9 - 4);
    if ( (_DWORD)v10 != *(_DWORD *)(v9 - 8) )
    {
LABEL_5:
      *(_DWORD *)(v9 + 4 * v10) = a2;
      ++*(_DWORD *)(v9 - 4);
      return result;
    }
LABEL_8:
    v11 = result;
    sub_313C10((unsigned int **)(a1 + 136));
    v9 = *(_QWORD *)(a1 + 136);
    result = v11;
    v10 = *(unsigned int *)(v9 - 4);
    goto LABEL_5;
  }
  return result;
}

