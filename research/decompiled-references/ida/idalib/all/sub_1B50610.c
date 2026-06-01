void __fastcall sub_1B50610(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r13
  char *v5; // rbx
  char *i; // rdx
  char *v7; // rcx
  int v8; // r15d
  _QWORD *v9; // r13
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  _QWORD *v15; // rdi
  _QWORD *v16; // rdi
  _QWORD *v17; // rdi
  _QWORD *v18; // rdi
  __int64 v19[8]; // [rsp+0h] [rbp-40h] BYREF

  v2 = *(unsigned int *)(a1 + 8);
  if ( a2 != v2 )
  {
    v3 = 616 * a2;
    if ( a2 < v2 )
    {
      v9 = (_QWORD *)(*(_QWORD *)a1 + v3);
      v10 = (_QWORD *)(*(_QWORD *)a1 + 616 * v2);
      while ( v9 != v10 )
      {
        while ( 1 )
        {
          v10 -= 77;
          v11 = (_QWORD *)v10[61];
          if ( v11 != v10 + 63 )
            free(v11);
          v12 = (_QWORD *)v10[55];
          if ( v12 != v10 + 57 )
            free(v12);
          v13 = (_QWORD *)v10[49];
          if ( v13 != v10 + 51 )
            free(v13);
          v14 = (_QWORD *)v10[43];
          if ( v14 != v10 + 45 )
            free(v14);
          v15 = (_QWORD *)v10[37];
          if ( v15 != v10 + 39 )
            free(v15);
          v16 = (_QWORD *)v10[31];
          if ( v16 != v10 + 33 )
            free(v16);
          v17 = (_QWORD *)v10[25];
          if ( v17 != v10 + 27 )
            free(v17);
          v18 = (_QWORD *)v10[19];
          if ( v18 == v10 + 21 )
            break;
          free(v18);
          if ( v9 == v10 )
            goto LABEL_7;
        }
      }
    }
    else
    {
      if ( a2 > *(unsigned int *)(a1 + 12) )
      {
        v5 = (char *)sub_2237400(a1, a1 + 16, a2, 616, v19);
        sub_1B50100(a1, (__int64)v5);
        v8 = v19[0];
        if ( a1 + 16 != *(_QWORD *)a1 )
          free(*(void **)a1);
        *(_QWORD *)a1 = v5;
        v2 = *(unsigned int *)(a1 + 8);
        *(_DWORD *)(a1 + 12) = v8;
      }
      else
      {
        v5 = *(char **)a1;
      }
      for ( i = &v5[616 * v2]; &v5[v3] != i; *((_DWORD *)i - 29) = 4 )
      {
        memset(i, 0, 0x268u);
        *((_DWORD *)i + 41) = 4;
        *((_QWORD *)i + 19) = i + 168;
        *((_QWORD *)i + 25) = i + 216;
        *((_QWORD *)i + 31) = i + 264;
        *((_QWORD *)i + 37) = i + 312;
        *((_QWORD *)i + 43) = i + 360;
        *((_QWORD *)i + 49) = i + 408;
        *((_QWORD *)i + 55) = i + 456;
        v7 = i + 504;
        i += 616;
        *((_DWORD *)i - 101) = 4;
        *((_DWORD *)i - 89) = 4;
        *((_DWORD *)i - 77) = 4;
        *((_DWORD *)i - 65) = 4;
        *((_DWORD *)i - 53) = 4;
        *((_DWORD *)i - 41) = 4;
        *((_QWORD *)i - 16) = v7;
      }
    }
LABEL_7:
    *(_DWORD *)(a1 + 8) = a2;
  }
}
