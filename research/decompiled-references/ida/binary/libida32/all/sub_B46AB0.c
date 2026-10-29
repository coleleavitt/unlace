__int64 __fastcall sub_B46AB0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // r14
  _DWORD *v4; // rbx
  _QWORD *v6; // r15
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  char *v9; // rbp
  _DWORD *v10; // r15
  int v11; // eax
  char ***v12; // rsi
  char ***v13; // rdi
  _DWORD *v14; // rbx
  _DWORD *v15; // rdi
  _QWORD *v17; // r14
  _QWORD *v18; // rdi
  _QWORD *v19; // rdx
  char ***v20; // r14
  char ***v21; // rbp
  __int64 v22; // rbx
  int v23; // eax
  char ***v24; // rsi
  char ***v25; // rdi
  _QWORD *v26; // rbx
  _QWORD *v27; // rdi
  _DWORD *v28; // rbp
  _DWORD *v29; // rbx
  _DWORD *v30; // rdi
  char ***v31; // r14
  char ***v32; // rbx
  int v33; // eax
  char ***v34; // rsi
  char ***v35; // rdi
  _QWORD *v36; // rbx
  _QWORD *v37; // rdi
  int v38; // [rsp+4h] [rbp-44h]
  __int64 v39; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = *(_DWORD **)a2;
    v4 = (_DWORD *)(a2 + 16);
    v6 = *(_QWORD **)a1;
    v7 = *(unsigned int *)(a1 + 8);
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v8 = *(unsigned int *)(a2 + 8);
      v38 = v8;
      if ( v8 <= v7 )
      {
        v19 = *(_QWORD **)a1;
        if ( v8 )
        {
          v20 = (char ***)(v6 + 1);
          v21 = (char ***)(a2 + 24);
          v39 = 120 * v8;
          v22 = (__int64)&v6[15 * v8 + 1];
          do
          {
            v23 = *((_DWORD *)v21 - 2);
            v24 = v21;
            v25 = v20;
            v20 += 15;
            v21 += 15;
            *((_DWORD *)v20 - 32) = v23;
            sub_B45E20(v25, v24);
          }
          while ( (char ***)v22 != v20 );
          v19 = *(_QWORD **)a1;
          v7 = *(unsigned int *)(a1 + 8);
          v6 = (_QWORD *)((char *)v6 + v39);
        }
        v26 = &v19[15 * v7];
        while ( v6 != v26 )
        {
          while ( 1 )
          {
            v26 -= 15;
            v27 = (_QWORD *)v26[1];
            if ( v27 == v26 + 3 )
              break;
            free(v27);
            if ( v6 == v26 )
              goto LABEL_35;
          }
        }
LABEL_35:
        v28 = *(_DWORD **)a2;
        *(_DWORD *)(a1 + 8) = v38;
        v29 = &v28[30 * *(unsigned int *)(a2 + 8)];
        while ( v28 != v29 )
        {
          while ( 1 )
          {
            v29 -= 30;
            v30 = *((_DWORD **)v29 + 1);
            if ( v30 == v29 + 6 )
              break;
            free(v30);
            if ( v28 == v29 )
              goto LABEL_16;
          }
        }
      }
      else
      {
        if ( v8 > *(unsigned int *)(a1 + 12) )
        {
          v36 = &v6[15 * v7];
          while ( v6 != v36 )
          {
            while ( 1 )
            {
              v36 -= 15;
              v37 = (_QWORD *)v36[1];
              if ( v37 == v36 + 3 )
                break;
              free(v37);
              if ( v6 == v36 )
                goto LABEL_48;
            }
          }
LABEL_48:
          *(_DWORD *)(a1 + 8) = 0;
          v7 = 0;
          sub_B46000(a1, v8);
          v3 = *(_DWORD **)a2;
          v8 = *(unsigned int *)(a2 + 8);
          v6 = *(_QWORD **)a1;
          v4 = *(_DWORD **)a2;
        }
        else if ( *(_DWORD *)(a1 + 8) )
        {
          v31 = (char ***)(a2 + 24);
          v32 = (char ***)(v6 + 1);
          v7 *= 120LL;
          do
          {
            v33 = *((_DWORD *)v31 - 2);
            v34 = v31;
            v35 = v32;
            v31 += 15;
            v32 += 15;
            *((_DWORD *)v32 - 32) = v33;
            sub_B45E20(v35, v34);
          }
          while ( v31 != (char ***)(a2 + 24 + v7) );
          v3 = *(_DWORD **)a2;
          v8 = *(unsigned int *)(a2 + 8);
          v6 = *(_QWORD **)a1;
          v4 = (_DWORD *)(*(_QWORD *)a2 + v7);
        }
        v9 = (char *)v6 + v7;
        v10 = &v3[30 * v8];
        if ( v10 != v4 )
        {
          do
          {
            while ( 1 )
            {
              v11 = *v4;
              *((_DWORD *)v9 + 4) = 0;
              *((_DWORD *)v9 + 5) = 4;
              *(_DWORD *)v9 = v11;
              *((_QWORD *)v9 + 1) = v9 + 24;
              if ( v4[4] )
                break;
              v4 += 30;
              v9 += 120;
              if ( v10 == v4 )
                goto LABEL_11;
            }
            v12 = (char ***)(v4 + 2);
            v13 = (char ***)(v9 + 8);
            v4 += 30;
            v9 += 120;
            sub_B45E20(v13, v12);
          }
          while ( v10 != v4 );
LABEL_11:
          v3 = *(_DWORD **)a2;
        }
        *(_DWORD *)(a1 + 8) = v38;
        v14 = &v3[30 * *(unsigned int *)(a2 + 8)];
        while ( v14 != v3 )
        {
          while ( 1 )
          {
            v14 -= 30;
            v15 = *((_DWORD **)v14 + 1);
            if ( v15 == v14 + 6 )
              break;
            free(v15);
            if ( v14 == v3 )
              goto LABEL_16;
          }
        }
      }
LABEL_16:
      *(_DWORD *)(a2 + 8) = 0;
    }
    else
    {
      v17 = &v6[15 * v7];
      if ( v6 != v17 )
      {
        do
        {
          while ( 1 )
          {
            v17 -= 15;
            v18 = (_QWORD *)v17[1];
            if ( v18 == v17 + 3 )
              break;
            free(v18);
            if ( v6 == v17 )
              goto LABEL_21;
          }
        }
        while ( v6 != v17 );
LABEL_21:
        v17 = *(_QWORD **)a1;
      }
      if ( v17 != (_QWORD *)(a1 + 16) )
        free(v17);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)a2 = v4;
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return a1;
}

