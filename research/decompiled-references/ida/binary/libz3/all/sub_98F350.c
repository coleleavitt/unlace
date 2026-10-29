void __fastcall sub_98F350(char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rax
  char *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r12
  unsigned int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  char *v18; // rdx
  char *v19; // [rsp+10h] [rbp-48h]

  if ( a5 )
  {
    v6 = a4;
    v7 = a5;
    if ( a4 )
    {
      if ( a5 + a4 == 2 )
      {
LABEL_13:
        v14 = *(_DWORD *)(a2 + 8);
        v15 = *((_DWORD *)a1 + 2);
        if ( v15 < v14 )
        {
          v16 = *(_QWORD *)a1;
          *(_QWORD *)a1 = *(_QWORD *)a2;
          *(_QWORD *)a2 = v16;
          *((_DWORD *)a1 + 2) = v14;
          *(_DWORD *)(a2 + 8) = v15;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v7 >= v6 )
          {
            v11 = a1;
            v17 = (a2 - (__int64)a1) >> 4;
            v13 = v7 / 2;
            v8 = a2 + 16 * (v7 / 2);
            while ( v17 > 0 )
            {
              while ( 1 )
              {
                v18 = &v11[16 * (v17 >> 1)];
                if ( *((_DWORD *)v18 + 2) < *(_DWORD *)(v8 + 8) )
                  break;
                v11 = v18 + 16;
                v17 = v17 - (v17 >> 1) - 1;
                if ( v17 <= 0 )
                  goto LABEL_21;
              }
              v17 >>= 1;
            }
LABEL_21:
            v9 = (v11 - a1) >> 4;
          }
          else
          {
            v8 = a2;
            v9 = v6 / 2;
            v10 = (a3 - a2) >> 4;
            v11 = &a1[16 * (v6 / 2)];
            while ( v10 > 0 )
            {
              while ( 1 )
              {
                v12 = v8 + 16 * (v10 >> 1);
                if ( *((_DWORD *)v11 + 2) >= *(_DWORD *)(v12 + 8) )
                  break;
                v8 = v12 + 16;
                v10 = v10 - (v10 >> 1) - 1;
                if ( v10 <= 0 )
                  goto LABEL_9;
              }
              v10 >>= 1;
            }
LABEL_9:
            v13 = (v8 - a2) >> 4;
          }
          v7 -= v13;
          v19 = sub_98AEC0(v11, (char *)a2, (char *)v8);
          sub_98F350(a1, v11, v19, v9, v13);
          v6 -= v9;
          if ( !v6 || !v7 )
            break;
          a1 = v19;
          a2 = v8;
          if ( v7 + v6 == 2 )
            goto LABEL_13;
        }
      }
    }
  }
}

