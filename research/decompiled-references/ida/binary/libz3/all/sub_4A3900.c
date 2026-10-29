unsigned __int64 __fastcall sub_4A3900(void **a1, __int64 a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 result; // rax
  __int64 v4; // r14
  __int64 v6; // rbp
  __int64 v7; // r8
  int v8; // r10d
  _QWORD *v9; // r12
  unsigned int v10; // r11d
  __int64 v11; // r8
  _QWORD *v12; // r13
  int v13; // ecx
  __int64 v14; // r11
  _QWORD *v15; // rdi
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rax
  int v21; // r9d
  __int64 *v22; // rcx
  char *v23; // r10
  void **v24; // rax
  _QWORD *v25; // r15
  __int64 *v26; // rbx
  __int64 v27; // rcx
  __int64 *v28; // rbp
  void **v29; // r10
  __int64 v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 n; // [rsp+8h] [rbp-60h]
  unsigned int na; // [rsp+8h] [rbp-60h]
  int v36; // [rsp+10h] [rbp-58h]
  __int64 v37; // [rsp+10h] [rbp-58h]
  int v38; // [rsp+18h] [rbp-50h]

  v2 = *(_QWORD **)a2;
  result = *(unsigned int *)(a2 + 8);
  v4 = *(_QWORD *)a2 + 8 * result;
  if ( *(_QWORD *)a2 != v4 )
  {
    while ( *v2 <= 1u )
    {
      if ( (_QWORD *)v4 == ++v2 )
        return result;
    }
    if ( (_QWORD *)v4 != v2 )
    {
      v6 = *v2;
      while ( 1 )
      {
        v7 = *((unsigned int *)a1 + 2);
        v8 = *((_DWORD *)a1 + 4);
        if ( 3 * (int)v7 < (unsigned int)(4 * (v8 + *((_DWORD *)a1 + 3))) )
        {
          v36 = 2 * v7;
          n = 8LL * (unsigned int)(2 * v7);
          v20 = (_QWORD *)sub_186B270(n);
          v21 = v36;
          v11 = n;
          v9 = v20;
          if ( v36 )
          {
            memset(v20, 0, n);
            v11 = n;
            v21 = v36;
          }
          v22 = (__int64 *)*a1;
          v10 = v21 - 1;
          v12 = (_QWORD *)((char *)v9 + v11);
          v23 = (char *)*a1 + 8 * *((unsigned int *)a1 + 2);
          if ( *a1 != v23 )
          {
            v24 = a1;
            v25 = v2;
            v26 = v22;
            v27 = v6;
            v28 = (__int64 *)v23;
            v29 = v24;
            do
            {
              while ( (unsigned __int64)*v26 <= 1 )
              {
                if ( v28 == ++v26 )
                  goto LABEL_42;
              }
              v30 = 8LL * (*(_DWORD *)(*v26 + 12) & v10);
              v31 = &v9[(unsigned __int64)v30 / 8];
              if ( v11 == v30 )
              {
LABEL_46:
                if ( v9 == v31 )
                {
LABEL_54:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v32 = v9;
                while ( *v32 )
                {
                  if ( v31 == ++v32 )
                    goto LABEL_54;
                }
              }
              else
              {
                v32 = &v9[(unsigned __int64)v30 / 8];
                while ( *v32 )
                {
                  if ( v12 == ++v32 )
                    goto LABEL_46;
                }
              }
              v33 = *v26++;
              *v32 = v33;
            }
            while ( v28 != v26 );
LABEL_42:
            v2 = v25;
            a1 = v29;
            v23 = (char *)*v29;
            v6 = v27;
          }
          if ( v23 )
          {
            v38 = v21;
            v37 = v11;
            na = v21 - 1;
            sub_186B220(v23);
            v21 = v38;
            v11 = v37;
            v10 = na;
          }
          *a1 = v9;
          v8 = 0;
          *((_DWORD *)a1 + 2) = v21;
          *((_DWORD *)a1 + 4) = 0;
        }
        else
        {
          v9 = *a1;
          v10 = v7 - 1;
          v11 = 8 * v7;
          v12 = (char *)*a1 + v11;
        }
        v13 = *(_DWORD *)(v6 + 12);
        v14 = v13 & v10;
        v15 = &v9[v14];
        if ( 8 * v14 != v11 )
        {
          v16 = &v9[v14];
          v17 = nullptr;
          while ( 1 )
          {
            v18 = *v16;
            if ( *v16 > 1u )
            {
              if ( *(_DWORD *)(v18 + 12) == v13 && v18 == v6 )
              {
                *v16 = v6;
                goto LABEL_25;
              }
            }
            else
            {
              if ( !v18 )
              {
                if ( v17 )
                  goto LABEL_52;
                v17 = v16;
                goto LABEL_53;
              }
              v17 = v16;
            }
            if ( ++v16 == v12 )
              goto LABEL_20;
          }
        }
        v17 = nullptr;
        while ( 1 )
        {
LABEL_20:
          if ( v15 == v9 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v19 = *v9;
          if ( *v9 <= 1u )
            break;
          if ( *(_DWORD *)(v19 + 12) == v13 && v19 == v6 )
          {
            *v9 = v6;
            goto LABEL_25;
          }
LABEL_19:
          ++v9;
        }
        if ( v19 )
          break;
        if ( v17 )
LABEL_52:
          *((_DWORD *)a1 + 4) = v8 - 1;
        else
          v17 = v9;
LABEL_53:
        *v17 = v6;
        ++*((_DWORD *)a1 + 3);
LABEL_25:
        result = (unsigned __int64)(v2 + 1);
        if ( (_QWORD *)v4 != v2 + 1 )
        {
          while ( 1 )
          {
            v6 = *(_QWORD *)result;
            v2 = (_QWORD *)result;
            if ( *(_QWORD *)result > 1u )
              break;
            result += 8LL;
            if ( v4 == result )
              return result;
          }
          if ( v4 != result )
            continue;
        }
        return result;
      }
      v17 = v9;
      goto LABEL_19;
    }
  }
  return result;
}

