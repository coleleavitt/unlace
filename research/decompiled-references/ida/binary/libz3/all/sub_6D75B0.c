__int64 __fastcall sub_6D75B0(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 result; // rax
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 i; // r10
  unsigned int **v11; // rcx
  __int64 v12; // rsi
  unsigned int *v13; // rdx
  unsigned int *v14; // r11
  _DWORD *v15; // rbp
  _DWORD *v16; // rbp
  __int64 v17; // rdx
  _DWORD *v18; // rbp
  unsigned int *v19; // r11
  unsigned int **v20; // r10
  unsigned int *v21; // rsi
  unsigned int *v22; // rbx
  _DWORD *v23; // rcx
  __int64 v24; // rcx
  _DWORD *v25; // rcx
  __int64 v26; // rbp
  _DWORD *v27; // rbp
  __int64 v28; // rbp
  _DWORD *v29; // rbp
  unsigned int v30; // ebx
  unsigned int *v31; // rsi
  unsigned int *v32; // r11
  _DWORD *v33; // rcx
  __int64 v34; // rcx
  _DWORD *v35; // rcx
  __int64 v36; // rax
  unsigned int *v37; // rdx
  __int64 v38; // rcx
  _DWORD *v39; // rcx

  result = a3 - 1;
  v8 = a3 & 1;
  v9 = (a3 - 1) / 2;
  if ( a2 < v9 )
  {
    for ( i = a2; ; i = result )
    {
      result = 2 * (i + 1);
      v11 = (unsigned int **)(a1 + 16 * (i + 1));
      v12 = (__int64)*(v11 - 1);
      v13 = *v11;
      v14 = *v11;
      if ( !*((_WORD *)*v11 + 2) )
      {
        v15 = *(_DWORD **)(*((_QWORD *)v13 + 2) + 24LL);
        if ( v15 )
        {
          if ( *v15 == 5 && v15[1] == 9 && v13[6] == 2 )
          {
            v26 = *((_QWORD *)v13 + 4);
            if ( !*(_WORD *)(v26 + 4) )
            {
              v27 = *(_DWORD **)(*(_QWORD *)(v26 + 16) + 24LL);
              if ( v27 )
              {
                if ( *v27 == 5 && !v27[1] )
                  v14 = *((unsigned int **)v13 + 5);
              }
            }
          }
        }
      }
      if ( !*(_WORD *)(v12 + 4) )
      {
        v16 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
        if ( v16 )
        {
          if ( *v16 == 5 && v16[1] == 9 && *(_DWORD *)(v12 + 24) == 2 )
          {
            v28 = *(_QWORD *)(v12 + 32);
            if ( !*(_WORD *)(v28 + 4) )
            {
              v29 = *(_DWORD **)(*(_QWORD *)(v28 + 16) + 24LL);
              if ( v29 )
              {
                if ( *v29 == 5 && !v29[1] )
                  v12 = *(_QWORD *)(v12 + 40);
              }
            }
          }
        }
      }
      if ( *v14 < *(_DWORD *)v12 )
      {
        --result;
        v11 = (unsigned int **)(a1 + 8 * result);
        *(_QWORD *)(a1 + 8 * i) = *v11;
        if ( v9 <= result )
          goto LABEL_13;
      }
      else
      {
        *(_QWORD *)(a1 + 8 * i) = v13;
        if ( v9 <= result )
        {
LABEL_13:
          if ( !v8 && (a3 - 2) / 2 == result )
          {
LABEL_63:
            v36 = 2 * result + 2;
            v37 = *(unsigned int **)(a1 + 8 * v36 - 8);
            result = v36 - 1;
            *v11 = v37;
            v11 = (unsigned int **)(a1 + 8 * result);
          }
          v17 = (result - 1) / 2;
          if ( result > a2 )
          {
            if ( *((_WORD *)a4 + 2) )
            {
              v30 = *a4;
              while ( 1 )
              {
                v20 = (unsigned int **)(a1 + 8 * v17);
                v31 = *v20;
                v32 = *v20;
                if ( !*((_WORD *)*v20 + 2) )
                {
                  v33 = *(_DWORD **)(*((_QWORD *)v31 + 2) + 24LL);
                  if ( v33 )
                  {
                    if ( *v33 == 5 && v33[1] == 9 && v31[6] == 2 )
                    {
                      v34 = *((_QWORD *)v31 + 4);
                      if ( !*(_WORD *)(v34 + 4) )
                      {
                        v35 = *(_DWORD **)(*(_QWORD *)(v34 + 16) + 24LL);
                        if ( v35 )
                        {
                          if ( *v35 == 5 && !v35[1] )
                            v32 = *((unsigned int **)v31 + 5);
                        }
                      }
                    }
                  }
                }
                v11 = (unsigned int **)(a1 + 8 * result);
                if ( *v32 >= v30 )
                  break;
                *v11 = v31;
                result = v17;
                if ( a2 >= v17 )
                {
LABEL_32:
                  v11 = v20;
                  goto LABEL_33;
                }
                v17 = (v17 - 1) / 2;
              }
            }
            else
            {
              v18 = *(_DWORD **)(*((_QWORD *)a4 + 2) + 24LL);
              while ( 1 )
              {
                v20 = (unsigned int **)(a1 + 8 * v17);
                v21 = *v20;
                v22 = *v20;
                if ( !*((_WORD *)*v20 + 2) )
                {
                  v23 = *(_DWORD **)(*((_QWORD *)v21 + 2) + 24LL);
                  if ( v23 )
                  {
                    if ( *v23 == 5 && v23[1] == 9 && v21[6] == 2 )
                    {
                      v24 = *((_QWORD *)v21 + 4);
                      if ( !*(_WORD *)(v24 + 4) )
                      {
                        v25 = *(_DWORD **)(*(_QWORD *)(v24 + 16) + 24LL);
                        if ( v25 )
                        {
                          if ( *v25 == 5 && !v25[1] )
                            v22 = *((unsigned int **)v21 + 5);
                        }
                      }
                    }
                  }
                }
                v19 = a4;
                if ( v18 )
                {
                  if ( *v18 == 5 && v18[1] == 9 && a4[6] == 2 )
                  {
                    v38 = *((_QWORD *)a4 + 4);
                    if ( !*(_WORD *)(v38 + 4) )
                    {
                      v39 = *(_DWORD **)(*(_QWORD *)(v38 + 16) + 24LL);
                      if ( v39 )
                      {
                        if ( *v39 == 5 && !v39[1] )
                          v19 = *((unsigned int **)a4 + 5);
                      }
                    }
                  }
                }
                v11 = (unsigned int **)(a1 + 8 * result);
                result = *v19;
                if ( *v22 >= (unsigned int)result )
                  break;
                *v11 = v21;
                result = v17;
                if ( a2 >= v17 )
                  goto LABEL_32;
                v17 = (v17 - 1) / 2;
              }
            }
          }
          goto LABEL_33;
        }
      }
    }
  }
  v11 = (unsigned int **)(a1 + 8 * a2);
  if ( (a3 & 1) == 0 )
  {
    result = (a3 - 2) / 2;
    if ( a2 == result )
    {
      result = a2;
      goto LABEL_63;
    }
  }
LABEL_33:
  *v11 = a4;
  return result;
}

