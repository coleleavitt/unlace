/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C0AC
// Address: 0x000000000006C0AC

//----- (000000000006C0AC) ----------------------------------------------------
const char *__fastcall sub_6C0AC(__int64 a1, const void *a2, int a3)
{
  __int64 v5; // x20
  unsigned __int64 v6; // x8
  __int64 v7; // x27
  pthread_mutex_t *v8; // x0
  _QWORD *v9; // x0
  _QWORD *align; // x23
  char *v11; // x22
  size_t v12; // x0
  void *v13; // x1
  unsigned __int64 v14; // x25
  size_t v15; // x24
  const char *result; // x0
  const char *v17; // x23
  pthread_mutex_t *v18; // x21
  unsigned __int64 v19; // x27
  __int64 v20; // x29
  unsigned __int64 v21; // x24
  __int64 v22; // x22
  __int64 *v23; // x25
  __int64 v24; // x26
  __int64 v25; // x21
  __int64 v26; // x20
  const char **v27; // x28
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v30; // x9
  int v31; // w10
  bool v32; // cc
  __int64 v33; // x8
  unsigned __int64 v34; // x8
  unsigned __int64 v35; // x10
  __int64 v36; // x8
  const char **v37; // x9
  char *v38; // x0
  _OWORD *v39; // x12
  unsigned __int64 v40; // x13
  __int128 v41; // q1
  _QWORD *v42; // x9
  unsigned __int64 v43; // x8
  __int64 v44; // x9
  __int64 v45; // x10
  int v46; // w11
  pthread_mutex_t *v47; // [xsp+8h] [xbp-88h]
  __int64 v48; // [xsp+10h] [xbp-80h]
  const char *v49; // [xsp+18h] [xbp-78h] BYREF
  __int64 v50[2]; // [xsp+20h] [xbp-70h] BYREF

  v5 = a1;
  v50[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 32);
  v8 = (pthread_mutex_t *)(a1 + 16);
  if ( v6 >= v7 + 1 )
  {
    align = (_QWORD *)v8->__align;
  }
  else
  {
    v9 = qvector_reserve(v8, *(void **)(v5 + 16), v7 + 1, 0x18u);
    v7 = *(_QWORD *)(v5 + 24);
    align = v9;
    *(_QWORD *)(v5 + 16) = v9;
  }
  v11 = (char *)&align[3 * v7];
  *((_QWORD *)v11 + 1) = 0;
  *((_QWORD *)v11 + 2) = 0;
  *(_QWORD *)v11 = 0;
  ++*(_QWORD *)(v5 + 24);
  if ( a2 && (v12 = strlen((const char *)a2)) != 0 )
  {
    v13 = *(void **)v11;
    v14 = v12 + 1;
    v15 = v12;
    if ( align[3 * v7 + 2] < v12 + 1 )
    {
      v13 = qvector_reserve((pthread_mutex_t *)&align[3 * v7], v13, v14, 1u);
      *(_QWORD *)v11 = v13;
    }
    align[3 * v7 + 1] = v14;
    memmove(v13, a2, v15);
    *(_BYTE *)(*(_QWORD *)v11 + v15) = 0;
  }
  else
  {
    align[3 * v7 + 1] = 0;
  }
  result = qstrtok(*(char **)v11, "|", &v49);
  if ( result )
  {
    v17 = result;
    v18 = (pthread_mutex_t *)(v5 + 40);
    v47 = (pthread_mutex_t *)(v5 + 40);
    v48 = v5;
    while ( 1 )
    {
      v19 = *(_QWORD *)(v5 + 48);
      if ( !v19 )
        goto LABEL_44;
      v20 = v18->__align;
      v21 = 0;
      while ( 1 )
      {
        v22 = *(_QWORD *)(v20 + 32 * v21);
        v23 = (__int64 *)(v20 + 32 * v21 + 8);
        v24 = *v23;
        v25 = 8 * *v23;
        if ( v25 )
        {
          v26 = 8 * v24;
          v27 = *(const char ***)(v20 + 32 * v21);
          while ( strcmp(*v27, v17) )
          {
            v26 -= 8;
            ++v27;
            if ( !v26 )
              goto LABEL_21;
          }
        }
        else
        {
          v27 = *(const char ***)(v20 + 32 * v21);
        }
        v28 = v22 + v25;
        if ( v27 != (const char **)(v22 + v25) )
          break;
LABEL_21:
        v21 = (int)v21 + 1;
        if ( v19 <= v21 )
        {
          v18 = v47;
          v5 = v48;
          v29 = v47->__align;
          v30 = 0;
          v31 = 1;
          while ( *(_DWORD *)(v29 + 32 * v30 + 24) != a3 )
          {
            v30 = v31;
            v32 = v19 > v31++;
            if ( !v32 )
              goto LABEL_44;
          }
          v38 = (char *)(v29 + 32 * v30);
          if ( v38 )
            goto LABEL_45;
          goto LABEL_44;
        }
      }
      v18 = v47;
      v5 = v48;
      if ( *(_DWORD *)(v20 + 32 * v21 + 24) == a3 )
        goto LABEL_46;
      v33 = v28 - (_QWORD)v27;
      if ( v33 >= 9 )
        break;
LABEL_38:
      *v23 = v24 - 1;
      v43 = *(_QWORD *)(v48 + 48);
      if ( v43 )
      {
        v44 = v47->__align;
        v45 = 0;
        v46 = 1;
        while ( *(_DWORD *)(v44 + 32 * v45 + 24) != a3 )
        {
          v45 = v46;
          v32 = v43 > v46++;
          if ( !v32 )
            goto LABEL_44;
        }
        v38 = (char *)(v44 + 32 * v45);
        if ( v38 )
          goto LABEL_45;
      }
LABEL_44:
      v38 = sub_6C7D8(v18);
      *((_DWORD *)v38 + 6) = a3;
LABEL_45:
      v50[0] = (__int64)v17;
      sub_6C5D0((__int64)v38, v50);
LABEL_46:
      result = qstrtok(nullptr, "|", &v49);
      v17 = result;
      if ( !result )
        return result;
    }
    v34 = (unsigned __int64)v33 >> 3;
    v35 = ((2 - v34) & ~((__int64)(2 - v34) >> 63)) + v34 - 1;
    v36 = v34 - 2;
    if ( v35 >= 4 )
    {
      v36 -= v35 & 0xFFFFFFFFFFFFFFFCLL;
      v37 = &v27[v35 & 0xFFFFFFFFFFFFFFFCLL];
      v39 = v27 + 2;
      v40 = v35 & 0xFFFFFFFFFFFFFFFCLL;
      do
      {
        v41 = *(_OWORD *)((char *)v39 + 8);
        v40 -= 4LL;
        *(v39 - 1) = *(_OWORD *)((char *)v39 - 8);
        *v39 = v41;
        v39 += 2;
      }
      while ( v40 );
      if ( v35 == (v35 & 0xFFFFFFFFFFFFFFFCLL) )
        goto LABEL_37;
    }
    else
    {
      v37 = v27;
    }
    v42 = v37 + 1;
    do
    {
      --v36;
      *(v42 - 1) = *v42;
      ++v42;
    }
    while ( v36 >= 0 );
LABEL_37:
    v24 = *v23;
    goto LABEL_38;
  }
  return result;
}
// 6C248: conditional instruction was optimized away because x27.8!=0
