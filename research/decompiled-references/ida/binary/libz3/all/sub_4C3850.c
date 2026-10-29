void __fastcall sub_4C3850(__int64 a1, void **a2)
{
  size_t *v2; // rbx
  size_t *v3; // r12
  size_t v5; // rdi
  __int64 (*v6)(void); // rdx
  char v7; // al
  size_t *v8; // rax
  __int64 v9; // r8
  int v10; // r10d
  size_t v11; // rcx
  unsigned int v12; // esi
  _QWORD *v13; // rbp
  unsigned int v14; // r11d
  __int64 v15; // r8
  size_t *v16; // r15
  int v17; // esi
  __int64 v18; // r11
  _QWORD *v19; // r9
  size_t *v20; // rax
  size_t *v21; // rdi
  size_t v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 *v25; // r10
  char *v26; // r9
  void **v27; // rax
  size_t *v28; // r14
  _QWORD *v29; // r12
  __int64 *v30; // rbp
  size_t *v31; // r9
  __int64 *v32; // rbx
  void **v33; // r10
  __int64 v34; // rax
  _QWORD *v35; // rdx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  int v38; // [rsp+4h] [rbp-64h]
  size_t n; // [rsp+8h] [rbp-60h]
  size_t v40; // [rsp+10h] [rbp-58h]
  __int64 v41; // [rsp+18h] [rbp-50h]

  v2 = *(size_t **)(a1 + 120);
  v3 = &v2[2 * *(unsigned int *)(a1 + 128)];
  if ( v2 != v3 )
  {
    while ( *v2 <= 1 )
    {
      v2 += 2;
      if ( v3 == v2 )
        return;
    }
    if ( v3 != v2 )
    {
      while ( 1 )
      {
        v5 = v2[1];
        v6 = *(__int64 (**)(void))(*(_QWORD *)v5 + 32LL);
        if ( v6 == sub_4C9A90 )
          v7 = (*(__int64 (**)(void))(*(_QWORD *)v5 + 24LL))();
        else
          v7 = v6();
        if ( v7 )
          goto LABEL_9;
        v9 = *((unsigned int *)a2 + 2);
        v10 = *((_DWORD *)a2 + 4);
        v11 = *v2;
        v12 = 2 * v9;
        v38 = 2 * v9;
        if ( 3 * (int)v9 < (unsigned int)(4 * (v10 + *((_DWORD *)a2 + 3))) )
        {
          v40 = *v2;
          v24 = (_QWORD *)sub_186B270(8LL * v12);
          v15 = 8LL * v12;
          v11 = v40;
          v13 = v24;
          if ( v12 )
          {
            memset(v24, 0, 8LL * v12);
            v15 = 8LL * v12;
            v11 = v40;
          }
          v25 = (__int64 *)*a2;
          v16 = (_QWORD *)((char *)v13 + v15);
          v14 = v38 - 1;
          v26 = (char *)*a2 + 8 * *((unsigned int *)a2 + 2);
          if ( *a2 != v26 )
          {
            v27 = a2;
            v28 = v3;
            v29 = v13;
            v30 = (__int64 *)v26;
            v31 = v2;
            v32 = v25;
            v33 = v27;
            do
            {
              while ( (unsigned __int64)*v32 <= 1 )
              {
                if ( v30 == ++v32 )
                  goto LABEL_45;
              }
              v34 = 8LL * (*(_DWORD *)(*v32 + 12) & v14);
              v35 = &v29[(unsigned __int64)v34 / 8];
              if ( v15 == v34 )
              {
LABEL_49:
                if ( v29 == v35 )
                {
LABEL_57:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v36 = v29;
                while ( *v36 )
                {
                  if ( v35 == ++v36 )
                    goto LABEL_57;
                }
              }
              else
              {
                v36 = &v29[(unsigned __int64)v34 / 8];
                while ( *v36 )
                {
                  if ( v16 == ++v36 )
                    goto LABEL_49;
                }
              }
              v37 = *v32++;
              *v36 = v37;
            }
            while ( v30 != v32 );
LABEL_45:
            v2 = v31;
            v26 = (char *)*v33;
            v13 = v29;
            v3 = v28;
            a2 = v33;
          }
          if ( v26 )
          {
            v41 = v15;
            n = v11;
            sub_186B220(v26);
            v15 = v41;
            v14 = v38 - 1;
            v11 = n;
          }
          *a2 = v13;
          v10 = 0;
          *((_DWORD *)a2 + 4) = 0;
          *((_DWORD *)a2 + 2) = v38;
        }
        else
        {
          v13 = *a2;
          v14 = v9 - 1;
          v15 = 8 * v9;
          v16 = (size_t *)((char *)*a2 + v15);
        }
        v17 = *(_DWORD *)(v11 + 12);
        v18 = 8LL * (v17 & v14);
        v19 = &v13[(unsigned __int64)v18 / 8];
        if ( v18 != v15 )
        {
          v20 = &v13[(unsigned __int64)v18 / 8];
          v21 = nullptr;
          while ( 1 )
          {
            v22 = *v20;
            if ( *v20 > 1 )
            {
              if ( *(_DWORD *)(v22 + 12) == v17 && v11 == v22 )
              {
                *v20 = v11;
                goto LABEL_9;
              }
            }
            else
            {
              if ( !v22 )
              {
                if ( v21 )
                  goto LABEL_55;
                v21 = v20;
                goto LABEL_56;
              }
              v21 = v20;
            }
            if ( ++v20 == v16 )
              goto LABEL_28;
          }
        }
        v21 = nullptr;
        while ( 1 )
        {
LABEL_28:
          if ( v19 == v13 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v23 = *v13;
          if ( *v13 <= 1u )
            break;
          if ( *(_DWORD *)(v23 + 12) == v17 && v11 == v23 )
          {
            *v13 = v11;
            goto LABEL_9;
          }
LABEL_27:
          ++v13;
        }
        if ( v23 )
          break;
        if ( v21 )
LABEL_55:
          *((_DWORD *)a2 + 4) = v10 - 1;
        else
          v21 = v13;
LABEL_56:
        *v21 = v11;
        ++*((_DWORD *)a2 + 3);
LABEL_9:
        v8 = v2 + 2;
        if ( v3 != v2 + 2 )
        {
          while ( 1 )
          {
            v2 = v8;
            if ( *v8 > 1 )
              break;
            v8 += 2;
            if ( v3 == v8 )
              return;
          }
          if ( v3 != v8 )
            continue;
        }
        return;
      }
      v21 = v13;
      goto LABEL_27;
    }
  }
}

