/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003FC0C
// Address: 0x000000010003FC0C

//----- (000000010003FC0C) ----------------------------------------------------
const char *__fastcall sub_10003FC0C(__int64 a1, __int64 a2, _BYTE *a3)
{
  const char *v3; // x23
  char *v6; // x22
  __int64 **v7; // x0
  __int64 **v8; // x21
  __int64 v9; // x8
  __int64 v10; // x24
  _DWORD *v11; // x25
  __int64 **v13; // x8
  size_t v14; // x0
  unsigned __int64 v15; // x8
  _QWORD *v16; // x1
  __int64 v17; // x8
  _QWORD *v18; // x8
  void *v19; // x9
  __int128 v20; // q0
  char *v21; // x8
  char v22; // w20
  void *v23; // x0
  __int64 v24; // x19
  __int64 v25; // x21
  void *v26; // x0
  _QWORD *v27; // x22
  char v29; // [xsp+Fh] [xbp-61h] BYREF
  void *v30; // [xsp+10h] [xbp-60h] BYREF
  __int128 v31; // [xsp+18h] [xbp-58h]

  if ( *(_QWORD *)(a2 + 8) )
    v6 = *(char **)a2;
  else
    v6 = &byte_100075A30;
  v7 = sub_10003E4C8(a1, v6);
  *a3 = 0;
  if ( !v7 )
    return nullptr;
  v8 = v7;
  v9 = (unsigned int)(*(_DWORD *)(a1 + 64) - 1);
  if ( (int)v9 >= 0 )
  {
    v10 = v9 + 1;
    v11 = (_DWORD *)(*(_QWORD *)(a1 + 56) + 56LL * (unsigned int)v9 + 48);
    do
    {
      v13 = *((__int64 ***)v11 - 1);
      if ( v13 == v8 )
      {
        if ( *((_BYTE *)v8 + 25) != 1 )
          return nullptr;
        v3 = v13[1] ? (const char *)*v13 : &byte_100075A30;
        v14 = strlen(v3);
        v15 = *(_QWORD *)(a1 + 8);
        if ( (unsigned __int64)v3 <= v15 && v15 <= (unsigned __int64)&v3[v14] )
          return nullptr;
        if ( *(_DWORD *)(a1 + 80) > *v11 )
          return nullptr;
      }
      v11 -= 14;
    }
    while ( v10-- > 1 );
  }
  v30 = nullptr;
  v31 = 0u;
  if ( *((_BYTE *)v8 + 25) == 1 )
  {
    v3 = (const char *)sub_10003F664(a1, &v30, &v29);
    if ( !(_DWORD)v3 )
    {
      if ( (v29 & 1) != 0 )
      {
        if ( (_QWORD)v31 == *((unsigned __int8 *)v8 + 24) )
          goto LABEL_21;
        set_error_string(0);
        v3 = (const char *)set_qerrno();
      }
      else
      {
        v3 = nullptr;
      }
    }
    v22 = 0;
    v23 = v30;
    if ( !v30 )
      goto LABEL_40;
    goto LABEL_33;
  }
LABEL_21:
  if ( (unsigned __int64)v8[1] >= 2 )
  {
    v16 = *(_QWORD **)(a1 + 56);
    v17 = *(_QWORD *)(a1 + 64);
    if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v17 + 1) )
    {
      v16 = qvector_reserve((_QWORD *)(a1 + 56), v16, v17 + 1, 0x38u);
      *(_QWORD *)(a1 + 56) = v16;
      v17 = *(_QWORD *)(a1 + 64);
    }
    v18 = &v16[7 * v17];
    *v18 = 0;
    v18[1] = 0;
    v18[2] = 0;
    ++*(_QWORD *)(a1 + 64);
    v18[3] = *(_QWORD *)a1;
    v18[4] = *(_QWORD *)(a1 + 8);
    *((_DWORD *)v18 + 12) = *(_DWORD *)(a1 + 80);
    v18[5] = v8;
    v19 = v30;
    v30 = (void *)*v18;
    v20 = v31;
    v31 = *(_OWORD *)(v18 + 1);
    *v18 = v19;
    *(_OWORD *)(v18 + 1) = v20;
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 64) - 1;
    if ( v8[1] )
      v21 = (char *)*v8;
    else
      v21 = &byte_100075A30;
    *(_QWORD *)a1 = v21;
    *(_QWORD *)(a1 + 8) = v21;
  }
  v22 = 1;
  *a3 = 1;
  v23 = v30;
  if ( v30 )
  {
LABEL_33:
    v24 = v31;
    if ( (_QWORD)v31 )
    {
      v25 = 0;
      do
      {
        v26 = *(void **)((char *)v30 + v25);
        if ( v26 )
        {
          v27 = (char *)v30 + v25;
          *(_QWORD *)((char *)v30 + v25 + 8) = 0;
          qfree(v26);
          *v27 = 0;
          v27[2] = 0;
        }
        v25 += 24;
        --v24;
      }
      while ( v24 );
      v23 = v30;
    }
    *(_QWORD *)&v31 = 0;
    qfree(v23);
  }
LABEL_40:
  if ( (v22 & 1) != 0 )
    return nullptr;
  return v3;
}
// 10003FEB8: variable 'v3' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
