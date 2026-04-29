__int64 __fastcall sub_131F0(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rsi
  const char *v11; // r12
  _DWORD *v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // r12
  _DWORD *v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 *v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  const char **v28; // rcx
  __int64 v29; // rax

  if ( a2 != 30 )
  {
    if ( a2 != 52 )
      return 0;
    v6 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v27 = *((_QWORD **)a3 + 1);
      v28 = (const char **)(v27 + 1);
      *((_QWORD *)a3 + 1) = v27 + 1;
      v9 = *v27;
    }
    else
    {
      v7 = *((_QWORD *)a3 + 2);
      v8 = v6 + 8;
      *a3 = v8;
      v9 = *(_QWORD *)(v7 + v6);
      if ( (unsigned int)v8 <= 0x2F )
      {
        v10 = v6 + 16;
        *a3 = v10;
        v11 = *(const char **)(v7 + v8);
        if ( (unsigned int)v10 <= 0x2F )
        {
          v12 = (_DWORD *)(v10 + v7);
          *a3 = v6 + 24;
          goto LABEL_8;
        }
        v12 = *((_DWORD **)a3 + 1);
LABEL_24:
        *((_QWORD *)a3 + 1) = v12 + 2;
LABEL_8:
        if ( !*v12 )
        {
          if ( !strcmp(v11, "A4BASE") )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 200LL) = v9;
          }
          else if ( !strcmp(v11, "A5BASE") )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 192LL) = v9;
          }
          else if ( !*v11 )
          {
            v29 = *(_QWORD *)(a1 + 16);
            if ( *(_QWORD *)(v29 + 200) == v9 )
            {
              *(_QWORD *)(v29 + 200) = -1;
            }
            else if ( *(_QWORD *)(v29 + 192) == v9 )
            {
              *(_QWORD *)(v29 + 192) = -1;
            }
          }
        }
        return 0;
      }
      v28 = *((const char ***)a3 + 1);
    }
    v12 = v28 + 1;
    *((_QWORD *)a3 + 1) = v28 + 1;
    v11 = *v28;
    goto LABEL_24;
  }
  v13 = *a3;
  if ( (unsigned int)*a3 > 0x2F )
  {
    v24 = *((__int64 **)a3 + 1);
    v25 = v24 + 1;
    *((_QWORD *)a3 + 1) = v24 + 1;
    v16 = *v24;
LABEL_19:
    v26 = v25 + 1;
    *((_QWORD *)a3 + 1) = v25 + 1;
    v18 = *v25;
LABEL_20:
    v21 = v26 + 1;
    *((_QWORD *)a3 + 1) = v26 + 1;
    v20 = *v26;
    goto LABEL_21;
  }
  v14 = *((_QWORD *)a3 + 2);
  v15 = v13 + 8;
  *a3 = v15;
  v16 = *(_QWORD *)(v14 + v13);
  if ( (unsigned int)v15 > 0x2F )
  {
    v25 = *((__int64 **)a3 + 1);
    goto LABEL_19;
  }
  v17 = v13 + 16;
  *a3 = v17;
  v18 = *(_QWORD *)(v14 + v15);
  if ( (unsigned int)v17 > 0x2F )
  {
    v26 = *((_QWORD **)a3 + 1);
    goto LABEL_20;
  }
  v19 = v13 + 24;
  *a3 = v19;
  v20 = *(_QWORD *)(v14 + v17);
  if ( (unsigned int)v19 <= 0x2F )
  {
    v21 = (_DWORD *)(v19 + v14);
    *a3 = v13 + 32;
    goto LABEL_16;
  }
  v21 = *((_DWORD **)a3 + 1);
LABEL_21:
  *((_QWORD *)a3 + 1) = v21 + 2;
LABEL_16:
  if ( *v21 )
    return 0;
  v22 = ea2node(v16);
  v23 = ea2node(v18);
  netnode_altshift(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL), v22, v23, v20, 65);
  return 0;
}
