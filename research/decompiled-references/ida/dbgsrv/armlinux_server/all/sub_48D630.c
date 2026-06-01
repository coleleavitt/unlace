/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48D630
// Address: 0x000000000048D630

//----- (000000000048D630) ----------------------------------------------------
__int64 __fastcall sub_48D630(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int64 v4; // x21
  unsigned __int8 *v6; // x19
  unsigned __int8 v7; // w0
  unsigned __int8 v8; // w1
  unsigned int v9; // w22
  unsigned __int8 *v10; // x4
  unsigned __int8 v11; // w2
  unsigned __int8 v12; // w0
  unsigned int v13; // w0
  char v14; // w0
  void *v15; // x22
  __int64 v16; // x0
  int v17; // w22
  _BYTE *v18; // x0
  __int64 v19; // x3
  int v21; // w1
  unsigned __int64 v23; // x22
  unsigned __int64 v24; // x22
  unsigned __int64 v25; // x5
  unsigned __int64 v26; // x1
  unsigned __int8 v27; // w0
  __int64 v28; // x3
  char *v29; // x0
  unsigned __int64 v30; // x1
  unsigned __int8 v31; // w0
  char *v32; // x0
  __int64 v33; // x3
  int *v34; // x0
  int v35; // w1
  void **v37; // x0
  __int64 v38; // x1
  unsigned __int64 v39; // x3
  unsigned __int64 v40; // x2
  char v41; // w2
  __int64 v42; // x3
  char *v43; // x0
  size_t v44; // [xsp+68h] [xbp-48h]
  unsigned __int64 v45; // [xsp+68h] [xbp-48h]
  unsigned __int8 *v46; // [xsp+70h] [xbp-40h]
  unsigned __int64 v47; // [xsp+70h] [xbp-40h]
  unsigned __int64 v48; // [xsp+78h] [xbp-38h]
  void *ptr; // [xsp+88h] [xbp-28h] BYREF
  __int64 v50; // [xsp+90h] [xbp-20h]
  __int64 v51; // [xsp+98h] [xbp-18h]
  unsigned __int16 v52[4]; // [xsp+A0h] [xbp-10h] BYREF

  v4 = (unsigned __int64)&a2[a3];
  if ( a2 >= &a2[a3] )
    return 0;
  v6 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v17 = *v6;
      if ( (v17 & 0x80) != 0 )
        break;
      v18 = *(_BYTE **)a1;
      v19 = *(_QWORD *)(a1 + 8);
      if ( (unsigned __int64)(v19 + 1) > *(_QWORD *)(a1 + 16) )
      {
        v18 = sub_491288(a1, *(void **)a1, v19 + 1, 1u);
        v19 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v18;
      }
      v18[v19] = v17;
      ++v6;
      ++*(_QWORD *)(a1 + 8);
      if ( v4 <= (unsigned __int64)v6 )
        return v6 - a2;
    }
    if ( (v17 & 0xE0) != 0xC0 )
      break;
    if ( (__int64)(v4 - (_QWORD)v6) <= 1 )
      goto LABEL_62;
    v21 = v6[1];
    if ( v21 == 128 && v17 == 192 )
    {
      v37 = *(void ***)a1;
      v38 = *(_QWORD *)(a1 + 8);
      LOBYTE(ptr) = 0;
      v39 = *(_QWORD *)(a1 + 16);
      v40 = v38 + 1;
      if ( v37 <= &ptr && &ptr < (void **)((char *)v37 + v39) )
      {
        if ( v40 > v39 )
        {
          v37 = (void **)sub_491288(a1, v37, v40, 1u);
          v38 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v37;
        }
        *((_BYTE *)v37 + v38) = 0;
      }
      else
      {
        if ( v40 > v39 )
        {
          v37 = (void **)sub_491288(a1, v37, v40, 1u);
          v41 = (char)ptr;
          v38 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v37;
        }
        else
        {
          v41 = 0;
        }
        *((_BYTE *)v37 + v38) = v41;
      }
      v6 += 2;
      ++*(_QWORD *)(a1 + 8);
    }
    else
    {
      if ( (unsigned __int8)(v21 + 0x80) > 0x3Fu || (((v17 & 0x1F) << 6) | v21 & 0x3F) <= 127 )
      {
LABEL_45:
        v34 = __errno_location();
        v35 = 84;
LABEL_46:
        *v34 = v35;
        return -1;
      }
      v23 = *(_QWORD *)(a1 + 8);
      if ( v23 < v23 + 2 )
      {
        if ( v23 + 2 > *(_QWORD *)(a1 + 16) )
        {
          v32 = (char *)sub_491288(a1, *(void **)a1, v23 + 2, 1u);
          v33 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v32;
          memset(&v32[v33], 0, v23 + 2 - v33);
        }
        else
        {
          memset((void *)(*(_QWORD *)a1 + v23), 0, 2u);
        }
        *(_QWORD *)(a1 + 8) = v23 + 2;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      }
      v6 += 2;
      *(_WORD *)(*(_QWORD *)a1 + v23) = *((_WORD *)v6 - 1);
    }
