void __fastcall sub_1F6CB00(char *a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  char *v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rdi
  char *v10; // rbx
  unsigned int v11; // r8d
  char *v12; // r14
  __int64 v13; // rax
  char *v14; // rdx
  char *v15; // r15
  __int64 v16; // r8
  unsigned int v17; // edx
  int v18; // eax
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // r15
  unsigned int v23; // ecx
  __int64 v24; // rax
  char *v25; // rdx
  __int64 v26; // [rsp+8h] [rbp-50h]
  __int64 v27; // [rsp+10h] [rbp-48h]

  if ( a5 )
  {
    v5 = a4;
    if ( a4 )
    {
      v6 = a1;
      v7 = a5;
      if ( a4 + a5 == 2 )
      {
        v15 = a1;
        v12 = a2;
        v17 = *(_DWORD *)a2;
        v18 = *(_DWORD *)a1;
        v19 = *(_DWORD *)a2 == *(_DWORD *)a1;
        if ( *(_DWORD *)a2 >= *(_DWORD *)a1 )
        {
LABEL_33:
          if ( !v19 )
            return;
          v20 = *((_QWORD *)v15 + 1);
          if ( *((_QWORD *)v12 + 1) >= v20 )
            return;
        }
        else
        {
LABEL_16:
          v20 = *((_QWORD *)v15 + 1);
        }
        *(_DWORD *)v15 = v17;
        *(_DWORD *)v12 = v18;
        *((_QWORD *)v15 + 1) = *((_QWORD *)v12 + 1);
        *((_QWORD *)v12 + 1) = v20;
        return;
      }
      while ( 1 )
      {
        if ( v5 <= v7 )
        {
          v21 = (a2 - v6) >> 4;
          v16 = v7 / 2;
          v22 = 16 * (v7 / 2);
          v12 = &a2[v22];
          if ( a2 - v6 <= 0 )
          {
            v10 = v6;
            v8 = 0;
          }
          else
          {
            v23 = *(_DWORD *)v12;
            v10 = v6;
            while ( 1 )
            {
              v24 = v21 >> 1;
              v25 = &v10[16 * (v21 >> 1)];
              if ( v23 >= *(_DWORD *)v25 && (v23 != *(_DWORD *)v25 || *((_QWORD *)v12 + 1) >= *((_QWORD *)v25 + 1)) )
              {
                v10 = v25 + 16;
                v24 = v21 - v24 - 1;
              }
              if ( v24 <= 0 )
                break;
              v21 = v24;
            }
            v8 = (v10 - v6) >> 4;
            v5 -= v8;
          }
          v15 = &v10[v22];
          v7 -= v7 / 2;
        }
        else
        {
          v8 = v5 / 2;
          v9 = (a3 - (__int64)a2) >> 4;
          v10 = &v6[16 * (v5 / 2)];
          if ( a3 - (__int64)a2 <= 0 )
          {
            v15 = &v6[16 * (v5 / 2)];
            v12 = a2;
            v16 = 0;
          }
          else
          {
            v11 = *(_DWORD *)v10;
            v12 = a2;
            while ( 1 )
            {
              v13 = v9 >> 1;
              v14 = &v12[16 * (v9 >> 1)];
              if ( *(_DWORD *)v14 < v11 || *(_DWORD *)v14 == v11 && *((_QWORD *)v14 + 1) < *((_QWORD *)v10 + 1) )
              {
                v12 = v14 + 16;
                v13 = v9 - v13 - 1;
              }
              if ( v13 <= 0 )
                break;
              v9 = v13;
            }
            v15 = &v10[v12 - a2];
            v16 = (v12 - a2) >> 4;
            v7 -= v16;
          }
          v5 -= v5 / 2;
        }
        v27 = v16;
        v26 = v8;
        sub_1F6B350(v10, a2, v12);
        sub_1F6CB00(v6, v10, v15, v26, v27);
        if ( !v5 || !v7 )
          break;
        a2 = v12;
        v6 = v15;
        if ( v7 + v5 == 2 )
        {
          v17 = *(_DWORD *)v12;
          v18 = *(_DWORD *)v15;
          v19 = *(_DWORD *)v12 == *(_DWORD *)v15;
          if ( *(_DWORD *)v12 < *(_DWORD *)v15 )
            goto LABEL_16;
          goto LABEL_33;
        }
      }
    }
  }
}
