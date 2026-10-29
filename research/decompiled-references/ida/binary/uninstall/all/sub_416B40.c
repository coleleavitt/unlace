__int64 __fastcall sub_416B40(char *a1, char *a2, int a3, __int64 a4)
{
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // rdx
  int *v10; // rbp
  int v11; // ebx
  __int64 v12; // r12
  __int64 v13; // rax
  int v14; // eax
  bool v15; // zf
  __int64 v17; // rax
  int v18; // [rsp+Ch] [rbp-2Ch] BYREF
  __int64 v19[5]; // [rsp+10h] [rbp-28h] BYREF

  if ( (unsigned int)(a3 - 2) <= 1 )
  {
    v7 = *(_QWORD *)(a4 + 8);
    if ( *(_UNKNOWN ***)(v7 + 24) == &off_655E20 )
    {
      v17 = *(_QWORD *)(v7 + 32);
      v9 = v17 + 16;
      LODWORD(v17) = *(_DWORD *)(v17 + 8);
      v19[0] = v9;
      v18 = v17;
    }
    else
    {
      a1 = a2;
      v8 = sub_46FD90(a2, v7, &v18, v19);
      v9 = 1;
      if ( v8 )
        return (unsigned int)v9;
    }
    if ( a3 == 2 )
    {
      a1 = " ";
      v7 = 1;
      v10 = (int *)sub_48DF10(" ", 1u);
    }
    else
    {
      v10 = *(int **)(a4 + 16);
    }
    ++*v10;
    v11 = 0;
    v12 = sub_47B0B0(a1, v7, v9);
    while ( v11 < v18 )
    {
      if ( v11 > 0 )
        sub_48F180(v12, v10);
      v13 = v11++;
      sub_48F180(v12, *(_QWORD *)(v19[0] + 8 * v13));
    }
    v14 = *v10 - 1;
    v15 = *v10 == 1;
    *v10 = v14;
    if ( v14 < 0 || v15 )
      sub_47B120(v10);
    sub_48AFD0(a2, v12);
    LODWORD(v9) = 0;
    return (unsigned int)v9;
  }
  sub_458930(a2, 1, a4, "list ?joinString?");
  return 1;
}

