void __fastcall sub_3D3710(char *a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  __int64 v7; // r14
  char *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rax
  char *v11; // rdi
  char *v12; // rcx
  __int64 v13; // r12
  _DWORD *v14; // rax
  __int64 v15; // rax
  char *v16; // rcx
  char *v17; // [rsp+10h] [rbp-48h]

  if ( a5 )
  {
    v6 = a4;
    v7 = a5;
    if ( a4 )
    {
      if ( a5 + a4 == 2 )
      {
LABEL_13:
        v14 = *(_DWORD **)a1;
        if ( **(_DWORD **)a2 < **(_DWORD **)a1 )
        {
          *(_QWORD *)a1 = *(_QWORD *)a2;
          *(_QWORD *)a2 = v14;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v7 >= v6 )
          {
            v11 = a1;
            v15 = (a2 - a1) >> 3;
            v13 = v7 / 2;
            v8 = &a2[8 * (v7 / 2)];
            while ( v15 > 0 )
            {
              while ( 1 )
              {
                v16 = &v11[8 * (v15 >> 1)];
                if ( **(_DWORD **)v8 < **(_DWORD **)v16 )
                  break;
                v11 = v16 + 8;
                v15 = v15 - (v15 >> 1) - 1;
                if ( v15 <= 0 )
                  goto LABEL_21;
              }
              v15 >>= 1;
            }
LABEL_21:
            v9 = (v11 - a1) >> 3;
          }
          else
          {
            v8 = a2;
            v9 = v6 / 2;
            v10 = (a3 - (__int64)a2) >> 3;
            v11 = &a1[8 * (v6 / 2)];
            while ( v10 > 0 )
            {
              while ( 1 )
              {
                v12 = &v8[8 * (v10 >> 1)];
                if ( **(_DWORD **)v12 >= **(_DWORD **)v11 )
                  break;
                v8 = v12 + 8;
                v10 = v10 - (v10 >> 1) - 1;
                if ( v10 <= 0 )
                  goto LABEL_9;
              }
              v10 >>= 1;
            }
LABEL_9:
            v13 = (v8 - a2) >> 3;
          }
          v7 -= v13;
          v17 = sub_3D3310(v11, a2, v8);
          sub_3D3710(a1, v11, v17, v9, v13);
          v6 -= v9;
          if ( !v6 || !v7 )
            break;
          a1 = v17;
          a2 = v8;
          if ( v7 + v6 == 2 )
            goto LABEL_13;
        }
      }
    }
  }
}