LABEL_20:
    if ( v4 <= (unsigned __int64)v6 )
      return v6 - a2;
  }
  if ( (v17 & 0xF0) != 0xE0 )
    goto LABEL_45;
  if ( (__int64)(v4 - (_QWORD)v6) <= 2 )
  {
LABEL_62:
    v34 = __errno_location();
    v35 = 22;
    goto LABEL_46;
  }
  v7 = v6[1];
  v8 = v6[2];
  if ( (unsigned __int8)(v7 + 0x80) > 0x3Fu )
    goto LABEL_45;
  if ( (unsigned __int8)(v8 + 0x80) > 0x3Fu )
    goto LABEL_45;
  v9 = v8 & 0x3F | (unsigned __int16)((_WORD)v17 << 12) | ((v7 & 0x3F) << 6);
  if ( v9 <= 0x7FF )
    goto LABEL_45;
  v10 = v6 + 3;
  if ( (unsigned __int16)(v9 + 10240) > 0x3FFu )
  {
    v24 = *(_QWORD *)(a1 + 8);
    v25 = v24 + 3;
    if ( v24 < v24 + 3 )
    {
      v28 = *(_QWORD *)(a1 + 8);
      v29 = *(char **)a1;
      if ( v25 > *(_QWORD *)(a1 + 16) )
      {
        v29 = (char *)sub_491288(a1, *(void **)a1, v24 + 3, 1u);
        v28 = *(_QWORD *)(a1 + 8);
        v25 = v24 + 3;
        v10 = v6 + 3;
        *(_QWORD *)a1 = v29;
      }
      v45 = v25;
      v46 = v10;
      memset(&v29[v28], 0, v25 - v28);
      *(_QWORD *)(a1 + 8) = v45;
      v30 = *(_QWORD *)a1 + v24;
      *(_WORD *)v30 = *(_WORD *)v6;
      v31 = v6[2];
      v6 = v46;
      *(_BYTE *)(v30 + 2) = v31;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      v26 = *(_QWORD *)a1 + v24;
      *(_WORD *)v26 = *(_WORD *)v6;
      v27 = v6[2];
      v6 += 3;
      *(_BYTE *)(v26 + 2) = v27;
    }
    goto LABEL_20;
  }
  v52[0] = v9;
  if ( (__int64)(v4 - (_QWORD)v10) <= 2 )
  {
    *__errno_location() = 22;
    return -1;
  }
  v11 = v6[4];
  v12 = v6[5];
  if ( (unsigned __int8)(v11 + 0x80) > 0x3Fu
    || (unsigned __int8)(v12 + 0x80) > 0x3Fu
    || (v13 = v12 & 0x3F | (unsigned __int16)(v6[3] << 12) | ((v11 & 0x3F) << 6), v13 <= 0x7FF)
    || (unsigned __int16)(v13 + 9216) > 0x3FFu )
  {
    *__errno_location() = 84;
    return -1;
  }
  v52[1] = v13;
  ptr = nullptr;
  v50 = 0;
  v51 = 0;
  v14 = sub_486200((__int64)&ptr, v52, 2u);
  v15 = ptr;
  if ( v14 )
  {
    if ( !v50 || (v16 = v50 - 1, v44 = v50 - 1, v50 == 1) )
    {
LABEL_18:
      v6 += 6;
      if ( v15 )
      {
        v50 = 0;
        j__free(v15);
      }
      goto LABEL_20;
    }
    v47 = *(_QWORD *)(a1 + 8);
    v48 = v16 + v47;
    if ( v47 <= v16 + v47 )
    {
      if ( v47 >= v16 + v47 )
      {
LABEL_53:
        memcpy((void *)(*(_QWORD *)a1 + v47), v15, v44);
        v15 = ptr;
        goto LABEL_18;
      }
    }
    else
    {
      if ( v47 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v47 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_53;
      }
      v48 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v42 = *(_QWORD *)(a1 + 8);
    v43 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v48 )
    {
      v43 = (char *)sub_491288(a1, *(void **)a1, v48, 1u);
      v42 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v43;
    }
    memset(&v43[v42], 0, v48 - v42);
    *(_QWORD *)(a1 + 8) = v48;
    goto LABEL_53;
  }
  *__errno_location() = 84;
  if ( v15 )
  {
    v50 = 0;
    j__free(v15);
  }
  return -1;
}
// 48D630: could not find valid save-restore pair for x22
