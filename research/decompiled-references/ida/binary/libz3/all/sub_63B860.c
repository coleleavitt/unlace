__int64 __fastcall sub_63B860(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // r8
  unsigned int v4; // r10d
  __int64 v5; // r11
  unsigned int v6; // eax
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 *v11; // rbp
  unsigned __int64 v12; // r15
  unsigned int v13; // r14d
  __int64 v14; // r12
  __int64 *v15; // rcx
  __int64 v16; // r13
  __int64 *v17; // r9
  __int64 v18; // r10
  unsigned int v19; // esi
  __int64 v20; // rax
  __int64 *v21; // r8
  __int64 *i; // rax
  unsigned __int64 v23; // rdx
  int v24; // esi
  __int64 *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  __int64 *v30; // [rsp+0h] [rbp-48h]
  __int64 v31; // [rsp+8h] [rbp-40h]
  __int64 *v32; // [rsp+10h] [rbp-38h]

  v1 = *(__int64 **)(a1 + 24);
  if ( v1 )
  {
    v2 = a1;
    v32 = &v1[*((unsigned int *)v1 - 1)];
    if ( v32 == v1 )
      return 1;
    while ( 1 )
    {
      v3 = *v1;
      v4 = *(_DWORD *)(*v1 + 64);
      v5 = *(_QWORD *)(*(_QWORD *)(*v1 + 40) + 16LL);
      v6 = *(_DWORD *)(*v1 + 68);
      if ( v4 >= v6 )
        goto LABEL_22;
      v7 = *(_DWORD *)(v5 + 12);
      v30 = v1;
      v8 = *(_QWORD *)(v2 + 144);
      v31 = v2;
      v9 = v3 + 8LL * v4;
      v10 = *(unsigned int *)(v8 + 96);
      v11 = *(__int64 **)(v8 + 88);
      v12 = v3 + 8 * (v4 + (unsigned __int64)(v6 - 1 - v4)) + 8;
      v13 = v10 - 1;
      v14 = 16 * v10;
      v15 = &v11[(unsigned __int64)v14 / 8];
      v16 = 16LL * (v7 & v13);
      v17 = &v11[(unsigned __int64)v16 / 8];
      do
      {
        v18 = *(_QWORD *)((*(_QWORD *)(v9 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v19 = *(_DWORD *)(v18 + 12);
        v20 = 16LL * (v13 & v19);
        v21 = &v11[(unsigned __int64)v20 / 8];
        if ( v20 == v14 )
        {
LABEL_35:
          for ( i = v11; v21 != i; i += 2 )
          {
            v29 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v29 + 12) == v19 && v18 == v29 )
                goto LABEL_24;
            }
            else if ( !v29 )
            {
              v24 = 0;
              if ( v14 == v16 )
              {
LABEL_43:
                if ( v11 == v17 )
                  return 0;
LABEL_26:
                v25 = v11;
                while ( 1 )
                {
                  v28 = *v25;
                  if ( (unsigned __int64)*v25 > 1 )
                  {
                    if ( *(_DWORD *)(v28 + 12) == v7 && v5 == v28 )
                      goto LABEL_33;
                  }
                  else if ( !v28 )
                  {
                    goto LABEL_19;
                  }
                  v25 += 2;
                  if ( v17 == v25 )
                    goto LABEL_19;
                }
              }
              goto LABEL_13;
            }
          }
LABEL_12:
          v24 = 0;
          if ( v14 == v16 )
            goto LABEL_43;
          goto LABEL_13;
        }
        i = &v11[(unsigned __int64)v20 / 8];
        while ( 1 )
        {
          v23 = *i;
          if ( (unsigned __int64)*i > 1 )
            break;
          if ( !v23 )
            goto LABEL_12;
LABEL_9:
          i += 2;
          if ( v15 == i )
            goto LABEL_35;
        }
        if ( *(_DWORD *)(v23 + 12) != v19 || v18 != v23 )
          goto LABEL_9;
LABEL_24:
        v24 = *((_DWORD *)i + 2);
        if ( v14 == v16 )
        {
LABEL_25:
          if ( v11 == v17 )
          {
LABEL_19:
            if ( !v24 )
              return 0;
            goto LABEL_20;
          }
          goto LABEL_26;
        }
LABEL_13:
        v25 = &v11[(unsigned __int64)v16 / 8];
        while ( 2 )
        {
          v26 = *v25;
          if ( (unsigned __int64)*v25 <= 1 )
          {
            if ( !v26 )
              goto LABEL_19;
            goto LABEL_16;
          }
          if ( *(_DWORD *)(v26 + 12) != v7 || v5 != v26 )
          {
LABEL_16:
            v25 += 2;
            if ( v15 == v25 )
              goto LABEL_25;
            continue;
          }
          break;
        }
LABEL_33:
        if ( *((_DWORD *)v25 + 2) == v24 )
          return 0;
LABEL_20:
        v9 += 8;
      }
      while ( v12 != v9 );
      v1 = v30;
      v2 = v31;
LABEL_22:
      if ( v32 == ++v1 )
        return 1;
    }
  }
  return 1;
}

