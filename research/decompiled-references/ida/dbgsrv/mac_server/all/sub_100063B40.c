/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100063B40
// Address: 0x0000000100063B40

//----- (0000000100063B40) ----------------------------------------------------
__int64 __fastcall sub_100063B40(char **a1, _DWORD *a2, __int64 *a3, int a4, int a5, double a6)
{
  char *v8; // rdi
  char *v9; // r12
  __int64 v10; // r13
  char *v11; // rbx
  void *v12; // rdi
  __int64 *v13; // rbx
  int v14; // r12d
  char v15; // al
  char *v16; // rax
  char *v17; // rcx
  char *v18; // r13
  __int64 v19; // r8
  void *v20; // rdi
  int v21; // r13d
  char v22; // al
  __int64 *i; // rbx
  __int64 v24; // rsi
  __int64 v25; // r8
  int v26; // r13d
  int v27; // eax
  int v30; // [rsp+14h] [rbp-4Ch]
  __int64 v32; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v33; // [rsp+2Ch] [rbp-34h] BYREF

  if ( !a1[20] )
  {
    v8 = a1[57];
    if ( v8 )
    {
      v30 = a4;
      v9 = a1[58];
      if ( v9 )
      {
        v10 = 8;
        do
        {
          v11 = a1[57];
          v12 = *(void **)&v11[v10];
          if ( v12 )
          {
            *(_QWORD *)&v11[v10 + 8] = 0;
            qfree(v12);
            *(_QWORD *)&v11[v10] = 0;
            *(_QWORD *)&v11[v10 + 16] = 0;
          }
          v10 += 56;
          --v9;
        }
        while ( v9 );
        v8 = a1[57];
      }
      a1[58] = nullptr;
      qfree(v8);
      a1[57] = nullptr;
      a1[59] = nullptr;
      a4 = v30;
    }
  }
  v13 = &a3[7 * a4];
  v14 = 0;
  if ( a4 )
  {
    while ( 1 )
    {
      if ( !*((_BYTE *)a3 + 40) )
      {
        if ( *((_DWORD *)a3 + 8) == 4 )
        {
          v33 = *((_DWORD *)a1 + 104);
          v32 = *a3;
          (*((void (__fastcall **)(char **, __int64 *, unsigned int *))*a1 + 68))(a1, &v32, &v33);
        }
        else
        {
          v33 = *((_DWORD *)a3 + 9);
          v32 = *a3;
        }
        v16 = a1[57];
        v17 = a1[58];
        v18 = v16;
        if ( 56LL * (_QWORD)v17 )
        {
          v19 = 56LL * (_QWORD)v17;
          v18 = a1[57];
          while ( *a3 != *(_QWORD *)v18 || *((_DWORD *)a3 + 8) != *((_DWORD *)v18 + 8) )
          {
            v18 += 56;
            v19 -= 56;
            if ( !v19 )
              goto LABEL_29;
          }
        }
        if ( v18 != &v16[56 * (_QWORD)v17] && *((_DWORD *)v18 + 12) == *((_DWORD *)a3 + 12) )
        {
          v20 = *((void **)v18 + 1);
          if ( v20 )
          {
            *((_QWORD *)v18 + 2) = 0;
            qfree(v20);
            *((_QWORD *)v18 + 1) = 0;
            *((_QWORD *)v18 + 3) = 0;
            v16 = a1[57];
            v17 = a1[58];
          }
          memmove(v18, v18 + 56, &v16[56 * (_QWORD)v17] - v18 - 56);
          --a1[58];
        }
LABEL_29:
        v21 = (*((__int64 (__fastcall **)(char **, __int64 *, _QWORD, __int64, _QWORD))*a1 + 39))(
                a1,
                a3 + 1,
                *((unsigned int *)a3 + 8),
                v32,
                v33);
        sub_100060FA0((__int64)a1, "dbg_add_bpt(type=%d, ea=%a, len=%d) => %d\n", *((_DWORD *)a3 + 8), a6, v32, v33);
        if ( v21 == -2 )
        {
          v15 = 7;
        }
        else
        {
          if ( v21 == 2 )
          {
            v22 = 10;
            goto LABEL_34;
          }
          v15 = 8;
          if ( v21 == 1 )
          {
            v22 = 0;
LABEL_34:
            *((_BYTE *)a3 + 40) = v22;
            ++v14;
            goto LABEL_14;
          }
        }
        *((_BYTE *)a3 + 40) = v15;
      }
LABEL_14:
      a3 += 7;
      if ( a3 == v13 )
      {
        a3 = v13;
        break;
      }
    }
  }
  for ( i = &v13[7 * a5]; a3 != i; a3 += 7 )
  {
    *((_BYTE *)a3 + 40) = 0;
    v24 = *((unsigned int *)a3 + 8);
    if ( (_DWORD)v24 == 4 )
      v25 = a3[2];
    else
      v25 = *((unsigned int *)a3 + 9);
    v26 = (*((__int64 (__fastcall **)(char **, __int64, __int64, __int64, __int64))*a1 + 40))(a1, v24, *a3, a3[1], v25);
    sub_100060FA0((__int64)a1, "dbg_del_bpt(type=%d, ea=%a) => %d\n", *((_DWORD *)a3 + 8), a6, *a3);
    if ( v26 <= 0 )
    {
      *((_BYTE *)a3 + 40) = 8;
    }
    else
    {
      ++v14;
      v27 = *((_DWORD *)a3 + 8);
      if ( v27 == 8 || v27 == 4 )
        sub_100063EC0(a1 + 57, a3);
    }
  }
  if ( a2 )
    *a2 = v14;
  return 1;
}
