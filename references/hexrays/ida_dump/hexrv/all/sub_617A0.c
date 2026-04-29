__int64 __fastcall sub_617A0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r12
  int v5; // ebx
  __int64 v6; // rax
  _DWORD *v7; // r13
  int v8; // eax
  unsigned __int64 v9; // rdx
  _DWORD *v10; // rsi
  _DWORD *v11; // rdx
  _DWORD *v12; // r13
  _DWORD *v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // r8
  __int64 *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rax
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // r15
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // eax
  __int64 *v36; // [rsp+0h] [rbp-48h]
  __int64 *v37; // [rsp+0h] [rbp-48h]
  int v38; // [rsp+Ch] [rbp-3Ch]

  if ( (***(unsigned int (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 48))(
         *(_QWORD *)(a1 + 48),
         *(unsigned int *)(*(_QWORD *)(a1 + 16) + 72LL),
         0) != -1 )
  {
    if ( *(_BYTE *)a2 == 7 )
    {
      v35 = (***(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 48))(
              *(_QWORD *)(a1 + 48),
              *(unsigned int *)(a2 + 8),
              1);
      if ( v35 == -1 )
      {
LABEL_43:
        if ( !under_debugger )
          sub_37DDE0(51769);
        BUG();
      }
      *(_DWORD *)(a2 + 8) = v35;
    }
    else if ( *(_BYTE *)a2 == 12 )
    {
      v4 = *(_QWORD **)(a2 + 8);
      if ( v4[4] )
      {
        v5 = 0;
        v6 = 0;
        do
        {
          v7 = (_DWORD *)(v4[3] + 4 * v6);
          v8 = (***(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 48))(
                 *(_QWORD *)(a1 + 48),
                 (unsigned int)*v7,
                 1);
          if ( v8 == -1 )
            goto LABEL_43;
          *v7 = v8;
          ++v5;
          v9 = v4[4];
          v6 = v5;
        }
        while ( v5 < v9 );
        v10 = (_DWORD *)v4[3];
        v11 = &v10[v9];
        v12 = v10;
        if ( v11 != v10 )
        {
LABEL_10:
          v13 = v10;
          do
          {
            if ( *v12 == *v13 )
              break;
            ++v13;
          }
          while ( v11 != v13 );
          while ( 1 )
          {
            if ( v13 == v12 )
            {
              v22 = v4[4];
            }
            else
            {
              v14 = (int)(v12 - v10);
              v15 = (__int64 *)(*v4 + 24 * (v13 - v10));
              v16 = (__int64 *)(*v4 + 24 * v14);
              if ( v16[1] && (v17 = v15[1]) != 0 )
              {
                v19 = *v16;
                v27 = 0;
                v28 = 0;
                while ( 1 )
                {
                  v29 = *(_QWORD *)(v19 + 8 * v28);
                  v30 = (_QWORD *)(*v15 + 8 * v17);
                  if ( (_QWORD *)*v15 == v30 )
                    goto LABEL_38;
                  v31 = (_QWORD *)*v15;
                  while ( v29 != *v31 )
                  {
                    if ( v30 == ++v31 )
                      goto LABEL_38;
                  }
                  if ( v30 == v31 )
                  {
LABEL_38:
                    v32 = v17 + 1;
                    if ( v15[2] < v32 )
                    {
                      v38 = v27;
                      v37 = v15;
                      v33 = qvector_reserve(v15, *v15, v32, 8);
                      v15 = v37;
                      v27 = v38;
                      v34 = v37[1];
                      *v37 = v33;
                      v30 = (_QWORD *)(v33 + 8 * v34);
                    }
                    *v30 = v29;
                    ++v15[1];
                    v19 = *v16;
                  }
                  v28 = ++v27;
                  if ( v27 >= (unsigned __int64)v16[1] )
                    break;
                  v17 = v15[1];
                }
              }
              else
              {
                v18 = *v15;
                if ( *v15 )
                {
                  v15[1] = 0;
                  v36 = v15;
                  qfree(v18);
                  *v36 = 0;
                  v36[2] = 0;
                }
                v19 = *v16;
              }
              if ( v19 )
              {
                v16[1] = 0;
                qfree(v19);
              }
              memmove(v16, v16 + 3, *v4 + 24LL * v4[1] - (_QWORD)v16 - 24);
              v20 = v4[4];
              v21 = v4[3];
              --v4[1];
              memmove(v12, v12 + 1, v21 + 4 * v20 - (_QWORD)v12 - 4);
              v10 = (_DWORD *)v4[3];
              v22 = v4[4] - 1LL;
              v13 = &v10[v14 - 1];
              v4[4] = v22;
            }
            v12 = v13 + 1;
            v11 = &v10[v22];
            if ( v11 == v13 + 1 )
              break;
            if ( v11 != v10 )
              goto LABEL_10;
            v13 = v10;
          }
        }
      }
      v23 = *(_QWORD *)(a1 + 64);
      v24 = *(_QWORD *)(a1 + 16);
      v25 = *(_QWORD *)(a1 + 56);
      if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v23 + 1) )
      {
        v26 = qvector_reserve(a1 + 56, v25, v23 + 1, 8);
        *(_QWORD *)(a1 + 56) = v26;
        v25 = v26;
        v23 = *(_QWORD *)(a1 + 64);
      }
      *(_QWORD *)(v25 + 8 * v23) = v24;
      ++*(_QWORD *)(a1 + 64);
    }
  }
  return 0;
}
