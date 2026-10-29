/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007F9A0
// Address: 0x000000010007F9A0

//----- (000000010007F9A0) ----------------------------------------------------
__int64 __fastcall sub_10007F9A0(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned __int64 v4; // rax
  __int64 v5; // r13
  int v6; // eax
  __int64 v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rdi
  int v10; // edi
  int v11; // esi
  const char *v12; // rdi
  int v13; // eax
  rlim_t v14; // r14
  unsigned __int64 v15; // rax
  int v16; // edx
  unsigned __int64 v17; // rsi
  int v18; // ebx
  const char *v19; // r15
  const char *v20; // r13
  int *v21; // rax
  const char *v22; // rax
  rlimit v25; // [rsp+10h] [rbp-40h] BYREF

  if ( a1[1] )
  {
    v2 = 1;
    v4 = 0;
    do
    {
      v5 = *a1 + 48 * v4;
      v6 = *(_DWORD *)(v5 + 32);
      if ( (v6 & 8) != 0 )
      {
        v7 = *(_QWORD *)(v5 + 16);
      }
      else
      {
        v7 = *(_QWORD *)(v5 + 16);
        v8 = qword_10008FEE0;
        if ( v7 )
          v8 = *(__int64 **)(v5 + 8);
        if ( *(_BYTE *)v8 == 38 )
        {
          v9 = *(char *)(*(_QWORD *)(v5 + 8) + 1LL);
          if ( v9 >= 0 && (_DefaultRuneLocale.__runetype[v9] & 0x400) != 0 )
          {
            v10 = v9 - 48;
            if ( v10 == -1 )
              goto LABEL_36;
            goto LABEL_21;
          }
        }
      }
      v11 = 1537;
      if ( (v6 & 4) != 0 )
        v11 = 521;
      if ( (v6 & 1) != 0 )
        v11 = 0;
      v12 = _s1;
      if ( v7 )
        v12 = *(const char **)(v5 + 8);
      v10 = open(v12, v11, 420);
      if ( v10 == -1 )
      {
LABEL_36:
        if ( a2 )
        {
          v18 = *(_DWORD *)v5;
          v19 = "from";
          if ( (*(_BYTE *)(v5 + 32) & 1) == 0 )
            v19 = "to";
          if ( *(_QWORD *)(v5 + 16) )
            v20 = *(const char **)(v5 + 8);
          else
            v20 = _s1;
          v21 = __error();
          v22 = (const char *)winerr(*v21);
          v2 = 0;
          sub_100002D00(a2, "failed to redirect %d %s %s: %s", v18, v19, v20, v22);
        }
        else
        {
          return 0;
        }
        return v2;
      }
LABEL_21:
      if ( v10 == *(_DWORD *)v5 )
      {
        fcntl(v10, 2, 0);
      }
      else if ( dup2(v10, *(_DWORD *)v5) != *(_DWORD *)v5 )
      {
        if ( under_debugger == 1 )
          BUG();
        interr(0x23Fu);
      }
      v4 = (int)v2++;
    }
    while ( a1[1] > v4 );
  }
  v13 = getrlimit(8, &v25);
  if ( v13 == 0 && v25.rlim_cur >= 4 )
  {
    v14 = v25.rlim_cur - 1;
    do
    {
      if ( (int)v14 <= 9 && (v15 = a1[1]) != 0 )
      {
        v16 = 1;
        v17 = 0;
        while ( *(_DWORD *)(*a1 + 48 * v17) != (_DWORD)v14 )
        {
          v17 = v16++;
          if ( v15 <= v17 )
            goto LABEL_28;
        }
      }
      else
      {
LABEL_28:
        close(v14);
      }
      --v14;
    }
    while ( v14 > 2 );
  }
  LOBYTE(v2) = 1;
  return v2;
}
// 10007FBD3: variable 'v2' is possibly undefined
// 10008FEE0: using guessed type __int64 qword_10008FEE0[2];
// 1000AE23D: using guessed type char under_debugger;
