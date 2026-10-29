__int64 __fastcall sub_BF61A0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rcx
  __int64 i; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  __int64 result; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  _DWORD *v20; // rdx
  _DWORD *v21; // r14
  __int64 v22; // rdi
  int v23; // eax
  _QWORD *v24; // rax
  __int64 v25; // r15
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rdx
  __int64 v33; // rdi
  int v34; // eax
  unsigned __int8 v35; // [rsp+Fh] [rbp-39h]

  v3 = sub_BC37C0(a2);
  v4 = *(_QWORD *)(v3 + 16) + 8LL * *(unsigned int *)(v3 + 24);
  for ( i = *(_QWORD *)(sub_BC37C0(a2) + 16); v4 != i; i += 8 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)i + 104LL);
    v10 = *(_QWORD *)(v9 + 96);
    v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v10 & 1) == 0 )
    {
      v12 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v13 = v10 & 2;
        v14 = (unsigned __int64)v12;
        if ( !(_DWORD)v13 )
          goto LABEL_5;
        v11 = sub_6E2500(v12, *(_QWORD *)(*(_QWORD *)i + 104LL), v13, v5, v7, v8) & 0xFFFFFFFFFFFFFFFELL;
        v10 = v11 | 1;
        *(_QWORD *)(v9 + 96) = v11 | 1;
      }
    }
    v20 = (_DWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
    v21 = v20;
    v14 = (unsigned __int64)v20;
    if ( v11 )
    {
      if ( (v11 & 4) != 0 )
      {
        v14 = 0;
        if ( v20 )
        {
          v22 = *(_QWORD *)v20;
          v23 = *(_DWORD *)(*(_QWORD *)v20 + 12LL);
          if ( v20[2] != v23 )
          {
            v20[2] = v23;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 152LL))(v22, v9);
          }
          v14 = *((_QWORD *)v21 + 2);
        }
      }
    }
LABEL_5:
    while ( sub_B97450(v14) )
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(v14 + 96);
        v14 = 0;
        if ( (v15 & 3) != 0 )
          break;
        v14 = v15 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !sub_B97450(v15 & 0xFFFFFFFFFFFFFFFCLL) )
          goto LABEL_8;
      }
    }
LABEL_8:
    v16 = v14;
    v5 = 0;
    if ( v14 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v16 + 180) & 7u) <= 1 )
        {
          v35 = v5;
          result = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 56LL))(a1, v16);
          v5 = v35;
          if ( !(_BYTE)result )
            return result;
        }
        v18 = *(_QWORD *)(v16 + 96);
        if ( (v18 & 1) != 0 )
        {
          if ( (_BYTE)v5 )
            break;
          v30 = v18 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_36;
        }
        if ( (v18 & 2) != 0 )
        {
          if ( (_BYTE)v5 )
            break;
          v24 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
          v5 = 1;
          if ( v24 )
          {
            v25 = v24[2295];
            if ( v25 )
            {
              v26 = v24[294];
              v24[304] += 24LL;
              v27 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v24[295] >= v27 + 24 && v26 )
              {
                v24[294] = v27 + 24;
                v28 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v28 = sub_986170((__int64)(v24 + 294), 24, 24, 3, v7, v8);
                v27 = v28 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)v28 = v25;
              v29 = v27 | 4;
              *(_DWORD *)(v28 + 8) = 0;
              *(_QWORD *)(v28 + 16) = v16;
            }
            else
            {
              v29 = v16 & 0xFFFFFFFFFFFFFFFBLL;
            }
            v30 = v29 & 0xFFFFFFFFFFFFFFFELL;
            v18 = v30 | 1;
            *(_QWORD *)(v16 + 96) = v30 | 1;
LABEL_36:
            v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
            v5 = 1;
            v31 = v19;
            if ( v30 )
            {
              v32 = v30 & 4;
              if ( (_DWORD)v32 )
              {
                if ( v19 )
                {
                  v33 = *(_QWORD *)v19;
                  v34 = *(_DWORD *)(*(_QWORD *)v19 + 12LL);
                  if ( *(_DWORD *)(v31 + 8) != v34 )
                  {
                    *(_DWORD *)(v31 + 8) = v34;
                    (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)v33 + 152LL))(
                      v33,
                      v16,
                      v32,
                      1);
                  }
                  v19 = *(_QWORD *)(v31 + 16);
                  v5 = 1;
                }
              }
            }
            goto LABEL_14;
          }
        }
        else
        {
          v19 = v18 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v19 )
            goto LABEL_14;
        }
        v19 = 0;
LABEL_14:
        if ( v14 != v19 )
        {
          v16 = v19;
          if ( v19 )
            continue;
        }
        break;
      }
    }
  }
  return 1;
}
