/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002F014
// Address: 0x000000010002F014

//----- (000000010002F014) ----------------------------------------------------
char *__fastcall sub_10002F014(__int64 a1, char *__s, int a3)
{
  __int64 v5; // x20
  _QWORD *v6; // x0
  _QWORD *v7; // x1
  __int64 v8; // x8
  char **v9; // x22
  size_t v10; // x0
  size_t v11; // x23
  unsigned __int64 v12; // x24
  char *v13; // x1
  char *result; // x0
  const char *v15; // x22
  unsigned __int64 v16; // x24
  __int64 v17; // x8
  int v18; // w26
  __int64 v19; // x27
  const char **v20; // x23
  const char **v21; // x8
  __int64 v22; // x25
  const char **v23; // x21
  __int64 v24; // x28
  __int64 v25; // x20
  unsigned __int64 v26; // x10
  int v27; // w9
  __int64 v28; // x0
  __int64 v29; // x8
  unsigned __int64 v30; // x8
  unsigned __int64 v31; // x11
  int v32; // w10
  __int64 v33; // [xsp+0h] [xbp-70h]
  const char *v34; // [xsp+8h] [xbp-68h] BYREF
  const char *v35; // [xsp+10h] [xbp-60h] BYREF

  v5 = a1;
  v7 = *(_QWORD **)(a1 + 16);
  v8 = *(_QWORD *)(a1 + 24);
  v6 = (_QWORD *)(a1 + 16);
  if ( v6[2] < (unsigned __int64)(v8 + 1) )
  {
    v7 = qvector_reserve(v6, v7, v8 + 1, 0x18u);
    *(_QWORD *)(v5 + 16) = v7;
    v8 = *(_QWORD *)(v5 + 24);
  }
  v9 = (char **)&v7[3 * v8];
  *v9 = nullptr;
  v9[1] = nullptr;
  v9[2] = nullptr;
  ++*(_QWORD *)(v5 + 24);
  if ( __s && (v10 = strlen(__s)) != 0 )
  {
    v11 = v10;
    v12 = v10 + 1;
    v13 = *v9;
    if ( (unsigned __int64)v9[2] < v10 + 1 )
    {
      v13 = (char *)qvector_reserve(v9, v13, v12, 1u);
      *v9 = v13;
    }
    v9[1] = (char *)v12;
    memmove(v13, __s, v11);
    (*v9)[v11] = 0;
  }
  else
  {
    v9[1] = nullptr;
  }
  result = qstrtok(*v9, "|", &v34);
  v15 = result;
  if ( result )
  {
    v33 = v5;
    do
    {
      v16 = *(_QWORD *)(v5 + 48);
      if ( v16 )
      {
        v17 = 0;
        v18 = 0;
        v19 = *(_QWORD *)(v5 + 40);
        do
        {
          v22 = v19 + 32 * v17;
          v23 = *(const char ***)v22;
          v24 = *(_QWORD *)(v22 + 8);
          if ( (v24 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
          {
            v25 = 8 * v24;
            v20 = *(const char ***)v22;
            while ( strcmp(*v20, v15) )
            {
              ++v20;
              v25 -= 8;
              if ( !v25 )
                goto LABEL_15;
            }
          }
          else
          {
            v20 = *(const char ***)v22;
          }
          v21 = &v23[v24];
          if ( v20 != v21 )
          {
            v5 = v33;
            if ( *(_DWORD *)(v22 + 24) == a3 )
              goto LABEL_36;
            v29 = (char *)v21 - (char *)v20;
            if ( v29 >= 9 )
            {
              memmove(v20, v20 + 1, v29 - 8);
              v24 = *(_QWORD *)(v22 + 8);
            }
            *(_QWORD *)(v22 + 8) = v24 - 1;
            v30 = *(_QWORD *)(v33 + 48);
            if ( !v30 )
              goto LABEL_39;
            v31 = 0;
            v32 = 1;
            while ( 1 )
            {
              v28 = *(_QWORD *)(v33 + 40) + 32 * v31;
              if ( *(_DWORD *)(v28 + 24) == a3 )
                break;
              v31 = v32++;
              if ( v30 <= v31 )
                goto LABEL_39;
            }
            if ( !v28 )
            {
LABEL_39:
              sub_10002F830((char **)(v33 + 40), v30 + 1);
              v28 = *(_QWORD *)(v33 + 40) + 32LL * *(_QWORD *)(v33 + 48);
              *(_QWORD *)v28 = 0;
              *(_QWORD *)(v28 + 8) = 0;
              *(_QWORD *)(v28 + 16) = 0;
              ++*(_QWORD *)(v33 + 48);
              *(_DWORD *)(v28 + 24) = a3;
            }
            goto LABEL_35;
          }
LABEL_15:
          v17 = ++v18;
        }
        while ( v16 > v18 );
        v26 = 0;
        v5 = v33;
        v27 = 1;
        while ( 1 )
        {
          v28 = *(_QWORD *)(v33 + 40) + 32 * v26;
          if ( *(_DWORD *)(v28 + 24) == a3 )
            break;
          v26 = v27++;
          if ( v16 <= v26 )
            goto LABEL_34;
        }
        if ( v28 )
          goto LABEL_35;
      }
LABEL_34:
      sub_10002F830((char **)(v5 + 40), v16 + 1);
      v28 = *(_QWORD *)(v5 + 40) + 32LL * *(_QWORD *)(v5 + 48);
      *(_QWORD *)v28 = 0;
      *(_QWORD *)(v28 + 8) = 0;
      *(_QWORD *)(v28 + 16) = 0;
      ++*(_QWORD *)(v5 + 48);
      *(_DWORD *)(v28 + 24) = a3;
LABEL_35:
      v35 = v15;
      sub_10002F63C((__int64 **)v28, (__int64 *)&v35);
LABEL_36:
      result = qstrtok(nullptr, "|", &v34);
      v15 = result;
    }
    while ( result );
  }
  return result;
}
