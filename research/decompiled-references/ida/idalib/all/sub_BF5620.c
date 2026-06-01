__int64 __fastcall sub_BF5620(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rcx
  __int64 i; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rbp
  unsigned __int64 v15; // r14
  __int64 result; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r14
  __int64 v20; // rdi
  int v21; // eax
  _QWORD *v22; // rax
  __int64 v23; // r15
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r15
  __int64 v29; // rdi
  int v30; // eax
  unsigned __int8 v31; // [rsp+Fh] [rbp-39h]

  v3 = sub_BC3660(a2);
  v4 = *(_QWORD *)(v3 + 16) + 8LL * *(unsigned int *)(v3 + 24);
  for ( i = *(_QWORD *)(sub_BC3660(a2) + 16); v4 != i; i += 8 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)i + 80LL);
    v10 = *(_QWORD *)(v9 + 72);
    v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v10 & 1) == 0 )
    {
      v12 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v13 = v10 & 2;
        v14 = v12;
        if ( !(_DWORD)v13 )
          goto LABEL_5;
        v11 = sub_6E2500(v12, *(_QWORD *)(*(_QWORD *)i + 80LL), v13, v5, v7, v8) & 0xFFFFFFFFFFFFFFFELL;
        v10 = v11 | 1;
        *(_QWORD *)(v9 + 72) = v11 | 1;
      }
    }
    v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    v19 = v13;
    v14 = (_QWORD *)v13;
    if ( v11 && (v11 & 4) != 0 )
    {
      if ( !v13 )
        continue;
      v20 = *(_QWORD *)v13;
      v21 = *(_DWORD *)(*(_QWORD *)v13 + 12LL);
      if ( *(_DWORD *)(v13 + 8) != v21 )
      {
        *(_DWORD *)(v13 + 8) = v21;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 152LL))(v20, v9);
      }
      v14 = *(_QWORD **)(v19 + 16);
    }
LABEL_5:
    if ( v14 )
    {
      v15 = (unsigned __int64)v14;
      v5 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v15 + 140) & 7u) <= 1 )
        {
          v31 = v5;
          result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)a1 + 56LL))(
                     a1,
                     v15,
                     v13);
          v5 = v31;
          if ( !(_BYTE)result )
            return result;
        }
        v17 = *(_QWORD *)(v15 + 72);
        if ( (v17 & 1) != 0 )
        {
          if ( (_BYTE)v5 )
            break;
          v13 = v17 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_34;
        }
        if ( (v17 & 2) != 0 )
        {
          if ( (_BYTE)v5 )
            break;
          v22 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
          v5 = 1;
          if ( v22 )
          {
            v23 = v22[2295];
            if ( v23 )
            {
              v24 = v22[294];
              v22[304] += 24LL;
              v25 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v22[295] >= v25 + 24 && v24 )
              {
                v22[294] = v25 + 24;
                v26 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v26 = sub_986170((__int64)(v22 + 294), 24, 24, 3, v7, v8);
                v25 = v26 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)v26 = v23;
              v27 = v25 | 4;
              *(_DWORD *)(v26 + 8) = 0;
              *(_QWORD *)(v26 + 16) = v15;
            }
            else
            {
              v27 = v15 & 0xFFFFFFFFFFFFFFFBLL;
            }
            v13 = v27 & 0xFFFFFFFFFFFFFFFELL;
            v17 = v13 | 1;
            *(_QWORD *)(v15 + 72) = v13 | 1;
LABEL_34:
            v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
            v5 = 1;
            v28 = v18;
            if ( v13 )
            {
              v13 &= 4u;
              if ( (_DWORD)v13 )
              {
                if ( v18 )
                {
                  v29 = *(_QWORD *)v18;
                  v30 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
                  if ( *(_DWORD *)(v28 + 8) != v30 )
                  {
                    *(_DWORD *)(v28 + 8) = v30;
                    (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)v29 + 152LL))(
                      v29,
                      v15,
                      v13,
                      1);
                  }
                  v18 = *(_QWORD *)(v28 + 16);
                  v5 = 1;
                }
              }
            }
            goto LABEL_12;
          }
        }
        else
        {
          v18 = v17 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v18 )
            goto LABEL_12;
        }
        v18 = 0;
LABEL_12:
        if ( v14 != (_QWORD *)v18 )
        {
          v15 = v18;
          if ( v18 )
            continue;
        }
        break;
      }
    }
  }
  return 1;
}
