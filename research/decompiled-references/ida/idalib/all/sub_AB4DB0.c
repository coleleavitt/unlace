void __fastcall sub_AB4DB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rbp
  __int64 v6; // r13
  void **v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r15
  void **v11; // r9
  char *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  int v16; // r10d
  char *v17; // rdi
  char *v18; // r11
  char *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdi
  void **v24; // [rsp+8h] [rbp-180h]
  __int64 v25; // [rsp+8h] [rbp-180h]
  void **v26; // [rsp+8h] [rbp-180h]
  void **v27; // [rsp+8h] [rbp-180h]
  void **v28; // [rsp+8h] [rbp-180h]
  void **v29; // [rsp+10h] [rbp-178h]
  int v30; // [rsp+10h] [rbp-178h]
  int v31; // [rsp+10h] [rbp-178h]
  int v32; // [rsp+10h] [rbp-178h]
  int v33; // [rsp+1Ch] [rbp-16Ch]
  __int64 v34; // [rsp+28h] [rbp-160h] BYREF
  void *v35[18]; // [rsp+30h] [rbp-158h] BYREF
  void *ptr[25]; // [rsp+C0h] [rbp-C8h] BYREF

  v3 = a2;
  *(_QWORD *)(a1 + 8) = 0;
  v5 = *(_QWORD *)a1;
  memset(&ptr[1], 0, 0x88u);
  HIDWORD(ptr[1]) = 32;
  ptr[0] = &ptr[2];
  v6 = v5 + 152LL * *(unsigned int *)(a1 + 16);
  if ( v5 != v6 )
  {
    do
    {
      while ( 1 )
      {
        *(_DWORD *)(v5 + 8) = 0;
        *(_QWORD *)v5 = v5 + 16;
        *(_DWORD *)(v5 + 12) = 32;
        if ( LODWORD(ptr[1]) )
          break;
        v5 += 152;
        if ( v6 == v5 )
          goto LABEL_6;
      }
      v7 = (void **)v5;
      v5 += 152;
      sub_A6DB70(v7, (char **)ptr);
    }
    while ( v6 != v5 );
LABEL_6:
    if ( ptr[0] != &ptr[2] )
      free(ptr[0]);
  }
  memset(&v35[1], 0, 0x88u);
  HIDWORD(v35[1]) = 32;
  v8 = 35;
  ptr[0] = &ptr[2];
  v35[0] = &v35[2];
  ptr[1] = (void *)0x2000000001LL;
  v9 = 1;
  LODWORD(ptr[2]) = -1;
  do
  {
    if ( v9 + 1 <= (unsigned __int64)HIDWORD(ptr[1]) )
    {
      *((_DWORD *)ptr[0] + v9) = -1;
    }
    else
    {
      sub_2237220(ptr, &ptr[2], v9 + 1, 4);
      *((_DWORD *)ptr[0] + LODWORD(ptr[1])) = -1;
    }
    v9 = (unsigned int)++LODWORD(ptr[1]);
    --v8;
  }
  while ( v8 );
  if ( a2 != a3 )
  {
    do
    {
      while ( 1 )
      {
        v10 = v3 + 16;
        if ( !(unsigned __int8)sub_2222ED0(v3, v35) && !(unsigned __int8)sub_2222ED0(v3, ptr) )
        {
          sub_A6EFA0((__int64 *)a1, v3, &v34);
          v11 = (void **)v34;
          if ( v34 == v3 )
          {
            v13 = v3;
          }
          else
          {
            v12 = *(char **)v3;
            if ( *(_QWORD *)v3 == v10 )
            {
              v14 = *(unsigned int *)(v3 + 8);
              v15 = *(unsigned int *)(v34 + 8);
              v16 = *(_DWORD *)(v3 + 8);
              if ( v14 <= v15 )
              {
                v13 = v34;
                if ( *(_DWORD *)(v3 + 8) )
                {
                  v32 = *(_DWORD *)(v3 + 8);
                  v28 = (void **)v34;
                  memmove(*(void **)v34, (const void *)(v3 + 16), 4 * v14);
                  v13 = v34;
                  v16 = v32;
                  v11 = v28;
                }
                *((_DWORD *)v11 + 2) = v16;
                *(_DWORD *)(v3 + 8) = 0;
              }
              else
              {
                if ( v14 > *(unsigned int *)(v34 + 12) )
                {
                  v21 = v34 + 16;
                  v22 = v34;
                  v31 = *(_DWORD *)(v3 + 8);
                  *(_DWORD *)(v34 + 8) = 0;
                  v27 = v11;
                  sub_2237220(v22, v21, v14, 4);
                  v18 = *(char **)v3;
                  v11 = v27;
                  v15 = 0;
                  v14 = *(unsigned int *)(v3 + 8);
                  v16 = v31;
                  v17 = (char *)*v27;
                  v19 = *(char **)v3;
                }
                else
                {
                  v17 = *(char **)v34;
                  if ( *(_DWORD *)(v34 + 8) )
                  {
                    v33 = *(_DWORD *)(v3 + 8);
                    v29 = (void **)v34;
                    v25 = 4 * v15;
                    memmove(v17, (const void *)(v3 + 16), 4 * v15);
                    v18 = *(char **)v3;
                    v11 = v29;
                    v14 = *(unsigned int *)(v3 + 8);
                    v16 = v33;
                    v19 = (char *)(*(_QWORD *)v3 + v25);
                    v15 = v25;
                    v17 = (char *)*v29 + v25;
                  }
                  else
                  {
                    v19 = (char *)(v3 + 16);
                    v18 = (char *)(v3 + 16);
                  }
                }
                v20 = 4 * v14;
                if ( v19 != &v18[v20] )
                {
                  v30 = v16;
                  v26 = v11;
                  memcpy(v17, v19, v20 - v15);
                  v16 = v30;
                  v11 = v26;
                }
                *((_DWORD *)v11 + 2) = v16;
                v13 = v34;
                *(_DWORD *)(v3 + 8) = 0;
              }
            }
            else
            {
              v13 = v34;
              if ( *(_QWORD *)v34 != v34 + 16 )
              {
                v24 = (void **)v34;
                free(*(void **)v34);
                v12 = *(char **)v3;
                v13 = v34;
                v11 = v24;
              }
              *v11 = v12;
              *((_DWORD *)v11 + 2) = *(_DWORD *)(v3 + 8);
              *((_DWORD *)v11 + 3) = *(_DWORD *)(v3 + 12);
              *(_QWORD *)v3 = v10;
              *(_DWORD *)(v3 + 12) = 0;
              *(_DWORD *)(v3 + 8) = 0;
            }
          }
          *(_QWORD *)(v13 + 144) = *(_QWORD *)(v3 + 144);
          ++*(_DWORD *)(a1 + 8);
        }
        if ( *(_QWORD *)v3 == v10 )
          break;
        free(*(void **)v3);
        v3 += 152;
        if ( a3 == v3 )
          goto LABEL_17;
      }
      v3 += 152;
    }
    while ( a3 != v3 );
  }
LABEL_17:
  if ( ptr[0] != &ptr[2] )
    free(ptr[0]);
  if ( v35[0] != &v35[2] )
    free(v35[0]);
}
