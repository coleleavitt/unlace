unsigned __int64 __fastcall sub_7BE5A0(__int64 a1, __int64 a2, char a3, char a4, char a5, __int64 a6)
{
  __int64 v7; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 result; // rax
  __int64 *v11; // rbp
  unsigned __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // rbp
  __int64 *v17; // rcx
  __int64 *v18; // r15
  __int64 *v21; // [rsp+8h] [rbp-40h]

  v7 = a1;
  v9 = *(_QWORD *)(a1 + 120);
  if ( v9 )
  {
    if ( v9 > 7 )
      goto LABEL_3;
  }
  else
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v9 = *(_QWORD *)(a1 + 120);
    if ( v9 > 7 )
    {
LABEL_3:
      if ( (*(_BYTE *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
        sub_7B7DB0(a1);
      while ( 1 )
      {
        result = sub_7BD3E0(v7, a2, a3);
        v11 = (__int64 *)result;
        if ( result )
          return result;
        v12 = *(_QWORD *)(v7 + 120);
        if ( v12 )
        {
          if ( v12 <= 7 )
            goto LABEL_42;
        }
        else
        {
          sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v7 + 96) + 88LL), *(_QWORD *)(v7 + 96));
          v12 = *(_QWORD *)(v7 + 120);
          if ( v12 <= 7 )
          {
            if ( v12 )
              goto LABEL_42;
            goto LABEL_34;
          }
        }
        if ( (*(_BYTE *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
        {
          sub_7B7DB0(v7);
          v12 = *(_QWORD *)(v7 + 120);
          v13 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 56);
          if ( v13 )
            goto LABEL_10;
        }
        else
        {
          v13 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 56);
          if ( !v13 )
            goto LABEL_15;
LABEL_10:
          while ( *(char *)(v13 + 28) < 0 || (*(_BYTE *)(v13 + 8) & 6) != 0 )
          {
            v13 = *(_QWORD *)(v13 + 128);
            if ( !v13 )
            {
              if ( !v12 )
                goto LABEL_34;
              goto LABEL_14;
            }
          }
LABEL_25:
          result = sub_7BD3E0(v13, a2, a3);
          if ( result && (a6 != v13 || (*(_BYTE *)(result + 29) & 2) == 0) )
            return result;
          while ( 1 )
          {
            v13 = *(_QWORD *)(v13 + 128);
            if ( !v13 )
              break;
            while ( *(char *)(v13 + 28) >= 0 )
            {
              if ( (*(_BYTE *)(v13 + 8) & 6) == 0 )
                goto LABEL_25;
              v13 = *(_QWORD *)(v13 + 128);
              if ( !v13 )
                goto LABEL_32;
            }
          }
LABEL_32:
          v12 = *(_QWORD *)(v7 + 120);
        }
        if ( v12 )
        {
LABEL_14:
          if ( v12 <= 7 )
            goto LABEL_42;
          goto LABEL_15;
        }
LABEL_34:
        sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v7 + 96) + 88LL), *(_QWORD *)(v7 + 96));
        v12 = *(_QWORD *)(v7 + 120);
        if ( v12 <= 7 )
        {
          if ( v12 )
            goto LABEL_42;
          sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v7 + 96) + 88LL), *(_QWORD *)(v7 + 96));
          v12 = *(_QWORD *)(v7 + 120);
          if ( v12 <= 7 )
            goto LABEL_42;
          v14 = 0;
          goto LABEL_17;
        }
LABEL_15:
        if ( (*(_BYTE *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
        {
          v14 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 16)
              + 8LL * *(unsigned int *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 24);
LABEL_17:
          v15 = v12 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_BYTE *)(v15 + 72) & 1) != 0 )
          {
            sub_7B7DB0(v7);
            v15 = *(_QWORD *)(v7 + 120) & 0xFFFFFFFFFFFFFFF8LL;
          }
          v11 = *(__int64 **)(v15 + 16);
          goto LABEL_20;
        }
        sub_7B7DB0(v7);
        v12 = *(_QWORD *)(v7 + 120);
        v14 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 16)
            + 8LL * *(unsigned int *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 24);
        if ( !v12 )
        {
          sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v7 + 96) + 88LL), *(_QWORD *)(v7 + 96));
          v12 = *(_QWORD *)(v7 + 120);
        }
        if ( v12 > 7 )
          goto LABEL_17;
LABEL_20:
        while ( (__int64 *)v14 != v11 )
        {
          result = sub_7BE480(*v11, a2, a3);
          if ( result )
            return result;
          ++v11;
        }
LABEL_42:
        if ( !a4 )
        {
          v16 = sub_7BB1E0(v7);
          if ( v16 )
          {
LABEL_53:
            v17 = *(__int64 **)(v16 + 104);
            v18 = v17;
            v21 = &v17[*(unsigned int *)(v16 + 112)];
            if ( v21 == v17 )
              goto LABEL_58;
            while ( 1 )
            {
              result = sub_7BE480(*v18, a2, a3);
              if ( result )
              {
                if ( a6 != v16 || (*(_BYTE *)(result + 29) & 2) == 0 )
                  return result;
              }
              if ( v21 == ++v18 )
              {
LABEL_58:
                while ( 1 )
                {
                  v16 = *(_QWORD *)(v16 + 128);
                  if ( !v16 )
                    goto LABEL_43;
                  if ( *(char *)(v16 + 28) >= 0 && (*(_BYTE *)(v16 + 8) & 6) == 0 )
                    goto LABEL_53;
                }
              }
            }
          }
        }
LABEL_43:
        if ( !a5 )
          return 0;
        v7 = sub_7BACE0(v7);
        if ( !v7 )
          return 0;
      }
    }
  }
  return 0;
}

