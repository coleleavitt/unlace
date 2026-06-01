__int64 __fastcall sub_DF6AF0(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v8; // r13
  bool v9; // zf
  int v10; // esi
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  __int64 *v13; // r8
  unsigned int v14; // edx
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 *v17; // rdi
  __int64 *i; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  _QWORD *v21; // rsi
  unsigned int v22; // edx
  int v23; // eax
  unsigned int v24; // eax
  char *v25; // rax
  char *v26; // r8
  __int64 v27; // rax
  char *v28; // rdi
  __int64 v29; // r9
  char *v30; // r15
  unsigned int v31; // r11d
  __int64 v32; // r10
  char *v33; // rcx
  __int64 v34; // rax
  char *v35; // rdx
  char *v36; // rax
  unsigned int v37; // [rsp+8h] [rbp-60h]
  char *v38; // [rsp+8h] [rbp-60h]

  result = sub_DF6930(a1, a3);
  if ( (_BYTE)result )
  {
    v8 = *a1;
    if ( (*a1 & 7) == 0 )
    {
      if ( a3 )
      {
        v9 = (*(_DWORD *)(a3 + 8))-- == 1;
        if ( v9 )
          result = sub_15D7BC0(a2, a3);
      }
LABEL_6:
      *a1 = 0;
      return result;
    }
    v10 = *(_DWORD *)(a3 + 12);
    v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    v12 = *(unsigned int *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    v13 = *(__int64 **)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    v14 = v12 - 1;
    v12 *= 8;
    v15 = (__int64 *)((char *)v13 + v12);
    v16 = 8LL * (v10 & v14);
    v17 = &v13[(unsigned __int64)v16 / 8];
    if ( v16 != v12 )
    {
      for ( i = &v13[(unsigned __int64)v16 / 8]; v15 != i; ++i )
      {
        v19 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v19 + 12) == v10 && v19 == a3 )
          {
LABEL_30:
            v21 = i + 1;
            if ( v15 == i + 1 )
              v21 = *(_QWORD **)(v8 & 0xFFFFFFFFFFFFFFF8LL);
            v22 = *(_DWORD *)(v11 + 12) - 1;
            if ( *v21 )
            {
              *i = 1;
              v23 = *(_DWORD *)(v11 + 16);
              *(_DWORD *)(v11 + 12) = v22;
              v24 = v23 + 1;
              if ( v22 < 0x40 )
                v22 = 64;
              *(_DWORD *)(v11 + 16) = v24;
              if ( v22 < v24 && !(unsigned __int8)sub_186AF10(v17) )
              {
                v37 = *(_DWORD *)(v11 + 8);
                v25 = (char *)sub_186B270(8LL * v37);
                v26 = v25;
                if ( v37 )
                  v26 = (char *)memset(v25, 0, 8LL * v37);
                v27 = *(unsigned int *)(v11 + 8);
                v28 = *(char **)v11;
                v29 = 8 * v27;
                v30 = *(char **)v11;
                v31 = v27 - 1;
                v32 = *(_QWORD *)v11 + 8 * v27;
                v33 = &v26[8 * v27];
                if ( *(_QWORD *)v11 != v32 )
                {
                  do
                  {
                    if ( *(_QWORD *)v30 > 1u )
                    {
                      v34 = 8LL * (*(_DWORD *)(*(_QWORD *)v30 + 12LL) & v31);
                      v35 = &v26[v34];
                      if ( v29 == v34 )
                      {
LABEL_49:
                        if ( v26 == v35 )
                        {
LABEL_58:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v36 = v26;
                        while ( *(_QWORD *)v36 )
                        {
                          v36 += 8;
                          if ( v35 == v36 )
                            goto LABEL_58;
                        }
                      }
                      else
                      {
                        v36 = &v26[v34];
                        while ( *(_QWORD *)v36 )
                        {
                          v36 += 8;
                          if ( v33 == v36 )
                            goto LABEL_49;
                        }
                      }
                      *(_QWORD *)v36 = *(_QWORD *)v30;
                    }
                    v30 += 8;
                  }
                  while ( (char *)v32 != v30 );
                  v28 = *(char **)v11;
                }
                if ( v28 )
                {
                  v38 = v26;
                  sub_186B220(v28);
                  v26 = v38;
                }
                *(_QWORD *)v11 = v26;
                *(_DWORD *)(v11 + 16) = 0;
              }
            }
            else
            {
              *i = 0;
              *(_DWORD *)(v11 + 12) = v22;
            }
            goto LABEL_15;
          }
        }
        else if ( !v19 )
        {
          goto LABEL_15;
        }
      }
    }
    if ( v13 != v17 )
    {
      for ( i = *(__int64 **)(v8 & 0xFFFFFFFFFFFFFFF8LL); v17 != i; ++i )
      {
        v20 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v20 + 12) == v10 && v20 == a3 )
            goto LABEL_30;
        }
        else if ( !v20 )
        {
          break;
        }
      }
    }
LABEL_15:
    v9 = (*(_DWORD *)(a3 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(a2, a3);
    result = *(unsigned int *)(v11 + 12);
    if ( !(_DWORD)result )
    {
      if ( v8 > 7 )
      {
        if ( *(_QWORD *)v11 )
          sub_186B220(*(void **)v11);
        result = sub_186B220((void *)(v8 & 0xFFFFFFFFFFFFFFF8LL));
      }
      goto LABEL_6;
    }
  }
  return result;
}

